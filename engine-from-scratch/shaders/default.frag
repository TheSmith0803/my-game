#version 330 core
out vec4 frag_color;

in vec2 uvs;

uniform vec 4 color;
uniform sampler2D texture_id;

void main() {
    frag_color = texture(texture_id, uvs) * color;
}