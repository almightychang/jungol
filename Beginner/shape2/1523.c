/*
Jungol solution

Beginner No. 1523
Star Triangle 1

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){
	int n, m;

	scanf("%d %d", &n, &m);

	if( n < 1 || n > 100 || m < 1 || m > 3) {
		printf("INPUT ERROR!\n");
		return 0;
	}

	switch(m){
		case 1:	
				for( int i=0 ; i < n ; i++ ){
					for( int j=0 ; j <= i ; j++ ){
						printf("*");
					}
					printf("\n");
				}
		break;

		case 2:	
				for( int i=0 ; i < n ; i++ ){
					for( int j=0 ; j<n-i ; j++){
						printf("*");
					}
					printf("\n");
				}
		break;

		case 3:	
				for( int i=0 ; i < n ; i++ ){
					for( int j=0 ; j < n-i-1 ; j++ ){
						printf(" ");
					}
					for( int j=0 ; j < 2*i+1 ; j++ ){
						printf("*");
					}
					printf("\n");
				}
		break;
	}

	return 0;
}
