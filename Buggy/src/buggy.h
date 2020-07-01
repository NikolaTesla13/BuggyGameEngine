#pragma once
#include "window.h"
#include "../include/glad/glad.h"
#include "../include/GLFW/glfw3.h"
#include "shader.h"
#include "triangle.h"
#include<string.h>
#include<iostream>

#define DEBUG true
#if DEBUG
    #define log(x) std::cout<<x;
#else   
    #define log(x)
#endif