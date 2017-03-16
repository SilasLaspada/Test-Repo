#include <stdio.h>
#include "Extra.h"
int main()
{
	int FavNumber = 42;
	int TwoNumber = TimeTwo(FavNumber);
	if (TwoNumber == 84) {
		printf("Hello World!");
	}
	return 0;
}