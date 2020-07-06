#pragma once
#include "window.h"
#include "../include/glad/glad.h"
#include "../include/GLFW/glfw3.h"
#include "shader.h"
#include "triangle.h"
#include "texture.h"
#include<string.h>
#include<iostream>
#include<future>
#include<conio.h>
#include<vector>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 77
#define KEY_RIGHT 75

// #define DEBUG true
// #if DEBUG
//     #define log(x) std::cout<<x;
// #else   
//     #define log(x)
// #endif

#define Main int main(void) {
#define end }
#define Start void start() {
#define Update void update() {