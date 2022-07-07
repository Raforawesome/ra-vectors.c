#ifndef _RA_VECTORS

#define MEM_STEP 10  // The amount of slots allocated when we run out


struct vector {
	int* start;
	unsigned long length;
	unsigned long slots;
};


vector new_vector();

void rav_push(vector* vec, int x);

void rav_push_arr(vector* vec, int arr[]);

int len(vector* vec);

int index_of(vector* vec, int x);

#endif