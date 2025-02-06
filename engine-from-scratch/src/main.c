#include <stdio.h>
#include <stdbool.h>
#include <glad/glad.h>
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>

#include "engine/global.h"
#include "engine/config.h"
#include "engine/input.h"
#include "engine/time.h"
#include "engine/physics.h"
#include "engine/util.h"

static bool should_quit = false;
static vec2 pos;

static void input_handle(void) {
    if (global.input.escape == KS_PRESSED || global.input.escape == KS_HELD) {
        should_quit = true;
    }
    i32 x, y;
    SDL_GetMouseState(&x, &y);
    pos[0] = (f32)x;
    pos[1] = global.render.height - y;
}

int main(int argc, char *argv[]) {
    time_init(60);
    config_init();
    render_init();
    physics_init();

    u32 body_count = 100;

    for (u32 i = 0; i < body_count; ++i) {
        usize body_index = physics_body_create(
            (vec2){ rand() % (i32)global.render.width, rand() % (i32)global.render.height },
            (vec2){ rand() % 100, rand() % 100});
        Body *body = physics_body_get(body_index);
        body->acceleration[0] = rand() % 200 - 100;
        body->acceleration[1] = rand() % 200 - 100;
    }

    pos[0] = global.render.width * 0.5;
    pos[1] = global.render.height * 0.5;

    SDL_ShowCursor(false);

    AABB test_aabb = {
        .position = {global.render.width * 0.5, global.render.height * 0.5},
        .half_size = {50, 50}
    };

    while (!should_quit) {
        time_update();
        SDL_Event event;

        while (SDL_PollEvent(&event)) {
            switch (event.type) {
            case SDL_QUIT:
                should_quit = true;
                break;
            default:
                break;
            }
        }
        input_update();
        input_handle();
        physics_update();

        render_begin();

        render_aabb((f32*)&test_aabb, (vec4){1, 1, 1, 1});

        if (pyhsics_point_intersect_aabb(pos, test_aabb)) {
            render_quad(pos, (vec2){5, 5}, RED);
        }
        else {
            render_quad(pos, (vec2){5, 5}, WHITE);
        }

        render_end();
        time_update_late();
    }

    return 0;
}