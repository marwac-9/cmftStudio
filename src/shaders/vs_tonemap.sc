$input a_position, a_texcoord0
$output v_texcoord0, v_texcoord1, v_texcoord2, v_texcoord3, v_texcoord4

/*
 * Copyright 2014-2015 Dario Manesku. All rights reserved.
 * License: http://www.opensource.org/licenses/BSD-2-Clause
 */

#include "shader.shdr"

void main()
{
    float offset = u_viewTexel.x*6.0;

    gl_Position = mul(u_modelViewProj, vec4(a_position, 1.0) );
    v_texcoord0 = a_texcoord0;
    v_texcoord1 = vec4(a_texcoord0.x - offset*1.0, a_texcoord0.y,
                       a_texcoord0.x + offset*1.0, a_texcoord0.y
                      );
    v_texcoord2 = vec4(a_texcoord0.x - offset*2.0, a_texcoord0.y,
                       a_texcoord0.x + offset*2.0, a_texcoord0.y
                      );
    v_texcoord3 = vec4(a_texcoord0.x - offset*3.0, a_texcoord0.y,
                       a_texcoord0.x + offset*3.0, a_texcoord0.y
                      );
    v_texcoord4 = vec4(a_texcoord0.x - offset*4.0, a_texcoord0.y,
                       a_texcoord0.x + offset*4.0, a_texcoord0.y
                      );
}

/* vim: set sw=4 ts=4 expandtab: */
