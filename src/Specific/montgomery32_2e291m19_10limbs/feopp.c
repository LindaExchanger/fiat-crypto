static void feopp(uint32_t out[10], const uint32_t in1[10]) {
  { const uint32_t x17 = in1[9];
  { const uint32_t x18 = in1[8];
  { const uint32_t x16 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint32_t x20; uint8_t/*bool*/ x21 = _subborrow_u32(0x0, 0x0, x2, &x20);
  { uint32_t x23; uint8_t/*bool*/ x24 = _subborrow_u32(x21, 0x0, x4, &x23);
  { uint32_t x26; uint8_t/*bool*/ x27 = _subborrow_u32(x24, 0x0, x6, &x26);
  { uint32_t x29; uint8_t/*bool*/ x30 = _subborrow_u32(x27, 0x0, x8, &x29);
  { uint32_t x32; uint8_t/*bool*/ x33 = _subborrow_u32(x30, 0x0, x10, &x32);
  { uint32_t x35; uint8_t/*bool*/ x36 = _subborrow_u32(x33, 0x0, x12, &x35);
  { uint32_t x38; uint8_t/*bool*/ x39 = _subborrow_u32(x36, 0x0, x14, &x38);
  { uint32_t x41; uint8_t/*bool*/ x42 = _subborrow_u32(x39, 0x0, x16, &x41);
  { uint32_t x44; uint8_t/*bool*/ x45 = _subborrow_u32(x42, 0x0, x18, &x44);
  { uint32_t x47; uint8_t/*bool*/ x48 = _subborrow_u32(x45, 0x0, x17, &x47);
  { uint32_t x49 = cmovznz32(x48, 0x0, 0xffffffff);
  { uint32_t x50 = (x49 & 0xffffffed);
  { uint32_t x52; uint8_t/*bool*/ x53 = _addcarryx_u32(0x0, x20, x50, &x52);
  { uint32_t x54 = (x49 & 0xffffffff);
  { uint32_t x56; uint8_t/*bool*/ x57 = _addcarryx_u32(x53, x23, x54, &x56);
  { uint32_t x58 = (x49 & 0xffffffff);
  { uint32_t x60; uint8_t/*bool*/ x61 = _addcarryx_u32(x57, x26, x58, &x60);
  { uint32_t x62 = (x49 & 0xffffffff);
  { uint32_t x64; uint8_t/*bool*/ x65 = _addcarryx_u32(x61, x29, x62, &x64);
  { uint32_t x66 = (x49 & 0xffffffff);
  { uint32_t x68; uint8_t/*bool*/ x69 = _addcarryx_u32(x65, x32, x66, &x68);
  { uint32_t x70 = (x49 & 0xffffffff);
  { uint32_t x72; uint8_t/*bool*/ x73 = _addcarryx_u32(x69, x35, x70, &x72);
  { uint32_t x74 = (x49 & 0xffffffff);
  { uint32_t x76; uint8_t/*bool*/ x77 = _addcarryx_u32(x73, x38, x74, &x76);
  { uint32_t x78 = (x49 & 0xffffffff);
  { uint32_t x80; uint8_t/*bool*/ x81 = _addcarryx_u32(x77, x41, x78, &x80);
  { uint32_t x82 = (x49 & 0xffffffff);
  { uint32_t x84; uint8_t/*bool*/ x85 = _addcarryx_u32(x81, x44, x82, &x84);
  { uint8_t x86 = ((uint8_t)x49 & 0x7);
  { uint32_t x88; uint8_t/*bool*/ _ = _addcarryx_u32(x85, x47, x86, &x88);
  out[0] = x52;
  out[1] = x56;
  out[2] = x60;
  out[3] = x64;
  out[4] = x68;
  out[5] = x72;
  out[6] = x76;
  out[7] = x80;
  out[8] = x84;
  out[9] = x88;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
