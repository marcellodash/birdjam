#include <ultra64.h>

Lights1 distant_grass_f3d_lights = gdSPDefLights1(
	0x9, 0x42, 0xB,
	0x13, 0x84, 0x16, 0x28, 0x28, 0x28);

Lights1 distant_sidewalk_f3d_lights = gdSPDefLights1(
	0x3F, 0x45, 0x48,
	0x7F, 0x8B, 0x91, 0x28, 0x28, 0x28);

Lights0 distant_asphalt_f3d_lights = gdSPDefLights0(
	0xBB, 0xBB, 0xBB);

Gfx distant_road_ci4_aligner[] = {gsSPEndDisplayList()};
u8 distant_road_ci4[] = {
	0x0, 0x12, 0x21, 0x21, 0x32, 0x22, 0x20, 0x0, 0x0, 
	0x22, 0x21, 0x22, 0x22, 0x12, 0x20, 0x0, 0x0, 0x22, 
	0x22, 0x22, 0x12, 0x22, 0x10, 0x0, 0x0, 0x33, 0x22, 
	0x21, 0x21, 0x22, 0x10, 0x0, 0x0, 0x23, 0x22, 0x24, 
	0x12, 0x21, 0x20, 0x0, 0x0, 0x12, 0x22, 0x25, 0x21, 
	0x22, 0x20, 0x0, 0x0, 0x12, 0x22, 0x15, 0x11, 0x22, 
	0x10, 0x0, 0x66, 0x32, 0x22, 0x24, 0x22, 0x22, 0x26, 
	0x60, 0x0, 0x11, 0x22, 0x25, 0x22, 0x22, 0x20, 0x0, 
	0x0, 0x22, 0x22, 0x27, 0x12, 0x22, 0x20, 0x0, 0x0, 
	0x22, 0x22, 0x25, 0x22, 0x22, 0x30, 0x0, 0x0, 0x22, 
	0x12, 0x15, 0x12, 0x23, 0x20, 0x0, 0x0, 0x22, 0x22, 
	0x24, 0x12, 0x22, 0x20, 0x0, 0x0, 0x21, 0x22, 0x22, 
	0x12, 0x12, 0x20, 0x0, 0x0, 0x22, 0x21, 0x12, 0x22, 
	0x22, 0x10, 0x0, 0x0, 0x12, 0x22, 0x22, 0x23, 0x22, 
	0x20, 0x0, 
};

Gfx distant_road_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 distant_road_ci4_pal_rgba16[] = {
	0x95, 0x6D, 0x39, 0xCF, 0x42, 0x11, 0x4A, 0x53, 0xE6, 
	0xD3, 0xF7, 0x4D, 0x83, 0xE1, 0xBD, 0xD1, 
};

Gfx distant_tunnel_ci4_aligner[] = {gsSPEndDisplayList()};
u8 distant_tunnel_ci4[] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x11, 0x21, 0x12, 0x11, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x11, 0x12, 0x11, 0x21, 
	0x12, 0x11, 0x21, 0x11, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x22, 0x11, 0x12, 0x11, 0x21, 0x12, 0x11, 
	0x21, 0x11, 0x22, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 
	0x12, 0x21, 0x12, 0x33, 0x33, 0x33, 0x33, 0x21, 0x12, 
	0x21, 0x10, 0x0, 0x0, 0x0, 0x0, 0x11, 0x11, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x11, 
	0x0, 0x0, 0x0, 0x2, 0x11, 0x13, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 0x20, 0x0, 
	0x0, 0x12, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x22, 0x21, 0x0, 0x1, 0x11, 
	0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x31, 0x11, 0x10, 0x1, 0x11, 0x13, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x31, 0x11, 0x10, 0x22, 0x13, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 
	0x22, 0x11, 0x23, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x32, 0x11, 0x11, 
	0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 0x11, 0x13, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x31, 0x11, 0x22, 0x23, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x32, 0x22, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 
	0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 0x11, 0x13, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x31, 0x11, 0x22, 0x23, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x32, 0x22, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 
	0x11, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 0x11, 
	0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 0x22, 0x23, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x32, 0x22, 0x11, 0x13, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x31, 0x11, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 
	0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 0x22, 0x23, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x32, 0x22, 0x11, 0x13, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x31, 0x11, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 
	0x11, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 
};

Gfx distant_tunnel_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 distant_tunnel_ci4_pal_rgba16[] = {
	0x0, 0x0, 0xA4, 0xE9, 0x63, 0x19, 0x0, 0x1, 
};

Vtx distant_Distant_mesh_vtx_0[41] = {
	{{{4335, 3092, 12966},0, {654, 1008},{0x3, 0x62, 0xB0, 0xFF}}},
	{{{-3032, -407, 7774},0, {357, 808},{0x9, 0x77, 0xD4, 0xFF}}},
	{{{-6121, 6831, 12093},0, {260, 1008},{0x6, 0x4C, 0x9B, 0xFF}}},
	{{{4132, -955, 8672},0, {658, 836},{0xF4, 0x78, 0xD8, 0xFF}}},
	{{{9388, 1385, 8183},0, {883, 823},{0xE0, 0x78, 0xE6, 0xFF}}},
	{{{13294, 2631, 13318},0, {1008, 1008},{0xF4, 0x7D, 0xEA, 0xFF}}},
	{{{13336, 2517, 2655},0, {1008, 598},{0xC3, 0x6F, 0xFB, 0xFF}}},
	{{{8619, -646, -686},0, {872, 477},{0xE0, 0x7B, 0xFE, 0xFF}}},
	{{{12772, 3198, -4752},0, {1008, 305},{0xA2, 0x55, 0x8, 0xFF}}},
	{{{10441, 264, -7986},0, {894, 184},{0xBD, 0x67, 0x22, 0xFF}}},
	{{{10449, 2851, -11327},0, {1006, -15},{0xCC, 0x61, 0x3F, 0xFF}}},
	{{{5524, 2671, -13187},0, {709, -16},{0xF7, 0x68, 0x48, 0xFF}}},
	{{{1873, -396, -8678},0, {578, 163},{0x4, 0x79, 0x28, 0xFF}}},
	{{{-246, 2457, -11585},0, {486, -16},{0x11, 0x64, 0x4C, 0xFF}}},
	{{{-5174, 1719, -9522},0, {290, 98},{0xA, 0x61, 0x51, 0xFF}}},
	{{{-6226, 3740, -13168},0, {256, -16},{0x5, 0x6C, 0x43, 0xFF}}},
	{{{-6226, 3740, -13168},0, {256, -16},{0x5, 0x6C, 0x43, 0xFF}}},
	{{{-10927, -24, -7385},0, {110, 190},{0x35, 0x6E, 0x23, 0xFF}}},
	{{{-5174, 1719, -9522},0, {290, 98},{0xA, 0x61, 0x51, 0xFF}}},
	{{{-8255, 4108, -12911},0, {-6, -16},{0xD, 0x66, 0x4A, 0xFF}}},
	{{{-12710, 2621, -8921},0, {-16, 151},{0x4E, 0x53, 0x37, 0xFF}}},
	{{{-11173, -6, 7388},0, {106, 796},{0x37, 0x6B, 0xD7, 0xFF}}},
	{{{-12612, 2795, 9662},0, {-16, 871},{0x54, 0x52, 0xD0, 0xFF}}},
	{{{-11960, 4256, 12368},0, {13, 1008},{0x4, 0x52, 0x9F, 0xFF}}},
	{{{-6121, 6831, 12093},0, {260, 1008},{0x6, 0x4C, 0x9B, 0xFF}}},
	{{{-3032, -407, 7774},0, {357, 808},{0x9, 0x77, 0xD4, 0xFF}}},
	{{{-5399, -17, 5310},0, {439, 553},{0x2, 0x7F, 0xA, 0xFF}}},
	{{{5321, -41, 5322},0, {553, 553},{0xEE, 0x7E, 0x1, 0xFF}}},
	{{{4132, -955, 8672},0, {658, 836},{0xF4, 0x78, 0xD8, 0xFF}}},
	{{{9388, 1385, 8183},0, {883, 823},{0xE0, 0x78, 0xE6, 0xFF}}},
	{{{8619, -646, -686},0, {872, 477},{0xE0, 0x7B, 0xFE, 0xFF}}},
	{{{5309, -13, -5312},0, {553, 439},{0x5D, 0xE2, 0xAF, 0xFF}}},
	{{{5309, -13, -5312},0, {553, 439},{0x5D, 0xE2, 0xAF, 0xFF}}},
	{{{8619, -646, -686},0, {872, 477},{0xE0, 0x7B, 0xFE, 0xFF}}},
	{{{1873, -396, -8678},0, {578, 163},{0x4, 0x79, 0x28, 0xFF}}},
	{{{10441, 264, -7986},0, {894, 184},{0xBD, 0x67, 0x22, 0xFF}}},
	{{{-5399, -10, -5312},0, {439, 439},{0x1, 0x7F, 0xFA, 0xFF}}},
	{{{-10927, -24, -7385},0, {110, 190},{0x35, 0x6E, 0x23, 0xFF}}},
	{{{-5174, 1719, -9522},0, {290, 98},{0xA, 0x61, 0x51, 0xFF}}},
	{{{-11173, -6, 7388},0, {106, 796},{0x37, 0x6B, 0xD7, 0xFF}}},
	{{{-5399, -17, 5310},0, {439, 553},{0x2, 0x7F, 0xA, 0xFF}}},
};

Gfx distant_Distant_mesh_tri_0[] = {
	gsSPVertex(distant_Distant_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(11, 12, 9, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(distant_Distant_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(5, 1, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(5, 8, 9, 0),
	gsSP1Triangle(9, 10, 5, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 11, 9, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSP1Triangle(14, 15, 11, 0),
	gsSPVertex(distant_Distant_mesh_vtx_0 + 32, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(0, 2, 4, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(2, 6, 5, 0),
	gsSP1Triangle(4, 5, 7, 0),
	gsSP1Triangle(8, 4, 7, 0),
	gsSPEndDisplayList(),
};Vtx distant_Distant_mesh_vtx_1[20] = {
	{{{-11520, -7, -3785},0, {-95, -4165},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-11520, 14, -4636},0, {834, 5260},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-11520, -7, -4636},0, {-95, 5260},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-11520, 14, -3785},0, {834, -4165},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{-4434, -7, -3785},0, {-95, 5260},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-4434, 14, -3785},0, {834, 5260},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{-11520, -7, -4636},0, {-95, -4165},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-11520, 14, -4636},0, {834, -4165},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-4434, 14, -4636},0, {834, 5260},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{-4434, -7, -4636},0, {-95, 5260},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-11520, -7, 4707},0, {-95, -4165},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-11520, 14, 3856},0, {834, 5260},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-11520, -7, 3856},0, {-95, 5260},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-11520, 14, 4707},0, {834, -4165},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{-4434, -7, 4707},0, {-95, 5260},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-4434, 14, 4707},0, {834, 5260},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{-11520, -7, 3856},0, {-95, -4165},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-11520, 14, 3856},0, {834, -4165},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-4434, 14, 3856},0, {834, 5260},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{-4434, -7, 3856},0, {-95, 5260},{0x0, 0x0, 0x81, 0xFF}}},
};

Gfx distant_Distant_mesh_tri_1[] = {
	gsSPVertex(distant_Distant_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 13, 11, 0),
	gsSP1Triangle(14, 13, 10, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(distant_Distant_mesh_vtx_1 + 16, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};Vtx distant_Distant_mesh_vtx_2[8] = {
	{{{-4434, 14, -4636},0, {455, 4921},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{-11520, 14, -4636},0, {455, -4389},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-11520, 14, -3785},0, {-9, -4389},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{-4434, 14, -3785},0, {-9, 4921},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{-4434, 14, 3856},0, {455, 4921},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{-11520, 14, 3856},0, {455, -4389},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-11520, 14, 4707},0, {-9, -4389},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{-4434, 14, 4707},0, {-9, 4921},{0x0, 0x5A, 0x5A, 0xFF}}},
};

Gfx distant_Distant_mesh_tri_2[] = {
	gsSPVertex(distant_Distant_mesh_vtx_2 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};Vtx distant_Distant_mesh_vtx_3[8] = {
	{{{-11574, 864, -3692},0, {-16, -16},{0x68, 0x49, 0x1, 0xFF}}},
	{{{-10974, 9, -3686},0, {-16, 1008},{0x68, 0x49, 0x1, 0xFF}}},
	{{{-10964, 9, -4731},0, {1008, 1008},{0x68, 0x49, 0x1, 0xFF}}},
	{{{-11565, 864, -4736},0, {1008, -16},{0x68, 0x49, 0x1, 0xFF}}},
	{{{-11653, 864, 4795},0, {-16, -16},{0x68, 0x49, 0x1, 0xFF}}},
	{{{-11053, 9, 4801},0, {-16, 1008},{0x68, 0x49, 0x1, 0xFF}}},
	{{{-11043, 9, 3756},0, {1008, 1008},{0x68, 0x49, 0x1, 0xFF}}},
	{{{-11643, 864, 3751},0, {1008, -16},{0x68, 0x49, 0x1, 0xFF}}},
};

Gfx distant_Distant_mesh_tri_3[] = {
	gsSPVertex(distant_Distant_mesh_vtx_3 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_distant_grass_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(distant_grass_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx mat_distant_sidewalk_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(distant_sidewalk_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx mat_distant_asphalt_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, distant_road_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 7),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 8, distant_road_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 1, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 30, 60),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPSetLights0(distant_asphalt_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_distant_asphalt_f3d[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx mat_distant_tunnel_f3d[] = {
	gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, TEXEL0, 0,
                                  0, 0, 0, TEXEL0,
                              SHADE, 0, TEXEL0, 0,
 								0, 0, 0, TEXEL0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, distant_tunnel_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 3),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 16, distant_tunnel_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 62, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_distant_tunnel_f3d[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx distant_Distant_mesh[] = {
	gsSPDisplayList(mat_distant_grass_f3d),
	gsSPDisplayList(distant_Distant_mesh_tri_0),
	gsSPDisplayList(mat_distant_sidewalk_f3d),
	gsSPDisplayList(distant_Distant_mesh_tri_1),
	gsSPDisplayList(mat_distant_asphalt_f3d),
	gsSPDisplayList(distant_Distant_mesh_tri_2),
	gsSPDisplayList(mat_revert_distant_asphalt_f3d),
	gsSPDisplayList(mat_distant_tunnel_f3d),
	gsSPDisplayList(distant_Distant_mesh_tri_3),
	gsSPDisplayList(mat_revert_distant_tunnel_f3d),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};