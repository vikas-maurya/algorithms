#include<iostream>

using namespace std;


void merge_sort(int *arr, int f, int l) {
	
	if(f<l) {
		int m = (f+l)/2;
		merge_sort(arr, f, m);
		merge_sort(arr, m+1, l);
		merge(arr, f, m, l);
	}
}

void merge(int *arr, int f, int m, int l) {
	
	int n1 = m-f+1;
	int n2 = l-m;

	int ar1[n1], ar2[n2];
	
	int i, k;
	for(i=0, k=f;k<=m;k++, i++)
		ar1[i] = arr[k];
	for(i=0, k=m+1;k<=l;k++, i++)
		ar2[i] = arr[k];


	int j=0;
	i=f;
	k=0;
	while(j<n1 && k<n2) {
		if(ar1[j]<ar2[k])
			arr[i++] = ar1[j++];
		else
			arr[i++] = ar2[k++];
	}

	while(j<n1)
		arr[i++] = ar1[j++];
	while(k<n2)
		arr[i++] = ar2[k++];
}

		


