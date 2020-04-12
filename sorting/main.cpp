#include"alg.h"


int main() {
  int arr[10] = {3, 4, 1, 8, 2, 2, 9, 2, 0, 1};
  merge_sort(arr, 0, 9);
  //quick_sort(arr, 0, 9);
  for(int i=0;i<10;i++) 
    cout<<arr[i]<<endl;
}

