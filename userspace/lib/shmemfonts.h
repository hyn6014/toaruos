#ifndef SHMEMFONTS_H
#define SHMEMFONTS_H

#include "graphics.h"
#include "window.h"

void init_shmemfonts();
void draw_string(gfx_context_t * ctx, int x, int y, uint32_t fg, char * string);

#endif
