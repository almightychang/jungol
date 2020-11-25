/*
Jungol solution

Beginner No. 2046
Number Square 4

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){
	int n, m, i, j;

	scanf("%d %d", &n, &m);

	switch(m){
		case 1:	
				for( i=0 ; i<n ; i++ ){
					for( j=0 ; j<n ; j++ ){
						printf("%d ", i+1);
					}
					printf("\n");
				}
		break;

		case 2:
				for( i=0 ; i<n ; i++ ){
					for( j=0 ; j<n ; j++ ){
						if(i%2) printf("%d ", n-j);
						else printf("%d ", j+1);
					}
					printf("\n");
				}
		break;

		case 3:
				for( i=1 ; i<n+1 ; i++ ){
					for( j=1 ; j<n+1 ; j++ ){
						printf("%d ", i*j);
					}
					printf("\n");
				}
		break;
	}

	return 0;
}
