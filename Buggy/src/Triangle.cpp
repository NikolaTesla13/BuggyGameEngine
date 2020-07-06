#include "triangle.h"
#include "shader.h"

Triangle::Triangle(float vertecies[21], char* vertexShader, char* fragmentShader) {
        Shader ourShader(vertexShader, fragmentShader);
        delete[] vertexShader;
        delete[] fragmentShader;

        unsigned int VBO, VAO;
        glGenVertexArrays(1, &VAO);
        glGenBuffers(1, &VBO);
        glBindVertexArray(VAO);

        glBindBuffer(GL_ARRAY_BUFFER, VBO);
        glBufferData(GL_ARRAY_BUFFER, sizeof(float)*18, vertecies, GL_STATIC_DRAW);
        delete[] vertecies;

        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
        glEnableVertexAttribArray(1);
        ourShader.use();
        glBindVertexArray(VAO);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glDeleteVertexArrays(1, &VAO);
        glDeleteBuffers(1, &VBO);
}

void Triangle::Debug() {
    std::cout<<"debug";
}