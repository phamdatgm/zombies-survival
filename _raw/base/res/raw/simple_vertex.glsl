#version 300 es
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec2 aTexCoord;

uniform mat4 stTransform;

out vec2 texCoord;

void main()
{
    gl_Position = vec4(aPos.xyz, 1.0);
    texCoord = (stTransform * vec4(aTexCoord, 0.0, 1.0)).xy;
}
