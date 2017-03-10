#include <iostream>

#include <glfw3.h>

#include <glm.hpp>
#include <gtc/matrix_transform.hpp>

using namespace std;
using namespace glm;

GLFWwindow* window;

int main(int argc, char** argv)
{
	cout << "asdf" << endl;

	if (!glfwInit())
	{
		cout << "Failed to initialize GLFW" << endl;
		return -1;
	}

	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	window = glfwCreateWindow(1024, 768, "Cube", NULL, NULL);
	if (window == NULL)
	{
		cout << "Failed to open window" << endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	glClearColor(0, 0, 0.4, 1);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);

	GLuint VertexArrayID;
	glGenVertexArrays(1, &VertexArrayID); // need to add glew
	glDepthFunc(VertexArrayID);

	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);		
		static const GLfloat g_vertex_buffer_data[] = {
			-1.0f,-1.0f,-1.0f, // triangle 1 : begin
			-1.0f,-1.0f, 1.0f,
			-1.0f, 1.0f, 1.0f, // triangle 1 : end
			1.0f, 1.0f,-1.0f, // triangle 2 : begin
			-1.0f,-1.0f,-1.0f,
			-1.0f, 1.0f,-1.0f, // triangle 2 : end
			1.0f,-1.0f, 1.0f,
			-1.0f,-1.0f,-1.0f,
			1.0f,-1.0f,-1.0f,
			1.0f, 1.0f,-1.0f,
			1.0f,-1.0f,-1.0f,
			-1.0f,-1.0f,-1.0f,
			-1.0f,-1.0f,-1.0f,
			-1.0f, 1.0f, 1.0f,
			-1.0f, 1.0f,-1.0f,
			1.0f,-1.0f, 1.0f,
			-1.0f,-1.0f, 1.0f,
			-1.0f,-1.0f,-1.0f,
			-1.0f, 1.0f, 1.0f,
			-1.0f,-1.0f, 1.0f,
			1.0f,-1.0f, 1.0f,
			1.0f, 1.0f, 1.0f,
			1.0f,-1.0f,-1.0f,
			1.0f, 1.0f,-1.0f,
			1.0f,-1.0f,-1.0f,
			1.0f, 1.0f, 1.0f,
			1.0f,-1.0f, 1.0f,
			1.0f, 1.0f, 1.0f,
			1.0f, 1.0f,-1.0f,
			-1.0f, 1.0f,-1.0f,
			1.0f, 1.0f, 1.0f,
			-1.0f, 1.0f,-1.0f,
			-1.0f, 1.0f, 1.0f,
			1.0f, 1.0f, 1.0f,
			-1.0f, 1.0f, 1.0f,
			1.0f,-1.0f, 1.0f
		};

		glDrawArrays(GL_TRIANGLES, 0, 12 * 3);


		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}