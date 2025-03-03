#include "console_screen.h"

int main(void)
{
	InitScreen(20, 10);
	
	PushPixel('1', 0, 0);
	DrawScreen();
	PushPixel('2', 0, 0);
	DrawScreen();
	return 0;
}
