#pragma once
#include <stdio.h>

#ifndef CONOSLE_SCREEN_H
#define CONSOLE_SCREEN_H

void init_screen(size_t width, size_t height);
void push_pixel(char pixel, int x, int y);
void draw_screen(void);

size_t get_screen_width(void);
size_t get_screen_height(void);

#endif
