#pragma once
#include <stdio.h>

#ifndef CONOSLE_SCREEN_H
#define CONSOLE_SCREEN_H

void InitScreen(size_t width, size_t height);
void PushPixel(char pixel, int x, int y);
void DrawScreen(void);

#endif
