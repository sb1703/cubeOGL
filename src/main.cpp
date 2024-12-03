#include "config.h"

int main(){

    // std::ifstream file;
    // std::string line;

    // file.open("../src/shaders/vertex.txt");
    // while(std::getline(file, line)) {
    //     std::cout << line << std::endl;
    // }

    GLFWwindow* window;

    if(!glfwInit()){
        std::cout << "GLFW couldn't be start" << std::endl;
        return -1;
    }

    window = glfwCreateWindow(640, 480, "cube", NULL, NULL);
    glfwMakeContextCurrent(window);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cout << "Couldn't load opengl" << std::endl;
        glfwTerminate();
        return -1;
    }

    glClearColor(0.25f, 0.5f, 0.75f, 1.0f);

    while(!glfwWindowShouldClose(window)){
        glfwPollEvents();
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
    }

    glfwTerminate();
    return 0;
}