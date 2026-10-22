#version 300 es

#extension GL_OES_EGL_image_external : enable
#extension GL_OES_EGL_image_external_essl3 : enable

precision mediump float;

out vec4 fragColor;
in vec2 texCoord;

uniform samplerExternalOES tex;

void main()
{
    fragColor = texture(tex, texCoord);
}