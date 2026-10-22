// Global registry of ported classes (avoids import cycles between scripts).
// Every ported script does: G.ClassName = ClassName; registerScript('ClassName', ClassName)
// Cross-class access in ported code: G.CarController.KECGFPHIEHF (static), G.Main.KECGFPHIEHF ...
export const G = { fieldTypes: null };
