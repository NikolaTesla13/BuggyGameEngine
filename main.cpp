#include "Buggy/src/buggy.h"
void update() {
    float vertecies[21] = {
        0.5f, -0.5f, 0.0f, 1.0f, 0.0f, 0.0f,
        -0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f,
        0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 1.0f
    };
    float vertecies2[21] = {
        0.6f, -0.6f, 0.1f, 1.1f, 0.1f, 0.1f,
        -0.6f, -0.6f, 0.1f, 0.1f, 1.1f, 0.1f,
        0.1f, 0.5f, 0.1f, 0.1f, 0.1f, 1.1f
    };
    Triangle tri(vertecies);
    Triangle tri2(vertecies2);
}
void start() {
    std::cout<<"Start\n";
}
int main(void) {
    Window win(800, 600, "Triangle", update, start);
}
