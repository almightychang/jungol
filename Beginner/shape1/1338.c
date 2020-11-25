/*
Jungol solution

Beginner No. 1338
Char Triangle 1

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){
	int i=0, j=0, floor=0, MAX;
	char arr[100][100]={0};
	char N='A';

	scanf("%d", &MAX);

	while(floor<MAX){
		arr[i++][j++] = N++;
		if(N>'Z') N='A';
		
		if(j==MAX){
			i=0;
			j=++floor;
		}
	}

	for( i=0 ; i<MAX ; i++ ){
		for( j=0 ; j<MAX ; j++ ){
			if(arr[MAX-j-1][i]) printf("%c ", arr[MAX-j-1][i]);
			else printf("  ");
		}
		printf("\n");
	}	
	return 0;
}
