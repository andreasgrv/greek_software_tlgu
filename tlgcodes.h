#ifndef TLGCODES_H
#define TLGCODES_H
/* tlgcodes.h
 *
 * This is part of the tlgu utility
 * Copyright (C) 2004, 2005, 2011 Dimitri Marinakis
 * see the file tlgu.c for copying conditions
 *
 * Code arrays for escape sequences
 * See: handle_escape_codes
 *
 */

/* Punctuation codes (%) 0 - 170 */
/*FIXME: check or find symbols for
	%29, %31, %47-%49, (%50 - %81), %98, %105, %110, <%128>, %138, %140, %144,
	%145, %157, %171
*/
#define MAX_PUNCTUATION 180
unsigned int punctuation[] = {
	0x2020, 0x003f, 0x002a, 0x002f, 0x0021, 0x007c, 0x003d, 0x002b, 0x0025, 0x0026,
	0x003a, 0x00b7, 0x203b, 0x2021, 0x00a7, 0x02c8, 0x00a6, 0x2016, 0x0027, 0x002d,
	0x0301, 0x0300, 0x0302, 0x0308, 0x0303, 0x0327, 0x0304, 0x0306, 0x0308, 0x0324,
	0x1fbd, 0x1fbf, 0x1ffd, 0x1fef, 0x1fc0, 0x1fce, 0x1fde, 0x1fdd, 0x1fdf, 0x00a8,
	0x02d8, 0x2013, 0x2696, 0x00d7, 0x2693, 0x2694, 0x2695, 0x003d, 0x0025, 0x0025,
	0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025,
	0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025,
	0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025,
	0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025,
	0x0025, 0x0485, 0x0486, 0x1dc0, 0x0307, 0x1dc1, 0x035c, 0x0308, 0x00bb, 0x0025,
	0x003b, 0x0023, 0x2018, 0x005c, 0x005e, 0x2016, 0x224c, 0x007e, 0x00b1, 0x00b7,
	0x25cb, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025,
	0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x032f, 0x0302, 0x2020,
	0x0307, 0x0025, 0x1fee, 0x1fcd, 0x1fcf, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025,
	0x2261, 0x2697, 0x2510, 0x0025, 0x0025, 0x0025, 0x00b7, 0x030a, 0x030c, 0x0328,
	0x007c, 0x002d, 0x2219, 0x002d, 0x2234, 0x2235, 0x0025, 0x0025, 0x2042, 0x00d7,
	0x002d, 0x00f7, 0x0338, 0x00b6, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025, 0x0025,
	0x0359, 0x002f, 0x1fbd, 0x1ffe, 0x1ffd, 0x1fef, 0x1fc0, 0x0313, 0x0314, 0x0323,
	};

/* Text Symbols (#) 0 - 1528
 * May be preceded by upper case (*) this table contains only upper case characters
 */
/* FIXME: #6, #8, #19, #20, #24, #25, #27, #30, #31, #53, #54, #56, #59,
          #61, #62, #64, #66, #68, #74, #87, #101-#134, #136-#150, #152-#199
	  #240-end */
#define MAX_TEXT_SYMBOLS 1529
unsigned int text_symbols[] = {
	0x0374, 0x03de, 0x03da, 0x03d8, 0x03d8, 0x03e0, 0x005f, 0x0023, 0x005f, 0x0301,
	0x03fd, 0x03ff, 0x2014, 0x203b, 0x2e16, 0x003e, 0x03f9, 0x002f, 0x003c, 0x0300,
	0x2220, 0x0053, 0x0375, 0x0039, 0x0023, 0x0282, 0x2e0f, 0x221a, 0x0023, 0x00b7,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0387, 0x003a, 0x22ee, 0x0023, 0x2059, 0x0023, 0x0023, 0x0023, 0x2283,
	0x0399, 0x0023, 0x0023, 0x0394, 0x0023, 0x0397, 0x0023, 0x03a7, 0x0023, 0x039c,
	0x002e, 0x0387, 0x02d9, 0x003a, 0x22ee, 0x002e, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0308, 0x0027, 0x1ffd, 0x1fef, 0x1fc0, 0x1ffe, 0x1fbd, 0x0023, 0x0023, 0x0023,
	0x2014, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x00f7, 0x22d6, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x2216, 0x2283, 0x0023, 0x223c, 0x0023, 0x0023, 0x2248,
	0x0023, 0x0023, 0x0023, 0x223d, 0x0023, 0x0023, 0x0023, 0x0023, 0x03fc, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x02d9, 0x222b, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x221e, 0x2014, 0x0023, 0x0023, 0x0023, 0x0023, 0x2310, 0x0023, 0x0023, 0x0023,
	0x0043, 0x2282, 0x20de, 0x0375, 0x0023, 0x05d0, 0x0023, 0x0023, 0x0023, 0x2309,
	0x0023, 0x2229, 0x0023, 0x2282, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x2643, 0x25a1, 0x264f, 0x264d, 0x2640, 0x2650, 0x2644, 0x2609, 0x263f, 0x263e,
	0x2642, 0x2651, 0x264c, 0x2648, 0x264e, 0x264a, 0x264b, 0x2653, 0x2652, 0x2649,
	0x260d, 0x263d, 0x260c, 0x2605, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x260b, 0x2651, 0x0023, 0x264c, 0x264e, 0x2126, 0x2127, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x2321, 0x0023, 0x2e0e, 0x003e, 0x2e0e, 0x2e0e, 0x003d, 0x2e0e, 0x0023, 0x2e0e,
	0x2e0e, 0x2e0e, 0x2e0e, 0x2e0e, 0x2e0e, 0x2251, 0x0023, 0x0023, 0x0023, 0x2022,
	0x2629, 0x2629, 0x2627, 0x003e, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0283, 0x2e10, 0x2e11, 0x2e10, 0x2e11, 0x01a7, 0x2e0f, 0x2573, 0x00b7,
	0x2014, 0x007c, 0x2627, 0x0023, 0x0023, 0x2627, 0x2138, 0x2192, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0283, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x0023, 0x0023, 0x2609, 0x0023, 0x2e0e, 0x2e0f, 0x2e14, 0x2e15, 0x203b, 0x0023,
	0x0023, 0x0023, 0x03fd, 0x0023, 0x0023, 0x0023, 0x0023, 0x2241, 0x0023, 0x2191,
	0x2629, 0x0023, 0x0023, 0x2e13, 0x2297, 0x271b, 0x2190, 0x02c6, 0x0023, 0x0023,
	0x0023, 0x035c, 0x2e12, 0x03da, 0x0311, 0x0023, 0x0023, 0x0023, 0x01b7, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x2263,
	0x2237, 0x25cc, 0x05e6, 0x05d1, 0x22bb, 0x2208, 0x2629, 0x0023, 0x0023, 0x0023,
	0x0023, 0x2191, 0x0305, 0x2319, 0x2423, 0x0023, 0x0023, 0x03dc, 0x0023, 0x0023,
	0x03f9, 0x0023, 0x22a2, 0x0023, 0x0393, 0x2309, 0x0023, 0x03a6, 0x03a1, 0x039c,
	0x0399, 0x0398, 0x2228, 0x039d, 0x2127, 0x0396, 0x0023, 0x0395, 0x2210, 0x0023,
	0x0023, 0x22cf, 0x0023, 0x039b, 0x22b8, 0x0036, 0x0039, 0x230b, 0x0394, 0x2207,

	0x2203, 0x0023, 0x0023, 0x03a0, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x03a9, 0x0023, 0x03bb,
	0x0023, 0x22a3, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x2200, 0x039f, 0x039e,
	0x0394, 0x0399, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x2441, 0x03a9, 0x0397, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x03a7, 0x03a4, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0391, 0x0392, 0x03a5, 0x03a8, 0x2044, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x22cf, 0x22d4, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x22b1, 0x22b0,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x223b,
	0x0023, 0x2201, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0661, 0x0662, 0x0663, 0x0664, 0x0665, 0x0666, 0x0667, 0x0668, 0x0669,
	0x0660, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x2733, 0x2282, 0x2283, 0x03a7, 0x002f, 0x22ba, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x223d, 0x0023, 0x0023, 0x0023, 0x0023, 0x223b, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x003c, 0x0023, 0x0023,
	0x2116, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,

	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x003c, 0x0282, 0x00f7, 0x005c, 0x0023, 0x0023, 0x0023, 0x0023,
	0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023, 0x0023
	};

/* Quotation Marks (") 0 - 60 */
/* FIXME: check pairs, find symbols for "50-"69 */
#define MAX_QUOTATION 61
unsigned int quotation_open[MAX_QUOTATION];
unsigned int quotation_open_symbol[] = {
	0x201c, 0x201e, 0x201e, 0x2018, 0x201a, 0x201a, 0x00ab, 0x3008, 0x201c, 0x0022,
	0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022,
	0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022,
	0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022,
	0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022,
	0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022,
	0x0022
	};
unsigned int quotation_close_symbol[] = {
	0x201d, 0x201d, 0x201d, 0x2019, 0x2019, 0x2019, 0x00bb, 0x3009, 0x201e, 0x0022,
	0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022,
	0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022,
	0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022,
	0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022,
	0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022,
	0x0022
	};


/* Brackets ([) 0 - 69 */
/* FIXME: check pairs, find symbols for [9, [10, [13, [14, [15, [33-[69 */
#define MAX_BRACKET 70
unsigned int bracket_open[MAX_BRACKET];
unsigned int bracket_open_symbol[] = {
	0x005b, 0x0028, 0x003c, 0x007b, 0x301a, 0x230a, 0x2308, 0x2308, 0x300c, 0x005b,
	0x005b, 0xfe59, 0x2192, 0x005b, 0x005b, 0x005b, 0x3016, 0x300e, 0x300a, 0x005b,
	0x23a7, 0x239f, 0x23a8, 0x23a9, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b,
	0x239b, 0x239c, 0x239d, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b,
	0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b,
	0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b,
	0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b, 0x005b,
	};
unsigned int bracket_close_symbol[] = {
	0x005d, 0x0029, 0x003e, 0x007d, 0x301b, 0x230b, 0x2309, 0x230b, 0x300d, 0x005d,
	0x005d, 0xfe5a, 0x2190, 0x005d, 0x005d, 0x005d, 0x3017, 0x300f, 0x300b, 0x005d,
	0x23ab, 0x23aa, 0x23ac, 0x23ad, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d,
	0x239e, 0x239f, 0x23a0, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d,
	0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d,
	0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d,
	0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d, 0x005d,
	};

/* Quasi-Brackets (<) 0 - 100 */
/* FIXME: decide on handling: for each letter, appropriate superscripts and subscripts should
 * be combined with every letter
 */
#define MAX_QUASI_BRACKET 101
unsigned int quasi_bracket_open[MAX_QUASI_BRACKET];
unsigned int quasi_bracket_open_symbol[] = {
	0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c,
	0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c,
	0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c,
	0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c,
	0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c,
	0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c,
	0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c,
	0x25ba, 0x0028, 0x0028, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c,
	0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c,
	0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c,
	0x003c,
	};
unsigned int quasi_bracket_close_symbol[] = {
	0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e,
	0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e,
	0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e,
	0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e,
	0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e,
	0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e,
	0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e,
	0x25c4, 0x0029, 0x0029, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e,
	0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e,
	0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e, 0x003e,
	0x003e,
	};

/* Non-Text ({) 0 - 71 */
/*FIXME: decide on representation */
#define MAX_NON_TEXT 72
unsigned int non_text_open[MAX_NON_TEXT];
unsigned int non_text_open_symbol[] = {
	0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b,
	0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b,
	0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b,
	0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b,
	0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b,
	0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b,
	0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b, 0x007b,
	0x007b, 0x007b,
	};
unsigned int non_text_close_symbol[] = {
	0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d,
	0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d,
	0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d,
	0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d,
	0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d,
	0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d,
	0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d, 0x007d,
	0x007d, 0x007d,
	};
#endif /* ifndef TLGCODES_H */
