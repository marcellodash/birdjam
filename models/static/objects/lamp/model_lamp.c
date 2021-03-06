#include <ultra64.h>

Lights1 lamp_lampouter_f3d_lights = gdSPDefLights1(
	0xB, 0xA, 0xD,
	0x17, 0x15, 0x1B, 0x28, 0x28, 0x28);

Lights1 lamp_lampinner_f3d_lights = gdSPDefLights1(
	0xE, 0x6, 0x6,
	0x1D, 0xD, 0xC, 0x28, 0x28, 0x28);

Lights1 lamp_light_f3d_lights = gdSPDefLights1(
	0x7F, 0x69, 0x59,
	0xFE, 0xD2, 0xB2, 0x28, 0x28, 0x28);

Vtx lamp_Lamp_mesh_vtx_0[110] = {
	{{{128, -655, 128},0, {531, 752},{0x4B, 0x45, 0x4B, 0xFF}}},
	{{{-128, -682, 128},0, {368, 496},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{128, -682, 128},0, {368, 752},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{-128, -655, 128},0, {531, 496},{0xB5, 0x45, 0x4B, 0xFF}}},
	{{{-128, -682, -128},0, {368, 240},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{-128, -655, -128},0, {531, 240},{0xB5, 0x45, 0xB5, 0xFF}}},
	{{{128, -655, -128},0, {275, 496},{0x4B, 0x45, 0xB5, 0xFF}}},
	{{{128, -682, 128},0, {112, 240},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{128, -682, -128},0, {112, 496},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{128, -655, 128},0, {275, 240},{0x4B, 0x45, 0x4B, 0xFF}}},
	{{{-58, 637, -78},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{78, 673, -78},0, {-16, 1008},{0x3A, 0x61, 0xC6, 0xFF}}},
	{{{58, 637, -78},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-78, 673, -78},0, {-16, 1008},{0xC6, 0x61, 0xC6, 0xFF}}},
	{{{-17, 696, -17},0, {-16, 1008},{0xD3, 0x6E, 0xD3, 0xFF}}},
	{{{-17, 696, 17},0, {-16, 1008},{0xD3, 0x6E, 0x2D, 0xFF}}},
	{{{-17, 696, 17},0, {-16, 1008},{0xD3, 0x6E, 0x2D, 0xFF}}},
	{{{-78, 673, -78},0, {-16, 1008},{0xC6, 0x61, 0xC6, 0xFF}}},
	{{{-78, 673, 78},0, {-16, 1008},{0xC6, 0x61, 0x3A, 0xFF}}},
	{{{-78, 637, 58},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-78, 637, -58},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{78, 673, 78},0, {-16, 1008},{0x3A, 0x61, 0x3A, 0xFF}}},
	{{{58, 637, 78},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-58, 637, 78},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{17, 696, 17},0, {-16, 1008},{0x2D, 0x6E, 0x2D, 0xFF}}},
	{{{17, 696, -17},0, {-16, 1008},{0x2D, 0x6E, 0xD3, 0xFF}}},
	{{{78, 673, -78},0, {-16, 1008},{0x3A, 0x61, 0xC6, 0xFF}}},
	{{{78, 637, -58},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{78, 637, 58},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-17, 696, -17},0, {-16, 1008},{0xD3, 0x6E, 0xD3, 0xFF}}},
	{{{12, 711, -12},0, {-16, 1008},{0x3D, 0x5D, 0xC3, 0xFF}}},
	{{{-12, 711, -12},0, {-16, 1008},{0xC3, 0x5D, 0xC3, 0xFF}}},
	{{{-17, 696, 17},0, {-16, 1008},{0xD3, 0x6E, 0x2D, 0xFF}}},
	{{{-12, 711, 12},0, {-16, 1008},{0xC3, 0x5D, 0x3D, 0xFF}}},
	{{{-12, 711, -12},0, {-16, 1008},{0xC3, 0x5D, 0xC3, 0xFF}}},
	{{{17, 696, 17},0, {-16, 1008},{0x2D, 0x6E, 0x2D, 0xFF}}},
	{{{12, 711, 12},0, {-16, 1008},{0x3D, 0x5D, 0x3D, 0xFF}}},
	{{{17, 696, -17},0, {-16, 1008},{0x2D, 0x6E, 0xD3, 0xFF}}},
	{{{12, 711, -12},0, {-16, 1008},{0x3D, 0x5D, 0xC3, 0xFF}}},
	{{{-128, -655, -128},0, {787, 496},{0xB5, 0x45, 0xB5, 0xFF}}},
	{{{128, -655, -128},0, {787, 240},{0x4B, 0x45, 0xB5, 0xFF}}},
	{{{128, -682, -128},0, {624, 240},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{-128, -682, -128},0, {624, 496},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{-128, -682, 128},0, {368, 496},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{128, -682, 128},0, {112, 240},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{78, 673, -78},0, {-16, 1008},{0x3A, 0x61, 0xC6, 0xFF}}},
	{{{-78, 673, -78},0, {-16, 1008},{0xC6, 0x61, 0xC6, 0xFF}}},
	{{{-78, 673, 78},0, {-16, 1008},{0xC6, 0x61, 0x3A, 0xFF}}},
	{{{78, 673, 78},0, {-16, 1008},{0x3A, 0x61, 0x3A, 0xFF}}},
	{{{78, 673, -78},0, {-16, 1008},{0x3A, 0x61, 0xC6, 0xFF}}},
	{{{-78, 673, 78},0, {-16, 1008},{0xC6, 0x61, 0x3A, 0xFF}}},
	{{{-35, 432, 35},0, {531, 845},{0xBE, 0xA9, 0x42, 0xFF}}},
	{{{-78, 461, 58},0, {531, 862},{0x9C, 0xB2, 0x0, 0xFF}}},
	{{{-78, 461, -58},0, {531, 880},{0x15, 0xD6, 0x76, 0xFF}}},
	{{{-78, 461, 78},0, {531, 845},{0xB0, 0xC7, 0x50, 0xFF}}},
	{{{-58, 461, 78},0, {514, 845},{0x0, 0xD2, 0x76, 0xFF}}},
	{{{-58, 461, 78},0, {496, 845},{0x4D, 0xBE, 0x4C, 0xFF}}},
	{{{35, 432, 35},0, {461, 845},{0x42, 0xA9, 0x42, 0xFF}}},
	{{{35, -639, 35},0, {461, 845},{0x2E, 0x6D, 0x2E, 0xFF}}},
	{{{-35, -639, 35},0, {531, 845},{0xD2, 0x6D, 0x2E, 0xFF}}},
	{{{-35, 432, -35},0, {531, 915},{0xBE, 0xA9, 0xBE, 0xFF}}},
	{{{-78, 461, -58},0, {531, 898},{0x9F, 0xC5, 0x38, 0xFF}}},
	{{{-78, 461, -78},0, {531, 915},{0xB0, 0xC7, 0xB0, 0xFF}}},
	{{{-78, 637, -58},0, {531, 898},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-78, 461, -78},0, {531, 915},{0xB0, 0xC7, 0xB0, 0xFF}}},
	{{{-78, 637, -58},0, {531, 898},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-78, 673, -78},0, {531, 915},{0xC6, 0x61, 0xC6, 0xFF}}},
	{{{-58, 637, -78},0, {514, 915},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-58, 461, -78},0, {514, 915},{0x0, 0xB2, 0x9C, 0xFF}}},
	{{{-35, 432, -35},0, {531, 915},{0xBE, 0xA9, 0xBE, 0xFF}}},
	{{{58, 461, -78},0, {496, 915},{0xC8, 0xD0, 0x67, 0xFF}}},
	{{{35, 432, -35},0, {461, 915},{0x42, 0xA9, 0xBE, 0xFF}}},
	{{{58, 461, -78},0, {478, 915},{0x0, 0x97, 0xB9, 0xFF}}},
	{{{78, 461, -78},0, {461, 915},{0x50, 0xC7, 0xB0, 0xFF}}},
	{{{58, 637, -78},0, {478, 915},{0x0, 0x0, 0x81, 0xFF}}},
	{{{78, 673, -78},0, {461, 915},{0x3A, 0x61, 0xC6, 0xFF}}},
	{{{78, 637, -58},0, {461, 898},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{78, 461, -58},0, {461, 898},{0x64, 0xB2, 0x0, 0xFF}}},
	{{{78, 461, 58},0, {461, 880},{0xCD, 0x97, 0x33, 0xFF}}},
	{{{35, 432, 35},0, {461, 845},{0x42, 0xA9, 0x42, 0xFF}}},
	{{{78, 461, 58},0, {461, 862},{0x61, 0xC5, 0x38, 0xFF}}},
	{{{35, 432, 35},0, {461, 845},{0x42, 0xA9, 0x42, 0xFF}}},
	{{{78, 461, 58},0, {461, 880},{0xCD, 0x97, 0x33, 0xFF}}},
	{{{78, 461, 78},0, {461, 845},{0x50, 0xC7, 0x50, 0xFF}}},
	{{{78, 637, 58},0, {461, 862},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{78, 673, 78},0, {461, 845},{0x3A, 0x61, 0x3A, 0xFF}}},
	{{{58, 637, 78},0, {478, 845},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{58, 461, 78},0, {478, 845},{0x0, 0xB2, 0x64, 0xFF}}},
	{{{-58, 461, 78},0, {496, 845},{0x4D, 0xBE, 0x4C, 0xFF}}},
	{{{35, -639, -35},0, {461, 915},{0x2E, 0x6D, 0xD2, 0xFF}}},
	{{{35, 432, -35},0, {461, 915},{0x42, 0xA9, 0xBE, 0xFF}}},
	{{{-35, -639, -35},0, {531, 915},{0xD2, 0x6D, 0xD2, 0xFF}}},
	{{{-128, -655, -128},0, {624, 1008},{0xB5, 0x45, 0xB5, 0xFF}}},
	{{{128, -655, -128},0, {368, 1008},{0x4B, 0x45, 0xB5, 0xFF}}},
	{{{35, -639, 35},0, {461, 845},{0x2E, 0x6D, 0x2E, 0xFF}}},
	{{{128, -655, 128},0, {368, 752},{0x4B, 0x45, 0x4B, 0xFF}}},
	{{{-35, -639, 35},0, {531, 845},{0xD2, 0x6D, 0x2E, 0xFF}}},
	{{{128, -655, 128},0, {368, 752},{0x4B, 0x45, 0x4B, 0xFF}}},
	{{{35, -639, 35},0, {461, 845},{0x2E, 0x6D, 0x2E, 0xFF}}},
	{{{-128, -655, 128},0, {624, 752},{0xB5, 0x45, 0x4B, 0xFF}}},
	{{{-35, -639, -35},0, {531, 915},{0xD2, 0x6D, 0xD2, 0xFF}}},
	{{{-35, 432, -35},0, {531, 915},{0xBE, 0xA9, 0xBE, 0xFF}}},
	{{{35, 432, -35},0, {461, 915},{0x42, 0xA9, 0xBE, 0xFF}}},
	{{{-128, -655, -128},0, {624, 1008},{0xB5, 0x45, 0xB5, 0xFF}}},
	{{{-78, 461, 78},0, {531, 845},{0xB0, 0xC7, 0x50, 0xFF}}},
	{{{-78, 637, 58},0, {531, 862},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-78, 461, 58},0, {531, 862},{0x9C, 0xB2, 0x0, 0xFF}}},
	{{{-78, 673, 78},0, {531, 845},{0xC6, 0x61, 0x3A, 0xFF}}},
	{{{-58, 637, 78},0, {514, 845},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-58, 461, 78},0, {514, 845},{0x0, 0xD2, 0x76, 0xFF}}},
};

Gfx lamp_Lamp_mesh_tri_0[] = {
	gsSPVertex(lamp_Lamp_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 9, 7, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 13, 11, 0),
	gsSP1Triangle(14, 11, 13, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(lamp_Lamp_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(0, 2, 5, 0),
	gsSP1Triangle(6, 5, 2, 0),
	gsSP1Triangle(6, 2, 7, 0),
	gsSP1Triangle(0, 5, 8, 0),
	gsSP1Triangle(5, 9, 8, 0),
	gsSP1Triangle(5, 10, 9, 0),
	gsSP1Triangle(11, 10, 5, 0),
	gsSP1Triangle(11, 5, 12, 0),
	gsSP1Triangle(13, 9, 10, 0),
	gsSP1Triangle(13, 14, 9, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSP1Triangle(0, 15, 13, 0),
	gsSPVertex(lamp_Lamp_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(4, 6, 2, 0),
	gsSP1Triangle(4, 2, 1, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(11, 9, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(lamp_Lamp_mesh_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 6, 4, 0),
	gsSP1Triangle(6, 3, 7, 0),
	gsSP1Triangle(7, 3, 8, 0),
	gsSP1Triangle(3, 9, 8, 0),
	gsSP1Triangle(10, 9, 3, 0),
	gsSP1Triangle(10, 3, 11, 0),
	gsSP1Triangle(11, 3, 12, 0),
	gsSP1Triangle(12, 3, 5, 0),
	gsSP1Triangle(13, 12, 5, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(lamp_Lamp_mesh_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(5, 0, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(9, 12, 13, 0),
	gsSP1Triangle(7, 9, 13, 0),
	gsSP1Triangle(7, 13, 14, 0),
	gsSP1Triangle(15, 7, 14, 0),
	gsSPVertex(lamp_Lamp_mesh_vtx_0 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(3, 6, 7, 0),
	gsSP1Triangle(1, 3, 7, 0),
	gsSP1Triangle(1, 7, 8, 0),
	gsSP1Triangle(9, 10, 1, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(9, 13, 12, 0),
	gsSP1Triangle(14, 13, 9, 0),
	gsSP1Triangle(9, 1, 14, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(lamp_Lamp_mesh_vtx_0 + 96, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 3, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(8, 12, 11, 0),
	gsSP1Triangle(8, 13, 12, 0),
	gsSPEndDisplayList(),
};Vtx lamp_Lamp_mesh_vtx_1[28] = {
	{{{78, 461, 78},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-78, 461, -78},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-78, 461, 78},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{78, 461, -78},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-58, 461, 78},0, {514, 845},{0x4D, 0xBE, 0x4C, 0xFF}}},
	{{{-78, 637, 58},0, {531, 862},{0x32, 0x96, 0xCE, 0xFF}}},
	{{{-58, 637, 78},0, {514, 845},{0x32, 0x96, 0xCE, 0xFF}}},
	{{{-78, 461, 58},0, {531, 862},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{58, 461, 78},0, {478, 845},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{78, 637, 58},0, {461, 862},{0xCE, 0x96, 0xCE, 0xFF}}},
	{{{78, 461, 58},0, {461, 862},{0xCD, 0x97, 0x33, 0xFF}}},
	{{{58, 637, 78},0, {478, 845},{0xCE, 0x96, 0xCE, 0xFF}}},
	{{{-58, 637, 78},0, {-16, 1008},{0x32, 0x96, 0xCE, 0xFF}}},
	{{{58, 637, -78},0, {-16, 1008},{0xCE, 0x96, 0x32, 0xFF}}},
	{{{58, 637, 78},0, {-16, 1008},{0xCE, 0x96, 0xCE, 0xFF}}},
	{{{-58, 637, -78},0, {-16, 1008},{0x32, 0x96, 0x32, 0xFF}}},
	{{{58, 637, 78},0, {-16, 1008},{0xCE, 0x96, 0xCE, 0xFF}}},
	{{{78, 637, -58},0, {461, 898},{0xCE, 0x96, 0x32, 0xFF}}},
	{{{78, 637, 58},0, {461, 862},{0xCE, 0x96, 0xCE, 0xFF}}},
	{{{58, 637, -78},0, {478, 915},{0xCE, 0x96, 0x32, 0xFF}}},
	{{{58, 461, -78},0, {478, 915},{0xC8, 0xD0, 0x67, 0xFF}}},
	{{{78, 461, -58},0, {461, 898},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-78, 637, -58},0, {531, 898},{0x32, 0x96, 0x32, 0xFF}}},
	{{{-58, 637, 78},0, {-16, 1008},{0x32, 0x96, 0xCE, 0xFF}}},
	{{{-78, 637, 58},0, {531, 862},{0x32, 0x96, 0xCE, 0xFF}}},
	{{{-58, 637, -78},0, {514, 915},{0x32, 0x96, 0x32, 0xFF}}},
	{{{-58, 461, -78},0, {514, 915},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-78, 461, -58},0, {531, 898},{0x15, 0xD6, 0x76, 0xFF}}},
};

Gfx lamp_Lamp_mesh_tri_1[] = {
	gsSPVertex(lamp_Lamp_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(lamp_Lamp_mesh_vtx_1 + 16, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(4, 5, 1, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 9, 7, 0),
	gsSP1Triangle(6, 10, 9, 0),
	gsSP1Triangle(6, 11, 10, 0),
	gsSPEndDisplayList(),
};Vtx lamp_Lamp_mesh_vtx_2[53] = {
	{{{0, 647, -15},0, {667, 155},{0x0, 0x38, 0x8E, 0xFF}}},
	{{{0, 698, 0},0, {581, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{13, 647, -7},0, {496, 155},{0x62, 0x39, 0xC7, 0xFF}}},
	{{{22, 631, -13},0, {496, 325},{0x69, 0x26, 0xC4, 0xFF}}},
	{{{22, 631, 13},0, {325, 325},{0x69, 0x26, 0x3C, 0xFF}}},
	{{{13, 647, 7},0, {325, 155},{0x62, 0x39, 0x39, 0xFF}}},
	{{{0, 698, 0},0, {411, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 631, 26},0, {155, 325},{0x0, 0x26, 0x79, 0xFF}}},
	{{{0, 647, 15},0, {155, 155},{0x0, 0x38, 0x72, 0xFF}}},
	{{{0, 698, 0},0, {240, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-22, 631, 13},0, {-16, 325},{0x97, 0x26, 0x3C, 0xFF}}},
	{{{-13, 647, 7},0, {-16, 155},{0x9E, 0x39, 0x39, 0xFF}}},
	{{{0, 698, 0},0, {69, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-24, 598, 14},0, {-16, 496},{0x94, 0xE9, 0x3F, 0xFF}}},
	{{{0, 598, 28},0, {155, 496},{0x0, 0xE9, 0x7D, 0xFF}}},
	{{{24, 598, 14},0, {325, 496},{0x6C, 0xE9, 0x3F, 0xFF}}},
	{{{22, 631, -13},0, {496, 325},{0x69, 0x26, 0xC4, 0xFF}}},
	{{{24, 598, 14},0, {325, 496},{0x6C, 0xE9, 0x3F, 0xFF}}},
	{{{24, 598, -14},0, {496, 496},{0x6C, 0xE9, 0xC1, 0xFF}}},
	{{{0, 631, -26},0, {667, 325},{0x0, 0x26, 0x87, 0xFF}}},
	{{{0, 598, -28},0, {667, 496},{0x0, 0xE9, 0x83, 0xFF}}},
	{{{-22, 631, -13},0, {837, 325},{0x97, 0x26, 0xC4, 0xFF}}},
	{{{-24, 598, -14},0, {837, 496},{0x94, 0xE9, 0xC1, 0xFF}}},
	{{{-22, 631, 13},0, {1008, 325},{0x97, 0x26, 0x3C, 0xFF}}},
	{{{-24, 598, 14},0, {1008, 496},{0x94, 0xE9, 0x3F, 0xFF}}},
	{{{-13, 647, 7},0, {1008, 155},{0x9E, 0x39, 0x39, 0xFF}}},
	{{{-13, 647, -7},0, {837, 155},{0x9E, 0x39, 0xC7, 0xFF}}},
	{{{0, 698, 0},0, {923, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 647, -15},0, {667, 155},{0x0, 0x38, 0x8E, 0xFF}}},
	{{{0, 698, 0},0, {752, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 565, 0},0, {581, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 571, -15},0, {667, 837},{0x0, 0xAA, 0xA2, 0xFF}}},
	{{{13, 571, -7},0, {496, 837},{0x51, 0xAB, 0xD1, 0xFF}}},
	{{{0, 598, -28},0, {667, 667},{0x0, 0xE9, 0x83, 0xFF}}},
	{{{-24, 598, -14},0, {837, 667},{0x94, 0xE9, 0xC1, 0xFF}}},
	{{{-13, 571, -7},0, {837, 837},{0xAF, 0xAB, 0xD1, 0xFF}}},
	{{{0, 565, 0},0, {752, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-24, 598, 14},0, {1008, 667},{0x94, 0xE9, 0x3F, 0xFF}}},
	{{{-13, 571, 7},0, {1008, 837},{0xAF, 0xAB, 0x2F, 0xFF}}},
	{{{0, 565, 0},0, {923, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 565, 0},0, {411, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{13, 571, 7},0, {325, 837},{0x51, 0xAB, 0x2F, 0xFF}}},
	{{{24, 598, -14},0, {496, 667},{0x6C, 0xE9, 0xC1, 0xFF}}},
	{{{24, 598, 14},0, {325, 667},{0x6C, 0xE9, 0x3F, 0xFF}}},
	{{{0, 571, 15},0, {155, 837},{0x0, 0xAA, 0x5E, 0xFF}}},
	{{{0, 598, 28},0, {155, 667},{0x0, 0xE9, 0x7D, 0xFF}}},
	{{{0, 598, 28},0, {155, 667},{0x0, 0xE9, 0x7D, 0xFF}}},
	{{{-13, 571, 7},0, {-16, 837},{0xAF, 0xAB, 0x2F, 0xFF}}},
	{{{0, 571, 15},0, {155, 837},{0x0, 0xAA, 0x5E, 0xFF}}},
	{{{-24, 598, 14},0, {-16, 667},{0x94, 0xE9, 0x3F, 0xFF}}},
	{{{0, 565, 0},0, {69, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 565, 0},0, {240, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{13, 571, 7},0, {325, 837},{0x51, 0xAB, 0x2F, 0xFF}}},
};

Gfx lamp_Lamp_mesh_tri_2[] = {
	gsSPVertex(lamp_Lamp_mesh_vtx_2 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(2, 6, 5, 0),
	gsSP1Triangle(5, 7, 4, 0),
	gsSP1Triangle(5, 8, 7, 0),
	gsSP1Triangle(5, 9, 8, 0),
	gsSP1Triangle(8, 10, 7, 0),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(8, 12, 11, 0),
	gsSP1Triangle(7, 10, 13, 0),
	gsSP1Triangle(7, 13, 14, 0),
	gsSP1Triangle(4, 7, 14, 0),
	gsSP1Triangle(4, 14, 15, 0),
	gsSP1Triangle(3, 4, 15, 0),
	gsSPVertex(lamp_Lamp_mesh_vtx_2 + 16, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 5, 7, 0),
	gsSP1Triangle(9, 10, 5, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(10, 3, 5, 0),
	gsSP1Triangle(10, 12, 3, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(12, 0, 3, 0),
	gsSPVertex(lamp_Lamp_mesh_vtx_2 + 30, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(4, 3, 1, 0),
	gsSP1Triangle(4, 1, 5, 0),
	gsSP1Triangle(6, 5, 1, 0),
	gsSP1Triangle(7, 4, 5, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(9, 8, 5, 0),
	gsSP1Triangle(10, 2, 11, 0),
	gsSP1Triangle(12, 11, 2, 0),
	gsSP1Triangle(3, 12, 2, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(13, 14, 11, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(lamp_Lamp_mesh_vtx_2 + 46, 7, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 2, 1, 0),
	gsSP1Triangle(5, 6, 2, 0),
	gsSPEndDisplayList(),
};


Gfx mat_lamp_lampouter_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(lamp_lampouter_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx mat_lamp_lampinner_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(lamp_lampinner_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx mat_lamp_light_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(lamp_light_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx lamp_Lamp_mesh[] = {
	gsSPDisplayList(mat_lamp_lampouter_f3d),
	gsSPDisplayList(lamp_Lamp_mesh_tri_0),
	gsSPDisplayList(mat_lamp_lampinner_f3d),
	gsSPDisplayList(lamp_Lamp_mesh_tri_1),
	gsSPDisplayList(mat_lamp_light_f3d),
	gsSPDisplayList(lamp_Lamp_mesh_tri_2),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};