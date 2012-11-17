void* darwinGetProcAddr(const char* name) {
  // Version 2.0
  if (strcmp(name, "glBlendEquationSeparate") == 0) { return glBlendEquationSeparate;}
  if (strcmp(name, "glDrawBuffers") == 0) { return glDrawBuffers;}
  if (strcmp(name, "glStencilOpSeparate") == 0) { return glStencilOpSeparate;}
  if (strcmp(name, "glStencilFuncSeparate") == 0) { return glStencilFuncSeparate;}
  if (strcmp(name, "glStencilMaskSeparate") == 0) { return glStencilMaskSeparate;}
  if (strcmp(name, "glAttachShader") == 0) { return glAttachShader;}
  if (strcmp(name, "glBindAttribLocation") == 0) { return glBindAttribLocation;}
  if (strcmp(name, "glCompileShader") == 0) { return glCompileShader;}
  if (strcmp(name, "glCreateProgram") == 0) { return glCreateProgram;}
  if (strcmp(name, "glCreateShader") == 0) { return glCreateShader;}
  if (strcmp(name, "glDeleteProgram") == 0) { return glDeleteProgram;}
  if (strcmp(name, "glDeleteShader") == 0) { return glDeleteShader;}
  if (strcmp(name, "glDetachShader") == 0) { return glDetachShader;}
  if (strcmp(name, "glDisableVertexAttribArray") == 0) { return glDisableVertexAttribArray;}
  if (strcmp(name, "glEnableVertexAttribArray") == 0) { return glEnableVertexAttribArray;}
  if (strcmp(name, "glGetActiveAttrib") == 0) { return glGetActiveAttrib;}
  if (strcmp(name, "glGetActiveUniform") == 0) { return glGetActiveUniform;}
  if (strcmp(name, "glGetAttachedShaders") == 0) { return glGetAttachedShaders;}
  if (strcmp(name, "glGetAttribLocation") == 0) { return glGetAttribLocation;}
  if (strcmp(name, "glGetProgramiv") == 0) { return glGetProgramiv;}
  if (strcmp(name, "glGetProgramInfoLog") == 0) { return glGetProgramInfoLog;}
  if (strcmp(name, "glGetShaderiv") == 0) { return glGetShaderiv;}
  if (strcmp(name, "glGetShaderInfoLog") == 0) { return glGetShaderInfoLog;}
  if (strcmp(name, "glGetShaderSource") == 0) { return glGetShaderSource;}
  if (strcmp(name, "glGetUniformLocation") == 0) { return glGetUniformLocation;}
  if (strcmp(name, "glGetUniformfv") == 0) { return glGetUniformfv;}
  if (strcmp(name, "glGetUniformiv") == 0) { return glGetUniformiv;}
  if (strcmp(name, "glGetVertexAttribdv") == 0) { return glGetVertexAttribdv;}
  if (strcmp(name, "glGetVertexAttribfv") == 0) { return glGetVertexAttribfv;}
  if (strcmp(name, "glGetVertexAttribiv") == 0) { return glGetVertexAttribiv;}
  if (strcmp(name, "glGetVertexAttribPointerv") == 0) { return glGetVertexAttribPointerv;}
  if (strcmp(name, "glIsProgram") == 0) { return glIsProgram;}
  if (strcmp(name, "glIsShader") == 0) { return glIsShader;}
  if (strcmp(name, "glLinkProgram") == 0) { return glLinkProgram;}
  if (strcmp(name, "glShaderSource") == 0) { return glShaderSource;}
  if (strcmp(name, "glUseProgram") == 0) { return glUseProgram;}
  if (strcmp(name, "glUniform1f") == 0) { return glUniform1f;}
  if (strcmp(name, "glUniform2f") == 0) { return glUniform2f;}
  if (strcmp(name, "glUniform3f") == 0) { return glUniform3f;}
  if (strcmp(name, "glUniform4f") == 0) { return glUniform4f;}
  if (strcmp(name, "glUniform1i") == 0) { return glUniform1i;}
  if (strcmp(name, "glUniform2i") == 0) { return glUniform2i;}
  if (strcmp(name, "glUniform3i") == 0) { return glUniform3i;}
  if (strcmp(name, "glUniform4i") == 0) { return glUniform4i;}
  if (strcmp(name, "glUniform1fv") == 0) { return glUniform1fv;}
  if (strcmp(name, "glUniform2fv") == 0) { return glUniform2fv;}
  if (strcmp(name, "glUniform3fv") == 0) { return glUniform3fv;}
  if (strcmp(name, "glUniform4fv") == 0) { return glUniform4fv;}
  if (strcmp(name, "glUniform1iv") == 0) { return glUniform1iv;}
  if (strcmp(name, "glUniform2iv") == 0) { return glUniform2iv;}
  if (strcmp(name, "glUniform3iv") == 0) { return glUniform3iv;}
  if (strcmp(name, "glUniform4iv") == 0) { return glUniform4iv;}
  if (strcmp(name, "glUniformMatrix2fv") == 0) { return glUniformMatrix2fv;}
  if (strcmp(name, "glUniformMatrix3fv") == 0) { return glUniformMatrix3fv;}
  if (strcmp(name, "glUniformMatrix4fv") == 0) { return glUniformMatrix4fv;}
  if (strcmp(name, "glValidateProgram") == 0) { return glValidateProgram;}
  if (strcmp(name, "glVertexAttrib1d") == 0) { return glVertexAttrib1d;}
  if (strcmp(name, "glVertexAttrib1dv") == 0) { return glVertexAttrib1dv;}
  if (strcmp(name, "glVertexAttrib1f") == 0) { return glVertexAttrib1f;}
  if (strcmp(name, "glVertexAttrib1fv") == 0) { return glVertexAttrib1fv;}
  if (strcmp(name, "glVertexAttrib1s") == 0) { return glVertexAttrib1s;}
  if (strcmp(name, "glVertexAttrib1sv") == 0) { return glVertexAttrib1sv;}
  if (strcmp(name, "glVertexAttrib2d") == 0) { return glVertexAttrib2d;}
  if (strcmp(name, "glVertexAttrib2dv") == 0) { return glVertexAttrib2dv;}
  if (strcmp(name, "glVertexAttrib2f") == 0) { return glVertexAttrib2f;}
  if (strcmp(name, "glVertexAttrib2fv") == 0) { return glVertexAttrib2fv;}
  if (strcmp(name, "glVertexAttrib2s") == 0) { return glVertexAttrib2s;}
  if (strcmp(name, "glVertexAttrib2sv") == 0) { return glVertexAttrib2sv;}
  if (strcmp(name, "glVertexAttrib3d") == 0) { return glVertexAttrib3d;}
  if (strcmp(name, "glVertexAttrib3dv") == 0) { return glVertexAttrib3dv;}
  if (strcmp(name, "glVertexAttrib3f") == 0) { return glVertexAttrib3f;}
  if (strcmp(name, "glVertexAttrib3fv") == 0) { return glVertexAttrib3fv;}
  if (strcmp(name, "glVertexAttrib3s") == 0) { return glVertexAttrib3s;}
  if (strcmp(name, "glVertexAttrib3sv") == 0) { return glVertexAttrib3sv;}
  if (strcmp(name, "glVertexAttrib4Nbv") == 0) { return glVertexAttrib4Nbv;}
  if (strcmp(name, "glVertexAttrib4Niv") == 0) { return glVertexAttrib4Niv;}
  if (strcmp(name, "glVertexAttrib4Nsv") == 0) { return glVertexAttrib4Nsv;}
  if (strcmp(name, "glVertexAttrib4Nub") == 0) { return glVertexAttrib4Nub;}
  if (strcmp(name, "glVertexAttrib4Nubv") == 0) { return glVertexAttrib4Nubv;}
  if (strcmp(name, "glVertexAttrib4Nuiv") == 0) { return glVertexAttrib4Nuiv;}
  if (strcmp(name, "glVertexAttrib4Nusv") == 0) { return glVertexAttrib4Nusv;}
  if (strcmp(name, "glVertexAttrib4bv") == 0) { return glVertexAttrib4bv;}
  if (strcmp(name, "glVertexAttrib4d") == 0) { return glVertexAttrib4d;}
  if (strcmp(name, "glVertexAttrib4dv") == 0) { return glVertexAttrib4dv;}
  if (strcmp(name, "glVertexAttrib4f") == 0) { return glVertexAttrib4f;}
  if (strcmp(name, "glVertexAttrib4fv") == 0) { return glVertexAttrib4fv;}
  if (strcmp(name, "glVertexAttrib4iv") == 0) { return glVertexAttrib4iv;}
  if (strcmp(name, "glVertexAttrib4s") == 0) { return glVertexAttrib4s;}
  if (strcmp(name, "glVertexAttrib4sv") == 0) { return glVertexAttrib4sv;}
  if (strcmp(name, "glVertexAttrib4ubv") == 0) { return glVertexAttrib4ubv;}
  if (strcmp(name, "glVertexAttrib4uiv") == 0) { return glVertexAttrib4uiv;}
  if (strcmp(name, "glVertexAttrib4usv") == 0) { return glVertexAttrib4usv;}
  if (strcmp(name, "glVertexAttribPointer") == 0) { return glVertexAttribPointer;}

  // Version 2.1
  if (strcmp(name, "glUniformMatrix2x3fv") == 0) { return glUniformMatrix2x3fv; }
  if (strcmp(name, "glUniformMatrix3x2fv") == 0) { return glUniformMatrix3x2fv; }
  if (strcmp(name, "glUniformMatrix2x4fv") == 0) { return glUniformMatrix2x4fv; }
  if (strcmp(name, "glUniformMatrix4x2fv") == 0) { return glUniformMatrix4x2fv; }
  if (strcmp(name, "glUniformMatrix3x4fv") == 0) { return glUniformMatrix3x4fv; }
  if (strcmp(name, "glUniformMatrix4x3fv") == 0) { return glUniformMatrix4x3fv; }
 
  // Version 1.3 Deprecated
  if (strcmp(name, "glClientActiveTexture") == 0) { return glClientActiveTexture; }
  if (strcmp(name, "glMultiTexCoord1d") == 0) { return glMultiTexCoord1d; }
  if (strcmp(name, "glMultiTexCoord1dv") == 0) { return glMultiTexCoord1dv; }
  if (strcmp(name, "glMultiTexCoord1f") == 0) { return glMultiTexCoord1f; }
  if (strcmp(name, "glMultiTexCoord1fv") == 0) { return glMultiTexCoord1fv; }
  if (strcmp(name, "glMultiTexCoord1i") == 0) { return glMultiTexCoord1i; }
  if (strcmp(name, "glMultiTexCoord1iv") == 0) { return glMultiTexCoord1iv; }
  if (strcmp(name, "glMultiTexCoord1s") == 0) { return glMultiTexCoord1s; }
  if (strcmp(name, "glMultiTexCoord1sv") == 0) { return glMultiTexCoord1sv; }
  if (strcmp(name, "glMultiTexCoord2d") == 0) { return glMultiTexCoord2d; }
  if (strcmp(name, "glMultiTexCoord2dv") == 0) { return glMultiTexCoord2dv; }
  if (strcmp(name, "glMultiTexCoord2f") == 0) { return glMultiTexCoord2f; }
  if (strcmp(name, "glMultiTexCoord2fv") == 0) { return glMultiTexCoord2fv; }
  if (strcmp(name, "glMultiTexCoord2i") == 0) { return glMultiTexCoord2i; }
  if (strcmp(name, "glMultiTexCoord2iv") == 0) { return glMultiTexCoord2iv; }
  if (strcmp(name, "glMultiTexCoord2s") == 0) { return glMultiTexCoord2s; }
  if (strcmp(name, "glMultiTexCoord2sv") == 0) { return glMultiTexCoord2sv; }
  if (strcmp(name, "glMultiTexCoord3d") == 0) { return glMultiTexCoord3d; }
  if (strcmp(name, "glMultiTexCoord3dv") == 0) { return glMultiTexCoord3dv; }
  if (strcmp(name, "glMultiTexCoord3f") == 0) { return glMultiTexCoord3f; }
  if (strcmp(name, "glMultiTexCoord3fv") == 0) { return glMultiTexCoord3fv; }
  if (strcmp(name, "glMultiTexCoord3i") == 0) { return glMultiTexCoord3i; }
  if (strcmp(name, "glMultiTexCoord3iv") == 0) { return glMultiTexCoord3iv; }
  if (strcmp(name, "glMultiTexCoord3s") == 0) { return glMultiTexCoord3s; }
  if (strcmp(name, "glMultiTexCoord3sv") == 0) { return glMultiTexCoord3sv; }
  if (strcmp(name, "glMultiTexCoord4d") == 0) { return glMultiTexCoord4d; }
  if (strcmp(name, "glMultiTexCoord4dv") == 0) { return glMultiTexCoord4dv; }
  if (strcmp(name, "glMultiTexCoord4f") == 0) { return glMultiTexCoord4f; }
  if (strcmp(name, "glMultiTexCoord4fv") == 0) { return glMultiTexCoord4fv; }
  if (strcmp(name, "glMultiTexCoord4i") == 0) { return glMultiTexCoord4i; }
  if (strcmp(name, "glMultiTexCoord4iv") == 0) { return glMultiTexCoord4iv; }
  if (strcmp(name, "glMultiTexCoord4s") == 0) { return glMultiTexCoord4s; }
  if (strcmp(name, "glMultiTexCoord4sv") == 0) { return glMultiTexCoord4sv; }
  if (strcmp(name, "glLoadTransposeMatrixf") == 0) { return glLoadTransposeMatrixf; }
  if (strcmp(name, "glLoadTransposeMatrixd") == 0) { return glLoadTransposeMatrixd; }
  if (strcmp(name, "glMultTransposeMatrixf") == 0) { return glMultTransposeMatrixf; }
  if (strcmp(name, "glMultTransposeMatrixd") == 0) { return glMultTransposeMatrixd; }

  // Version 1.4
  if (strcmp(name, "glBlendFuncSeparate") == 0) { return glBlendFuncSeparate; }
  if (strcmp(name, "glMultiDrawArrays") == 0) { return glMultiDrawArrays; }
  if (strcmp(name, "glMultiDrawElements") == 0) { return glMultiDrawElements; }
  if (strcmp(name, "glPointParameterf") == 0) { return glPointParameterf; }
  if (strcmp(name, "glPointParameterfv") == 0) { return glPointParameterfv; }
  if (strcmp(name, "glPointParameteri") == 0) { return glPointParameteri; }
  if (strcmp(name, "glPointParameteriv") == 0) { return glPointParameteriv; }

  // Version 1.5
  if (strcmp(name, "glGenQueries") == 0) { return glGenQueries; }
  if (strcmp(name, "glDeleteQueries") == 0) { return glDeleteQueries; }
  if (strcmp(name, "glIsQuery") == 0) { return glIsQuery; }
  if (strcmp(name, "glBeginQuery") == 0) { return glBeginQuery; }
  if (strcmp(name, "glEndQuery") == 0) { return glEndQuery; }
  if (strcmp(name, "glGetQueryiv") == 0) { return glGetQueryiv; }
  if (strcmp(name, "glGetQueryObjectiv") == 0) { return glGetQueryObjectiv; }
  if (strcmp(name, "glGetQueryObjectuiv") == 0) { return glGetQueryObjectuiv; }
  if (strcmp(name, "glBindBuffer") == 0) { return glBindBuffer; }
  if (strcmp(name, "glDeleteBuffers") == 0) { return glDeleteBuffers; }
  if (strcmp(name, "glGenBuffers") == 0) { return glGenBuffers; }
  if (strcmp(name, "glIsBuffer") == 0) { return glIsBuffer; }
  if (strcmp(name, "glBufferData") == 0) { return glBufferData; }
  if (strcmp(name, "glBufferSubData") == 0) { return glBufferSubData; }
  if (strcmp(name, "glGetBufferSubData") == 0) { return glGetBufferSubData; }
  if (strcmp(name, "glMapBuffer") == 0) { return glMapBuffer; }
  if (strcmp(name, "glUnmapBuffer") == 0) { return glUnmapBuffer; }
  if (strcmp(name, "glGetBufferParameteriv") == 0) { return glGetBufferParameteriv; }
  if (strcmp(name, "glGetBufferPointerv") == 0) { return glGetBufferPointerv; }

  // Version 1.0
  if (strcmp(name, "glCullFace") == 0) { return glCullFace; }
  if (strcmp(name, "glFrontFace") == 0) { return glFrontFace; }
  if (strcmp(name, "glHint") == 0) { return glHint; }
  if (strcmp(name, "glLineWidth") == 0) { return glLineWidth; }
  if (strcmp(name, "glPointSize") == 0) { return glPointSize; }
  if (strcmp(name, "glPolygonMode") == 0) { return glPolygonMode; }
  if (strcmp(name, "glScissor") == 0) { return glScissor; }
  if (strcmp(name, "glTexParameterf") == 0) { return glTexParameterf; }
  if (strcmp(name, "glTexParameterfv") == 0) { return glTexParameterfv; }
  if (strcmp(name, "glTexParameteri") == 0) { return glTexParameteri; }
  if (strcmp(name, "glTexParameteriv") == 0) { return glTexParameteriv; }
  if (strcmp(name, "glTexImage1D") == 0) { return glTexImage1D; }
  if (strcmp(name, "glTexImage2D") == 0) { return glTexImage2D; }
  if (strcmp(name, "glDrawBuffer") == 0) { return glDrawBuffer; }
  if (strcmp(name, "glClear") == 0) { return glClear; }
  if (strcmp(name, "glClearColor") == 0) { return glClearColor; }
  if (strcmp(name, "glClearStencil") == 0) { return glClearStencil; }
  if (strcmp(name, "glClearDepth") == 0) { return glClearDepth; }
  if (strcmp(name, "glStencilMask") == 0) { return glStencilMask; }
  if (strcmp(name, "glColorMask") == 0) { return glColorMask; }
  if (strcmp(name, "glDepthMask") == 0) { return glDepthMask; }
  if (strcmp(name, "glDisable") == 0) { return glDisable; }
  if (strcmp(name, "glEnable") == 0) { return glEnable; }
  if (strcmp(name, "glFinish") == 0) { return glFinish; }
  if (strcmp(name, "glFlush") == 0) { return glFlush; }
  if (strcmp(name, "glBlendFunc") == 0) { return glBlendFunc; }
  if (strcmp(name, "glLogicOp") == 0) { return glLogicOp; }
  if (strcmp(name, "glStencilFunc") == 0) { return glStencilFunc; }
  if (strcmp(name, "glStencilOp") == 0) { return glStencilOp; }
  if (strcmp(name, "glDepthFunc") == 0) { return glDepthFunc; }
  if (strcmp(name, "glPixelStoref") == 0) { return glPixelStoref; }
  if (strcmp(name, "glPixelStorei") == 0) { return glPixelStorei; }
  if (strcmp(name, "glReadBuffer") == 0) { return glReadBuffer; }
  if (strcmp(name, "glReadPixels") == 0) { return glReadPixels; }
  if (strcmp(name, "glGetBooleanv") == 0) { return glGetBooleanv; }
  if (strcmp(name, "glGetDoublev") == 0) { return glGetDoublev; }
  if (strcmp(name, "glGetError") == 0) { return glGetError; }
  if (strcmp(name, "glGetFloatv") == 0) { return glGetFloatv; }
  if (strcmp(name, "glGetIntegerv") == 0) { return glGetIntegerv; }
  if (strcmp(name, "glGetString") == 0) { return glGetString; }
  if (strcmp(name, "glGetTexImage") == 0) { return glGetTexImage; }
  if (strcmp(name, "glGetTexParameterfv") == 0) { return glGetTexParameterfv; }
  if (strcmp(name, "glGetTexParameteriv") == 0) { return glGetTexParameteriv; }
  if (strcmp(name, "glGetTexLevelParameterfv") == 0) { return glGetTexLevelParameterfv; }
  if (strcmp(name, "glGetTexLevelParameteriv") == 0) { return glGetTexLevelParameteriv; }
  if (strcmp(name, "glIsEnabled") == 0) { return glIsEnabled; }
  if (strcmp(name, "glDepthRange") == 0) { return glDepthRange; }
  if (strcmp(name, "glViewport") == 0) { return glViewport; }

  // Version 1.1
  if (strcmp(name, "glDrawArrays") == 0) { return glDrawArrays; }
  if (strcmp(name, "glDrawElements") == 0) { return glDrawElements; }
  if (strcmp(name, "glGetPointerv") == 0) { return glGetPointerv; }
  if (strcmp(name, "glPolygonOffset") == 0) { return glPolygonOffset; }
  if (strcmp(name, "glCopyTexImage1D") == 0) { return glCopyTexImage1D; }
  if (strcmp(name, "glCopyTexImage2D") == 0) { return glCopyTexImage2D; }
  if (strcmp(name, "glCopyTexSubImage1D") == 0) { return glCopyTexSubImage1D; }
  if (strcmp(name, "glCopyTexSubImage2D") == 0) { return glCopyTexSubImage2D; }
  if (strcmp(name, "glTexSubImage1D") == 0) { return glTexSubImage1D; }
  if (strcmp(name, "glTexSubImage2D") == 0) { return glTexSubImage2D; }
  if (strcmp(name, "glBindTexture") == 0) { return glBindTexture; }
  if (strcmp(name, "glDeleteTextures") == 0) { return glDeleteTextures; }
  if (strcmp(name, "glGenTextures") == 0) { return glGenTextures; }
  if (strcmp(name, "glIsTexture") == 0) { return glIsTexture; }

  // Version 1.4 Deprecated
  if (strcmp(name, "glFogCoordf") == 0) { return glFogCoordf; }
  if (strcmp(name, "glFogCoordfv") == 0) { return glFogCoordfv; }
  if (strcmp(name, "glFogCoordd") == 0) { return glFogCoordd; }
  if (strcmp(name, "glFogCoorddv") == 0) { return glFogCoorddv; }
  if (strcmp(name, "glFogCoordPointer") == 0) { return glFogCoordPointer; }
  if (strcmp(name, "glSecondaryColor3b") == 0) { return glSecondaryColor3b; }
  if (strcmp(name, "glSecondaryColor3bv") == 0) { return glSecondaryColor3bv; }
  if (strcmp(name, "glSecondaryColor3d") == 0) { return glSecondaryColor3d; }
  if (strcmp(name, "glSecondaryColor3dv") == 0) { return glSecondaryColor3dv; }
  if (strcmp(name, "glSecondaryColor3f") == 0) { return glSecondaryColor3f; }
  if (strcmp(name, "glSecondaryColor3fv") == 0) { return glSecondaryColor3fv; }
  if (strcmp(name, "glSecondaryColor3i") == 0) { return glSecondaryColor3i; }
  if (strcmp(name, "glSecondaryColor3iv") == 0) { return glSecondaryColor3iv; }
  if (strcmp(name, "glSecondaryColor3s") == 0) { return glSecondaryColor3s; }
  if (strcmp(name, "glSecondaryColor3sv") == 0) { return glSecondaryColor3sv; }
  if (strcmp(name, "glSecondaryColor3ub") == 0) { return glSecondaryColor3ub; }
  if (strcmp(name, "glSecondaryColor3ubv") == 0) { return glSecondaryColor3ubv; }
  if (strcmp(name, "glSecondaryColor3ui") == 0) { return glSecondaryColor3ui; }
  if (strcmp(name, "glSecondaryColor3uiv") == 0) { return glSecondaryColor3uiv; }
  if (strcmp(name, "glSecondaryColor3us") == 0) { return glSecondaryColor3us; }
  if (strcmp(name, "glSecondaryColor3usv") == 0) { return glSecondaryColor3usv; }
  if (strcmp(name, "glSecondaryColorPointer") == 0) { return glSecondaryColorPointer; }
  if (strcmp(name, "glWindowPos2d") == 0) { return glWindowPos2d; }
  if (strcmp(name, "glWindowPos2dv") == 0) { return glWindowPos2dv; }
  if (strcmp(name, "glWindowPos2f") == 0) { return glWindowPos2f; }
  if (strcmp(name, "glWindowPos2fv") == 0) { return glWindowPos2fv; }
  if (strcmp(name, "glWindowPos2i") == 0) { return glWindowPos2i; }
  if (strcmp(name, "glWindowPos2iv") == 0) { return glWindowPos2iv; }
  if (strcmp(name, "glWindowPos2s") == 0) { return glWindowPos2s; }
  if (strcmp(name, "glWindowPos2sv") == 0) { return glWindowPos2sv; }
  if (strcmp(name, "glWindowPos3d") == 0) { return glWindowPos3d; }
  if (strcmp(name, "glWindowPos3dv") == 0) { return glWindowPos3dv; }
  if (strcmp(name, "glWindowPos3f") == 0) { return glWindowPos3f; }
  if (strcmp(name, "glWindowPos3fv") == 0) { return glWindowPos3fv; }
  if (strcmp(name, "glWindowPos3i") == 0) { return glWindowPos3i; }
  if (strcmp(name, "glWindowPos3iv") == 0) { return glWindowPos3iv; }
  if (strcmp(name, "glWindowPos3s") == 0) { return glWindowPos3s; }
  if (strcmp(name, "glWindowPos3sv") == 0) { return glWindowPos3sv; }

  // Version 1.2
  if (strcmp(name, "glBlendColor") == 0) { return glBlendColor; }
  if (strcmp(name, "glBlendEquation") == 0) { return glBlendEquation; }
  if (strcmp(name, "glDrawRangeElements") == 0) { return glDrawRangeElements; }
  if (strcmp(name, "glTexImage3D") == 0) { return glTexImage3D; }
  if (strcmp(name, "glTexSubImage3D") == 0) { return glTexSubImage3D; }
  if (strcmp(name, "glCopyTexSubImage3D") == 0) { return glCopyTexSubImage3D; }

  // Version 1.3
  if (strcmp(name, "glActiveTexture") == 0) { return glActiveTexture; }
  if (strcmp(name, "glSampleCoverage") == 0) { return glSampleCoverage; }
  if (strcmp(name, "glCompressedTexImage3D") == 0) { return glCompressedTexImage3D; }
  if (strcmp(name, "glCompressedTexImage2D") == 0) { return glCompressedTexImage2D; }
  if (strcmp(name, "glCompressedTexImage1D") == 0) { return glCompressedTexImage1D; }
  if (strcmp(name, "glCompressedTexSubImage3D") == 0) { return glCompressedTexSubImage3D; }
  if (strcmp(name, "glCompressedTexSubImage2D") == 0) { return glCompressedTexSubImage2D; }
  if (strcmp(name, "glCompressedTexSubImage1D") == 0) { return glCompressedTexSubImage1D; }
  if (strcmp(name, "glGetCompressedTexImage") == 0) { return glGetCompressedTexImage; }

  // Version 1.1 Deprecated
  if (strcmp(name, "glArrayElement") == 0) { return glArrayElement; }
  if (strcmp(name, "glColorPointer") == 0) { return glColorPointer; }
  if (strcmp(name, "glDisableClientState") == 0) { return glDisableClientState; }
  if (strcmp(name, "glEdgeFlagPointer") == 0) { return glEdgeFlagPointer; }
  if (strcmp(name, "glEnableClientState") == 0) { return glEnableClientState; }
  if (strcmp(name, "glIndexPointer") == 0) { return glIndexPointer; }
  if (strcmp(name, "glInterleavedArrays") == 0) { return glInterleavedArrays; }
  if (strcmp(name, "glNormalPointer") == 0) { return glNormalPointer; }
  if (strcmp(name, "glTexCoordPointer") == 0) { return glTexCoordPointer; }
  if (strcmp(name, "glVertexPointer") == 0) { return glVertexPointer; }
  if (strcmp(name, "glAreTexturesResident") == 0) { return glAreTexturesResident; }
  if (strcmp(name, "glPrioritizeTextures") == 0) { return glPrioritizeTextures; }
  if (strcmp(name, "glIndexub") == 0) { return glIndexub; }
  if (strcmp(name, "glIndexubv") == 0) { return glIndexubv; }
  if (strcmp(name, "glPopClientAttrib") == 0) { return glPopClientAttrib; }
  if (strcmp(name, "glPushClientAttrib") == 0) { return glPushClientAttrib; }

  // Version 1.0 Deprecated
  if (strcmp(name, "glNewList") == 0) { return glNewList; }
  if (strcmp(name, "glEndList") == 0) { return glEndList; }
  if (strcmp(name, "glCallList") == 0) { return glCallList; }
  if (strcmp(name, "glCallLists") == 0) { return glCallLists; }
  if (strcmp(name, "glDeleteLists") == 0) { return glDeleteLists; }
  if (strcmp(name, "glGenLists") == 0) { return glGenLists; }
  if (strcmp(name, "glListBase") == 0) { return glListBase; }
  if (strcmp(name, "glBegin") == 0) { return glBegin; }
  if (strcmp(name, "glBitmap") == 0) { return glBitmap; }
  if (strcmp(name, "glColor3b") == 0) { return glColor3b; }
  if (strcmp(name, "glColor3bv") == 0) { return glColor3bv; }
  if (strcmp(name, "glColor3d") == 0) { return glColor3d; }
  if (strcmp(name, "glColor3dv") == 0) { return glColor3dv; }
  if (strcmp(name, "glColor3f") == 0) { return glColor3f; }
  if (strcmp(name, "glColor3fv") == 0) { return glColor3fv; }
  if (strcmp(name, "glColor3i") == 0) { return glColor3i; }
  if (strcmp(name, "glColor3iv") == 0) { return glColor3iv; }
  if (strcmp(name, "glColor3s") == 0) { return glColor3s; }
  if (strcmp(name, "glColor3sv") == 0) { return glColor3sv; }
  if (strcmp(name, "glColor3ub") == 0) { return glColor3ub; }
  if (strcmp(name, "glColor3ubv") == 0) { return glColor3ubv; }
  if (strcmp(name, "glColor3ui") == 0) { return glColor3ui; }
  if (strcmp(name, "glColor3uiv") == 0) { return glColor3uiv; }
  if (strcmp(name, "glColor3us") == 0) { return glColor3us; }
  if (strcmp(name, "glColor3usv") == 0) { return glColor3usv; }
  if (strcmp(name, "glColor4b") == 0) { return glColor4b; }
  if (strcmp(name, "glColor4bv") == 0) { return glColor4bv; }
  if (strcmp(name, "glColor4d") == 0) { return glColor4d; }
  if (strcmp(name, "glColor4dv") == 0) { return glColor4dv; }
  if (strcmp(name, "glColor4f") == 0) { return glColor4f; }
  if (strcmp(name, "glColor4fv") == 0) { return glColor4fv; }
  if (strcmp(name, "glColor4i") == 0) { return glColor4i; }
  if (strcmp(name, "glColor4iv") == 0) { return glColor4iv; }
  if (strcmp(name, "glColor4s") == 0) { return glColor4s; }
  if (strcmp(name, "glColor4sv") == 0) { return glColor4sv; }
  if (strcmp(name, "glColor4ub") == 0) { return glColor4ub; }
  if (strcmp(name, "glColor4ubv") == 0) { return glColor4ubv; }
  if (strcmp(name, "glColor4ui") == 0) { return glColor4ui; }
  if (strcmp(name, "glColor4uiv") == 0) { return glColor4uiv; }
  if (strcmp(name, "glColor4us") == 0) { return glColor4us; }
  if (strcmp(name, "glColor4usv") == 0) { return glColor4usv; }
  if (strcmp(name, "glEdgeFlag") == 0) { return glEdgeFlag; }
  if (strcmp(name, "glEdgeFlagv") == 0) { return glEdgeFlagv; }
  if (strcmp(name, "glEnd") == 0) { return glEnd; }
  if (strcmp(name, "glIndexd") == 0) { return glIndexd; }
  if (strcmp(name, "glIndexdv") == 0) { return glIndexdv; }
  if (strcmp(name, "glIndexf") == 0) { return glIndexf; }
  if (strcmp(name, "glIndexfv") == 0) { return glIndexfv; }
  if (strcmp(name, "glIndexi") == 0) { return glIndexi; }
  if (strcmp(name, "glIndexiv") == 0) { return glIndexiv; }
  if (strcmp(name, "glIndexs") == 0) { return glIndexs; }
  if (strcmp(name, "glIndexsv") == 0) { return glIndexsv; }
  if (strcmp(name, "glNormal3b") == 0) { return glNormal3b; }
  if (strcmp(name, "glNormal3bv") == 0) { return glNormal3bv; }
  if (strcmp(name, "glNormal3d") == 0) { return glNormal3d; }
  if (strcmp(name, "glNormal3dv") == 0) { return glNormal3dv; }
  if (strcmp(name, "glNormal3f") == 0) { return glNormal3f; }
  if (strcmp(name, "glNormal3fv") == 0) { return glNormal3fv; }
  if (strcmp(name, "glNormal3i") == 0) { return glNormal3i; }
  if (strcmp(name, "glNormal3iv") == 0) { return glNormal3iv; }
  if (strcmp(name, "glNormal3s") == 0) { return glNormal3s; }
  if (strcmp(name, "glNormal3sv") == 0) { return glNormal3sv; }
  if (strcmp(name, "glRasterPos2d") == 0) { return glRasterPos2d; }
  if (strcmp(name, "glRasterPos2dv") == 0) { return glRasterPos2dv; }
  if (strcmp(name, "glRasterPos2f") == 0) { return glRasterPos2f; }
  if (strcmp(name, "glRasterPos2fv") == 0) { return glRasterPos2fv; }
  if (strcmp(name, "glRasterPos2i") == 0) { return glRasterPos2i; }
  if (strcmp(name, "glRasterPos2iv") == 0) { return glRasterPos2iv; }
  if (strcmp(name, "glRasterPos2s") == 0) { return glRasterPos2s; }
  if (strcmp(name, "glRasterPos2sv") == 0) { return glRasterPos2sv; }
  if (strcmp(name, "glRasterPos3d") == 0) { return glRasterPos3d; }
  if (strcmp(name, "glRasterPos3dv") == 0) { return glRasterPos3dv; }
  if (strcmp(name, "glRasterPos3f") == 0) { return glRasterPos3f; }
  if (strcmp(name, "glRasterPos3fv") == 0) { return glRasterPos3fv; }
  if (strcmp(name, "glRasterPos3i") == 0) { return glRasterPos3i; }
  if (strcmp(name, "glRasterPos3iv") == 0) { return glRasterPos3iv; }
  if (strcmp(name, "glRasterPos3s") == 0) { return glRasterPos3s; }
  if (strcmp(name, "glRasterPos3sv") == 0) { return glRasterPos3sv; }
  if (strcmp(name, "glRasterPos4d") == 0) { return glRasterPos4d; }
  if (strcmp(name, "glRasterPos4dv") == 0) { return glRasterPos4dv; }
  if (strcmp(name, "glRasterPos4f") == 0) { return glRasterPos4f; }
  if (strcmp(name, "glRasterPos4fv") == 0) { return glRasterPos4fv; }
  if (strcmp(name, "glRasterPos4i") == 0) { return glRasterPos4i; }
  if (strcmp(name, "glRasterPos4iv") == 0) { return glRasterPos4iv; }
  if (strcmp(name, "glRasterPos4s") == 0) { return glRasterPos4s; }
  if (strcmp(name, "glRasterPos4sv") == 0) { return glRasterPos4sv; }
  if (strcmp(name, "glRectd") == 0) { return glRectd; }
  if (strcmp(name, "glRectdv") == 0) { return glRectdv; }
  if (strcmp(name, "glRectf") == 0) { return glRectf; }
  if (strcmp(name, "glRectfv") == 0) { return glRectfv; }
  if (strcmp(name, "glRecti") == 0) { return glRecti; }
  if (strcmp(name, "glRectiv") == 0) { return glRectiv; }
  if (strcmp(name, "glRects") == 0) { return glRects; }
  if (strcmp(name, "glRectsv") == 0) { return glRectsv; }
  if (strcmp(name, "glTexCoord1d") == 0) { return glTexCoord1d; }
  if (strcmp(name, "glTexCoord1dv") == 0) { return glTexCoord1dv; }
  if (strcmp(name, "glTexCoord1f") == 0) { return glTexCoord1f; }
  if (strcmp(name, "glTexCoord1fv") == 0) { return glTexCoord1fv; }
  if (strcmp(name, "glTexCoord1i") == 0) { return glTexCoord1i; }
  if (strcmp(name, "glTexCoord1iv") == 0) { return glTexCoord1iv; }
  if (strcmp(name, "glTexCoord1s") == 0) { return glTexCoord1s; }
  if (strcmp(name, "glTexCoord1sv") == 0) { return glTexCoord1sv; }
  if (strcmp(name, "glTexCoord2d") == 0) { return glTexCoord2d; }
  if (strcmp(name, "glTexCoord2dv") == 0) { return glTexCoord2dv; }
  if (strcmp(name, "glTexCoord2f") == 0) { return glTexCoord2f; }
  if (strcmp(name, "glTexCoord2fv") == 0) { return glTexCoord2fv; }
  if (strcmp(name, "glTexCoord2i") == 0) { return glTexCoord2i; }
  if (strcmp(name, "glTexCoord2iv") == 0) { return glTexCoord2iv; }
  if (strcmp(name, "glTexCoord2s") == 0) { return glTexCoord2s; }
  if (strcmp(name, "glTexCoord2sv") == 0) { return glTexCoord2sv; }
  if (strcmp(name, "glTexCoord3d") == 0) { return glTexCoord3d; }
  if (strcmp(name, "glTexCoord3dv") == 0) { return glTexCoord3dv; }
  if (strcmp(name, "glTexCoord3f") == 0) { return glTexCoord3f; }
  if (strcmp(name, "glTexCoord3fv") == 0) { return glTexCoord3fv; }
  if (strcmp(name, "glTexCoord3i") == 0) { return glTexCoord3i; }
  if (strcmp(name, "glTexCoord3iv") == 0) { return glTexCoord3iv; }
  if (strcmp(name, "glTexCoord3s") == 0) { return glTexCoord3s; }
  if (strcmp(name, "glTexCoord3sv") == 0) { return glTexCoord3sv; }
  if (strcmp(name, "glTexCoord4d") == 0) { return glTexCoord4d; }
  if (strcmp(name, "glTexCoord4dv") == 0) { return glTexCoord4dv; }
  if (strcmp(name, "glTexCoord4f") == 0) { return glTexCoord4f; }
  if (strcmp(name, "glTexCoord4fv") == 0) { return glTexCoord4fv; }
  if (strcmp(name, "glTexCoord4i") == 0) { return glTexCoord4i; }
  if (strcmp(name, "glTexCoord4iv") == 0) { return glTexCoord4iv; }
  if (strcmp(name, "glTexCoord4s") == 0) { return glTexCoord4s; }
  if (strcmp(name, "glTexCoord4sv") == 0) { return glTexCoord4sv; }
  if (strcmp(name, "glVertex2d") == 0) { return glVertex2d; }
  if (strcmp(name, "glVertex2dv") == 0) { return glVertex2dv; }
  if (strcmp(name, "glVertex2f") == 0) { return glVertex2f; }
  if (strcmp(name, "glVertex2fv") == 0) { return glVertex2fv; }
  if (strcmp(name, "glVertex2i") == 0) { return glVertex2i; }
  if (strcmp(name, "glVertex2iv") == 0) { return glVertex2iv; }
  if (strcmp(name, "glVertex2s") == 0) { return glVertex2s; }
  if (strcmp(name, "glVertex2sv") == 0) { return glVertex2sv; }
  if (strcmp(name, "glVertex3d") == 0) { return glVertex3d; }
  if (strcmp(name, "glVertex3dv") == 0) { return glVertex3dv; }
  if (strcmp(name, "glVertex3f") == 0) { return glVertex3f; }
  if (strcmp(name, "glVertex3fv") == 0) { return glVertex3fv; }
  if (strcmp(name, "glVertex3i") == 0) { return glVertex3i; }
  if (strcmp(name, "glVertex3iv") == 0) { return glVertex3iv; }
  if (strcmp(name, "glVertex3s") == 0) { return glVertex3s; }
  if (strcmp(name, "glVertex3sv") == 0) { return glVertex3sv; }
  if (strcmp(name, "glVertex4d") == 0) { return glVertex4d; }
  if (strcmp(name, "glVertex4dv") == 0) { return glVertex4dv; }
  if (strcmp(name, "glVertex4f") == 0) { return glVertex4f; }
  if (strcmp(name, "glVertex4fv") == 0) { return glVertex4fv; }
  if (strcmp(name, "glVertex4i") == 0) { return glVertex4i; }
  if (strcmp(name, "glVertex4iv") == 0) { return glVertex4iv; }
  if (strcmp(name, "glVertex4s") == 0) { return glVertex4s; }
  if (strcmp(name, "glVertex4sv") == 0) { return glVertex4sv; }
  if (strcmp(name, "glClipPlane") == 0) { return glClipPlane; }
  if (strcmp(name, "glColorMaterial") == 0) { return glColorMaterial; }
  if (strcmp(name, "glFogf") == 0) { return glFogf; }
  if (strcmp(name, "glFogfv") == 0) { return glFogfv; }
  if (strcmp(name, "glFogi") == 0) { return glFogi; }
  if (strcmp(name, "glFogiv") == 0) { return glFogiv; }
  if (strcmp(name, "glLightf") == 0) { return glLightf; }
  if (strcmp(name, "glLightfv") == 0) { return glLightfv; }
  if (strcmp(name, "glLighti") == 0) { return glLighti; }
  if (strcmp(name, "glLightiv") == 0) { return glLightiv; }
  if (strcmp(name, "glLightModelf") == 0) { return glLightModelf; }
  if (strcmp(name, "glLightModelfv") == 0) { return glLightModelfv; }
  if (strcmp(name, "glLightModeli") == 0) { return glLightModeli; }
  if (strcmp(name, "glLightModeliv") == 0) { return glLightModeliv; }
  if (strcmp(name, "glLineStipple") == 0) { return glLineStipple; }
  if (strcmp(name, "glMaterialf") == 0) { return glMaterialf; }
  if (strcmp(name, "glMaterialfv") == 0) { return glMaterialfv; }
  if (strcmp(name, "glMateriali") == 0) { return glMateriali; }
  if (strcmp(name, "glMaterialiv") == 0) { return glMaterialiv; }
  if (strcmp(name, "glPolygonStipple") == 0) { return glPolygonStipple; }
  if (strcmp(name, "glShadeModel") == 0) { return glShadeModel; }
  if (strcmp(name, "glTexEnvf") == 0) { return glTexEnvf; }
  if (strcmp(name, "glTexEnvfv") == 0) { return glTexEnvfv; }
  if (strcmp(name, "glTexEnvi") == 0) { return glTexEnvi; }
  if (strcmp(name, "glTexEnviv") == 0) { return glTexEnviv; }
  if (strcmp(name, "glTexGend") == 0) { return glTexGend; }
  if (strcmp(name, "glTexGendv") == 0) { return glTexGendv; }
  if (strcmp(name, "glTexGenf") == 0) { return glTexGenf; }
  if (strcmp(name, "glTexGenfv") == 0) { return glTexGenfv; }
  if (strcmp(name, "glTexGeni") == 0) { return glTexGeni; }
  if (strcmp(name, "glTexGeniv") == 0) { return glTexGeniv; }
  if (strcmp(name, "glFeedbackBuffer") == 0) { return glFeedbackBuffer; }
  if (strcmp(name, "glSelectBuffer") == 0) { return glSelectBuffer; }
  if (strcmp(name, "glRenderMode") == 0) { return glRenderMode; }
  if (strcmp(name, "glInitNames") == 0) { return glInitNames; }
  if (strcmp(name, "glLoadName") == 0) { return glLoadName; }
  if (strcmp(name, "glPassThrough") == 0) { return glPassThrough; }
  if (strcmp(name, "glPopName") == 0) { return glPopName; }
  if (strcmp(name, "glPushName") == 0) { return glPushName; }
  if (strcmp(name, "glClearAccum") == 0) { return glClearAccum; }
  if (strcmp(name, "glClearIndex") == 0) { return glClearIndex; }
  if (strcmp(name, "glIndexMask") == 0) { return glIndexMask; }
  if (strcmp(name, "glAccum") == 0) { return glAccum; }
  if (strcmp(name, "glPopAttrib") == 0) { return glPopAttrib; }
  if (strcmp(name, "glPushAttrib") == 0) { return glPushAttrib; }
  if (strcmp(name, "glMap1d") == 0) { return glMap1d; }
  if (strcmp(name, "glMap1f") == 0) { return glMap1f; }
  if (strcmp(name, "glMap2d") == 0) { return glMap2d; }
  if (strcmp(name, "glMap2f") == 0) { return glMap2f; }
  if (strcmp(name, "glMapGrid1d") == 0) { return glMapGrid1d; }
  if (strcmp(name, "glMapGrid1f") == 0) { return glMapGrid1f; }
  if (strcmp(name, "glMapGrid2d") == 0) { return glMapGrid2d; }
  if (strcmp(name, "glMapGrid2f") == 0) { return glMapGrid2f; }
  if (strcmp(name, "glEvalCoord1d") == 0) { return glEvalCoord1d; }
  if (strcmp(name, "glEvalCoord1dv") == 0) { return glEvalCoord1dv; }
  if (strcmp(name, "glEvalCoord1f") == 0) { return glEvalCoord1f; }
  if (strcmp(name, "glEvalCoord1fv") == 0) { return glEvalCoord1fv; }
  if (strcmp(name, "glEvalCoord2d") == 0) { return glEvalCoord2d; }
  if (strcmp(name, "glEvalCoord2dv") == 0) { return glEvalCoord2dv; }
  if (strcmp(name, "glEvalCoord2f") == 0) { return glEvalCoord2f; }
  if (strcmp(name, "glEvalCoord2fv") == 0) { return glEvalCoord2fv; }
  if (strcmp(name, "glEvalMesh1") == 0) { return glEvalMesh1; }
  if (strcmp(name, "glEvalPoint1") == 0) { return glEvalPoint1; }
  if (strcmp(name, "glEvalMesh2") == 0) { return glEvalMesh2; }
  if (strcmp(name, "glEvalPoint2") == 0) { return glEvalPoint2; }
  if (strcmp(name, "glAlphaFunc") == 0) { return glAlphaFunc; }
  if (strcmp(name, "glPixelZoom") == 0) { return glPixelZoom; }
  if (strcmp(name, "glPixelTransferf") == 0) { return glPixelTransferf; }
  if (strcmp(name, "glPixelTransferi") == 0) { return glPixelTransferi; }
  if (strcmp(name, "glPixelMapfv") == 0) { return glPixelMapfv; }
  if (strcmp(name, "glPixelMapuiv") == 0) { return glPixelMapuiv; }
  if (strcmp(name, "glPixelMapusv") == 0) { return glPixelMapusv; }
  if (strcmp(name, "glCopyPixels") == 0) { return glCopyPixels; }
  if (strcmp(name, "glDrawPixels") == 0) { return glDrawPixels; }
  if (strcmp(name, "glGetClipPlane") == 0) { return glGetClipPlane; }
  if (strcmp(name, "glGetLightfv") == 0) { return glGetLightfv; }
  if (strcmp(name, "glGetLightiv") == 0) { return glGetLightiv; }
  if (strcmp(name, "glGetMapdv") == 0) { return glGetMapdv; }
  if (strcmp(name, "glGetMapfv") == 0) { return glGetMapfv; }
  if (strcmp(name, "glGetMapiv") == 0) { return glGetMapiv; }
  if (strcmp(name, "glGetMaterialfv") == 0) { return glGetMaterialfv; }
  if (strcmp(name, "glGetMaterialiv") == 0) { return glGetMaterialiv; }
  if (strcmp(name, "glGetPixelMapfv") == 0) { return glGetPixelMapfv; }
  if (strcmp(name, "glGetPixelMapuiv") == 0) { return glGetPixelMapuiv; }
  if (strcmp(name, "glGetPixelMapusv") == 0) { return glGetPixelMapusv; }
  if (strcmp(name, "glGetPolygonStipple") == 0) { return glGetPolygonStipple; }
  if (strcmp(name, "glGetTexEnvfv") == 0) { return glGetTexEnvfv; }
  if (strcmp(name, "glGetTexEnviv") == 0) { return glGetTexEnviv; }
  if (strcmp(name, "glGetTexGendv") == 0) { return glGetTexGendv; }
  if (strcmp(name, "glGetTexGenfv") == 0) { return glGetTexGenfv; }
  if (strcmp(name, "glGetTexGeniv") == 0) { return glGetTexGeniv; }
  if (strcmp(name, "glIsList") == 0) { return glIsList; }
  if (strcmp(name, "glFrustum") == 0) { return glFrustum; }
  if (strcmp(name, "glLoadIdentity") == 0) { return glLoadIdentity; }
  if (strcmp(name, "glLoadMatrixf") == 0) { return glLoadMatrixf; }
  if (strcmp(name, "glLoadMatrixd") == 0) { return glLoadMatrixd; }
  if (strcmp(name, "glMatrixMode") == 0) { return glMatrixMode; }
  if (strcmp(name, "glMultMatrixf") == 0) { return glMultMatrixf; }
  if (strcmp(name, "glMultMatrixd") == 0) { return glMultMatrixd; }
  if (strcmp(name, "glOrtho") == 0) { return glOrtho; }
  if (strcmp(name, "glPopMatrix") == 0) { return glPopMatrix; }
  if (strcmp(name, "glPushMatrix") == 0) { return glPushMatrix; }
  if (strcmp(name, "glRotated") == 0) { return glRotated; }
  if (strcmp(name, "glRotatef") == 0) { return glRotatef; }
  if (strcmp(name, "glScaled") == 0) { return glScaled; }
  if (strcmp(name, "glScalef") == 0) { return glScalef; }
  if (strcmp(name, "glTranslated") == 0) { return glTranslated; }
  if (strcmp(name, "glTranslatef") == 0) { return glTranslatef; }

  // Version 1.2 Deprecated
  if (strcmp(name, "glColorTable") == 0) { return glColorTable; }
  if (strcmp(name, "glColorTableParameterfv") == 0) { return glColorTableParameterfv; }
  if (strcmp(name, "glColorTableParameteriv") == 0) { return glColorTableParameteriv; }
  if (strcmp(name, "glCopyColorTable") == 0) { return glCopyColorTable; }
  if (strcmp(name, "glGetColorTable") == 0) { return glGetColorTable; }
  if (strcmp(name, "glGetColorTableParameterfv") == 0) { return glGetColorTableParameterfv; }
  if (strcmp(name, "glGetColorTableParameteriv") == 0) { return glGetColorTableParameteriv; }
  if (strcmp(name, "glColorSubTable") == 0) { return glColorSubTable; }
  if (strcmp(name, "glCopyColorSubTable") == 0) { return glCopyColorSubTable; }
  if (strcmp(name, "glConvolutionFilter1D") == 0) { return glConvolutionFilter1D; }
  if (strcmp(name, "glConvolutionFilter2D") == 0) { return glConvolutionFilter2D; }
  if (strcmp(name, "glConvolutionParameterf") == 0) { return glConvolutionParameterf; }
  if (strcmp(name, "glConvolutionParameterfv") == 0) { return glConvolutionParameterfv; }
  if (strcmp(name, "glConvolutionParameteri") == 0) { return glConvolutionParameteri; }
  if (strcmp(name, "glConvolutionParameteriv") == 0) { return glConvolutionParameteriv; }
  if (strcmp(name, "glCopyConvolutionFilter1D") == 0) { return glCopyConvolutionFilter1D; }
  if (strcmp(name, "glCopyConvolutionFilter2D") == 0) { return glCopyConvolutionFilter2D; }
  if (strcmp(name, "glGetConvolutionFilter") == 0) { return glGetConvolutionFilter; }
  if (strcmp(name, "glGetConvolutionParameterfv") == 0) { return glGetConvolutionParameterfv; }
  if (strcmp(name, "glGetConvolutionParameteriv") == 0) { return glGetConvolutionParameteriv; }
  if (strcmp(name, "glGetSeparableFilter") == 0) { return glGetSeparableFilter; }
  if (strcmp(name, "glSeparableFilter2D") == 0) { return glSeparableFilter2D; }
  if (strcmp(name, "glGetHistogram") == 0) { return glGetHistogram; }
  if (strcmp(name, "glGetHistogramParameterfv") == 0) { return glGetHistogramParameterfv; }
  if (strcmp(name, "glGetHistogramParameteriv") == 0) { return glGetHistogramParameteriv; }
  if (strcmp(name, "glGetMinmax") == 0) { return glGetMinmax; }
  if (strcmp(name, "glGetMinmaxParameterfv") == 0) { return glGetMinmaxParameterfv; }
  if (strcmp(name, "glGetMinmaxParameteriv") == 0) { return glGetMinmaxParameteriv; }
  if (strcmp(name, "glHistogram") == 0) { return glHistogram; }
  if (strcmp(name, "glMinmax") == 0) { return glMinmax; }
  if (strcmp(name, "glResetHistogram") == 0) { return glResetHistogram; }
  if (strcmp(name, "glResetMinmax") == 0) { return glResetMinmax; }

  return 0;
}
