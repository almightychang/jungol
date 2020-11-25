/*
Jungol solution

Beginner No. 1303
Number Square 1

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){
	int n, m;
	int N = 1;

	scanf("%d %d", &n, &m);
	
	for( int i=0 ; i<n ; i++ ) {
		for( int j=0 ; j<m ; j++ ){
			printf("%d ", N++);
		}
		printf("\n");
	}

	return 0;
}
