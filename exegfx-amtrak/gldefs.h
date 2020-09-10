#pragma once

#define glActiveTexture			((PFNGLACTIVETEXTUREPROC)		wglGetProcAddress("glActiveTexture"))
#define glAttachShader			((PFNGLATTACHSHADERPROC)		wglGetProcAddress("glAttachShader"))
#define glBindFramebuffer		((PFNGLBINDFRAMEBUFFERPROC)		wglGetProcAddress("glBindFramebuffer"))
#define glBindImageTexture		((PFNGLBINDIMAGETEXTUREPROC)	wglGetProcAddress("glBindImageTexture"))
#define glCompileShader			((PFNGLCOMPILESHADERPROC)		wglGetProcAddress("glCompileShader"))
#define glCreateProgram			((PFNGLCREATEPROGRAMPROC)		wglGetProcAddress("glCreateProgram"))
#define glCreateShader			((PFNGLCREATESHADERPROC)		wglGetProcAddress("glCreateShader"))
#define glCreateShaderProgramv	((PFNGLCREATESHADERPROGRAMVPROC)wglGetProcAddress("glCreateShaderProgramv"))
#define glDeleteProgram			((PFNGLDELETEPROGRAMPROC)		wglGetProcAddress("glDeleteProgram"))
#define glDeleteShader			((PFNGLDELETESHADERPROC)		wglGetProcAddress("glDeleteShader"))
#define glDispatchCompute		((PFNGLDISPATCHCOMPUTEPROC)		wglGetProcAddress("glDispatchCompute"))
#define glDrawBuffers			((PFNGLDRAWBUFFERSPROC)			wglGetProcAddress("glDrawBuffers"))
#define glFramebufferTexture	((PFNGLFRAMEBUFFERTEXTUREPROC)	wglGetProcAddress("glFramebufferTexture"))
#define glGenFramebuffers		((PFNGLGENFRAMEBUFFERSPROC)		wglGetProcAddress("glGenFramebuffers"))
#define glGetIntegeri_v			((PFNGLGETINTEGERI_VPROC)		wglGetProcAddress("glGetIntegeri_v"))
#define glGetProgramiv			((PFNGLGETPROGRAMIVPROC)		wglGetProcAddress("glGetProgramiv"))
#define glGetProgramInfoLog		((PFNGLGETPROGRAMINFOLOGPROC)	wglGetProcAddress("glGetProgramInfoLog"))
#define glGetShaderInfoLog		((PFNGLGETSHADERINFOLOGPROC)	wglGetProcAddress("glGetShaderInfoLog"))
#define glGetShaderiv			((PFNGLGETSHADERIVPROC)			wglGetProcAddress("glGetShaderiv"))
#define glLinkProgram			((PFNGLLINKPROGRAMPROC)			wglGetProcAddress("glLinkProgram"))
#define glMemoryBarrier			((PFNGLMEMORYBARRIERPROC)		wglGetProcAddress("glMemoryBarrier"))
#define glShaderSource			((PFNGLSHADERSOURCEPROC)		wglGetProcAddress("glShaderSource"))
#define glTexImage3D			((PFNGLTEXIMAGE3DPROC)			wglGetProcAddress("glTexImage3D"))
#define glUseProgram			((PFNGLUSEPROGRAMPROC)			wglGetProcAddress("glUseProgram"))
#define glDebugMessageCallback	((PFNGLDEBUGMESSAGECALLBACKPROC)wglGetProcAddress("glDebugMessageCallback"))
#define glUniform1i				((PFNGLUNIFORM1IPROC)			wglGetProcAddress("glUniform1i"))
#define glUniform1f				((PFNGLUNIFORM1FPROC)			wglGetProcAddress("glUniform1f"))
#define glUniform2f				((PFNGLUNIFORM2FPROC)			wglGetProcAddress("glUniform2f"))
#define glUniform4f				((PFNGLUNIFORM4FPROC)			wglGetProcAddress("glUniform4f"))
#define glGetUniformLocation	((PFNGLGETUNIFORMLOCATIONPROC)	wglGetProcAddress("glGetUniformLocation"))


