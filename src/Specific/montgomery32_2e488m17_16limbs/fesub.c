static void fesub(uint32_t out[16], const uint32_t in1[16], const uint32_t in2[16]) {
  { const uint32_t x32 = in1[15];
  { const uint32_t x33 = in1[14];
  { const uint32_t x31 = in1[13];
  { const uint32_t x29 = in1[12];
  { const uint32_t x27 = in1[11];
  { const uint32_t x25 = in1[10];
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
  { const uint32_t x62 = in2[15];
  { const uint32_t x63 = in2[14];
  { const uint32_t x61 = in2[13];
  { const uint32_t x59 = in2[12];
  { const uint32_t x57 = in2[11];
  { const uint32_t x55 = in2[10];
  { const uint32_t x53 = in2[9];
  { const uint32_t x51 = in2[8];
  { const uint32_t x49 = in2[7];
  { const uint32_t x47 = in2[6];
  { const uint32_t x45 = in2[5];
  { const uint32_t x43 = in2[4];
  { const uint32_t x41 = in2[3];
  { const uint32_t x39 = in2[2];
  { const uint32_t x37 = in2[1];
  { const uint32_t x35 = in2[0];
  { uint32_t x65; uint8_t/*bool*/ x66 = _subborrow_u32(0x0, x5, x35, &x65);
  { uint32_t x68; uint8_t/*bool*/ x69 = _subborrow_u32(x66, x7, x37, &x68);
  { uint32_t x71; uint8_t/*bool*/ x72 = _subborrow_u32(x69, x9, x39, &x71);
  { uint32_t x74; uint8_t/*bool*/ x75 = _subborrow_u32(x72, x11, x41, &x74);
  { uint32_t x77; uint8_t/*bool*/ x78 = _subborrow_u32(x75, x13, x43, &x77);
  { uint32_t x80; uint8_t/*bool*/ x81 = _subborrow_u32(x78, x15, x45, &x80);
  { uint32_t x83; uint8_t/*bool*/ x84 = _subborrow_u32(x81, x17, x47, &x83);
  { uint32_t x86; uint8_t/*bool*/ x87 = _subborrow_u32(x84, x19, x49, &x86);
  { uint32_t x89; uint8_t/*bool*/ x90 = _subborrow_u32(x87, x21, x51, &x89);
  { uint32_t x92; uint8_t/*bool*/ x93 = _subborrow_u32(x90, x23, x53, &x92);
  { uint32_t x95; uint8_t/*bool*/ x96 = _subborrow_u32(x93, x25, x55, &x95);
  { uint32_t x98; uint8_t/*bool*/ x99 = _subborrow_u32(x96, x27, x57, &x98);
  { uint32_t x101; uint8_t/*bool*/ x102 = _subborrow_u32(x99, x29, x59, &x101);
  { uint32_t x104; uint8_t/*bool*/ x105 = _subborrow_u32(x102, x31, x61, &x104);
  { uint32_t x107; uint8_t/*bool*/ x108 = _subborrow_u32(x105, x33, x63, &x107);
  { uint32_t x110; uint8_t/*bool*/ x111 = _subborrow_u32(x108, x32, x62, &x110);
  { uint32_t x112 = cmovznz32(x111, 0x0, 0xffffffff);
  { uint32_t x113 = (x112 & 0xffffffef);
  { uint32_t x115; uint8_t/*bool*/ x116 = _addcarryx_u32(0x0, x65, x113, &x115);
  { uint32_t x117 = (x112 & 0xffffffff);
  { uint32_t x119; uint8_t/*bool*/ x120 = _addcarryx_u32(x116, x68, x117, &x119);
  { uint32_t x121 = (x112 & 0xffffffff);
  { uint32_t x123; uint8_t/*bool*/ x124 = _addcarryx_u32(x120, x71, x121, &x123);
  { uint32_t x125 = (x112 & 0xffffffff);
  { uint32_t x127; uint8_t/*bool*/ x128 = _addcarryx_u32(x124, x74, x125, &x127);
  { uint32_t x129 = (x112 & 0xffffffff);
  { uint32_t x131; uint8_t/*bool*/ x132 = _addcarryx_u32(x128, x77, x129, &x131);
  { uint32_t x133 = (x112 & 0xffffffff);
  { uint32_t x135; uint8_t/*bool*/ x136 = _addcarryx_u32(x132, x80, x133, &x135);
  { uint32_t x137 = (x112 & 0xffffffff);
  { uint32_t x139; uint8_t/*bool*/ x140 = _addcarryx_u32(x136, x83, x137, &x139);
  { uint32_t x141 = (x112 & 0xffffffff);
  { uint32_t x143; uint8_t/*bool*/ x144 = _addcarryx_u32(x140, x86, x141, &x143);
  { uint32_t x145 = (x112 & 0xffffffff);
  { uint32_t x147; uint8_t/*bool*/ x148 = _addcarryx_u32(x144, x89, x145, &x147);
  { uint32_t x149 = (x112 & 0xffffffff);
  { uint32_t x151; uint8_t/*bool*/ x152 = _addcarryx_u32(x148, x92, x149, &x151);
  { uint32_t x153 = (x112 & 0xffffffff);
  { uint32_t x155; uint8_t/*bool*/ x156 = _addcarryx_u32(x152, x95, x153, &x155);
  { uint32_t x157 = (x112 & 0xffffffff);
  { uint32_t x159; uint8_t/*bool*/ x160 = _addcarryx_u32(x156, x98, x157, &x159);
  { uint32_t x161 = (x112 & 0xffffffff);
  { uint32_t x163; uint8_t/*bool*/ x164 = _addcarryx_u32(x160, x101, x161, &x163);
  { uint32_t x165 = (x112 & 0xffffffff);
  { uint32_t x167; uint8_t/*bool*/ x168 = _addcarryx_u32(x164, x104, x165, &x167);
  { uint32_t x169 = (x112 & 0xffffffff);
  { uint32_t x171; uint8_t/*bool*/ x172 = _addcarryx_u32(x168, x107, x169, &x171);
  { uint8_t x173 = ((uint8_t)x112 & 0xff);
  { uint32_t x175; uint8_t/*bool*/ _ = _addcarryx_u32(x172, x110, x173, &x175);
  out[0] = x115;
  out[1] = x119;
  out[2] = x123;
  out[3] = x127;
  out[4] = x131;
  out[5] = x135;
  out[6] = x139;
  out[7] = x143;
  out[8] = x147;
  out[9] = x151;
  out[10] = x155;
  out[11] = x159;
  out[12] = x163;
  out[13] = x167;
  out[14] = x171;
  out[15] = x175;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
