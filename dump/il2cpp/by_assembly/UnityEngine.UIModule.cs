// Namespace: 
internal class <Module> // TypeDefIndex: 7677
{}


// Namespace: UnityEngine
public interface ICanvasRaycastFilter // TypeDefIndex: 7678
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera);
}


// Namespace: UnityEngine
public sealed class CanvasGroup : Behaviour, ICanvasRaycastFilter // TypeDefIndex: 7679
{
	// Properties
	public float alpha { get; set; }
	public bool interactable { get; }
	public bool blocksRaycasts { get; set; }
	public bool ignoreParentGroups { get; set; }

	// Methods

	// RVA: 0x15A8E38 Offset: 0x15A4E38 VA: 0x15A8E38
	public float get_alpha() { }

	// RVA: 0x15A8E74 Offset: 0x15A4E74 VA: 0x15A8E74
	public void set_alpha(float value) { }

	// RVA: 0x15A8EC0 Offset: 0x15A4EC0 VA: 0x15A8EC0
	public bool get_interactable() { }

	// RVA: 0x15A8EFC Offset: 0x15A4EFC VA: 0x15A8EFC
	public bool get_blocksRaycasts() { }

	// RVA: 0x15A8F38 Offset: 0x15A4F38 VA: 0x15A8F38
	public void set_blocksRaycasts(bool value) { }

	// RVA: 0x15A8F7C Offset: 0x15A4F7C VA: 0x15A8F7C
	public bool get_ignoreParentGroups() { }

	// RVA: 0x15A8FB8 Offset: 0x15A4FB8 VA: 0x15A8FB8
	public void set_ignoreParentGroups(bool value) { }

	// RVA: 0x15A8FFC Offset: 0x15A4FFC VA: 0x15A8FFC Slot: 4
	public bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera) { }

	// RVA: 0x15A9038 Offset: 0x15A5038 VA: 0x15A9038
	public void .ctor() { }
}


// Namespace: UnityEngine
public sealed class CanvasRenderer : Component // TypeDefIndex: 7680
{
	// Fields
	[CompilerGenerated]
	private bool <isMask>k__BackingField; // 0x18

	// Properties
	public bool hasPopInstruction { set; }
	public int materialCount { get; set; }
	public int popMaterialCount { set; }
	public int absoluteDepth { get; }
	public bool hasMoved { get; }
	public bool cull { get; set; }
	public Vector2 clippingSoftness { set; }

	// Methods

	// RVA: 0x15A9040 Offset: 0x15A5040 VA: 0x15A9040
	public void set_hasPopInstruction(bool value) { }

	// RVA: 0x15A9084 Offset: 0x15A5084 VA: 0x15A9084
	public int get_materialCount() { }

	// RVA: 0x15A90C0 Offset: 0x15A50C0 VA: 0x15A90C0
	public void set_materialCount(int value) { }

	// RVA: 0x15A9104 Offset: 0x15A5104 VA: 0x15A9104
	public void set_popMaterialCount(int value) { }

	// RVA: 0x15A9148 Offset: 0x15A5148 VA: 0x15A9148
	public int get_absoluteDepth() { }

	// RVA: 0x15A9184 Offset: 0x15A5184 VA: 0x15A9184
	public bool get_hasMoved() { }

	// RVA: 0x15A91C0 Offset: 0x15A51C0 VA: 0x15A91C0
	public bool get_cull() { }

	// RVA: 0x15A91FC Offset: 0x15A51FC VA: 0x15A91FC
	public void set_cull(bool value) { }

	// RVA: 0x15A9240 Offset: 0x15A5240 VA: 0x15A9240
	public void SetColor(Color color) { }

	// RVA: 0x15A92D8 Offset: 0x15A52D8 VA: 0x15A92D8
	public Color GetColor() { }

	// RVA: 0x15A9374 Offset: 0x15A5374 VA: 0x15A9374
	public void EnableRectClipping(Rect rect) { }

	// RVA: 0x15A940C Offset: 0x15A540C VA: 0x15A940C
	public void set_clippingSoftness(Vector2 value) { }

	// RVA: 0x15A9498 Offset: 0x15A5498 VA: 0x15A9498
	public void DisableRectClipping() { }

	// RVA: 0x15A94D4 Offset: 0x15A54D4 VA: 0x15A94D4
	public void SetMaterial(Material material, int index) { }

	// RVA: 0x15A9528 Offset: 0x15A5528 VA: 0x15A9528
	public void SetPopMaterial(Material material, int index) { }

	// RVA: 0x15A957C Offset: 0x15A557C VA: 0x15A957C
	public void SetTexture(Texture texture) { }

	// RVA: 0x15A95C0 Offset: 0x15A55C0 VA: 0x15A95C0
	public void SetAlphaTexture(Texture texture) { }

	// RVA: 0x15A9604 Offset: 0x15A5604 VA: 0x15A9604
	public void SetMesh(Mesh mesh) { }

	// RVA: 0x15A9648 Offset: 0x15A5648 VA: 0x15A9648
	public void Clear() { }

	// RVA: 0x15A9684 Offset: 0x15A5684 VA: 0x15A9684
	public void SetMaterial(Material material, Texture texture) { }

	// RVA: 0x15A97AC Offset: 0x15A57AC VA: 0x15A97AC
	public static void SplitUIVertexStreams(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents, List<int> indices) { }

	// RVA: 0x15A995C Offset: 0x15A595C VA: 0x15A995C
	public static void CreateUIVertexStream(List<UIVertex> verts, List<Vector3> positions, List<Color32> colors, List<Vector4> uv0S, List<Vector4> uv1S, List<Vector4> uv2S, List<Vector4> uv3S, List<Vector3> normals, List<Vector4> tangents, List<int> indices) { }

	// RVA: 0x15A9918 Offset: 0x15A5918 VA: 0x15A9918
	private static void SplitIndicesStreamsInternal(object verts, object indices) { }

	// RVA: 0x15A987C Offset: 0x15A587C VA: 0x15A987C
	private static void SplitUIVertexStreamsInternal(object verts, object positions, object colors, object uv0S, object uv1S, object uv2S, object uv3S, object normals, object tangents) { }

	// RVA: 0x15A99F8 Offset: 0x15A59F8 VA: 0x15A99F8
	private static void CreateUIVertexStreamInternal(object verts, object positions, object colors, object uv0S, object uv1S, object uv2S, object uv3S, object normals, object tangents, object indices) { }

	// RVA: 0x15A9A94 Offset: 0x15A5A94 VA: 0x15A9A94
	public void .ctor() { }

	// RVA: 0x15A9294 Offset: 0x15A5294 VA: 0x15A9294
	private void SetColor_Injected(ref Color color) { }

	// RVA: 0x15A9330 Offset: 0x15A5330 VA: 0x15A9330
	private void GetColor_Injected(out Color ret) { }

	// RVA: 0x15A93C8 Offset: 0x15A53C8 VA: 0x15A93C8
	private void EnableRectClipping_Injected(ref Rect rect) { }

	// RVA: 0x15A9454 Offset: 0x15A5454 VA: 0x15A9454
	private void set_clippingSoftness_Injected(ref Vector2 value) { }
}


// Namespace: UnityEngine
public sealed class RectTransformUtility // TypeDefIndex: 7681
{
	// Fields
	private static readonly Vector3[] s_Corners; // 0x0

	// Methods

	// RVA: 0x15A9A9C Offset: 0x15A5A9C VA: 0x15A9A9C
	public static Vector2 PixelAdjustPoint(Vector2 point, Transform elementTransform, Canvas canvas) { }

	// RVA: 0x15A9B9C Offset: 0x15A5B9C VA: 0x15A9B9C
	public static Rect PixelAdjustRect(RectTransform rectTransform, Canvas canvas) { }

	// RVA: 0x15A9C90 Offset: 0x15A5C90 VA: 0x15A9C90
	private static bool PointInRectangle(Vector2 screenPoint, RectTransform rect, Camera cam, Vector4 offset) { }

	// RVA: 0x15A9D94 Offset: 0x15A5D94 VA: 0x15A9D94
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint, Camera cam) { }

	// RVA: 0x15A9E68 Offset: 0x15A5E68 VA: 0x15A9E68
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint, Camera cam, Vector4 offset) { }

	// RVA: 0x15A9F14 Offset: 0x15A5F14 VA: 0x15A9F14
	public static bool ScreenPointToWorldPointInRectangle(RectTransform rect, Vector2 screenPoint, Camera cam, out Vector3 worldPoint) { }

	// RVA: 0x15AA4F0 Offset: 0x15A64F0 VA: 0x15AA4F0
	public static bool ScreenPointToLocalPointInRectangle(RectTransform rect, Vector2 screenPoint, Camera cam, out Vector2 localPoint) { }

	// RVA: 0x15AA338 Offset: 0x15A6338 VA: 0x15AA338
	public static Ray ScreenPointToRay(Camera cam, Vector2 screenPos) { }

	// RVA: 0x15AA5EC Offset: 0x15A65EC VA: 0x15AA5EC
	public static Vector2 WorldToScreenPoint(Camera cam, Vector3 worldPoint) { }

	// RVA: 0x15AA69C Offset: 0x15A669C VA: 0x15AA69C
	public static void FlipLayoutOnAxis(RectTransform rect, int axis, bool keepPositioning, bool recursive) { }

	// RVA: 0x15AA95C Offset: 0x15A695C VA: 0x15AA95C
	public static void FlipLayoutAxes(RectTransform rect, bool keepPositioning, bool recursive) { }

	// RVA: 0x15AABB4 Offset: 0x15A6BB4 VA: 0x15AABB4
	private static Vector2 GetTransposed(Vector2 input) { }

	// RVA: 0x15AABC4 Offset: 0x15A6BC4 VA: 0x15AABC4
	private static void .cctor() { }

	// RVA: 0x15A9B40 Offset: 0x15A5B40 VA: 0x15A9B40
	private static void PixelAdjustPoint_Injected(ref Vector2 point, Transform elementTransform, Canvas canvas, out Vector2 ret) { }

	// RVA: 0x15A9C3C Offset: 0x15A5C3C VA: 0x15A9C3C
	private static void PixelAdjustRect_Injected(RectTransform rectTransform, Canvas canvas, out Rect ret) { }

	// RVA: 0x15A9D38 Offset: 0x15A5D38 VA: 0x15A9D38
	private static bool PointInRectangle_Injected(ref Vector2 screenPoint, RectTransform rect, Camera cam, ref Vector4 offset) { }
}


// Namespace: UnityEngine
public enum RenderMode // TypeDefIndex: 7682
{
	// Fields
	public int value__; // 0x0
	public const RenderMode ScreenSpaceOverlay = 0;
	public const RenderMode ScreenSpaceCamera = 1;
	public const RenderMode WorldSpace = 2;
}


// Namespace: 
public sealed class Canvas.WillRenderCanvases : MulticastDelegate // TypeDefIndex: 7683
{
	// Methods

	// RVA: 0x15AB8D0 Offset: 0x15A78D0 VA: 0x15AB8D0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x15AB958 Offset: 0x15A7958 VA: 0x15AB958 Slot: 12
	public virtual void Invoke() { }
}


// Namespace: UnityEngine
[RequireComponent(typeof(RectTransform))]
public sealed class Canvas : Behaviour // TypeDefIndex: 7684
{
	// Fields
	[CompilerGenerated]
	private static Canvas.WillRenderCanvases preWillRenderCanvases; // 0x0
	[CompilerGenerated]
	private static Canvas.WillRenderCanvases willRenderCanvases; // 0x8
	[CompilerGenerated]
	private static Action<int> <externBeginRenderOverlays>k__BackingField; // 0x10
	[CompilerGenerated]
	private static Action<int, int> <externRenderOverlaysBefore>k__BackingField; // 0x18
	[CompilerGenerated]
	private static Action<int> <externEndRenderOverlays>k__BackingField; // 0x20

	// Properties
	public RenderMode renderMode { get; set; }
	public bool isRootCanvas { get; }
	public float scaleFactor { get; set; }
	public float referencePixelsPerUnit { get; set; }
	public bool pixelPerfect { get; }
	public int renderOrder { get; }
	public bool overrideSorting { get; set; }
	public int sortingOrder { get; set; }
	public int targetDisplay { get; }
	public int sortingLayerID { get; set; }
	public Canvas rootCanvas { get; }
	public Vector2 renderingDisplaySize { get; }
	internal static Action<int> externBeginRenderOverlays { get; set; }
	internal static Action<int, int> externRenderOverlaysBefore { get; set; }
	internal static Action<int> externEndRenderOverlays { get; set; }
	public Camera worldCamera { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x15AAC2C Offset: 0x15A6C2C VA: 0x15AAC2C
	public static void add_preWillRenderCanvases(Canvas.WillRenderCanvases value) { }

	[CompilerGenerated]
	// RVA: 0x15AACE4 Offset: 0x15A6CE4 VA: 0x15AACE4
	public static void remove_preWillRenderCanvases(Canvas.WillRenderCanvases value) { }

	[CompilerGenerated]
	// RVA: 0x15AAD9C Offset: 0x15A6D9C VA: 0x15AAD9C
	public static void add_willRenderCanvases(Canvas.WillRenderCanvases value) { }

	[CompilerGenerated]
	// RVA: 0x15AAE58 Offset: 0x15A6E58 VA: 0x15AAE58
	public static void remove_willRenderCanvases(Canvas.WillRenderCanvases value) { }

	// RVA: 0x15AAF14 Offset: 0x15A6F14 VA: 0x15AAF14
	public RenderMode get_renderMode() { }

	// RVA: 0x15AAF50 Offset: 0x15A6F50 VA: 0x15AAF50
	public void set_renderMode(RenderMode value) { }

	// RVA: 0x15AAF94 Offset: 0x15A6F94 VA: 0x15AAF94
	public bool get_isRootCanvas() { }

	// RVA: 0x15AAFD0 Offset: 0x15A6FD0 VA: 0x15AAFD0
	public float get_scaleFactor() { }

	// RVA: 0x15AB00C Offset: 0x15A700C VA: 0x15AB00C
	public void set_scaleFactor(float value) { }

	// RVA: 0x15AB058 Offset: 0x15A7058 VA: 0x15AB058
	public float get_referencePixelsPerUnit() { }

	// RVA: 0x15AB094 Offset: 0x15A7094 VA: 0x15AB094
	public void set_referencePixelsPerUnit(float value) { }

	// RVA: 0x15AB0E0 Offset: 0x15A70E0 VA: 0x15AB0E0
	public bool get_pixelPerfect() { }

	// RVA: 0x15AB11C Offset: 0x15A711C VA: 0x15AB11C
	public int get_renderOrder() { }

	// RVA: 0x15AB158 Offset: 0x15A7158 VA: 0x15AB158
	public bool get_overrideSorting() { }

	// RVA: 0x15AB194 Offset: 0x15A7194 VA: 0x15AB194
	public void set_overrideSorting(bool value) { }

	// RVA: 0x15AB1D8 Offset: 0x15A71D8 VA: 0x15AB1D8
	public int get_sortingOrder() { }

	// RVA: 0x15AB214 Offset: 0x15A7214 VA: 0x15AB214
	public void set_sortingOrder(int value) { }

	// RVA: 0x15AB258 Offset: 0x15A7258 VA: 0x15AB258
	public int get_targetDisplay() { }

	// RVA: 0x15AB294 Offset: 0x15A7294 VA: 0x15AB294
	public int get_sortingLayerID() { }

	// RVA: 0x15AB2D0 Offset: 0x15A72D0 VA: 0x15AB2D0
	public void set_sortingLayerID(int value) { }

	// RVA: 0x15AB314 Offset: 0x15A7314 VA: 0x15AB314
	public Canvas get_rootCanvas() { }

	// RVA: 0x15AB350 Offset: 0x15A7350 VA: 0x15AB350
	public Vector2 get_renderingDisplaySize() { }

	[CompilerGenerated]
	// RVA: 0x15AB3E0 Offset: 0x15A73E0 VA: 0x15AB3E0
	internal static Action<int> get_externBeginRenderOverlays() { }

	[CompilerGenerated]
	// RVA: 0x15AB428 Offset: 0x15A7428 VA: 0x15AB428
	internal static void set_externBeginRenderOverlays(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x15AB474 Offset: 0x15A7474 VA: 0x15AB474
	internal static Action<int, int> get_externRenderOverlaysBefore() { }

	[CompilerGenerated]
	// RVA: 0x15AB4BC Offset: 0x15A74BC VA: 0x15AB4BC
	internal static void set_externRenderOverlaysBefore(Action<int, int> value) { }

	[CompilerGenerated]
	// RVA: 0x15AB508 Offset: 0x15A7508 VA: 0x15AB508
	internal static Action<int> get_externEndRenderOverlays() { }

	[CompilerGenerated]
	// RVA: 0x15AB550 Offset: 0x15A7550 VA: 0x15AB550
	internal static void set_externEndRenderOverlays(Action<int> value) { }

	// RVA: 0x15AB59C Offset: 0x15A759C VA: 0x15AB59C
	internal static void SetExternalCanvasEnabled(bool enabled) { }

	// RVA: 0x15AB5D8 Offset: 0x15A75D8 VA: 0x15AB5D8
	public Camera get_worldCamera() { }

	// RVA: 0x15AB614 Offset: 0x15A7614 VA: 0x15AB614
	public void set_worldCamera(Camera value) { }

	// RVA: 0x15AB658 Offset: 0x15A7658 VA: 0x15AB658
	public static Material GetDefaultCanvasMaterial() { }

	// RVA: 0x15AB680 Offset: 0x15A7680 VA: 0x15AB680
	public static Material GetETC1SupportedCanvasMaterial() { }

	// RVA: 0x15AB6A8 Offset: 0x15A76A8 VA: 0x15AB6A8
	public static void ForceUpdateCanvases() { }

	[RequiredByNativeCode]
	// RVA: 0x15AB6B8 Offset: 0x15A76B8 VA: 0x15AB6B8
	private static void SendPreWillRenderCanvases() { }

	[RequiredByNativeCode]
	// RVA: 0x15AB71C Offset: 0x15A771C VA: 0x15AB71C
	private static void SendWillRenderCanvases() { }

	[RequiredByNativeCode]
	// RVA: 0x15AB780 Offset: 0x15A7780 VA: 0x15AB780
	private static void BeginRenderExtraOverlays(int displayIndex) { }

	[RequiredByNativeCode]
	// RVA: 0x15AB7E8 Offset: 0x15A77E8 VA: 0x15AB7E8
	private static void RenderExtraOverlaysBefore(int displayIndex, int sortingOrder) { }

	[RequiredByNativeCode]
	// RVA: 0x15AB860 Offset: 0x15A7860 VA: 0x15AB860
	private static void EndRenderExtraOverlays(int displayIndex) { }

	// RVA: 0x15AB8C8 Offset: 0x15A78C8 VA: 0x15AB8C8
	public void .ctor() { }

	// RVA: 0x15AB39C Offset: 0x15A739C VA: 0x15AB39C
	private void get_renderingDisplaySize_Injected(out Vector2 ret) { }
}


// Namespace: 
public enum UISystemProfilerApi.SampleType // TypeDefIndex: 7685
{
	// Fields
	public int value__; // 0x0
	public const UISystemProfilerApi.SampleType Layout = 0;
	public const UISystemProfilerApi.SampleType Render = 1;
}


// Namespace: UnityEngine
[IgnoredByDeepProfiler]
public static class UISystemProfilerApi // TypeDefIndex: 7686
{
	// Methods

	// RVA: 0x15AB96C Offset: 0x15A796C VA: 0x15AB96C
	public static void BeginSample(UISystemProfilerApi.SampleType type) { }

	// RVA: 0x15AB9A8 Offset: 0x15A79A8 VA: 0x15AB9A8
	public static void EndSample(UISystemProfilerApi.SampleType type) { }

	// RVA: 0x15AB9E4 Offset: 0x15A79E4 VA: 0x15AB9E4
	public static void AddMarker(string name, Object obj) { }
}
