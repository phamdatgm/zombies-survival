# Zombie Derby: Pixel Survival — bóc tách APK & bản port JavaScript

Nguồn: `zombie-derby-pixel-survival-1-0-29.xapk` (com.herocraft.game.zombiederby.pixel.survival, v1.0.29,
Unity 2022.3.62f2, IL2CPP arm64, metadata v31, code bị obfuscate bằng Beebyte).

## Chạy bản web

```bash
cd web
node server.js 8080      # hoặc: npm start
# mở http://localhost:8080/
```

Không cần build. Thư viện (three.js r170, Rapier 0.14) đã nằm sẵn trong `web/lib/`.

Điều khiển trên máy tính: `W`/`↑` ga, `S`/`↓` phanh, `A`/`D` hoặc `←`/`→` nghiêng xe, `Space` bắn, `Shift`/`N` nitro, `Esc` tạm dừng.
Trên điện thoại dùng các nút cảm ứng như bản gốc. Tay cầm (Gamepad API) cũng dùng được.

Các chế độ debug:
- `?view=level_1_beach` — bay tự do trong một scene (WASD/QE, giữ chuột để xoay, `goto=<tên object>`).
- `?uiview=@Resources/_GUIGameplay&show=gameplay` — xem một prefab UI.

## Cấu trúc thư mục

| Thư mục | Nội dung |
|---|---|
| `_raw/` | XAPK đã giải nén: `xapk/` (3 APK), `base/` (APK chính), `arm64/` (lib arm64), `merged/` (gộp để AssetRipper đọc) |
| `_tools/` | Công cụ: Il2CppDumper 6.7.46, AssetRipper 2.0, Ghidra 12.1.4 + JDK 21, và các script chuyển đổi trong `_tools/scripts/` |
| `dump/il2cpp/` | Kết quả Il2CppDumper: `dump.cs`, `script.json`, `il2cpp.h`, `DummyDll/`, `by_assembly/*.cs` (tách theo assembly) |
| `dump/decompiled/` | Mã giả C của toàn bộ 1496 method trong Assembly-CSharp (Ghidra), đã gắn tên field/static |
| `dump/primary_content/` | Mesh/scene/prefab dạng `.glb`, texture `.png`, audio |
| `unity_project/` | Unity project dựng lại bằng AssetRipper (scene, prefab, material, animation, script stub) |
| `web/` | Bản port JavaScript/WebGL (xem dưới) |

## Bản port (web/)

- `web/src/engine/` — runtime kiểu Unity viết trên three.js + Rapier:
  GameObject/Transform/Component, coroutine, vật lý (Rigidbody, Box/Sphere/Capsule/Mesh collider, raycast,
  layer collision matrix, collision/trigger event), render (mesh, skinned mesh, lightmap, static batching, fog),
  Animator (state machine + **humanoid muscle clip** giải từ Avatar), particle system (Shuriken), audio (WebAudio),
  uGUI → DOM (Canvas/RectTransform/Image/Text/Button/LayoutGroup...), input (phím, cảm ứng, gamepad).
  Toàn bộ script game chạy trong hệ toạ độ Unity; engine tự chuyển sang hệ three.js (đảo trục Z).
- `web/src/game/scripts/` — script game port từ mã decompile (giữ nguyên tên obfuscate để khớp dữ liệu serialized).
- `web/assets/` — dữ liệu đã chuyển: `scenes/`, `prefabs/` (JSON), `mesh/` (binary), `tex/`, `audio/`,
  `index.json` (mesh/material/clip/controller/audio), `sprites.json`, `avatars.json`, `texts.json` (14 ngôn ngữ).
- `web/PORTING.md` — quy ước port & API engine.

### Đã loại bỏ
Quảng cáo (AppLovin MAX, Adverty), In-App Purchase, Unity Analytics/Services, Google Play Games/Game Center/Steam,
thông báo đẩy, server bridge (bảng xếp hạng online, cloud save), Rate-Me, GDPR popup, liên kết mạng xã hội
(Facebook, Twitter, VK; bản gốc không có Instagram/TikTok trong code), anti-cheat ACTk (Obscured* → số thường).
Các nút "xem quảng cáo nhận thưởng" được ẩn hoặc cho nhận thưởng trực tiếp.

## Trạng thái & giới hạn đã biết

Đã chạy thử: menu chính → garage (chọn xe, nâng cấp, sơn, sửa xe, cài đặt, ngôn ngữ, thành tích, bách khoa zombie) → bản đồ →
màn intro/hướng dẫn → 10 level cốt truyện (lái, bắn, nitro, nhào lộn, combo, máu, vật cản, dốc nhảy, chim/dơi) → về đích / hỏng xe → màn kết quả → lưu tiến độ (localStorage).

- **Event race** (`level_event_*`): bản gốc lấy lịch/đối thủ từ server, nên ở bản offline các event không mở từ bản đồ. Scene vẫn nạp được.
- **Hồi sinh**: bản gốc phải xem quảng cáo; bản web cho hồi sinh miễn phí 1 lần mỗi trận. Nút "x2 bạc", gói vàng IAP và "special offer" bị ẩn. Đổi vàng → bạc/nhiên liệu vẫn dùng được.
- **Bánh xe**: bản gốc dùng WheelCollider của PhysX; bản web dùng mô phỏng raycast tương đương (`WheelColliderEmu` trong `CarController.js`), cảm giác lái có thể hơi khác.
- **HighlightEffect** (viền sáng) chỉ là bản xấp xỉ. Điều khiển bằng cảm biến nghiêng không hỗ trợ (nút "Tilts" bị ẩn).
- Tên class/method trong `web/src/game/scripts` giữ nguyên tên obfuscate của bản gốc (để khớp dữ liệu serialized), kèm chú thích ý nghĩa.

## Tạo lại dữ liệu web từ đầu

```bash
python -I _tools/scripts/build_web.py unity_project/ExportedProject _raw/base/assets/bin/Data/data.unity3d web/assets
python -I _tools/scripts/patch_lightmaps.py unity_project/ExportedProject _raw/base/assets/bin/Data/data.unity3d web/assets
python -I _tools/scripts/fix_scene_meshes.py unity_project/ExportedProject _raw/base/assets/bin/Data/data.unity3d web/assets
python -I _tools/scripts/build_sprites.py unity_project/ExportedProject web/assets
python -I _tools/scripts/build_avatars.py unity_project/ExportedProject web/assets
python -I _tools/scripts/build_texts.py _raw/base/assets/bin/Data/data.unity3d web/assets
python -I _tools/scripts/build_fieldtypes.py dump/il2cpp/by_assembly/Assembly-CSharp.cs web/StreamingAssets/data/fieldtypes.json
node _tools/scripts/gen_scripts_index.mjs web/src/game/scripts
```
Cần Python 3 + `pip install UnityPy pyyaml`.
