#include <glad/glad.h>      // like GL/gl.h before anything first glad.h
#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* window);

// settings
const unsigned int SCR_WIDTH = 480;
const unsigned int SCR_HEIGHT = 280;

// Vertex shader written in GLSL
const char* vertedShaderSource = "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "layout (location = 1) in vec3 Colors;\n"
    "out vec3 v_Colors;\n"
    "void main()\n"
    "{\n"
    "   v_Colors = Colors;\n"
    "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0f);\n"
    "}\n";

// Fragment shader written in GLSL
const char* fragmentShaderSource = "#version 330 core\n"
    "in vec3 v_Colors;"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(v_Colors.r, v_Colors.g, v_Colors.b, 1.0f);\n"
    "}\n";

int main()
{
    unsigned int vertexShader = 0;
    unsigned int fragmentShader = 0;
    unsigned int shaderProgram = 0;

    GLuint VBO = 0;
    GLuint VAO = 0;
    GLuint VBO1 = 0;

    int success = 0;
    char infoLog[512];
    
    const float vertices[] = 
    {
        // vertex 0
        0.0f, 0.5f, 0.0f,  // Top
        
        // vertex 1
        -0.5f, -0.5f, 0.0f,  // left bottom
        
        // vertex 2
        0.5f,  -0.5f, 0.0f,  // right bottom
    };

    const float colors[] = {
        1.0f, 0.0f, 0.0f,   // Color Red
        0.0f, 1.0f, 0.0f,   // Color Green
        0.0f, 0.0f, 1.0f   // Color Blue
    };


    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);

    if(NULL == window)
    {
        cout << "Failed to create GLFW window" << endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        cout << "Failed to initialize GLAD" << endl;
        return -1;
    }

    // build and compile shader program
    ///////////////////////////////////
    // Vertex shader
    vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertedShaderSource, NULL);
    glCompileShader(vertexShader);

    // check for shader compile errors
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);

    if(!success)
    {
        glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
        cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << endl;
    }

    //////////////////////////////////
    // Fragment shader
    fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
    glCompileShader(fragmentShader);

    // check for shader compile errors
    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);

    if(!success)
    {
        glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
        cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << endl;
    }

    ///////////////////////////////////
    // link shaders
    shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);

    // check for linking errors
    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);

    if(!success)
    {
        glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
        cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << endl;
    }

    glDeleteShader(fragmentShader);
    glDeleteShader(vertexShader);
    
    // VBO VAO
    glGenVertexArrays(1, &VAO); // generate array of attrib of pointers
    glGenBuffers(1, &VBO);      // Buffer(array) of vertices
    
    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);

    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    
    glEnableVertexAttribArray(0);

    // Vertex
    glVertexAttribPointer(0, 
                          3, // x, y, z
                          GL_FLOAT,
                          GL_FALSE, 
                          0,
                          (void*)0);

    // Color
    glGenBuffers(1, &VBO1);
    glBindBuffer(GL_ARRAY_BUFFER, VBO1);
    glBufferData(GL_ARRAY_BUFFER, sizeof(colors) , colors, GL_STATIC_DRAW);
    
    glEnableVertexAttribArray(1);
    
    // Color
    glVertexAttribPointer(1, 
                          3, // r, g, b
                          GL_FLOAT,
                          GL_FALSE, 
                          0,
                          (void*)0);


    glBindVertexArray(0);

    glDisableVertexAttribArray(0);

    
    while (!glfwWindowShouldClose(window))
    {
        // input
        processInput(window);

        // render screen
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // draw our first triangle
        glUseProgram(shaderProgram);
        glBindVertexArray(VAO);
        glDrawArrays(GL_TRIANGLES, 0, 3);

        // key pressed/released, mouse moved
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    glDeleteBuffers(1, &VBO1);
    glDeleteProgram(shaderProgram);
    

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}

void processInput(GLFWwindow* window)
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, true);
    }
}