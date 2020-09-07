/**
 * insertion in an array
 * written by: ujjwal
 * written on: 01/09/2020
 *
 *
*/


#include <stdio.h>
#include <conio.h>

int main(){
	int ar[]={1, 5, 4 ,12};
	int i=0, n=4;
	
	//array before insertion
	printf("Array before insertion \n");
	for( ; i<n; i++){
		printf("%d \n", ar[i]);
	}
	
	//insertion at end of array
	printf("Insertion at end of array. Insert element 10 at end of array\n");
	n=n+1;
	ar[n-1]=10;
	
	printf("Array after insertion \n");
	for(i=0 ; i<n; i++){
		printf("%d \n", ar[i]);
	}
	return 0;
}
