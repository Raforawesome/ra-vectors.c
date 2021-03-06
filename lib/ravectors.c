#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ravectors.h"


int int_len(int n) {
	return floor(log10(abs(n)));
}


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
	if (vec->length >= vec->cap) {
		vec->start = realloc(vec->start, vec->cap + RAV_MEM_STEP);
		vec->cap += RAV_MEM_STEP;
	}
	*(vec->start + vec->length) = x;
	vec->length += 1;
}

void rav_push_arr(vector *vec, int arr[], int size) {
	for (int i = 0; i < size; i++) {
		rav_push(vec, arr[i]);
	}
}

int rav_len(vector* vec) {
	return vec->length;
}

int rav_index_of(vector* vec, int x) {
	for (int i = 0; i < vec->length; i++) {
		if (*(vec->start + i) == x) {
			return i;
		}
	}
	return -1;
}

int rav_value_at(vector* vec, unsigned int idx) {
	return(*(vec->start + idx));
}

char* rav_to_string(vector* vec, char* buffer) {
	sprintf(buffer, "{");
	for (int i = 0; i < vec->length; i++) {
		if (i < vec->length - 1) {
			sprintf(buffer, "%d, ", rav_value_at(vec, i));
		} else {
			sprintf(buffer, "%d", rav_value_at(vec, i));
		}
	}
	sprintf(buffer, "}");
	return buffer;
}