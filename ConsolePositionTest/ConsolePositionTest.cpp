#include"pch.h"
#include <windows.h>
#include <iostream>
void testFunc(int a)
{
	printf("%d\n", a);
}

int main()
{
	int x = 10;
	int y = 1;
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("##########################\n");
}
