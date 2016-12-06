#pragma once
//#pragma comment (lib, "glew32.lib")
//#define GLEW_STATIC


#include <gl\glew.h>
#include <gl\freeglut.h>
#include <iostream>

namespace Core
{

	class Shader_Loader
	{
	private:

		std::string ReadShader(char *filename);
		GLuint CreateShader(GLenum shaderType,
			std::string source,
			char* shaderName);

	public:

		Shader_Loader(void);
		~Shader_Loader(void);
		GLuint CreateProgram(char* VertexShaderFilename,
			char* FragmentShaderFilename);

	};
}