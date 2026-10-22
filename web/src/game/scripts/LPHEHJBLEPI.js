// LPHEHJBLEPI.cs — MulticastDelegate: bool Invoke(GameObject OPBPCFOOBHD)
// Ported as a plain JS function (go) => bool (HighlightEffect filter: include this GameObject?).
// Multicast (+= / -=) is represented by arrays of callbacks; use LPHEHJBLEPI.Invoke(d, arg) to call one or many.
import { G } from '../G.js';

export const LPHEHJBLEPI = {
  // new LPHEHJBLEPI(target, method) -> bound function
  create(fn, target) { return target ? fn.bind(target) : fn; },
  // delegate.Invoke(arg); for a multicast list the last result is returned (C# semantics)
  Invoke(d, arg) {
    if (!d) return undefined;
    if (Array.isArray(d)) { let r; for (const f of d) if (typeof f === 'function') r = f(arg); return r; }
    return typeof d === 'function' ? d(arg) : undefined;
  },
  Combine(a, b) { return [...(Array.isArray(a) ? a : a ? [a] : []), ...(Array.isArray(b) ? b : b ? [b] : [])]; },
  Remove(a, b) { const l = Array.isArray(a) ? a.slice() : a ? [a] : []; const i = l.lastIndexOf(b); if (i >= 0) l.splice(i, 1); return l.length ? l : null; },
};
G.LPHEHJBLEPI = LPHEHJBLEPI;
