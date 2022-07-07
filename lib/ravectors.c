#include <stdlib.h>
#include "ravectors.h"


vector new_vector() {
	int* block = malloc(sizeof(int) * RAV_MEM_STEP);
	vector new_vec;
	new_vec.start = block;
	new_vec.length = 0;
	new_vec.cap = RAV_MEM_STEP;
	return new_vec;
}

vector vector_with_capacity(int cap) {
	int* block = malloc(sizeof(int) * cap);
	vector new_vec;
	new_vec.start = block;
	new_vec.length = 0;
	new_vec.cap = cap;
	return new_vec;
}

void rav_push(vector *vec, int x) {
	// todo
}

void rav_push_arr(vector *vec, int *arr) {
	// todo
}

int len(vector* vec) {
	// todo
}

int index_of(vector* vec, int x) {
	// todo
}