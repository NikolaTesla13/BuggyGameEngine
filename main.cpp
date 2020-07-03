#include "Buggy/src/buggy.h"

float offset = 1.0f;

Update
    float vertecies[21] = {
        0.5f, offset, 0.0f, 1.0f, 0.0f, 0.0f,
        -0.5f, offset - 0.05f, 0.0f, 0.0f, 1.0f, 0.0f,
        0.0f, offset + 0.5f, 0.0f, 0.0f, 0.0f, 1.0f
    };
    offset -= 0.01f;
    Triangle tri(vertecies);

    log(offset);
    log(" ");
    log(offset - 0.05f);
    log(" ");
    log(offset + 0.5f);
    log("  ");

    #if DEBUG
        if(offset < -1.00f)
            exit(0);
    #endif
end

void input(GLFWwindow* window, int key, int scancode, int action, int mods) {
    log("key pressed!!!!!!!!\n");
}

Start
    log("start");
end

Main
    Window win(
        800, 
        600, 
        "Triangle", 
        update, 
        start,
        input
    );
end
