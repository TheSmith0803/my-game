#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>

#define ERROR_EXIT(...) fprint(stderr, __VA_ARGS__)
#define ERROR_RETURN(R, ...) fprint(stderr, __VA_ARGS__); return R

#endif