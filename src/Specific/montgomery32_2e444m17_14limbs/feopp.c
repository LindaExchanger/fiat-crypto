static void feopp(uint32_t out[14], const uint32_t in1[14]) {
  { const uint32_t x25 = in1[13];
  { const uint32_t x26 = in1[12];
  { const uint32_t x24 = in1[11];
  { const uint32_t x22 = in1[10];
  { const uint32_t x20 = in1[9];
  { const uint32_t x18 = in1[8];
  { const uint32_t x16 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint32_t x28; uint8_t/*bool*/ x29 = _subborrow_u32(0x0, 0x0, x2, &x28);
  { uint32_t x31; uint8_t/*bool*/ x32 = _subborrow_u32(x29, 0x0, x4, &x31);
  { uint32_t x34; uint8_t/*bool*/ x35 = _subborrow_u32(x32, 0x0, x6, &x34);
  { uint32_t x37; uint8_t/*bool*/ x38 = _subborrow_u32(x35, 0x0, x8, &x37);
  { uint32_t x40; uint8_t/*bool*/ x41 = _subborrow_u32(x38, 0x0, x10, &x40);
  { uint32_t x43; uint8_t/*bool*/ x44 = _subborrow_u32(x41, 0x0, x12, &x43);
  { uint32_t x46; uint8_t/*bool*/ x47 = _subborrow_u32(x44, 0x0, x14, &x46);
  { uint32_t x49; uint8_t/*bool*/ x50 = _subborrow_u32(x47, 0x0, x16, &x49);
  { uint32_t x52; uint8_t/*bool*/ x53 = _subborrow_u32(x50, 0x0, x18, &x52);
  { uint32_t x55; uint8_t/*bool*/ x56 = _subborrow_u32(x53, 0x0, x20, &x55);
  { uint32_t x58; uint8_t/*bool*/ x59 = _subborrow_u32(x56, 0x0, x22, &x58);
  { uint32_t x61; uint8_t/*bool*/ x62 = _subborrow_u32(x59, 0x0, x24, &x61);
  { uint32_t x64; uint8_t/*bool*/ x65 = _subborrow_u32(x62, 0x0, x26, &x64);
  { uint32_t x67; uint8_t/*bool*/ x68 = _subborrow_u32(x65, 0x0, x25, &x67);
  { uint32_t x69 = cmovznz32(x68, 0x0, 0xffffffff);
  { uint32_t x70 = (x69 & 0xffffffef);
  { uint32_t x72; uint8_t/*bool*/ x73 = _addcarryx_u32(0x0, x28, x70, &x72);
  { uint32_t x74 = (x69 & 0xffffffff);
  { uint32_t x76; uint8_t/*bool*/ x77 = _addcarryx_u32(x73, x31, x74, &x76);
  { uint32_t x78 = (x69 & 0xffffffff);
  { uint32_t x80; uint8_t/*bool*/ x81 = _addcarryx_u32(x77, x34, x78, &x80);
  { uint32_t x82 = (x69 & 0xffffffff);
  { uint32_t x84; uint8_t/*bool*/ x85 = _addcarryx_u32(x81, x37, x82, &x84);
  { uint32_t x86 = (x69 & 0xffffffff);
  { uint32_t x88; uint8_t/*bool*/ x89 = _addcarryx_u32(x85, x40, x86, &x88);
  { uint32_t x90 = (x69 & 0xffffffff);
  { uint32_t x92; uint8_t/*bool*/ x93 = _addcarryx_u32(x89, x43, x90, &x92);
  { uint32_t x94 = (x69 & 0xffffffff);
  { uint32_t x96; uint8_t/*bool*/ x97 = _addcarryx_u32(x93, x46, x94, &x96);
  { uint32_t x98 = (x69 & 0xffffffff);
  { uint32_t x100; uint8_t/*bool*/ x101 = _addcarryx_u32(x97, x49, x98, &x100);
  { uint32_t x102 = (x69 & 0xffffffff);
  { uint32_t x104; uint8_t/*bool*/ x105 = _addcarryx_u32(x101, x52, x102, &x104);
  { uint32_t x106 = (x69 & 0xffffffff);
  { uint32_t x108; uint8_t/*bool*/ x109 = _addcarryx_u32(x105, x55, x106, &x108);
  { uint32_t x110 = (x69 & 0xffffffff);
  { uint32_t x112; uint8_t/*bool*/ x113 = _addcarryx_u32(x109, x58, x110, &x112);
  { uint32_t x114 = (x69 & 0xffffffff);
  { uint32_t x116; uint8_t/*bool*/ x117 = _addcarryx_u32(x113, x61, x114, &x116);
  { uint32_t x118 = (x69 & 0xffffffff);
  { uint32_t x120; uint8_t/*bool*/ x121 = _addcarryx_u32(x117, x64, x118, &x120);
  { uint32_t x122 = (x69 & 0xfffffff);
  { uint32_t x124; uint8_t/*bool*/ _ = _addcarryx_u32(x121, x67, x122, &x124);
  out[0] = x72;
  out[1] = x76;
  out[2] = x80;
  out[3] = x84;
  out[4] = x88;
  out[5] = x92;
  out[6] = x96;
  out[7] = x100;
  out[8] = x104;
  out[9] = x108;
  out[10] = x112;
  out[11] = x116;
  out[12] = x120;
  out[13] = x124;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
