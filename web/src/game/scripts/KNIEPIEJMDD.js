// KNIEPIEJMDD: hash helper (decompiled = standard MD5: init 0x67452301/0xefcdab89/0x98badcfe/0x10325476,
// 4 round functions F/G/H/I, 64-byte blocks, 0x80 padding, bit length little-endian, 16-byte digest).
// Only used by BridgePHP (server save checksums) which is removed in the web port; kept for completeness.
import { G } from '../G.js';

// JJDMDPAIABJ: MD5 state struct {A,B,C,D}
class JJDMDPAIABJ {
  constructor(a = 0x67452301, b = 0xefcdab89, c = 0x98badcfe, d = 0x10325476) { this.A = a >>> 0; this.B = b >>> 0; this.C = c >>> 0; this.D = d >>> 0; }
}

const T = new Uint32Array(64);
for (let i = 0; i < 64; i++) T[i] = Math.floor(Math.abs(Math.sin(i + 1)) * 4294967296) >>> 0;
const S = [7, 12, 17, 22, 5, 9, 14, 20, 4, 11, 16, 23, 6, 10, 15, 21];

export class KNIEPIEJMDD {
  // COCCMCDDMBM(string, Encoding) / COCCMCDDMBM(string) / COCCMCDDMBM(byte[]) -> byte[16] MD5 digest
  static COCCMCDDMBM(MGBIFHOADHG, CBMECEHNMMG) {
    if (MGBIFHOADHG == null) throw new Error('Unable to calculate hash over null input');
    let bytes;
    if (typeof MGBIFHOADHG === 'string') {
      // Encoding argument: only UTF8 is meaningful in JS (default overload uses UTF8Encoding)
      bytes = (CBMECEHNMMG && typeof CBMECEHNMMG.GetBytes === 'function') ? Uint8Array.from(CBMECEHNMMG.GetBytes(MGBIFHOADHG)) : new TextEncoder().encode(MGBIFHOADHG);
    } else bytes = MGBIFHOADHG instanceof Uint8Array ? MGBIFHOADHG : Uint8Array.from(MGBIFHOADHG);
    const st = new JJDMDPAIABJ();
    const len = bytes.length;
    let off = 0;
    for (; off <= len - 64; off += 64) KNIEPIEJMDD.AEICFIFFEJB(bytes, st, off);
    return KNIEPIEJMDD.MHNJNJGCEJL(bytes, off, len - off, st, len * 8);
  }

  // FF: F(b,c,d) = (b & c) | (~b & d)
  static HAGKKFGJHKJ(a, b, c, d, x, s, t) { return (KNIEPIEJMDD.ICANHCBBABJ((a + ((b & c) | (~b & d)) + x + t) >>> 0, s) + b) >>> 0; }
  // GG: G(b,c,d) = (b & d) | (c & ~d)
  static FJNHHBMAOAP(a, b, c, d, x, s, t) { return (KNIEPIEJMDD.ICANHCBBABJ((a + ((d & b) | (c & ~d)) + x + t) >>> 0, s) + b) >>> 0; }
  // HH: H(b,c,d) = b ^ c ^ d
  static OFBDEDHLGFO(a, b, c, d, x, s, t) { return (KNIEPIEJMDD.ICANHCBBABJ((a + (b ^ c ^ d) + x + t) >>> 0, s) + b) >>> 0; }
  // II: I(b,c,d) = c ^ (b | ~d)
  static JLKKNNBJJAP(a, b, c, d, x, s, t) { return (KNIEPIEJMDD.ICANHCBBABJ((a + (c ^ (b | ~d)) + x + t) >>> 0, s) + b) >>> 0; }
  // rotate left
  static ICANHCBBABJ(DGLGMLCACCE, CLKOHKNPAHM) { return ((DGLGMLCACCE << CLKOHKNPAHM) | (DGLGMLCACCE >>> (32 - CLKOHKNPAHM))) >>> 0; }

  // bytes[off..off+64] -> 16 little-endian uint32 words
  static NBFIJBHBCCH(MGBIFHOADHG, LFFFFEGHPFJ) {
    const w = new Uint32Array(16);
    for (let i = 0; i < 16; i++) { const o = LFFFFEGHPFJ + i * 4; w[i] = (MGBIFHOADHG[o] | (MGBIFHOADHG[o + 1] << 8) | (MGBIFHOADHG[o + 2] << 16) | (MGBIFHOADHG[o + 3] << 24)) >>> 0; }
    return w;
  }

  // transform one 64-byte block into state (ref JJDMDPAIABJ)
  static AEICFIFFEJB(MGBIFHOADHG, BIOHJEJFDIF, LFFFFEGHPFJ) {
    const x = KNIEPIEJMDD.NBFIJBHBCCH(MGBIFHOADHG, LFFFFEGHPFJ);
    let a = BIOHJEJFDIF.A, b = BIOHJEJFDIF.B, c = BIOHJEJFDIF.C, d = BIOHJEJFDIF.D;
    for (let i = 0; i < 64; i++) {
      let f, g, r;
      if (i < 16) { f = KNIEPIEJMDD.HAGKKFGJHKJ; g = i; r = S[i % 4]; }
      else if (i < 32) { f = KNIEPIEJMDD.FJNHHBMAOAP; g = (5 * i + 1) % 16; r = S[4 + (i % 4)]; }
      else if (i < 48) { f = KNIEPIEJMDD.OFBDEDHLGFO; g = (3 * i + 5) % 16; r = S[8 + (i % 4)]; }
      else { f = KNIEPIEJMDD.JLKKNNBJJAP; g = (7 * i) % 16; r = S[12 + (i % 4)]; }
      const nb = f(a, b, c, d, x[g], r, T[i]);
      a = d; d = c; c = b; b = nb;
    }
    BIOHJEJFDIF.A = (BIOHJEJFDIF.A + a) >>> 0; BIOHJEJFDIF.B = (BIOHJEJFDIF.B + b) >>> 0;
    BIOHJEJFDIF.C = (BIOHJEJFDIF.C + c) >>> 0; BIOHJEJFDIF.D = (BIOHJEJFDIF.D + d) >>> 0;
  }

  // final block(s): padding 0x80 + bit length, returns 16-byte digest
  static MHNJNJGCEJL(MGBIFHOADHG, LFFFFEGHPFJ, PLIMKCAJCFK, MJDENOPBPIL, HHALMHDCBLK) {
    let blk = new Uint8Array(64);
    blk.set(MGBIFHOADHG.subarray(LFFFFEGHPFJ, LFFFFEGHPFJ + PLIMKCAJCFK), 0);
    blk[PLIMKCAJCFK] = 0x80;
    if (PLIMKCAJCFK > 0x37) { KNIEPIEJMDD.AEICFIFFEJB(blk, MJDENOPBPIL, 0); blk = new Uint8Array(64); }
    let bits = BigInt(HHALMHDCBLK);
    for (let i = 0; i < 8; i++) { blk[0x38 + i] = Number(bits & 0xffn); bits >>= 8n; }
    KNIEPIEJMDD.AEICFIFFEJB(blk, MJDENOPBPIL, 0);
    const out = new Uint8Array(16);
    [MJDENOPBPIL.A, MJDENOPBPIL.B, MJDENOPBPIL.C, MJDENOPBPIL.D].forEach((v, k) => { for (let i = 0; i < 4; i++) out[k * 4 + i] = (v >>> (8 * i)) & 0xff; });
    return out;
  }

  // helper (not in original): lowercase hex string of the digest
  static hex(bytes) { return Array.from(bytes, (b) => b.toString(16).padStart(2, '0')).join(''); }
}
KNIEPIEJMDD.JJDMDPAIABJ = JJDMDPAIABJ;
G.KNIEPIEJMDD = KNIEPIEJMDD;
