/*
Jungol solution

Beginner No. 1291
9x9

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){
	int s, e, i, j;
	int inc = 1;

	while(1) {
		scanf("%d %d", &s, &e);
		if( s<2 | e<2 | s>9 | e>9 )	printf("INPUT ERROR!\n");
		else break;
	}	
	if(s>e) inc = -1;

	for( i=1 ; i<=9 ; i++ ){
		for( j=s ; j!=e+inc ; j+=inc ){
			printf("%d * %d = %2d   ", j, i, i*j);
		}
		printf("\n");
	}

	return 0;
}
