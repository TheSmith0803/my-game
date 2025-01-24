#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "../types.h"
#include "../util.h"
#include "io.h"

// 20MiB, can probably change this to a higher value without issue.
// Check your target platform
#define IO_READ_CHUNK_SIZE 2097152

File io_file_read(const char *path);
int io_file_write(void *buffer, size_t size, const char *path);