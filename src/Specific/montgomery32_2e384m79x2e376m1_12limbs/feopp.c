static void feopp(uint32_t out[12], const uint32_t in1[12]) {
  { const uint32_t x21 = in1[11];
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
  { uint32_t x24; uint8_t/*bool*/ x25 = _subborrow_u32(0x0, 0x0, x2, &x24);
  { uint32_t x27; uint8_t/*bool*/ x28 = _subborrow_u32(x25, 0x0, x4, &x27);
  { uint32_t x30; uint8_t/*bool*/ x31 = _subborrow_u32(x28, 0x0, x6, &x30);
  { uint32_t x33; uint8_t/*bool*/ x34 = _subborrow_u32(x31, 0x0, x8, &x33);
  { uint32_t x36; uint8_t/*bool*/ x37 = _subborrow_u32(x34, 0x0, x10, &x36);
  { uint32_t x39; uint8_t/*bool*/ x40 = _subborrow_u32(x37, 0x0, x12, &x39);
  { uint32_t x42; uint8_t/*bool*/ x43 = _subborrow_u32(x40, 0x0, x14, &x42);
  { uint32_t x45; uint8_t/*bool*/ x46 = _subborrow_u32(x43, 0x0, x16, &x45);
  { uint32_t x48; uint8_t/*bool*/ x49 = _subborrow_u32(x46, 0x0, x18, &x48);
  { uint32_t x51; uint8_t/*bool*/ x52 = _subborrow_u32(x49, 0x0, x20, &x51);
  { uint32_t x54; uint8_t/*bool*/ x55 = _subborrow_u32(x52, 0x0, x22, &x54);
  { uint32_t x57; uint8_t/*bool*/ x58 = _subborrow_u32(x55, 0x0, x21, &x57);
  { uint32_t x59 = cmovznz32(x58, 0x0, 0xffffffff);
  { uint32_t x60 = (x59 & 0xffffffff);
  { uint32_t x62; uint8_t/*bool*/ x63 = _addcarryx_u32(0x0, x24, x60, &x62);
  { uint32_t x64 = (x59 & 0xffffffff);
  { uint32_t x66; uint8_t/*bool*/ x67 = _addcarryx_u32(x63, x27, x64, &x66);
  { uint32_t x68 = (x59 & 0xffffffff);
  { uint32_t x70; uint8_t/*bool*/ x71 = _addcarryx_u32(x67, x30, x68, &x70);
  { uint32_t x72 = (x59 & 0xffffffff);
  { uint32_t x74; uint8_t/*bool*/ x75 = _addcarryx_u32(x71, x33, x72, &x74);
  { uint32_t x76 = (x59 & 0xffffffff);
  { uint32_t x78; uint8_t/*bool*/ x79 = _addcarryx_u32(x75, x36, x76, &x78);
  { uint32_t x80 = (x59 & 0xffffffff);
  { uint32_t x82; uint8_t/*bool*/ x83 = _addcarryx_u32(x79, x39, x80, &x82);
  { uint32_t x84 = (x59 & 0xffffffff);
  { uint32_t x86; uint8_t/*bool*/ x87 = _addcarryx_u32(x83, x42, x84, &x86);
  { uint32_t x88 = (x59 & 0xffffffff);
  { uint32_t x90; uint8_t/*bool*/ x91 = _addcarryx_u32(x87, x45, x88, &x90);
  { uint32_t x92 = (x59 & 0xffffffff);
  { uint32_t x94; uint8_t/*bool*/ x95 = _addcarryx_u32(x91, x48, x92, &x94);
  { uint32_t x96 = (x59 & 0xffffffff);
  { uint32_t x98; uint8_t/*bool*/ x99 = _addcarryx_u32(x95, x51, x96, &x98);
  { uint32_t x100 = (x59 & 0xffffffff);
  { uint32_t x102; uint8_t/*bool*/ x103 = _addcarryx_u32(x99, x54, x100, &x102);
  { uint32_t x104 = (x59 & 0xb0ffffff);
  { uint32_t x106; uint8_t/*bool*/ _ = _addcarryx_u32(x103, x57, x104, &x106);
  out[0] = x62;
  out[1] = x66;
  out[2] = x70;
  out[3] = x74;
  out[4] = x78;
  out[5] = x82;
  out[6] = x86;
  out[7] = x90;
  out[8] = x94;
  out[9] = x98;
  out[10] = x102;
  out[11] = x106;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
