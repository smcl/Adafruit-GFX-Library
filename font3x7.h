#ifndef FONT3x7_H
#define FONT3x7_H

// "Tom Thumb" font originally designed by Robey Pointer
// hacked to work with the Adafruit graphics drivers by
// Sean McLemon, 2015.
//
// original link: http://robey.lag.net/2010/01/23/tiny-monospace-font.html


// font is three characters wide
#define FONTWIDTH 3

static const unsigned char  font[] PROGMEM = {
  0x7C,0x44,0x7C, // 0x00
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0xFF,0xFF,0xFF,

  0x00,0x00,0x00, //
  0x00,0x5c,0x00, // ! 
  0x0C,0x00,0x0C, // "
  0x7C,0x28,0x7C, // #
  0x28,0x7C,0x14, // $
  0x24,0x10,0x48, // %
  0x3C,0x5C,0x70, // &
  0x00,0x0C,0x00, // '
  0x00,0x38,0x44, // (
  0x44,0x38,0x00, // )
  0x14,0x08,0x14, // *
  0x10,0x38,0x10, // +
  0x40,0x20,0x00, // ,
  0x10,0x10,0x10, // -
  0x00,0x40,0x00, // .
  0x60,0x10,0x0C, // /
  0x78,0x44,0x3C, // 0
  0x08,0x7C,0x00, // 1
  0x64,0x54,0x48, // 2
  0x44,0x54,0x28, // 3
  0x1C,0x10,0x7C, // 4
  0x5C,0x54,0x24, // 5
  0x78,0x54,0x74, // 6
  0x64,0x14,0x0C, // 7
  0x7C,0x54,0x7C, // 8
  0x5C,0x54,0x3C, // 9
  0x00,0x28,0x00, // :
  0x40,0x28,0x00, // ;
  0x10,0x28,0x44, // <
  0x28,0x28,0x28, // =
  0x44,0x28,0x10, // >
  0x04,0x54,0x0C, // ?

  0x38,0x54,0x58, // @
  0x78,0x14,0x78, // A
  0x7C,0x54,0x28, // B
  0x38,0x44,0x44, // C
  0x7C,0x44,0x38, // D
  0x7C,0x54,0x54, // E
  0x7C,0x14,0x14, // F
  0x38,0x54,0x74, // G
  0x7C,0x10,0x7C, // H
  0x44,0x7C,0x44, // I
  0x20,0x40,0x3C, // J
  0x7C,0x10,0x6C, // K
  0x7C,0x40,0x40, // L
  0x7C,0x18,0x7C, // M
  0x7C,0x38,0x7C, // N
  0x38,0x44,0x38, // O
  0x7C,0x14,0x08, // P
  0x38,0x64,0x78, // Q
  0x7C,0x34,0x58, // R
  0x48,0x54,0x24, // S
  0x04,0x7C,0x04, // T
  0x3C,0x40,0x7C, // U
  0x1C,0x20,0x1C, // V
  0x7C,0x30,0x7C, // W
  0x6C,0x10,0x6C, // X
  0x0C,0x70,0x0C, // Y
  0x64,0x54,0x4C, // Z
  0x7C,0x44,0x44, // [
  0x08,0x10,0x20, // (backspace)
  0x44,0x44,0x7C, // ]
  0x08,0x04,0x08, // ^
  0x40,0x40,0x40, // _

  0x04,0x08,0x00, // `
  0x68,0x58,0x70, // a
  0x7C,0x48,0x30, // b
  0x30,0x48,0x48, // c
  0x30,0x48,0x7C, // d
  0x30,0x68,0x58, // e
  0x10,0x78,0x14, // f
  0x30,0xA8,0x78, // g
  0x7C,0x08,0x70, // h
  0x00,0x74,0x00, // i
  0x40,0x80,0x74, // j
  0x7C,0x30,0x48, // k
  0x44,0x7C,0x40, // l
  0x78,0x38,0x78, // m
  0x78,0x08,0x70, // n
  0x30,0x48,0x30, // o
  0xF8,0x48,0x30, // p
  0x30,0x48,0xF8, // q
  0x70,0x08,0x08, // r
  0x50,0x78,0x28, // s
  0x08,0x7C,0x48, // t
  0x38,0x40,0x78, // u
  0x38,0x60,0x38, // v
  0x78,0x70,0x78, // w
  0x48,0x30,0x48, // x
  0x18,0xA0,0x78, // y
  0x68,0x78,0x58, // z
  0x10,0x6C,0x44, // {
  0x00,0x6C,0x00, // |
  0x44,0x6C,0x10, // }
  0x08,0x0C,0x04, //
  0x7C,0x7C,0x7C, //

  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,

  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,

  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,

  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C
};
#endif
