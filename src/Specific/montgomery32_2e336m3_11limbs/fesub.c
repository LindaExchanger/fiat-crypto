static void fesub(uint32_t out[11], const uint32_t in1[11], const uint32_t in2[11]) {
  { const uint32_t x22 = in1[10];
  { const uint32_t x23 = in1[9];
  { const uint32_t x21 = in1[8];
  { const uint32_t x19 = in1[7];
  { const uint32_t x17 = in1[6];
  { const uint32_t x15 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x42 = in2[10];
  { const uint32_t x43 = in2[9];
  { const uint32_t x41 = in2[8];
  { const uint32_t x39 = in2[7];
  { const uint32_t x37 = in2[6];
  { const uint32_t x35 = in2[5];
  { const uint32_t x33 = in2[4];
  { const uint32_t x31 = in2[3];
  { const uint32_t x29 = in2[2];
  { const uint32_t x27 = in2[1];
  { const uint32_t x25 = in2[0];
  { uint32_t x45; uint8_t/*bool*/ x46 = _subborrow_u32(0x0, x5, x25, &x45);
  { uint32_t x48; uint8_t/*bool*/ x49 = _subborrow_u32(x46, x7, x27, &x48);
  { uint32_t x51; uint8_t/*bool*/ x52 = _subborrow_u32(x49, x9, x29, &x51);
  { uint32_t x54; uint8_t/*bool*/ x55 = _subborrow_u32(x52, x11, x31, &x54);
  { uint32_t x57; uint8_t/*bool*/ x58 = _subborrow_u32(x55, x13, x33, &x57);
  { uint32_t x60; uint8_t/*bool*/ x61 = _subborrow_u32(x58, x15, x35, &x60);
  { uint32_t x63; uint8_t/*bool*/ x64 = _subborrow_u32(x61, x17, x37, &x63);
  { uint32_t x66; uint8_t/*bool*/ x67 = _subborrow_u32(x64, x19, x39, &x66);
  { uint32_t x69; uint8_t/*bool*/ x70 = _subborrow_u32(x67, x21, x41, &x69);
  { uint32_t x72; uint8_t/*bool*/ x73 = _subborrow_u32(x70, x23, x43, &x72);
  { uint32_t x75; uint8_t/*bool*/ x76 = _subborrow_u32(x73, x22, x42, &x75);
  { uint32_t x77 = cmovznz32(x76, 0x0, 0xffffffff);
  { uint32_t x78 = (x77 & 0xfffffffd);
  { uint32_t x80; uint8_t/*bool*/ x81 = _addcarryx_u32(0x0, x45, x78, &x80);
  { uint32_t x82 = (x77 & 0xffffffff);
  { uint32_t x84; uint8_t/*bool*/ x85 = _addcarryx_u32(x81, x48, x82, &x84);
  { uint32_t x86 = (x77 & 0xffffffff);
  { uint32_t x88; uint8_t/*bool*/ x89 = _addcarryx_u32(x85, x51, x86, &x88);
  { uint32_t x90 = (x77 & 0xffffffff);
  { uint32_t x92; uint8_t/*bool*/ x93 = _addcarryx_u32(x89, x54, x90, &x92);
  { uint32_t x94 = (x77 & 0xffffffff);
  { uint32_t x96; uint8_t/*bool*/ x97 = _addcarryx_u32(x93, x57, x94, &x96);
  { uint32_t x98 = (x77 & 0xffffffff);
  { uint32_t x100; uint8_t/*bool*/ x101 = _addcarryx_u32(x97, x60, x98, &x100);
  { uint32_t x102 = (x77 & 0xffffffff);
  { uint32_t x104; uint8_t/*bool*/ x105 = _addcarryx_u32(x101, x63, x102, &x104);
  { uint32_t x106 = (x77 & 0xffffffff);
  { uint32_t x108; uint8_t/*bool*/ x109 = _addcarryx_u32(x105, x66, x106, &x108);
  { uint32_t x110 = (x77 & 0xffffffff);
  { uint32_t x112; uint8_t/*bool*/ x113 = _addcarryx_u32(x109, x69, x110, &x112);
  { uint32_t x114 = (x77 & 0xffffffff);
  { uint32_t x116; uint8_t/*bool*/ x117 = _addcarryx_u32(x113, x72, x114, &x116);
  { uint32_t x118 = (x77 & 0xffff);
  { uint32_t x120; uint8_t/*bool*/ _ = _addcarryx_u32(x117, x75, x118, &x120);
  out[0] = x80;
  out[1] = x84;
  out[2] = x88;
  out[3] = x92;
  out[4] = x96;
  out[5] = x100;
  out[6] = x104;
  out[7] = x108;
  out[8] = x112;
  out[9] = x116;
  out[10] = x120;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
