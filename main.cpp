#include "Buggy/src/buggy.h"

size_t total_size;
void* operator new(size_t size) 
{
    total_size += size;
    std::cout<<"Alocating "<<size<<" bytes\n";
    return malloc(size);
}

float y = 0.0f;
float x = 0.0f;
float speed = 5;

Update
    float vertecies[] = {
        x+0.2f, y-0.2f, 0.0f, 1.0f, 0.0f, 0.0f,
        x-0.2f, y-0.2f, 0.0f, 0.0f, 1.0f, 0.0f,
        x, y+0.2f, 0.0f, 0.0f, 0.0f, 1.0f
    };
    //offset -= 0.01f;
    //Triangle player(vertecies, "vertexShader.c", "fragmentShader.c");

    float groundVertecies[] = {
        -1.2f, -0.8f, 0.0f, 1.0f, 0.0f, 0.0f,
        1.2f, -0.8f, 0.0f, 0.0f, 1.0f, 0.0f,
        0.0f, -5.0f, 0.0f, 0.0f, 0.0f, 1.0f
    };
    Triangle ground(groundVertecies, "vertexShader.c", "groundFragmentShader.c");

    if(y > -0.6f) {
        y -=0.05f;
    } 
    float tvertices[32] = {
         // position      //colors           //textures
        x+0.2f, y+0.3f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 1.0f, // top-right
        x+0.2f, y-0.2f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, // bottom-right
        x-0.2f, y-0.2f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, //bottom-left
        x-0.2f, y+0.3f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 1.0f // top-left
    };

    Texture tex("img.png", tvertices, "textureVertexShader.c", "textureFragmentShader.c");
    #if DEBUG
        // log("x: ");
        // log(x);
        // log(", y: ");
        // log(y);
        // log(";   ");
    #endif
end

Start
    
end
void input(GLFWwindow* window, int key, int scancode, int action, int mods) {
    if (key == GLFW_KEY_UP && y<-0.5)
        y += 0.01f * speed*8;
    if (key == GLFW_KEY_RIGHT)
        x += 0.01f * speed;
    if (key == GLFW_KEY_LEFT)
        x -= 0.01f * speed;
}
Main
    Window win(
        800, 
        600, 
        "Super Mario Clone", 
        update, 
        start
    );
    std::cout<<glGetString(GL_VERSION)<<'\n';
end
