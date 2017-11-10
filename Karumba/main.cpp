#include <iostream>
#include "vector.h"
#include "utils.h"
#include <glew.h>
#include <glfw3.h>

int main()
{
	glfwInit();
	GLFWwindow *window;
	window = glfwCreateWindow(600, 800, "Engine Window", NULL, NULL);
	glfwMakeContextCurrent(window);
	glewInit();
	glClearColor(1, 0, 0, 0);
	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glColor3d(0, 0, 1);
		glBegin(GL_TRIANGLES);
		glVertex2d(-.5, 0);
		glVertex2d(0, .5);
		glVertex2d(.5, 0);
		glEnd();

		glfwPollEvents();
		glfwSwapBuffers(window);
	}
	std::cin.get();
}