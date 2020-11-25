/*
Jungol solution

Beginner No. 1641
Number Triangle

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){

	int n, m, i, j;
	int count = 1;

	scanf("%d %d", &n, &m);
	
	switch(m){
		case 1:
				for( i=0 ; i<n ; i++ ){
					for( j=0 ; j<i+1 ; j++ ){
						printf("%d ",count++);
					}
					printf("\n");
				}
		break;

		case 2:
				for( i=0 ; i<n ; i++ ){
					for( j=0 ; j<i ; j++ ) printf("  ");
					for( j=0 ; j<2*n-2*i-1 ; j++ ){
						printf("%d ", i);
					}
					printf("\n");
				}
		break;

		case 3:
				for( i=0 ; i<n ; i++){
					if(i<n/2) for( j=0 ; j< i+1 ; j++ ) printf("%d ", j+1);
					else	  for( j=0 ; j< n-i ; j++ ) printf("%d ", j+1);
					printf("\n");
				}
		break;
	}

	return 0;
}
