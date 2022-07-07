#include <stdio.h>
#include "lib/ravectors.h"

int main() {
	// TEST 1
	vector vec1 = new_vector();
	rav_push(&vec1, 2);
	printf("Test 1: %d\n\n", rav_value_at(&vec1, 0));
	return 0;
}