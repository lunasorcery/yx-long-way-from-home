/* File generated with Shader Minifier 1.1.6
 * http://www.ctrl-alt-test.fr
 */
#ifndef FRAG_PRESENT_H_
# define FRAG_PRESENT_H_
# define VAR_T "v"

const char *present_frag =
 "#version 120\n"
 "uniform sampler2D v;"
 "void main()"
 "{"
   "vec2 r=gl_FragCoord.xy/gl_TexCoord[0].xy;"
   "vec4 m=texture2D(v,r);"
   "vec3 g=m.xyz/m.w;"
   "r-=.5;"
   "g*=mix(vec3(.6,.9,1),vec3(1),1.-dot(r,r)*.75);"
   "g*=2.5;"
   "g/=g+1.;"
   "g=pow(g,vec3(.45));"
   "g=smoothstep(.3,1.,g),g=pow(g,vec3(1,1.05,1.1).zyx);"
   "gl_FragColor=vec4(g,1);"
 "}";

#endif // FRAG_PRESENT_H_
