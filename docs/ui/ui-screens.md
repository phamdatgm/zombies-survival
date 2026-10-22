# Zombie Derby — danh sách màn hình UI

Giai đoạn 1 của quy trình ReskinUI. Mỗi màn có ảnh chụp trong `shots/NN.jpg` (biến thể: `NNb.jpg`, `NNc.jpg`…),
trạng thái theo dõi trong `ui-screens.index`, trang tổng hợp `index.html` (dựng bằng `node docs/ui/ui_index.mjs`).

## Luồng màn hình

```
 [01 Loading] ──► [02 Home] ──Play──► [03 Garage] ──la bàn──► [04 Map] ──chọn level + START──► [03 Garage]
   (web)            │  │                 │   │                    │                              │
                    │  └─More Games      │   ├─sách──► [07 Encyclopedia]                          GO
                    │    (tab mới)       │   ├─huy chương─► [06 Achievements]                     │
                    ├─bánh răng──► [05 Settings]                                                   ▼
                    └─huy chương─► [06 Achievements]                                     [11 HUD] ◄──► [12 Pause]
                                     │                                                    │  │  │
              dấu "+" trên thanh tiền ──► [08 Shop]                                       │  │  └─ gặp quái mới ─► [14 Discovery]
              mua nâng cấp / thiếu tiền ──► [09 Popup]                                    │  └─ chết ─► [13 Revive] ─┐
                                                                                          └─ hết đường/hết máu ──────┴─► [15 Results] ─► [03 Garage]

 Lần chơi đầu: Play ► Map ► màn Intro (HUD + 10c Tutorial) ► 10d hội thoại ► 10 Story trên Map ► Level 1
               ► Results ► 10b Tutorial trong Garage ► 09 Buy? ► …
```

## Lưu ý chung

- **UI gốc là uGUI của Unity** (prefab xuất từ APK) được `web/src/engine/ugui.js` vẽ ra DOM. Canvas tham chiếu
  1920×1080, `CanvasScaler` khớp theo **chiều rộng** (match = 0); nhiều window có `SafeArea`.
- UI của garage/menu nằm trong scene `garage` (`web/assets/scenes/garage.json`, `_GUIGarage/Canvas`); UI trong trận
  nằm trong prefab `web/assets/prefabs/Resources__GUIGameplay.json` (`_GUIGameplay/Canvas`).
- Mỗi màn là một **GUIWindow**; script game (`GUIGarage.js`, `GUIGameplay.js`, `Menu.js`, `CarController.js`) bật/tắt
  window qua tham chiếu tới object gốc và tìm con theo **tên object** (vd. `sound_button`, `restart`, `buy_button`).
  → UI mới phải giữ object gốc và điều khiển qua component gốc, không xoá/đổi tên.
- **Chữ trong UI gốc là Text thật** (font `SonianoSansUnicodeRegular10.ttf`, dịch qua `TranslateLabel` + `assets/texts.json`),
  không phải ảnh PNG. Icon, nút, khung là sprite (`assets/sprites.json`).
- Nền mờ sau popup là object `backgound` (tên gốc viết sai chính tả) — có ở cả hai canvas.
- Gợi ý phím (`Esc`, `W`, `A`, `D`, `Space`, `Shift`) trên HUD là bản PC/console của game gốc (`ConsoleTipsBottom`).
- **Dòng copyright** (`© 2026 Azgames.io`, khoá bằng hash trong `src/notice.js`) hiện ở màn **05 Settings** dưới số
  phiên bản. Logo portal AZGAMES.IO chỉ có ở màn Loading.
- **More Games** là nút tay cầm trên Home (slot `zd2_promo_button` gốc, `web/src/game/moreGames.js`).
- Lỗi bố cục sẵn có: số bạc ≥ 5 chữ số đè lên nút "+" trên `top_panel` (xem ảnh 03, 04, 08).

## Không liệt kê (đã bỏ khi port hoặc không tới được trên web)

`credits` (nút info trong Settings bị ẩn), `exit` (web không có nút thoát), `settings_controls` (nút controls bị ẩn),
`rating`, `event_finish`, `login`, `login_error_nowgg`, `sync_progress`, `sync_confirm`, `gdpr`, `rate_me`,
`rate_me_old`, `special_offer_1`, `special_gold_1/2/3`, `doubler_pack`, `restore_purchases`, `zd2_adv`, `sitelock`,
`cheats`, `logs`, `www_loading` (thanh tải server), `garage_kostyl_for_button_go`.

---

## 01 Loading

- **Khi nào:** mở game, trước khi scene đầu tiên chạy. Màn của SDK portal (GM Loader), không phải UI Unity.
- **Thành phần:** nền mờ từ ảnh `Icons/loading.webp`, ảnh thu nhỏ, tên game, thanh tiến trình + %, logo AZGAMES.IO
  góc phải dưới, số phiên bản góc trái dưới.
- **Object:** `#gmLoader` trong `web/index.html`, điều khiển bởi `web/src/loading.js`.

## 02 Home

- **Khi nào:** sau khi tải xong; khi bấm về menu từ Garage.
- **Thành phần:** logo Zombie Derby (góc trái trên), nút Settings, Achievements, More Games (hàng dưới trái),
  nút Play lớn (góc phải dưới). Phía sau là garage 3D.
- **Object:** `main_menu` (+ nền `main_menu_bg`).

## 03 Garage

- **Khi nào:** bấm Play ở Home; sau khi chọn level ở Map; khi về từ trận.
- **Thành phần:** thanh tiền trên cùng (bạc, vàng, nhiên liệu, các nút "+"); tên xe + thanh HP; mũi tên đổi xe
  trái/phải; nút Encyclopedia và Achievements (có badge số); nút Map (la bàn); hàng nâng cấp 5 món (động cơ, bánh,
  đạn, nitro, giáp) có giá + vạch cấp; nút chuyển sang **Màu sơn** (ảnh 03b: 5 ô màu có giá, nút cờ lê để quay lại);
  nút GO (xám khi chưa chọn level).
- **Object:** `garage` + `top_panel`.

## 04 Map

- **Khi nào:** bấm la bàn ở Garage.
- **Thành phần:** bản đồ với các điểm Level 1–11 và Event 1–3 (sao, tên), thanh tiền trên cùng, nút Back. Bấm một
  level mở **bảng thông tin level** bên phải (ảnh 04b): tên level, điểm cao nhất, thời gian tốt nhất, 3 sao kèm
  3 nhiệm vụ (giết zombie, lộn vòng, con quạ), nút đóng, nút START.
- **Object:** `map` (+ `top_panel`).

## 05 Settings

- **Khi nào:** bấm bánh răng ở Home.
- **Thành phần:** tiêu đề, nút Âm thanh, nút Nhạc, phiên bản + dòng copyright, nút đóng.
  (Ngôn ngữ, đồ hoạ, FPS, toàn màn hình, controls, Google Play/Game Center đã ẩn trên web.)
- **Object:** `settings`.

## 06 Achievements

- **Khi nào:** bấm huy chương ở Home hoặc Garage.
- **Thành phần:** thanh tiêu đề (icon, chữ, thanh tiến độ x/10), danh sách thành tích cuộn dọc (icon, tên, mô tả,
  thanh tiến độ hoặc nút Claim, phần thưởng vàng), thanh cuộn, nút Back.
- **Object:** `achievements` (dùng chung `top_panel` để hiện tiêu đề).

## 07 Encyclopedia

- **Khi nào:** bấm nút sách ở Garage.
- **Thành phần:** tiêu đề, thanh tiến độ x/21, lưới ô quái/vật cản (cuộn), khung chi tiết (tên, ảnh, sát thương,
  bạc, mô tả), nút đóng.
- **Object:** `encyclopedia`.

## 08 Shop

- **Khi nào:** bấm "+" cạnh bạc hoặc nhiên liệu trên thanh tiền.
- **Thành phần:** 2 tab (bạc, nhiên liệu), dãy thẻ cuộn ngang (tên, mô tả ngắn, ảnh, nút giá vàng), thanh cuộn,
  nút đóng. Ảnh 08b: tab nhiên liệu. (Tab vàng / mua bằng tiền thật đã bỏ.)
- **Object:** `donate`.

## 09 Popup xác nhận / thông báo

- **Khi nào:** mua nâng cấp hoặc màu (ảnh 09 "Buy?"), thiếu tiền (09b), xem nhiệm vụ sao trên Map (09c), xe yếu máu
  trước khi đua, xem cách hồi máu, nhiên liệu đã đầy.
- **Thành phần:** khung xanh có tiêu đề, icon, chữ mô tả, nút giá / nút xác nhận, nút X đỏ.
- **Object:** `buy_item`, `no_money`, `star_hints`, `hp_low`, `hp_info`, `fuel_full`.

## 10 Story & Tutorial

- **Khi nào:** lần chơi đầu: hội thoại cốt truyện trên Map sau màn Intro (ảnh 10), hướng dẫn trong Garage (10b),
  hướng dẫn trong trận (10c), hội thoại khi xe Intro bị phá (10d). Hội thoại cốt truyện cũng hiện sau các level
  của cốt truyện.
- **Thành phần:** khung chữ xanh, tiêu đề "Tutorial" (nếu có), chân dung nhân vật, dòng "Tap anywhere to continue",
  mũi tên chỉ vào nút cần bấm, nền tối làm nổi nút đang hướng dẫn, nút X (10d).
- **Object:** `story`, `garage_tutorial`, `garage_tutorial_2`, `garage_tutorial_3` (garage); `tutorial`,
  `tutorial_crash` (gameplay).

## 11 HUD

- **Khi nào:** trong trận.
- **Thành phần:** thanh HP + số (giữa trên); điểm (cờ + cúp, trái trên); nút Pause + phím Esc (phải trên); đồng hồ
  tốc độ km/h với số đạn (trái) và bình nitro (phải) ở giữa dưới; nút nghiêng trái/phải (A/D); nút bắn (Space); nút
  nitro (Shift); bàn đạp ga (W). Chữ nổi khi giết zombie/combo, mũi tên chỉ quái mới.
- **Object:** `gameplay` (+ `splash_label_*`, `encyclopedia_arrow`).

## 12 Pause

- **Khi nào:** bấm Pause hoặc Esc trong trận.
- **Thành phần:** tiêu đề, nút Âm thanh, nút Nhạc, nút Help (mở các trang hướng dẫn điều khiển), nút về Garage
  (trái), nút Tiếp tục (phải).
- **Object:** `pause`.

## 13 Revive

- **Khi nào:** xe bị phá lần đầu trong trận (miễn phí một lần, bản gốc là xem quảng cáo).
- **Thành phần:** tiêu đề "Continue the race?", số đếm ngược, nút Free, nút X.
- **Object:** `revive`.

## 14 Discovery Reward

- **Khi nào:** lần đầu gặp một loại quái/vật cản mới trong trận.
- **Thành phần:** tiêu đề, ảnh, tên, sát thương, bạc, mô tả, nút Claim + số vàng.
- **Object:** `encyclopedia_item`.

## 15 Results

- **Khi nào:** hết trận (xe bị phá, kẹt, hết nhiên liệu hoặc về đích).
- **Thành phần:** dòng HINT trên cùng, tiêu đề, 4 ô (điểm, bạc, thời gian, HP còn), thanh xếp hạng + "You outrank
  x% of players!", tiến độ %, số zombie đã giết, sao/tem kỷ lục khi đạt, nút về Garage (có dấu !), nút chơi lại
  (khi có).
- **Object:** `results` (+ `results_hints`, `splash_label_results`).
