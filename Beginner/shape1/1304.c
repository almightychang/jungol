/*
Jungol solution

Beginner No. 1304
Number Square 3

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){
	int n, N=1;
	int arr[100][100];

	scanf("%d", &n);

	for( int i=0 ; i<n ; i++ ){
		for( int j=0 ; j<n ; j++ ){
			arr[i][j] = N++;
		}
	}

	for( int i=0 ; i<n ; i++ ){
		for( int j=0 ; j<n ; j++ ){
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}
