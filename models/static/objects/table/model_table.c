#include <ultra64.h>

Lights1 table_Table_f3d_lights = gdSPDefLights1(
	0x29, 0x1D, 0x10,
	0x53, 0x3B, 0x20, 0x28, 0x28, 0x28);

Vtx table_Table_mesh_vtx_0[92] = {
	{{{608, 189, 436},0, {748, 372},{0x47, 0x52, 0x43, 0xFF}}},
	{{{608, 189, -436},0, {880, 240},{0x47, 0x52, 0xBD, 0xFF}}},
	{{{-608, 189, -436},0, {748, 240},{0xB9, 0x52, 0xBD, 0xFF}}},
	{{{-568, 168, -440},0, {368, 112},{0x23, 0xC9, 0x93, 0xFF}}},
	{{{-610, 168, -440},0, {368, -16},{0xA8, 0xB, 0xA6, 0xFF}}},
	{{{-608, 189, -436},0, {624, 116},{0xB9, 0x52, 0xBD, 0xFF}}},
	{{{568, 168, 440},0, {368, 112},{0xDD, 0xC9, 0x6D, 0xFF}}},
	{{{610, 168, 440},0, {368, -16},{0x58, 0xB, 0x5A, 0xFF}}},
	{{{608, 189, 436},0, {624, 116},{0x47, 0x52, 0x43, 0xFF}}},
	{{{-608, 189, -436},0, {880, 240},{0xB9, 0x52, 0xBD, 0xFF}}},
	{{{-608, 189, 436},0, {880, 372},{0xB9, 0x52, 0x43, 0xFF}}},
	{{{-608, 189, 436},0, {624, -16},{0xB9, 0x52, 0x43, 0xFF}}},
	{{{-610, 168, 440},0, {368, -16},{0xA8, 0xB, 0x5A, 0xFF}}},
	{{{-568, 168, 440},0, {368, 112},{0x23, 0xC9, 0x6D, 0xFF}}},
	{{{568, 168, 440},0, {368, 176},{0xDD, 0xC9, 0x6D, 0xFF}}},
	{{{610, -231, 394},0, {176, 304},{0x2F, 0x0, 0x8A, 0xFF}}},
	{{{568, 168, 440},0, {176, 240},{0xDD, 0xC9, 0x6D, 0xFF}}},
	{{{610, 168, 394},0, {176, 304},{0x69, 0xC0, 0xE0, 0xFF}}},
	{{{568, -231, 440},0, {176, 240},{0x8C, 0x0, 0x33, 0xFF}}},
	{{{-568, 168, 440},0, {176, 240},{0x23, 0xC9, 0x6D, 0xFF}}},
	{{{-610, -231, 394},0, {176, 304},{0xD1, 0x0, 0x8A, 0xFF}}},
	{{{-610, 168, 394},0, {176, 304},{0x97, 0xC0, 0xE0, 0xFF}}},
	{{{-568, -231, 440},0, {176, 240},{0x74, 0x0, 0x33, 0xFF}}},
	{{{-568, 168, 440},0, {240, 401},{0x23, 0xC9, 0x6D, 0xFF}}},
	{{{-568, 168, -440},0, {272, 401},{0x23, 0xC9, 0x93, 0xFF}}},
	{{{568, 168, 440},0, {272, 368},{0xDD, 0xC9, 0x6D, 0xFF}}},
	{{{568, 168, -440},0, {240, 401},{0xDD, 0xC9, 0x93, 0xFF}}},
	{{{568, -231, 440},0, {368, 48},{0x8C, 0x0, 0x33, 0xFF}}},
	{{{610, 168, 440},0, {368, -16},{0x58, 0xB, 0x5A, 0xFF}}},
	{{{568, 168, 440},0, {368, 48},{0xDD, 0xC9, 0x6D, 0xFF}}},
	{{{610, -231, 440},0, {368, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-610, 168, 440},0, {368, -16},{0xA8, 0xB, 0x5A, 0xFF}}},
	{{{-568, -231, 440},0, {368, 48},{0x74, 0x0, 0x33, 0xFF}}},
	{{{-568, 168, 440},0, {368, 48},{0x23, 0xC9, 0x6D, 0xFF}}},
	{{{-610, -231, 440},0, {368, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{568, 168, 440},0, {240, 368},{0xDD, 0xC9, 0x6D, 0xFF}}},
	{{{610, 168, -394},0, {207, 432},{0x69, 0xC0, 0x20, 0xFF}}},
	{{{610, 168, 394},0, {176, 432},{0x69, 0xC0, 0xE0, 0xFF}}},
	{{{568, 168, -440},0, {240, 401},{0xDD, 0xC9, 0x93, 0xFF}}},
	{{{608, 189, -436},0, {624, -16},{0x47, 0x52, 0xBD, 0xFF}}},
	{{{610, 168, -440},0, {368, -16},{0x58, 0xB, 0xA6, 0xFF}}},
	{{{568, 168, -440},0, {368, 112},{0xDD, 0xC9, 0x93, 0xFF}}},
	{{{-608, 189, -436},0, {624, 116},{0xB9, 0x52, 0xBD, 0xFF}}},
	{{{-568, 168, -440},0, {368, 176},{0x23, 0xC9, 0x93, 0xFF}}},
	{{{568, 168, -440},0, {176, 240},{0xDD, 0xC9, 0x93, 0xFF}}},
	{{{610, -231, -394},0, {176, 304},{0x2F, 0x0, 0x76, 0xFF}}},
	{{{610, 168, -394},0, {176, 304},{0x69, 0xC0, 0x20, 0xFF}}},
	{{{568, 168, -440},0, {176, 240},{0xDD, 0xC9, 0x93, 0xFF}}},
	{{{568, -231, -440},0, {176, 240},{0x8C, 0x0, 0xCD, 0xFF}}},
	{{{610, -231, -394},0, {176, 304},{0x2F, 0x0, 0x76, 0xFF}}},
	{{{-610, -231, -394},0, {176, 304},{0xD1, 0x0, 0x76, 0xFF}}},
	{{{-568, 168, -440},0, {176, 240},{0x23, 0xC9, 0x93, 0xFF}}},
	{{{-610, 168, -394},0, {176, 304},{0x97, 0xC0, 0x20, 0xFF}}},
	{{{-568, -231, -440},0, {176, 240},{0x74, 0x0, 0xCD, 0xFF}}},
	{{{-610, 168, 440},0, {368, 1008},{0xA8, 0xB, 0x5A, 0xFF}}},
	{{{-608, 189, 436},0, {624, 876},{0xB9, 0x52, 0x43, 0xFF}}},
	{{{-610, 168, 394},0, {368, 944},{0x97, 0xC0, 0xE0, 0xFF}}},
	{{{-610, -231, 440},0, {368, 1008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-610, -231, 394},0, {368, 944},{0xD1, 0x0, 0x8A, 0xFF}}},
	{{{610, 168, -440},0, {368, -16},{0x58, 0xB, 0xA6, 0xFF}}},
	{{{568, -231, -440},0, {368, 48},{0x8C, 0x0, 0xCD, 0xFF}}},
	{{{568, 168, -440},0, {368, 48},{0xDD, 0xC9, 0x93, 0xFF}}},
	{{{610, -231, -440},0, {368, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-568, -231, -440},0, {368, 48},{0x74, 0x0, 0xCD, 0xFF}}},
	{{{-610, 168, -440},0, {368, -16},{0xA8, 0xB, 0xA6, 0xFF}}},
	{{{-568, 168, -440},0, {368, 48},{0x23, 0xC9, 0x93, 0xFF}}},
	{{{-610, -231, -440},0, {368, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-568, 168, -440},0, {240, 368},{0x23, 0xC9, 0x93, 0xFF}}},
	{{{-610, 168, 394},0, {207, 432},{0x97, 0xC0, 0xE0, 0xFF}}},
	{{{-610, 168, -394},0, {176, 432},{0x97, 0xC0, 0x20, 0xFF}}},
	{{{-568, 168, 440},0, {240, 401},{0x23, 0xC9, 0x6D, 0xFF}}},
	{{{610, 168, -440},0, {368, 1008},{0x58, 0xB, 0xA6, 0xFF}}},
	{{{608, 189, -436},0, {624, 876},{0x47, 0x52, 0xBD, 0xFF}}},
	{{{610, 168, -394},0, {368, 944},{0x69, 0xC0, 0x20, 0xFF}}},
	{{{610, -231, -440},0, {368, 1008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{610, -231, -394},0, {368, 944},{0x2F, 0x0, 0x76, 0xFF}}},
	{{{610, -231, 440},0, {368, 1008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{610, -231, 394},0, {368, 944},{0x2F, 0x0, 0x8A, 0xFF}}},
	{{{610, 168, 394},0, {368, 944},{0x69, 0xC0, 0xE0, 0xFF}}},
	{{{610, -231, 440},0, {368, 1008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{610, 168, 394},0, {368, 944},{0x69, 0xC0, 0xE0, 0xFF}}},
	{{{610, 168, 440},0, {368, 1008},{0x58, 0xB, 0x5A, 0xFF}}},
	{{{608, 189, 436},0, {624, 1008},{0x47, 0x52, 0x43, 0xFF}}},
	{{{608, 189, -436},0, {624, 876},{0x47, 0x52, 0xBD, 0xFF}}},
	{{{610, 168, -394},0, {368, 850},{0x69, 0xC0, 0x20, 0xFF}}},
	{{{-610, -231, -440},0, {368, 1008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-610, -231, -394},0, {368, 944},{0xD1, 0x0, 0x76, 0xFF}}},
	{{{-610, 168, -394},0, {368, 944},{0x97, 0xC0, 0x20, 0xFF}}},
	{{{-610, 168, -440},0, {368, 1008},{0xA8, 0xB, 0xA6, 0xFF}}},
	{{{-608, 189, -436},0, {624, 1008},{0xB9, 0x52, 0xBD, 0xFF}}},
	{{{-608, 189, 436},0, {624, 876},{0xB9, 0x52, 0x43, 0xFF}}},
	{{{-610, 168, 394},0, {368, 850},{0x97, 0xC0, 0xE0, 0xFF}}},
};

Gfx table_Table_mesh_tri_0[] = {
	gsSPVertex(table_Table_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(0, 9, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(8, 11, 13, 0),
	gsSP1Triangle(13, 14, 8, 0),
	gsSPVertex(table_Table_mesh_vtx_0 + 15, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(table_Table_mesh_vtx_0 + 31, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(table_Table_mesh_vtx_0 + 47, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 6, 4, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(table_Table_mesh_vtx_0 + 63, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(10, 11, 8, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(table_Table_mesh_vtx_0 + 79, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(1, 5, 4, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(8, 12, 11, 0),
	gsSPEndDisplayList(),
};


Gfx mat_table_Table_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(table_Table_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx table_Table_mesh[] = {
	gsSPDisplayList(mat_table_Table_f3d),
	gsSPDisplayList(table_Table_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};



