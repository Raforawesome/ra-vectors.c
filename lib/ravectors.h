#ifndef _RA_VECTORS

#define RAV_MEM_STEP 10  // The amount of slots allocated when we run out


struct vector {
	int* start;
	int length;
	int slots;
};

typedef struct vector vector;


vector new_vector();

vector vector_with_capacity(int);

void rav_push(vector*, int);

void rav_push_arr(vector*, int arr[]);

int len(vector*);

int index_of(vector*, int);

#endif