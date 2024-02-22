

#include <stdio.h>
#include "test.h"


int main(int argc, const char** argv) {
	int a = 0;
	int b = 1;
	int c = test(a, b);

#ifdef UU
	printf("UU\n");
#endif // UU

	return 0;
}
