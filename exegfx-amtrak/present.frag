#version 120
uniform sampler2D T;


void main(){
	vec2 uv=gl_FragCoord.xy/gl_TexCoord[0].xy;
	vec4 tex=texture2D(T,uv);

	// divide by sample-count
	vec3 color=tex.rgb/tex.a;

	// vignette to darken the corners
	uv-=.5;
	color *= mix(vec3(.6,.9,1),vec3(1),1.-dot(uv,uv)*.75);

	// exposure
	color *= 2.5;

	// tonemap
	color /= color+1.;

	// gamma correction
	color = pow(color, vec3(.45));

	// grading
	{
		// make it pop
		color = smoothstep(.3,1.,color);

		// cold tint
		color = pow(color,vec3(1,1.05,1.1).bgr);

		// lift the black level
		//color += .02;
	}
	
	gl_FragColor=vec4(color,1);
}