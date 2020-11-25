/*
Jungol solution

Beginner No. 1856
Number Square 2

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){
	int n, m, i, j;
	int N = 1;

	scanf("%d %d", &n, &m);

	int arr[n][m];

	for( i=0 ; i<n ; i++ ){
		for( j=0 ; j<m ; j++){
			if(i%2) arr[i][m-j-1]=N++;
			else arr[i][j]=N++;
		}
	}

	for( i=0 ; i<n ; i++ ){
		for( j=0 ; j<m ; j++ ){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
