/*
Jungol solution

Beginner No. 1307
Char Square 1

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){
	int i, j, n;
	char arr[100][100];
	char N = 'A';

	scanf("%d", &n);

	for( i=n-1 ; i>=0 ; i-- ){
		for( j=n-1 ; j>=0 ; j--){
			arr[i][j] = N++;
			if(N>'Z') N = 'A';
		}
	}
	
	for( i=0 ; i<n ; i++ ){
		for( j=0 ; j<n ; j++ ){
			printf("%c ",arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}
