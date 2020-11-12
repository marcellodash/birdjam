#include <ultra64.h>

Lights1 beer_sm64_material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx beer_beer_ci4_aligner[] = {gsSPEndDisplayList()};
u8 beer_beer_ci4[] = {
	0x1, 0x21, 0x21, 0x11, 0x21, 0x1, 0x11, 0x11, 0x1, 
	0x21, 0x11, 0x21, 0x11, 0x1, 0x11, 0x11, 0x1, 0x11, 
	0x11, 0x11, 0x11, 0x1, 0x11, 0x11, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x1, 0x11, 0x11, 0x1, 0x11, 0x11, 0x11, 
	0x13, 0x1, 0x11, 0x11, 0x4, 0x44, 0x11, 0x41, 0x10, 
	0x1, 0x11, 0x11, 0x1, 0x44, 0x45, 0x64, 0x1, 0x1, 
	0x11, 0x11, 0x1, 0x11, 0x46, 0x78, 0x41, 0x1, 0x11, 
	0x11, 0x1, 0x44, 0x47, 0x84, 0x13, 0x1, 0x11, 0x11, 
	0x4, 0x44, 0x11, 0x41, 0x13, 0x1, 0x99, 0x91, 0x0, 
	0x11, 0x11, 0x11, 0x13, 0x1, 0x9A, 0x91, 0x1, 0x11, 
	0x11, 0x11, 0x11, 0x1, 0x99, 0x91, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x1, 0x11, 0x11, 0x1, 0x11, 0x11, 0x11, 
	0x11, 0x1, 0xBB, 0xB1, 0x1, 0x21, 0x21, 0x21, 0x21, 
	0x1, 0xB9, 0xB1, 0x1, 0x21, 0x22, 0x12, 0x21, 0x1, 
	0xBB, 0xB1, 
};

Gfx beer_beer_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 beer_beer_ci4_pal_rgba16[] = {
	0xF8, 0x1, 0xFF, 0xFF, 0x6A, 0xD7, 0xED, 0xAD, 0x64, 
	0xBF, 0x9D, 0x2F, 0xB6, 0x39, 0xC6, 0xBB, 0xB6, 0x37, 
	0xB5, 0xAD, 0x73, 0x5B, 0xCD, 0xEF, 
};

Vtx beer_Beer_mesh_vtx_0[28] = {
	{{{120, -17, -72},0, {343, 406},{0x56, 0xB3, 0xCC, 0xFF}}},
	{{{120, -17, 72},0, {343, 495},{0x56, 0xB3, 0x34, 0xFF}}},
	{{{0, -17, 135},0, {417, 534},{0x0, 0xB2, 0x64, 0xFF}}},
	{{{0, -17, -135},0, {417, 368},{0x0, 0xB2, 0x9C, 0xFF}}},
	{{{-120, -17, -72},0, {491, 406},{0xAA, 0xB3, 0xCC, 0xFF}}},
	{{{-120, -17, 72},0, {491, 495},{0xAA, 0xB3, 0x34, 0xFF}}},
	{{{0, 432, -135},0, {417, 236},{0x0, 0x4E, 0x9C, 0xFF}}},
	{{{120, 432, 72},0, {491, 363},{0x56, 0x4D, 0x34, 0xFF}}},
	{{{120, 432, -72},0, {491, 274},{0x56, 0x4D, 0xCC, 0xFF}}},
	{{{0, 432, 135},0, {417, 402},{0x0, 0x4E, 0x64, 0xFF}}},
	{{{-120, 432, 72},0, {343, 363},{0xAA, 0x4D, 0x34, 0xFF}}},
	{{{-120, 432, -72},0, {343, 274},{0xAA, 0x4D, 0xCC, 0xFF}}},
	{{{0, -17, 135},0, {-16, 496},{0x0, 0xB2, 0x64, 0xFF}}},
	{{{0, 432, 135},0, {337, 496},{0x0, 0x4E, 0x64, 0xFF}}},
	{{{-120, 432, 72},0, {337, 413},{0xAA, 0x4D, 0x34, 0xFF}}},
	{{{-120, -17, 72},0, {-16, 413},{0xAA, 0xB3, 0x34, 0xFF}}},
	{{{-120, -17, 72},0, {-16, 413},{0xAA, 0xB3, 0x34, 0xFF}}},
	{{{-120, 432, 72},0, {337, 413},{0xAA, 0x4D, 0x34, 0xFF}}},
	{{{-120, 432, -72},0, {337, 323},{0xAA, 0x4D, 0xCC, 0xFF}}},
	{{{-120, -17, -72},0, {-16, 323},{0xAA, 0xB3, 0xCC, 0xFF}}},
	{{{0, 432, -135},0, {337, 240},{0x0, 0x4E, 0x9C, 0xFF}}},
	{{{0, -17, -135},0, {-16, 240},{0x0, 0xB2, 0x9C, 0xFF}}},
	{{{120, -17, -72},0, {-16, 157},{0x56, 0xB3, 0xCC, 0xFF}}},
	{{{120, 432, -72},0, {337, 157},{0x56, 0x4D, 0xCC, 0xFF}}},
	{{{120, -17, 72},0, {-16, 67},{0x56, 0xB3, 0x34, 0xFF}}},
	{{{120, 432, 72},0, {337, 67},{0x56, 0x4D, 0x34, 0xFF}}},
	{{{0, -17, 135},0, {-16, -16},{0x0, 0xB2, 0x64, 0xFF}}},
	{{{0, 432, 135},0, {337, -16},{0x0, 0x4E, 0x64, 0xFF}}},
};

Gfx beer_Beer_mesh_tri_0[] = {
	gsSPVertex(beer_Beer_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 9, 7, 0),
	gsSP1Triangle(6, 10, 9, 0),
	gsSP1Triangle(6, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(beer_Beer_mesh_vtx_0 + 16, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 4, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSPEndDisplayList(),
};


Gfx mat_beer_sm64_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, beer_beer_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 11),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 8, beer_beer_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 1, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 30, 60),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPSetLights1(beer_sm64_material_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_beer_sm64_material[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx beer_Beer_mesh[] = {
	gsSPDisplayList(mat_beer_sm64_material),
	gsSPDisplayList(beer_Beer_mesh_tri_0),
	gsSPDisplayList(mat_revert_beer_sm64_material),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};


