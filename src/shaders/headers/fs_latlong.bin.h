static const uint8_t fs_latlong_glsl[630] =
{
	0x46, 0x53, 0x48, 0x03, 0x6f, 0x1e, 0x3e, 0x3c, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, // FSH.o.><...u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x07, 0x38, 0x00, 0x00, 0x38, 0x00, 0x0b, 0x75, 0x5f, 0x74, 0x65, // forms.8..8..u_te
	0x78, 0x53, 0x6b, 0x79, 0x62, 0x6f, 0x78, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x44, 0x02, 0x00, // xSkybox......D..
	0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, // .varying highp v
	0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, // ec2 v_texcoord0;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, // .uniform vec4 u_
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x35, 0x36, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, // uniforms[56];.un
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, // iform lowp sampl
	0x65, 0x72, 0x43, 0x75, 0x62, 0x65, 0x20, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x53, 0x6b, 0x79, 0x62, // erCube u_texSkyb
	0x6f, 0x78, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, // ox;.void main ()
	0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, // .{.  highp vec3 
	0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, // result_1;.  high
	0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, // p float tmpvar_2
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x28, // ;.  tmpvar_2 = (
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2a, 0x20, // v_texcoord0.x * 
	0x36, 0x2e, 0x32, 0x38, 0x33, 0x31, 0x39, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, // 6.28319);.  high
	0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, // p float tmpvar_3
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x28, // ;.  tmpvar_3 = (
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2a, 0x20, // v_texcoord0.y * 
	0x33, 0x2e, 0x31, 0x34, 0x31, 0x35, 0x39, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, // 3.14159);.  resu
	0x6c, 0x74, 0x5f, 0x31, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x2d, 0x28, 0x73, 0x69, 0x6e, 0x28, // lt_1.x = (-(sin(
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x73, 0x69, 0x6e, // tmpvar_3)) * sin
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, // (tmpvar_2));.  r
	0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x73, 0x28, // esult_1.y = cos(
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x73, // tmpvar_3);.  res
	0x75, 0x6c, 0x74, 0x5f, 0x31, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x2d, 0x28, 0x73, 0x69, 0x6e, // ult_1.z = (-(sin
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x63, 0x6f, // (tmpvar_3)) * co
	0x73, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // s(tmpvar_2));.  
	0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // lowp vec4 tmpvar
	0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x78, // _4;.  tmpvar_4.x
	0x79, 0x7a, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x43, 0x75, 0x62, 0x65, // yz = textureCube
	0x4c, 0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x53, 0x6b, 0x79, // Lod    (u_texSky
	0x62, 0x6f, 0x78, 0x2c, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x2c, 0x20, 0x75, // box, result_1, u
	0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x32, 0x32, 0x5d, 0x2e, 0x7a, 0x29, // _uniforms[22].z)
	0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, // .xyz;.  tmpvar_4
	0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x32, 0x20, 0x2b, 0x20, 0x28, 0x30, 0x2e, 0x38, // .w = (0.2 + (0.8
	0x20, 0x2a, 0x20, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x32, 0x32, //  * u_uniforms[22
	0x5d, 0x2e, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, // ].y));.  gl_Frag
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, // Color = tmpvar_4
	0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                             // ;.}...
};
static const uint8_t fs_latlong_dx9[522] =
{
	0x46, 0x53, 0x48, 0x03, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, // FSH.o.><...u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x15, 0x38, 0x00, 0x00, 0x17, 0x00, 0xec, 0x01, 0x00, 0x03, 0xff, // forms.8.........
	0xff, 0xfe, 0xff, 0x2e, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, // .....CTAB.......
	0x00, 0x00, 0x03, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, // ................
	0x00, 0x7c, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x03, 0x00, 0x05, 0x00, 0x01, 0x00, 0x16, // .|...D..........
	0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .P.......`......
	0x00, 0x17, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, // .....l.......u_t
	0x65, 0x78, 0x53, 0x6b, 0x79, 0x62, 0x6f, 0x78, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, // exSkybox........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, // .........u_unifo
	0x72, 0x6d, 0x73, 0x00, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x38, 0x00, 0x00, // rms..........8..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, // .....ps_3_0.Micr
	0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, // osoft (R) HLSL S
	0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, // hader Compiler 9
	0x2e, 0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, 0x00, 0x00, // .29.952.3111.Q..
	0x05, 0x17, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x3f, 0xdb, 0x0f, 0xc9, 0x40, 0xdb, 0x0f, 0x49, // ........?...@..I
	0xc0, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x05, 0x18, 0x00, 0x0f, 0xa0, 0xcd, 0xcc, 0x4c, // .....Q.........L
	0x3f, 0xcd, 0xcc, 0x4c, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, // ?..L>...........
	0x02, 0x05, 0x00, 0x00, 0x80, 0x00, 0x00, 0x03, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x98, 0x05, 0x08, 0x0f, 0xa0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x17, 0x00, 0x00, // ................
	0xa0, 0x00, 0x00, 0x00, 0x90, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, // ................
	0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x17, 0x00, 0x55, // ...............U
	0xa0, 0x17, 0x00, 0xaa, 0xa0, 0x25, 0x00, 0x00, 0x02, 0x01, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, // .....%..........
	0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x55, 0x90, 0x17, 0x00, 0x00, // ...........U....
	0xa0, 0x17, 0x00, 0x00, 0xa0, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, // ................
	0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x17, 0x00, 0x55, // ...............U
	0xa0, 0x17, 0x00, 0xaa, 0xa0, 0x25, 0x00, 0x00, 0x02, 0x02, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, // .....%..........
	0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x05, 0x80, 0x01, 0x00, 0xc5, 0x80, 0x02, 0x00, 0x55, // ...............U
	0x81, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x02, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x08, 0x80, 0x16, 0x00, 0xaa, 0xa0, 0x5f, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, // ........._......
	0x80, 0x00, 0x00, 0xe4, 0x80, 0x05, 0x08, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x07, // ................
	0x80, 0x00, 0x00, 0xe4, 0x80, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x16, 0x00, 0x55, // ...............U
	0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x08, 0x08, 0x80, 0x00, 0x00, 0x55, 0x80, 0x18, 0x00, 0x00, // ...........U....
	0xa0, 0x18, 0x00, 0x55, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,                                     // ...U......
};
static const uint8_t fs_latlong_dx11[593] =
{
	0x46, 0x53, 0x48, 0x03, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, // FSH.o.><...u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x15, 0x38, 0x30, 0x0a, 0x38, 0x00, 0x30, 0x02, 0x44, 0x58, 0x42, // forms.80.8.0.DXB
	0x43, 0x46, 0x5e, 0x31, 0xdd, 0x77, 0x8c, 0x77, 0x15, 0x8c, 0x11, 0x8f, 0x17, 0x0a, 0x64, 0x2d, // CF^1.w.w......d-
	0xb6, 0x01, 0x00, 0x00, 0x00, 0x30, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, // .....0.......,..
	0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, // .........ISGNP..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........8......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .D..............
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, // .........SV_POSI
	0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, // TION.TEXCOORD...
	0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .OSGN,..........
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // . ..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, // .........SV_TARG
	0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x70, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, // ET...SHDRp...@..
	0x00, 0x5c, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .....Y...F. ....
	0x00, 0xba, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x05, 0x00, 0x00, // .....Z....`.....
	0x00, 0x58, 0x30, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, // .X0...p......UU.
	0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .b...2.......e..
	0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, // .. ......h......
	0x00, 0x38, 0x00, 0x00, 0x0a, 0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x15, 0x10, // .8...2..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xdb, 0x0f, 0x49, 0x40, 0xdb, 0x0f, 0xc9, // ......@....I@...
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x06, 0x42, 0x00, 0x10, // @........M...B..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x4d, 0x00, 0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x00, // .M..............
	0x00, 0x0a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, // .....A.......M..
	0x06, 0x00, 0xd0, 0x00, 0x00, 0x62, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x01, 0x10, // .....b..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, // .....8..........
	0x00, 0x2a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .*.......:......
	0x00, 0x38, 0x00, 0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, // .8...........:..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, // .....*.......H..
	0x0c, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x03, 0x10, 0x00, 0x01, 0x00, 0x00, // .........F......
	0x00, 0x46, 0x7e, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x05, 0x00, 0x00, // .F~.......`.....
	0x00, 0x2a, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, // .*. .........6..
	0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, // .r ......F......
	0x00, 0x32, 0x00, 0x00, 0x0a, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x80, 0x20, // .2.... ........ 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0xcd, 0xcc, 0x4c, // ..........@....L
	0x3f, 0x01, 0x40, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0x3e, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0xb0, // ?.@....L>>......
	0x0d,                                                                                           // .
};
