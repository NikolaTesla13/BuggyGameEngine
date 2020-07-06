#include "window.h"
#include "shader.h"

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void input(GLFWwindow* window, int key, int scancode, int action, int mods);

Window::Window(int width, int height, const char* name, void update(), void start()) {
    GLFWwindow* window;
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    
    if (!glfwInit())
        return ;

    window = glfwCreateWindow(width, height, name, NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return ;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return ;
    } 
    glViewport(0, 0, 800, 600);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback); 
    glfwSetKeyCallback(window, input);

    start();




    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.34901960784f, 0.61960784313725490196078431372549f, 1.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        update();
    

        

        glfwSwapBuffers(window);

        glfwPollEvents();
    }
    glfwTerminate();
}
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}