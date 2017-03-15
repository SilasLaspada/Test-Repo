#include <stdio.h>
#include "Extra.h"
int main()
{
	int FavNumber = 42;
	printf("Before : %d\n", FavNumber);
	int TwoNumber = TimeTwo(FavNumber);
	printf("After : %d", TwoNumber);
	return 0;
}