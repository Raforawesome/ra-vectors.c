#include <stdio.h>
#include "lib/ravectors.h"

int main() {
	// TEST 1
	vector vec1 = new_vector();
	rav_push(&vec1, 2);
	printf("Test 1: %d\n\n", rav_value_at(&vec1, 0));

	vector vec2 = new_vector();
	int test_arr[] = {4, 3, 2};
	rav_push_arr(&vec2, test_arr, 3);
	printf("Test 2: %d\n\n", rav_value_at(&vec2, 1));
	return 0;
}