#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>

#define ERROR_EXIT(...) { fprintf(stderr, __VA_ARGS__); exit(1); }
#define ERROR_RETURN(R, ...) { fprintf(stderr, __VA_ARGS__); return R; }

#define WHITE      (vec4){1, 1, 1, 1}
#define BLACK      (vec4){0, 0, 0, 1}
#define RED        (vec4){1, 0, 0, 1}
#define GREEN      (vec4){0, 1, 0, 1}
#define BLUE       (vec4){0, 0, 1, 1}
#define YELLOW     (vec4){1, 1, 0, 1}
#define CYAN       (vec4){0, 1, 1, 1}
#define MAGENTA    (vec4){1, 0, 1, 1}
#define GRAY       (vec4){0.5, 0.5, 0.5, 1}
#define LIGHT_GRAY (vec4){0.75, 0.75, 0.75, 1}
#define DARK_GRAY  (vec4){0.25, 0.25, 0.25, 1}
#define ORANGE     (vec4){1, 0.5, 0, 1}
#define PINK       (vec4){1, 0.75, 0.8, 1}
#define PURPLE     (vec4){0.5, 0, 0.5, 1}
#define TURQUOISE  (vec4){0, 1, 0.5, 1}
#define BROWN      (vec4){0.6, 0.3, 0.1, 1}
#define LIME       (vec4){0.75, 1, 0, 1}
#define TEAL       (vec4){0, 0.5, 0.5, 1}
#define VIOLET     (vec4){0.5, 0, 1, 1}
#define GOLD       (vec4){1, 0.84, 0, 1}
#define SILVER     (vec4){0.75, 0.75, 0.75, 1}

#endif