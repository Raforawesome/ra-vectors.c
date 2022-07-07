#ifndef _RA_VECTORS

#define MEM_STEP 10  // The amount of slots allocated when we run out


struct vector {
	int* start;
	unsigned long length;
	unsigned long slots;
};

typedef struct vector vector;


vector new_vector();

void rav_push(vector*, int);

void rav_push_arr(vector*, int arr[]);

int len(vector*);

int index_of(vector*, int);

#endif