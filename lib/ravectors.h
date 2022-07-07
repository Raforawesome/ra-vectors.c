#ifndef _RA_VECTORS

#define RAV_MEM_STEP 10  // The amount of slots allocated when we run out


struct vector {
	int* start;
	int length;
	int cap;
};

typedef struct vector vector;


vector new_vector();

vector vector_with_capacity(int);

void rav_push(vector*, int);

void rav_push_arr(vector*, int arr[], int size);

void rav_remove(vector*, unsigned int);

int rav_len(vector*);

int rav_index_of(vector*, int);

int rav_value_at(vector*, unsigned int);

char* rav_to_string(vector*, char*);

void rav_dealloc(vector*);

#endif