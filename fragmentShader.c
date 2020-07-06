#version 330 core
out vec4 FragColor;
in vec3 ourColor;
void main()
{
   FragColor = vec4(1.0f, 0.56470588235294117647058823529412f, 0.16078431372549019607843137254902f, 1.0f); // ourColor, 1.0f
}