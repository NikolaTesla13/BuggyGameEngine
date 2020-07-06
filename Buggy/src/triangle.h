#pragma once 
#include "buggy.h"

class Triangle 
{
public:
    Triangle(float param_vertecies[21], char* vertexShader, char* fragmentShader);
    void Debug();
};