/*
Jungol solution

Beginner No. 1331
Char Rhombus

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

enum STATE {LD = 0, RD, RU, LU};
int di[4] = { 1, 1,-1,-1};
int dj[4] = {-1, 1, 1,-1};
int ci[4] = { 0,-1, 0, 0};
int cj[4] = { 1, 0,-1, 0}; 

int main(){
	int N, i, j, next;
	int count = 0;
	char arr[200][200] = {0,};
	enum STATE state = LD;

	scanf("%d", &N);
	
	i = 0, j = N-1;
	
	while( count < N*N+(N-1)*(N-1) ){

		if( !arr[i][j] ){
			arr[i][j] = 'A' + count++%26;

			i += di[state];
			j += dj[state];
		}

		next = i<0 || i>2*N-2 || j<0 || j>2*N-2 || arr[i][j];
		next |= arr[i+ci[state]][j+cj[state]];
		
		if(next)
		{
			i -= di[state]; j -= dj[state];

			state = (state+1)%4;
			if(state == LD) i--;
			
			i += di[state]; j += dj[state];
		}
	}

	for( i=0 ; i<=2*N ; i++ ){
		for( j=0 ; j<=2*N ; j++ ){
			if(arr[i][j]) printf("%c ", arr[i][j]);
			else printf("  ");
		}
		printf("\n");
	}
	return 0;
}
