/*
Jungol solution

Beginner No. 1339
Char Triangle 2

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){
	int i, j, MAX, width=1;

	char arr[100][50] = {0};
	char walker = 'A';

	scanf("%d", &MAX);
	
	if( MAX<1 || MAX>100 || MAX%2==0 ){
		printf("INPUT ERROR!\n");
		return 0;
	}
	
	for( j=MAX/2 ; j>=0 ; j-- ) {
		for( i=j ; i<MAX-j ; i++ ){
			arr[i][j] = walker++;
			if(walker>'Z') walker='A';
		}
		width += 2;	
	}

	for( i=0 ; i<MAX ; i++ ){
		for( j=0 ; j<=MAX/2 ; j++ ){
			if(arr[i][j]) printf("%c ", arr[i][j]);
			else printf("  ");
		}
		printf("\n");
	}

	return 0;
}
