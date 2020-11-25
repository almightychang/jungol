/*
Jungol solution

Beginner No. 1719
Star Triangle 2

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){
	int n, m, i, j;

	scanf("%d %d", &n, &m);

	if( n < 1 || n > 100 || n%2==0 || m < 1 || m > 4) {
		printf("INPUT ERROR!\n");
		return 0;
	}

	switch(m){
		case 1:	
				for( i=0 ; i<n ; i++ ){
					if( i<n/2 ){
						for( j=0 ; j<i+1 ; j++ ) printf("*");
					}
					else{
						for( j=0 ; j<n-i ; j++) printf("*");
					}
					printf("\n");
				}
		break;

		case 2:
				for( i=0 ; i<n ; i++ ){
					if( i<n/2 ){
						for( j=0 ; j<n/2-i ; j++ ) printf(" ");
						for( j=0 ; j<i+1 ; j++ ) printf("*");
					}
					else{
						for( j=0 ; j<i-n/2 ; j++ ) printf(" ");
						for( j=0 ; j<n-i ; j++ ) printf("*");
					}
					printf("\n");
				}
		break;

		case 3:
				for( i=0 ; i<n ; i++ ){
					if( i<n/2 ){
						for( j=0 ; j<i ; j++ ) printf(" ");
						for( j=0 ; j<n-2*i ; j++ ) printf("*");
					}
					else{
						for( j=0 ; j<n-i-1 ; j++ ) printf(" ");
						for( j=0 ; j<2*i-n/2-1 ; j++ ) printf("*");
					}
					printf("\n");
				}
		break;

		case 4:
				for( i=0 ; i<n ; i++ ){
					if( i<n/2 ){
						for( j=0 ; j<i ; j++ ) printf(" ");
						for( j=0 ; j<n/2-i+1 ; j++ ) printf("*");

					}
					else{
						for( j=0 ; j<n/2 ; j++) printf(" ");
						for( j=0 ; j<i-n/2+1 ; j++ ) printf("*");
					}
					printf("\n");
				}
		break;
	}

	return 0;
}
