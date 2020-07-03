#pragma once
#include "buggy.h"

class Window
{
public:
    Window(int width, int height, const char* name, void update(), void start(), void input(GLFWwindow *, int, int, int, int));
};