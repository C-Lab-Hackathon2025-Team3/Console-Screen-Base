#include "console_screen.h"

int main(void)
{
	init_screen(20, 10);

	push_pixel('@', get_screen_width() / 2, get_screen_height() / 2);
	draw_screen();


	release_screen();
}