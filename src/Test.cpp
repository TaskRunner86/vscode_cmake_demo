
#include "test.h"
#include <Windows.h>
#include <stdio.h>


typedef struct TagPoint {
	int x;
	int y;
} TPoint;


int test(int a, int b) {
	int c = a + b;
	TPoint point = {100, 100};
	for (int i = 0; i < 100000; ++i) {
		++point.x;
		printf("point.x = %d\n", point.x);
	}
	return c;
}
