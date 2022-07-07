#include <stdio.h>
#include "lib/ravectors.h"

int main() {
	// TEST 1
	vector vec1 = new_vector();
	rav_push(&vec1, 2);
	char* s;
	rav_to_string(&vec1, s);
	printf("Test 1: %s", s);
	return 0;
}