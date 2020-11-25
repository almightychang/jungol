/*
Jungol solution

Beginner No. 1329
Star Triangle 3

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){
	int MAX, i, j;

	scanf("%d", &MAX);

	if( MAX<1 || MAX>100 || MAX%2==0 ){
		printf("INPUT ERROR!\n");
		return 0;
	}

	for( i=0 ; i<MAX ; i++ ){
		if(i<MAX/2){
			for( j=0 ; j<i ; j++ ) printf(" ");
			for( j=0 ; j<2*i+1 ; j++ ) printf("*");
		}
		else{
			for( j=0 ; j<MAX-i-1 ; j++ ) printf(" ");
			for( j=0 ; j<2*MAX-2*i-1 ; j++ ) printf("*");
		}
		printf("\n");
	}

	return 0;
}
