#include"alg.h"


void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int partition(int *arr, int f , int l) {
  int fh = f;
  for(int i=f;i<l;i++) {
    if(arr[i]<arr[l]) {
      swap(arr[i], arr[fh]);
      fh++;
    }
  }
  swap(arr[fh], arr[l]);
  return fh;
}

void quick_sort(int *arr, int f, int l) {
  if(f<l) {
    int p = partition(arr, f, l);
    quick_sort(arr, f, p-1);
    quick_sort(arr, p+1, l);
  }
}

