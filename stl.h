// stl.h contain all function declaration.
// include <stdbool.h> for using bool as return type.
#include <stdbool.h>

// generic swap function.( O(1) Time complexity ).
void swap(void **a,int i,int j);

// generic reverse function. ( O(size) Time complexity ).
void reverse(void **a,int l,int h);

// generic merge function. ( O(size) Time complexity ).
void merge(void **a, int L, int mid, int R, void **b, int(*cmp)(void *, void *));

// generic merge_sort function. ( O(nlogn) Time complexity).
void merge_sort(void **a, int L, int R, void **b, int(*cmp)(void *, void *));

// generic upper_bound function. ( O(log n) Time complexity).
void* upper_bound(void** arr,int n,void* x);

// generic lower_bound function.( O(log n) Time complexity).
void* lower_bound(void** arr,int n,void* x);

// generic count function.(O(n) Time complexity).
int count(void** arr,int n,void* x);

// generic find function. (O(n) Time complexity).
bool find(void** arr,int l,int r,void* x);

// generic transform function. (O(n) Time complexity).
void transform(void** arr,int n,void* x);
