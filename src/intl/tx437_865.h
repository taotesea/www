/*
 * The contents of this file are subject to the Interbase Public
 * License Version 1.0 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy
 * of the License at http://www.Inprise.com/IPL.html
 *
 * Software distributed under the License is distributed on an
 * "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, either express
 * or implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code was created by Inprise Corporation
 * and its predecessors. Portions created by Inprise Corporation are
 * Copyright (C) Inprise Corporation.
 *
 * All Rights Reserved.
 * Contributor(s): ______________________________________.
 */
/* 437 to 865 character set conversion table */
static CONST UCHAR cvt_437_to_865[256] = {
/*NEW       OLD UINC       NAME */
	0x00 /*     00 0000 NULL                                     */ ,
	0x01 /*     01 0001 START OF HEADING                         */ ,
	0x02 /*     02 0002 START OF TEXT                            */ ,
	0x03 /*     03 0003 END OF TEXT                              */ ,
	0x04 /*     04 0004 END OF TRANSMISSION                      */ ,
	0x05 /*     05 0005 ENQUIRY                                  */ ,
	0x06 /*     06 0006 ACKNOWLEDGE                              */ ,
	0x07 /*     07 0007 BELL                                     */ ,
	0x08 /*     08 0008 BACKSPACE                                */ ,
	0x09 /*     09 0009 HORIZONTAL TABULATION                    */ ,
	0x0A /*     0A 000A LINE FEED                                */ ,
	0x0B /*     0B 000B VERTICAL TABULATION                      */ ,
	0x0C /*     0C 000C FORM FEED                                */ ,
	0x0D /*     0D 000D CARRIAGE RETURN                          */ ,
	0x0E /*     0E 000E SHIFT OUT                                */ ,
	0x0F /*     0F 000F SHIFT IN                                 */ ,
	0x10 /*     10 0010 DATA LINK ESCAPE                         */ ,
	0x11 /*     11 0011 DEVICE CONTROL ONE                       */ ,
	0x12 /*     12 0012 DEVICE CONTROL TWO                       */ ,
	0x13 /*     13 0013 DEVICE CONTROL THREE                     */ ,
	0x14 /*     14 0014 DEVICE CONTROL FOUR                      */ ,
	0x15 /*     15 0015 NEGATIVE ACKNOWLEDGE                     */ ,
	0x16 /*     16 0016 SYNCHRONOUS IDLE                         */ ,
	0x17 /*     17 0017 END OF TRANSMISSION BLOCK                */ ,
	0x18 /*     18 0018 CANCEL                                   */ ,
	0x19 /*     19 0019 END OF MEDIUM                            */ ,
	0x1A /*     1A 001A SUBSTITUTE                               */ ,
	0x1B /*     1B 001B ESCAPE                                   */ ,
	0x1C /*     1C 001C FILE SEPARATOR                           */ ,
	0x1D /*     1D 001D GROUP SEPARATOR                          */ ,
	0x1E /*     1E 001E RECORD SEPARATOR                         */ ,
	0x1F /*     1F 001F UNIT SEPARATOR                           */ ,
/*NEW       OLD UINC       NAME */
	0x20 /*     20 0020 SPACE                                    */ ,
	0x21 /*     21 0021 EXCLAMATION MARK                         */ ,
	0x22 /*     22 0022 QUOTATION MARK                           */ ,
	0x23 /*     23 0023 NUMBER SIGN                              */ ,
	0x24 /*     24 0024 DOLLAR SIGN                              */ ,
	0x25 /*     25 0025 PERCENT SIGN                             */ ,
	0x26 /*     26 0026 AMPERSAND                                */ ,
	0x27 /*     27 0027 APOSTROPHE-QUOTE                         */ ,
	0x28 /*     28 0028 OPENING PARENTHESIS                      */ ,
	0x29 /*     29 0029 CLOSING PARENTHESIS                      */ ,
	0x2A /*     2A 002A ASTERISK                                 */ ,
	0x2B /*     2B 002B PLUS SIGN                                */ ,
	0x2C /*     2C 002C COMMA                                    */ ,
	0x2D /*     2D 002D HYPHEN-MINUS                             */ ,
	0x2E /*     2E 002E PERIOD                                   */ ,
	0x2F /*     2F 002F SLASH                                    */ ,
	0x30 /*     30 0030 DIGIT ZERO                               */ ,
	0x31 /*     31 0031 DIGIT ONE                                */ ,
	0x32 /*     32 0032 DIGIT TWO                                */ ,
	0x33 /*     33 0033 DIGIT THREE                              */ ,
	0x34 /*     34 0034 DIGIT FOUR                               */ ,
	0x35 /*     35 0035 DIGIT FIVE                               */ ,
	0x36 /*     36 0036 DIGIT SIX                                */ ,
	0x37 /*     37 0037 DIGIT SEVEN                              */ ,
	0x38 /*     38 0038 DIGIT EIGHT                              */ ,
	0x39 /*     39 0039 DIGIT NINE                               */ ,
	0x3A /*     3A 003A COLON                                    */ ,
	0x3B /*     3B 003B SEMICOLON                                */ ,
	0x3C /*     3C 003C LESS-THAN SIGN                           */ ,
	0x3D /*     3D 003D EQUALS SIGN                              */ ,
	0x3E /*     3E 003E GREATER-THAN SIGN                        */ ,
	0x3F /*     3F 003F QUESTION MARK                            */ ,
/*NEW       OLD UINC       NAME */
	0x40 /*     40 0040 COMMERCIAL AT                            */ ,
	0x41 /*     41 0041 LATIN CAPITAL LETTER A                   */ ,
	0x42 /*     42 0042 LATIN CAPITAL LETTER B                   */ ,
	0x43 /*     43 0043 LATIN CAPITAL LETTER C                   */ ,
	0x44 /*     44 0044 LATIN CAPITAL LETTER D                   */ ,
	0x45 /*     45 0045 LATIN CAPITAL LETTER E                   */ ,
	0x46 /*     46 0046 LATIN CAPITAL LETTER F                   */ ,
	0x47 /*     47 0047 LATIN CAPITAL LETTER G                   */ ,
	0x48 /*     48 0048 LATIN CAPITAL LETTER H                   */ ,
	0x49 /*     49 0049 LATIN CAPITAL LETTER I                   */ ,
	0x4A /*     4A 004A LATIN CAPITAL LETTER J                   */ ,
	0x4B /*     4B 004B LATIN CAPITAL LETTER K                   */ ,
	0x4C /*     4C 004C LATIN CAPITAL LETTER L                   */ ,
	0x4D /*     4D 004D LATIN CAPITAL LETTER M                   */ ,
	0x4E /*     4E 004E LATIN CAPITAL LETTER N                   */ ,
	0x4F /*     4F 004F LATIN CAPITAL LETTER O                   */ ,
	0x50 /*     50 0050 LATIN CAPITAL LETTER P                   */ ,
	0x51 /*     51 0051 LATIN CAPITAL LETTER Q                   */ ,
	0x52 /*     52 0052 LATIN CAPITAL LETTER R                   */ ,
	0x53 /*     53 0053 LATIN CAPITAL LETTER S                   */ ,
	0x54 /*     54 0054 LATIN CAPITAL LETTER T                   */ ,
	0x55 /*     55 0055 LATIN CAPITAL LETTER U                   */ ,
	0x56 /*     56 0056 LATIN CAPITAL LETTER V                   */ ,
	0x57 /*     57 0057 LATIN CAPITAL LETTER W                   */ ,
	0x58 /*     58 0058 LATIN CAPITAL LETTER X                   */ ,
	0x59 /*     59 0059 LATIN CAPITAL LETTER Y                   */ ,
	0x5A /*     5A 005A LATIN CAPITAL LETTER Z                   */ ,
	0x5B /*     5B 005B OPENING SQUARE BRACKET                   */ ,
	0x5C /*     5C 005C BACKSLASH                                */ ,
	0x5D /*     5D 005D CLOSING SQUARE BRACKET                   */ ,
	0x5E /*     5E 005E SPACING CIRCUMFLEX                       */ ,
	0x5F /*     5F 005F SPACING UNDERSCORE                       */ ,
/*NEW       OLD UINC       NAME */
	0x60 /*     60 0060 SPACING GRAVE                            */ ,
	0x61 /*     61 0061 LATIN SMALL LETTER A                     */ ,
	0x62 /*     62 0062 LATIN SMALL LETTER B                     */ ,
	0x63 /*     63 0063 LATIN SMALL LETTER C                     */ ,
	0x64 /*     64 0064 LATIN SMALL LETTER D                     */ ,
	0x65 /*     65 0065 LATIN SMALL LETTER E                     */ ,
	0x66 /*     66 0066 LATIN SMALL LETTER F                     */ ,
	0x67 /*     67 0067 LATIN SMALL LETTER G                     */ ,
	0x68 /*     68 0068 LATIN SMALL LETTER H                     */ ,
	0x69 /*     69 0069 LATIN SMALL LETTER I                     */ ,
	0x6A /*     6A 006A LATIN SMALL LETTER J                     */ ,
	0x6B /*     6B 006B LATIN SMALL LETTER K                     */ ,
	0x6C /*     6C 006C LATIN SMALL LETTER L                     */ ,
	0x6D /*     6D 006D LATIN SMALL LETTER M                     */ ,
	0x6E /*     6E 006E LATIN SMALL LETTER N                     */ ,
	0x6F /*     6F 006F LATIN SMALL LETTER O                     */ ,
	0x70 /*     70 0070 LATIN SMALL LETTER P                     */ ,
	0x71 /*     71 0071 LATIN SMALL LETTER Q                     */ ,
	0x72 /*     72 0072 LATIN SMALL LETTER R                     */ ,
	0x73 /*     73 0073 LATIN SMALL LETTER S                     */ ,
	0x74 /*     74 0074 LATIN SMALL LETTER T                     */ ,
	0x75 /*     75 0075 LATIN SMALL LETTER U                     */ ,
	0x76 /*     76 0076 LATIN SMALL LETTER V                     */ ,
	0x77 /*     77 0077 LATIN SMALL LETTER W                     */ ,
	0x78 /*     78 0078 LATIN SMALL LETTER X                     */ ,
	0x79 /*     79 0079 LATIN SMALL LETTER Y                     */ ,
	0x7A /*     7A 007A LATIN SMALL LETTER Z                     */ ,
	0x7B /*     7B 007B OPENING CURLY BRACKET                    */ ,
	0x7C /*     7C 007C VERTICAL BAR                             */ ,
	0x7D /*     7D 007D CLOSING CURLY BRACKET                    */ ,
	0x7E /*     7E 007E TILDE                                    */ ,
	0x7F /*     7F 007F DELETE                                   */ ,
/*NEW       OLD UINC       NAME */
	0x80 /*     80 00C7 LATIN CAPITAL LETTER C CEDILLA           */ ,
	0x81 /*     81 00FC LATIN SMALL LETTER U DIAERESIS           */ ,
	0x82 /*     82 00E9 LATIN SMALL LETTER E ACUTE               */ ,
	0x83 /*     83 00E2 LATIN SMALL LETTER A CIRCUMFLEX          */ ,
	0x84 /*     84 00E4 LATIN SMALL LETTER A DIAERESIS           */ ,
	0x85 /*     85 00E0 LATIN SMALL LETTER A GRAVE               */ ,
	0x86 /*     86 00E5 LATIN SMALL LETTER A RING                */ ,
	0x87 /*     87 00E7 LATIN SMALL LETTER C CEDILLA             */ ,
	0x88 /*     88 00EA LATIN SMALL LETTER E CIRCUMFLEX          */ ,
	0x89 /*     89 00EB LATIN SMALL LETTER E DIAERESIS           */ ,
	0x8A /*     8A 00E8 LATIN SMALL LETTER E GRAVE               */ ,
	0x8B /*     8B 00EF LATIN SMALL LETTER I DIAERESIS           */ ,
	0x8C /*     8C 00EE LATIN SMALL LETTER I CIRCUMFLEX          */ ,
	0x8D /*     8D 00EC LATIN SMALL LETTER I GRAVE               */ ,
	0x8E /*     8E 00C4 LATIN CAPITAL LETTER A DIAERESIS         */ ,
	0x8F /*     8F 00C5 LATIN CAPITAL LETTER A RING              */ ,
	0x90 /*     90 00C9 LATIN CAPITAL LETTER E ACUTE             */ ,
	0x91 /*     91 00E6 LATIN SMALL LETTER A E                   */ ,
	0x92 /*     92 00C6 LATIN CAPITAL LETTER A E                 */ ,
	0x93 /*     93 00F4 LATIN SMALL LETTER O CIRCUMFLEX          */ ,
	0x94 /*     94 00F6 LATIN SMALL LETTER O DIAERESIS           */ ,
	0x95 /*     95 00F2 LATIN SMALL LETTER O GRAVE               */ ,
	0x96 /*     96 00FB LATIN SMALL LETTER U CIRCUMFLEX          */ ,
	0x97 /*     97 00F9 LATIN SMALL LETTER U GRAVE               */ ,
	0x98 /*     98 00FF LATIN SMALL LETTER Y DIAERESIS           */ ,
	0x99 /*     99 00D6 LATIN CAPITAL LETTER O DIAERESIS         */ ,
	0x9A /*     9A 00DC LATIN CAPITAL LETTER U DIAERESIS         */ ,
	CS_CANT_MAP /*     9B 00A2 CENT SIGN                                */ ,
	0x9C /*     9C 00A3 POUND SIGN                               */ ,
	CS_CANT_MAP /*     9D 00A5 YEN SIGN                                 */ ,
	0x9E /*     9E 20A7 PESETA SIGN                              */ ,
	0x9F /*     9F 0192 LATIN SMALL LETTER SCRIPT F              */ ,
/*NEW       OLD UINC       NAME */
	0xA0 /*     A0 00E1 LATIN SMALL LETTER A ACUTE               */ ,
	0xA1 /*     A1 00ED LATIN SMALL LETTER I ACUTE               */ ,
	0xA2 /*     A2 00F3 LATIN SMALL LETTER O ACUTE               */ ,
	0xA3 /*     A3 00FA LATIN SMALL LETTER U ACUTE               */ ,
	0xA4 /*     A4 00F1 LATIN SMALL LETTER N TILDE               */ ,
	0xA5 /*     A5 00D1 LATIN CAPITAL LETTER N TILDE             */ ,
	0xA6 /*     A6 00AA FEMININE ORDINAL INDICATOR               */ ,
	0xA7 /*     A7 00BA MASCULINE ORDINAL INDICATOR              */ ,
	0xA8 /*     A8 00BF INVERTED QUESTION MARK                   */ ,
	0xA9 /*     A9 2310 REVERSED NOT SIGN                        */ ,
	0xAA /*     AA 00AC NOT SIGN                                 */ ,
	0xAB /*     AB 00BD FRACTION ONE HALF                        */ ,
	0xAC /*     AC 00BC FRACTION ONE QUARTER                     */ ,
	0xAD /*     AD 00A1 INVERTED EXCLAMATION MARK                */ ,
	0xAE /*     AE 00AB LEFT POINTING GUILLEMET                  */ ,
	CS_CANT_MAP /*     AF 00BB RIGHT POINTING GUILLEMET                 */ ,
	0xB0 /*     B0 2591 LIGHT SHADE                              */ ,
	0xB1 /*     B1 2592 MEDIUM SHADE                             */ ,
	0xB2 /*     B2 2593 DARK SHADE                               */ ,
	0xB3 /*     B3 2502 FORMS LIGHT VERTICAL                     */ ,
	0xB4 /*     B4 2524 FORMS LIGHT VERTICAL AND LEFT            */ ,
	0xB5 /*     B5 2561 FORMS VERTICAL SINGLE AND LEFT DOUBLE    */ ,
	0xB6 /*     B6 2562 FORMS VERTICAL DOUBLE AND LEFT SINGLE    */ ,
	0xB7 /*     B7 2556 FORMS DOWN DOUBLE AND LEFT SINGLE        */ ,
	0xB8 /*     B8 2555 FORMS DOWN SINGLE AND LEFT DOUBLE        */ ,
	0xB9 /*     B9 2563 FORMS DOUBLE VERTICAL AND LEFT           */ ,
	0xBA /*     BA 2551 FORMS DOUBLE VERTICAL                    */ ,
	0xBB /*     BB 2557 FORMS DOUBLE DOWN AND LEFT               */ ,
	0xBC /*     BC 255D FORMS DOUBLE UP AND LEFT                 */ ,
	0xBD /*     BD 255C FORMS UP DOUBLE AND LEFT SINGLE          */ ,
	0xBE /*     BE 255B FORMS UP SINGLE AND LEFT DOUBLE          */ ,
	0xBF /*     BF 2510 FORMS LIGHT DOWN AND LEFT                */ ,
/*NEW       OLD UINC       NAME */
	0xC0 /*     C0 2514 FORMS LIGHT UP AND RIGHT                 */ ,
	0xC1 /*     C1 2534 FORMS LIGHT UP AND HORIZONTAL            */ ,
	0xC2 /*     C2 252C FORMS LIGHT DOWN AND HORIZONTAL          */ ,
	0xC3 /*     C3 251C FORMS LIGHT VERTICAL AND RIGHT           */ ,
	0xC4 /*     C4 2500 FORMS LIGHT HORIZONTAL                   */ ,
	0xC5 /*     C5 253C FORMS LIGHT VERTICAL AND HORIZONTAL      */ ,
	0xC6 /*     C6 255E FORMS VERTICAL SINGLE AND RIGHT DOUBLE   */ ,
	0xC7 /*     C7 255F FORMS VERTICAL DOUBLE AND RIGHT SINGLE   */ ,
	0xC8 /*     C8 255A FORMS DOUBLE UP AND RIGHT                */ ,
	0xC9 /*     C9 2554 FORMS DOUBLE DOWN AND RIGHT              */ ,
	0xCA /*     CA 2569 FORMS DOUBLE UP AND HORIZONTAL           */ ,
	0xCB /*     CB 2566 FORMS DOUBLE DOWN AND HORIZONTAL         */ ,
	0xCC /*     CC 2560 FORMS DOUBLE VERTICAL AND RIGHT          */ ,
	0xCD /*     CD 2550 FORMS DOUBLE HORIZONTAL                  */ ,
	0xCE /*     CE 256C FORMS DOUBLE VERTICAL AND HORIZONTAL     */ ,
	0xCF /*     CF 2567 FORMS UP SINGLE AND HORIZONTAL DOUBLE    */ ,
	0xD0 /*     D0 2568 FORMS UP DOUBLE AND HORIZONTAL SINGLE    */ ,
	0xD1 /*     D1 2564 FORMS DOWN SINGLE AND HORIZONTAL DOUBLE  */ ,
	0xD2 /*     D2 2565 FORMS DOWN DOUBLE AND HORIZONTAL SINGLE  */ ,
	0xD3 /*     D3 2559 FORMS UP DOUBLE AND RIGHT SINGLE         */ ,
	0xD4 /*     D4 2558 FORMS UP SINGLE AND RIGHT DOUBLE         */ ,
	0xD5 /*     D5 2552 FORMS DOWN SINGLE AND RIGHT DOUBLE       */ ,
	0xD6 /*     D6 2553 FORMS DOWN DOUBLE AND RIGHT SINGLE       */ ,
	0xD7 /*     D7 256B FORMS VERTICAL DOUBLE AND HORIZONTAL SINGLE */ ,
	0xD8 /*     D8 256A FORMS VERTICAL SINGLE AND HORIZONTAL DOUBLE */ ,
	0xD9 /*     D9 2518 FORMS LIGHT UP AND LEFT                  */ ,
	0xDA /*     DA 250C FORMS LIGHT DOWN AND RIGHT               */ ,
	0xDB /*     DB 2588 FULL BLOCK                               */ ,
	0xDC /*     DC 2584 LOWER HALF BLOCK                         */ ,
	0xDD /*     DD 258C LEFT HALF BLOCK                          */ ,
	0xDE /*     DE 2590 RIGHT HALF BLOCK                         */ ,
	0xDF /*     DF 2580 UPPER HALF BLOCK                         */ ,
/*NEW       OLD UINC       NAME */
	0xE0 /*     E0 03B1 GREEK SMALL LETTER ALPHA                 */ ,
	0xE1 /*     E1 00DF LATIN SMALL LETTER SHARP S               */ ,
	0xE2 /*     E2 0393 GREEK CAPITAL LETTER GAMMA               */ ,
	0xE3 /*     E3 03C0 GREEK SMALL LETTER PI                    */ ,
	0xE4 /*     E4 03A3 GREEK CAPITAL LETTER SIGMA               */ ,
	0xE5 /*     E5 03C3 GREEK SMALL LETTER SIGMA                 */ ,
	0xE6 /*     E6 00B5 MICRO SIGN                               */ ,
	0xE7 /*     E7 03C4 GREEK SMALL LETTER TAU                   */ ,
	0xE8 /*     E8 03A6 GREEK CAPITAL LETTER PHI                 */ ,
	0xE9 /*     E9 0398 GREEK CAPITAL LETTER THETA               */ ,
	0xEA /*     EA 03A9 GREEK CAPITAL LETTER OMEGA               */ ,
	0xEB /*     EB 03B4 GREEK SMALL LETTER DELTA                 */ ,
	0xEC /*     EC 221E INFINITY                                 */ ,
	0xED /*     ED 03C6 GREEK SMALL LETTER PHI                   */ ,
	0xEE /*     EE 03B5 GREEK SMALL LETTER EPSILON               */ ,
	0xEF /*     EF 2229 INTERSECTION                             */ ,
	0xF0 /*     F0 2261 IDENTICAL TO                             */ ,
	0xF1 /*     F1 00B1 PLUS-OR-MINUS SIGN                       */ ,
	0xF2 /*     F2 2265 GREATER THAN OR EQUAL TO                 */ ,
	0xF3 /*     F3 2264 LESS THAN OR EQUAL TO                    */ ,
	0xF4 /*     F4 2320 TOP HALF INTEGRAL                        */ ,
	0xF5 /*     F5 2321 BOTTOM HALF INTEGRAL                     */ ,
	0xF6 /*     F6 00F7 DIVISION SIGN                            */ ,
	0xF7 /*     F7 2248 ALMOST EQUAL TO                          */ ,
	0xF8 /*     F8 00B0 DEGREE SIGN                              */ ,
	0xF9 /*     F9 2219 BULLET OPERATOR                          */ ,
	0xFA /*     FA 00B7 MIDDLE DOT                               */ ,
	0xFB /*     FB 221A SQUARE ROOT                              */ ,
	0xFC /*     FC 207F SUPERSCRIPT LATIN SMALL LETTER N         */ ,
	0xFD /*     FD 00B2 SUPERSCRIPT DIGIT TWO                    */ ,
	0xFE /*     FE 25A0 BLACK SQUARE                             */ ,
	0xFF						/*     FF 00A0 NON-BREAKING SPACE                       */
};


/* 865 to 437 character set conversion table */
static CONST UCHAR cvt_865_to_437[256] = {
/*NEW       OLD UINC       NAME */
	0x00 /*     00 0000 NULL                                     */ ,
	0x01 /*     01 0001 START OF HEADING                         */ ,
	0x02 /*     02 0002 START OF TEXT                            */ ,
	0x03 /*     03 0003 END OF TEXT                              */ ,
	0x04 /*     04 0004 END OF TRANSMISSION                      */ ,
	0x05 /*     05 0005 ENQUIRY                                  */ ,
	0x06 /*     06 0006 ACKNOWLEDGE                              */ ,
	0x07 /*     07 0007 BELL                                     */ ,
	0x08 /*     08 0008 BACKSPACE                                */ ,
	0x09 /*     09 0009 HORIZONTAL TABULATION                    */ ,
	0x0A /*     0A 000A LINE FEED                                */ ,
	0x0B /*     0B 000B VERTICAL TABULATION                      */ ,
	0x0C /*     0C 000C FORM FEED                                */ ,
	0x0D /*     0D 000D CARRIAGE RETURN                          */ ,
	0x0E /*     0E 000E SHIFT OUT                                */ ,
	0x0F /*     0F 000F SHIFT IN                                 */ ,
	0x10 /*     10 0010 DATA LINK ESCAPE                         */ ,
	0x11 /*     11 0011 DEVICE CONTROL ONE                       */ ,
	0x12 /*     12 0012 DEVICE CONTROL TWO                       */ ,
	0x13 /*     13 0013 DEVICE CONTROL THREE                     */ ,
	0x14 /*     14 0014 DEVICE CONTROL FOUR                      */ ,
	0x15 /*     15 0015 NEGATIVE ACKNOWLEDGE                     */ ,
	0x16 /*     16 0016 SYNCHRONOUS IDLE                         */ ,
	0x17 /*     17 0017 END OF TRANSMISSION BLOCK                */ ,
	0x18 /*     18 0018 CANCEL                                   */ ,
	0x19 /*     19 0019 END OF MEDIUM                            */ ,
	0x1A /*     1A 001A SUBSTITUTE                               */ ,
	0x1B /*     1B 001B ESCAPE                                   */ ,
	0x1C /*     1C 001C FILE SEPARATOR                           */ ,
	0x1D /*     1D 001D GROUP SEPARATOR                          */ ,
	0x1E /*     1E 001E RECORD SEPARATOR                         */ ,
	0x1F /*     1F 001F UNIT SEPARATOR                           */ ,
/*NEW       OLD UINC       NAME */
	0x20 /*     20 0020 SPACE                                    */ ,
	0x21 /*     21 0021 EXCLAMATION MARK                         */ ,
	0x22 /*     22 0022 QUOTATION MARK                           */ ,
	0x23 /*     23 0023 NUMBER SIGN                              */ ,
	0x24 /*     24 0024 DOLLAR SIGN                              */ ,
	0x25 /*     25 0025 PERCENT SIGN                             */ ,
	0x26 /*     26 0026 AMPERSAND                                */ ,
	0x27 /*     27 0027 APOSTROPHE-QUOTE                         */ ,
	0x28 /*     28 0028 OPENING PARENTHESIS                      */ ,
	0x29 /*     29 0029 CLOSING PARENTHESIS                      */ ,
	0x2A /*     2A 002A ASTERISK                                 */ ,
	0x2B /*     2B 002B PLUS SIGN                                */ ,
	0x2C /*     2C 002C COMMA                                    */ ,
	0x2D /*     2D 002D HYPHEN-MINUS                             */ ,
	0x2E /*     2E 002E PERIOD                                   */ ,
	0x2F /*     2F 002F SLASH                                    */ ,
	0x30 /*     30 0030 DIGIT ZERO                               */ ,
	0x31 /*     31 0031 DIGIT ONE                                */ ,
	0x32 /*     32 0032 DIGIT TWO                                */ ,
	0x33 /*     33 0033 DIGIT THREE                              */ ,
	0x34 /*     34 0034 DIGIT FOUR                               */ ,
	0x35 /*     35 0035 DIGIT FIVE                               */ ,
	0x36 /*     36 0036 DIGIT SIX                                */ ,
	0x37 /*     37 0037 DIGIT SEVEN                              */ ,
	0x38 /*     38 0038 DIGIT EIGHT                              */ ,
	0x39 /*     39 0039 DIGIT NINE                               */ ,
	0x3A /*     3A 003A COLON                                    */ ,
	0x3B /*     3B 003B SEMICOLON                                */ ,
	0x3C /*     3C 003C LESS-THAN SIGN                           */ ,
	0x3D /*     3D 003D EQUALS SIGN                              */ ,
	0x3E /*     3E 003E GREATER-THAN SIGN                        */ ,
	0x3F /*     3F 003F QUESTION MARK                            */ ,
/*NEW       OLD UINC       NAME */
	0x40 /*     40 0040 COMMERCIAL AT                            */ ,
	0x41 /*     41 0041 LATIN CAPITAL LETTER A                   */ ,
	0x42 /*     42 0042 LATIN CAPITAL LETTER B                   */ ,
	0x43 /*     43 0043 LATIN CAPITAL LETTER C                   */ ,
	0x44 /*     44 0044 LATIN CAPITAL LETTER D                   */ ,
	0x45 /*     45 0045 LATIN CAPITAL LETTER E                   */ ,
	0x46 /*     46 0046 LATIN CAPITAL LETTER F                   */ ,
	0x47 /*     47 0047 LATIN CAPITAL LETTER G                   */ ,
	0x48 /*     48 0048 LATIN CAPITAL LETTER H                   */ ,
	0x49 /*     49 0049 LATIN CAPITAL LETTER I                   */ ,
	0x4A /*     4A 004A LATIN CAPITAL LETTER J                   */ ,
	0x4B /*     4B 004B LATIN CAPITAL LETTER K                   */ ,
	0x4C /*     4C 004C LATIN CAPITAL LETTER L                   */ ,
	0x4D /*     4D 004D LATIN CAPITAL LETTER M                   */ ,
	0x4E /*     4E 004E LATIN CAPITAL LETTER N                   */ ,
	0x4F /*     4F 004F LATIN CAPITAL LETTER O                   */ ,
	0x50 /*     50 0050 LATIN CAPITAL LETTER P                   */ ,
	0x51 /*     51 0051 LATIN CAPITAL LETTER Q                   */ ,
	0x52 /*     52 0052 LATIN CAPITAL LETTER R                   */ ,
	0x53 /*     53 0053 LATIN CAPITAL LETTER S                   */ ,
	0x54 /*     54 0054 LATIN CAPITAL LETTER T                   */ ,
	0x55 /*     55 0055 LATIN CAPITAL LETTER U                   */ ,
	0x56 /*     56 0056 LATIN CAPITAL LETTER V                   */ ,
	0x57 /*     57 0057 LATIN CAPITAL LETTER W                   */ ,
	0x58 /*     58 0058 LATIN CAPITAL LETTER X                   */ ,
	0x59 /*     59 0059 LATIN CAPITAL LETTER Y                   */ ,
	0x5A /*     5A 005A LATIN CAPITAL LETTER Z                   */ ,
	0x5B /*     5B 005B OPENING SQUARE BRACKET                   */ ,
	0x5C /*     5C 005C BACKSLASH                                */ ,
	0x5D /*     5D 005D CLOSING SQUARE BRACKET                   */ ,
	0x5E /*     5E 005E SPACING CIRCUMFLEX                       */ ,
	0x5F /*     5F 005F SPACING UNDERSCORE                       */ ,
/*NEW       OLD UINC       NAME */
	0x60 /*     60 0060 SPACING GRAVE                            */ ,
	0x61 /*     61 0061 LATIN SMALL LETTER A                     */ ,
	0x62 /*     62 0062 LATIN SMALL LETTER B                     */ ,
	0x63 /*     63 0063 LATIN SMALL LETTER C                     */ ,
	0x64 /*     64 0064 LATIN SMALL LETTER D                     */ ,
	0x65 /*     65 0065 LATIN SMALL LETTER E                     */ ,
	0x66 /*     66 0066 LATIN SMALL LETTER F                     */ ,
	0x67 /*     67 0067 LATIN SMALL LETTER G                     */ ,
	0x68 /*     68 0068 LATIN SMALL LETTER H                     */ ,
	0x69 /*     69 0069 LATIN SMALL LETTER I                     */ ,
	0x6A /*     6A 006A LATIN SMALL LETTER J                     */ ,
	0x6B /*     6B 006B LATIN SMALL LETTER K                     */ ,
	0x6C /*     6C 006C LATIN SMALL LETTER L                     */ ,
	0x6D /*     6D 006D LATIN SMALL LETTER M                     */ ,
	0x6E /*     6E 006E LATIN SMALL LETTER N                     */ ,
	0x6F /*     6F 006F LATIN SMALL LETTER O                     */ ,
	0x70 /*     70 0070 LATIN SMALL LETTER P                     */ ,
	0x71 /*     71 0071 LATIN SMALL LETTER Q                     */ ,
	0x72 /*     72 0072 LATIN SMALL LETTER R                     */ ,
	0x73 /*     73 0073 LATIN SMALL LETTER S                     */ ,
	0x74 /*     74 0074 LATIN SMALL LETTER T                     */ ,
	0x75 /*     75 0075 LATIN SMALL LETTER U                     */ ,
	0x76 /*     76 0076 LATIN SMALL LETTER V                     */ ,
	0x77 /*     77 0077 LATIN SMALL LETTER W                     */ ,
	0x78 /*     78 0078 LATIN SMALL LETTER X                     */ ,
	0x79 /*     79 0079 LATIN SMALL LETTER Y                     */ ,
	0x7A /*     7A 007A LATIN SMALL LETTER Z                     */ ,
	0x7B /*     7B 007B OPENING CURLY BRACKET                    */ ,
	0x7C /*     7C 007C VERTICAL BAR                             */ ,
	0x7D /*     7D 007D CLOSING CURLY BRACKET                    */ ,
	0x7E /*     7E 007E TILDE                                    */ ,
	0x7F /*     7F 007F DELETE                                   */ ,
/*NEW       OLD UINC       NAME */
	0x80 /*     80 00C7 LATIN CAPITAL LETTER C CEDILLA           */ ,
	0x81 /*     81 00FC LATIN SMALL LETTER U DIAERESIS           */ ,
	0x82 /*     82 00E9 LATIN SMALL LETTER E ACUTE               */ ,
	0x83 /*     83 00E2 LATIN SMALL LETTER A CIRCUMFLEX          */ ,
	0x84 /*     84 00E4 LATIN SMALL LETTER A DIAERESIS           */ ,
	0x85 /*     85 00E0 LATIN SMALL LETTER A GRAVE               */ ,
	0x86 /*     86 00E5 LATIN SMALL LETTER A RING                */ ,
	0x87 /*     87 00E7 LATIN SMALL LETTER C CEDILLA             */ ,
	0x88 /*     88 00EA LATIN SMALL LETTER E CIRCUMFLEX          */ ,
	0x89 /*     89 00EB LATIN SMALL LETTER E DIAERESIS           */ ,
	0x8A /*     8A 00E8 LATIN SMALL LETTER E GRAVE               */ ,
	0x8B /*     8B 00EF LATIN SMALL LETTER I DIAERESIS           */ ,
	0x8C /*     8C 00EE LATIN SMALL LETTER I CIRCUMFLEX          */ ,
	0x8D /*     8D 00EC LATIN SMALL LETTER I GRAVE               */ ,
	0x8E /*     8E 00C4 LATIN CAPITAL LETTER A DIAERESIS         */ ,
	0x8F /*     8F 00C5 LATIN CAPITAL LETTER A RING              */ ,
	0x90 /*     90 00C9 LATIN CAPITAL LETTER E ACUTE             */ ,
	0x91 /*     91 00E6 LATIN SMALL LETTER A E                   */ ,
	0x92 /*     92 00C6 LATIN CAPITAL LETTER A E                 */ ,
	0x93 /*     93 00F4 LATIN SMALL LETTER O CIRCUMFLEX          */ ,
	0x94 /*     94 00F6 LATIN SMALL LETTER O DIAERESIS           */ ,
	0x95 /*     95 00F2 LATIN SMALL LETTER O GRAVE               */ ,
	0x96 /*     96 00FB LATIN SMALL LETTER U CIRCUMFLEX          */ ,
	0x97 /*     97 00F9 LATIN SMALL LETTER U GRAVE               */ ,
	0x98 /*     98 00FF LATIN SMALL LETTER Y DIAERESIS           */ ,
	0x99 /*     99 00D6 LATIN CAPITAL LETTER O DIAERESIS         */ ,
	0x9A /*     9A 00DC LATIN CAPITAL LETTER U DIAERESIS         */ ,
	CS_CANT_MAP /*     9B 00F8 LATIN SMALL LETTER O SLASH               */ ,
	0x9C /*     9C 00A3 POUND SIGN                               */ ,
	CS_CANT_MAP /*     9D 00D8 LATIN CAPITAL LETTER O SLASH             */ ,
	0x9E /*     9E 20A7 PESETA SIGN                              */ ,
	0x9F /*     9F 0192 LATIN SMALL LETTER SCRIPT F              */ ,
/*NEW       OLD UINC       NAME */
	0xA0 /*     A0 00E1 LATIN SMALL LETTER A ACUTE               */ ,
	0xA1 /*     A1 00ED LATIN SMALL LETTER I ACUTE               */ ,
	0xA2 /*     A2 00F3 LATIN SMALL LETTER O ACUTE               */ ,
	0xA3 /*     A3 00FA LATIN SMALL LETTER U ACUTE               */ ,
	0xA4 /*     A4 00F1 LATIN SMALL LETTER N TILDE               */ ,
	0xA5 /*     A5 00D1 LATIN CAPITAL LETTER N TILDE             */ ,
	0xA6 /*     A6 00AA FEMININE ORDINAL INDICATOR               */ ,
	0xA7 /*     A7 00BA MASCULINE ORDINAL INDICATOR              */ ,
	0xA8 /*     A8 00BF INVERTED QUESTION MARK                   */ ,
	0xA9 /*     A9 2310 REVERSED NOT SIGN                        */ ,
	0xAA /*     AA 00AC NOT SIGN                                 */ ,
	0xAB /*     AB 00BD FRACTION ONE HALF                        */ ,
	0xAC /*     AC 00BC FRACTION ONE QUARTER                     */ ,
	0xAD /*     AD 00A1 INVERTED EXCLAMATION MARK                */ ,
	0xAE /*     AE 00AB LEFT POINTING GUILLEMET                  */ ,
	CS_CANT_MAP /*     AF 00A4 CURRENCY SIGN                            */ ,
	0xB0 /*     B0 2591 LIGHT SHADE                              */ ,
	0xB1 /*     B1 2592 MEDIUM SHADE                             */ ,
	0xB2 /*     B2 2593 DARK SHADE                               */ ,
	0xB3 /*     B3 2502 FORMS LIGHT VERTICAL                     */ ,
	0xB4 /*     B4 2524 FORMS LIGHT VERTICAL AND LEFT            */ ,
	0xB5 /*     B5 2561 FORMS VERTICAL SINGLE AND LEFT DOUBLE    */ ,
	0xB6 /*     B6 2562 FORMS VERTICAL DOUBLE AND LEFT SINGLE    */ ,
	0xB7 /*     B7 2556 FORMS DOWN DOUBLE AND LEFT SINGLE        */ ,
	0xB8 /*     B8 2555 FORMS DOWN SINGLE AND LEFT DOUBLE        */ ,
	0xB9 /*     B9 2563 FORMS DOUBLE VERTICAL AND LEFT           */ ,
	0xBA /*     BA 2551 FORMS DOUBLE VERTICAL                    */ ,
	0xBB /*     BB 2557 FORMS DOUBLE DOWN AND LEFT               */ ,
	0xBC /*     BC 255D FORMS DOUBLE UP AND LEFT                 */ ,
	0xBD /*     BD 255C FORMS UP DOUBLE AND LEFT SINGLE          */ ,
	0xBE /*     BE 255B FORMS UP SINGLE AND LEFT DOUBLE          */ ,
	0xBF /*     BF 2510 FORMS LIGHT DOWN AND LEFT                */ ,
/*NEW       OLD UINC       NAME */
	0xC0 /*     C0 2514 FORMS LIGHT UP AND RIGHT                 */ ,
	0xC1 /*     C1 2534 FORMS LIGHT UP AND HORIZONTAL            */ ,
	0xC2 /*     C2 252C FORMS LIGHT DOWN AND HORIZONTAL          */ ,
	0xC3 /*     C3 251C FORMS LIGHT VERTICAL AND RIGHT           */ ,
	0xC4 /*     C4 2500 FORMS LIGHT HORIZONTAL                   */ ,
	0xC5 /*     C5 253C FORMS LIGHT VERTICAL AND HORIZONTAL      */ ,
	0xC6 /*     C6 255E FORMS VERTICAL SINGLE AND RIGHT DOUBLE   */ ,
	0xC7 /*     C7 255F FORMS VERTICAL DOUBLE AND RIGHT SINGLE   */ ,
	0xC8 /*     C8 255A FORMS DOUBLE UP AND RIGHT                */ ,
	0xC9 /*     C9 2554 FORMS DOUBLE DOWN AND RIGHT              */ ,
	0xCA /*     CA 2569 FORMS DOUBLE UP AND HORIZONTAL           */ ,
	0xCB /*     CB 2566 FORMS DOUBLE DOWN AND HORIZONTAL         */ ,
	0xCC /*     CC 2560 FORMS DOUBLE VERTICAL AND RIGHT          */ ,
	0xCD /*     CD 2550 FORMS DOUBLE HORIZONTAL                  */ ,
	0xCE /*     CE 256C FORMS DOUBLE VERTICAL AND HORIZONTAL     */ ,
	0xCF /*     CF 2567 FORMS UP SINGLE AND HORIZONTAL DOUBLE    */ ,
	0xD0 /*     D0 2568 FORMS UP DOUBLE AND HORIZONTAL SINGLE    */ ,
	0xD1 /*     D1 2564 FORMS DOWN SINGLE AND HORIZONTAL DOUBLE  */ ,
	0xD2 /*     D2 2565 FORMS DOWN DOUBLE AND HORIZONTAL SINGLE  */ ,
	0xD3 /*     D3 2559 FORMS UP DOUBLE AND RIGHT SINGLE         */ ,
	0xD4 /*     D4 2558 FORMS UP SINGLE AND RIGHT DOUBLE         */ ,
	0xD5 /*     D5 2552 FORMS DOWN SINGLE AND RIGHT DOUBLE       */ ,
	0xD6 /*     D6 2553 FORMS DOWN DOUBLE AND RIGHT SINGLE       */ ,
	0xD7 /*     D7 256B FORMS VERTICAL DOUBLE AND HORIZONTAL SINGLE */ ,
	0xD8 /*     D8 256A FORMS VERTICAL SINGLE AND HORIZONTAL DOUBLE */ ,
	0xD9 /*     D9 2518 FORMS LIGHT UP AND LEFT                  */ ,
	0xDA /*     DA 250C FORMS LIGHT DOWN AND RIGHT               */ ,
	0xDB /*     DB 2588 FULL BLOCK                               */ ,
	0xDC /*     DC 2584 LOWER HALF BLOCK                         */ ,
	0xDD /*     DD 258C LEFT HALF BLOCK                          */ ,
	0xDE /*     DE 2590 RIGHT HALF BLOCK                         */ ,
	0xDF /*     DF 2580 UPPER HALF BLOCK                         */ ,
/*NEW       OLD UINC       NAME */
	0xE0 /*     E0 03B1 GREEK SMALL LETTER ALPHA                 */ ,
	0xE1 /*     E1 00DF LATIN SMALL LETTER SHARP S               */ ,
	0xE2 /*     E2 0393 GREEK CAPITAL LETTER GAMMA               */ ,
	0xE3 /*     E3 03C0 GREEK SMALL LETTER PI                    */ ,
	0xE4 /*     E4 03A3 GREEK CAPITAL LETTER SIGMA               */ ,
	0xE5 /*     E5 03C3 GREEK SMALL LETTER SIGMA                 */ ,
	0xE6 /*     E6 00B5 MICRO SIGN                               */ ,
	0xE7 /*     E7 03C4 GREEK SMALL LETTER TAU                   */ ,
	0xE8 /*     E8 03A6 GREEK CAPITAL LETTER PHI                 */ ,
	0xE9 /*     E9 0398 GREEK CAPITAL LETTER THETA               */ ,
	0xEA /*     EA 03A9 GREEK CAPITAL LETTER OMEGA               */ ,
	0xEB /*     EB 03B4 GREEK SMALL LETTER DELTA                 */ ,
	0xEC /*     EC 221E INFINITY                                 */ ,
	0xED /*     ED 03C6 GREEK SMALL LETTER PHI                   */ ,
	0xEE /*     EE 03B5 GREEK SMALL LETTER EPSILON               */ ,
	0xEF /*     EF 2229 INTERSECTION                             */ ,
	0xF0 /*     F0 2261 IDENTICAL TO                             */ ,
	0xF1 /*     F1 00B1 PLUS-OR-MINUS SIGN                       */ ,
	0xF2 /*     F2 2265 GREATER THAN OR EQUAL TO                 */ ,
	0xF3 /*     F3 2264 LESS THAN OR EQUAL TO                    */ ,
	0xF4 /*     F4 2320 TOP HALF INTEGRAL                        */ ,
	0xF5 /*     F5 2321 BOTTOM HALF INTEGRAL                     */ ,
	0xF6 /*     F6 00F7 DIVISION SIGN                            */ ,
	0xF7 /*     F7 2248 ALMOST EQUAL TO                          */ ,
	0xF8 /*     F8 00B0 DEGREE SIGN                              */ ,
	0xF9 /*     F9 2219 BULLET OPERATOR                          */ ,
	0xFA /*     FA 00B7 MIDDLE DOT                               */ ,
	0xFB /*     FB 221A SQUARE ROOT                              */ ,
	0xFC /*     FC 207F SUPERSCRIPT LATIN SMALL LETTER N         */ ,
	0xFD /*     FD 00B2 SUPERSCRIPT DIGIT TWO                    */ ,
	0xFE /*     FE 25A0 BLACK SQUARE                             */ ,
	0xFF						/*     FF 00A0 NON-BREAKING SPACE                       */
};
