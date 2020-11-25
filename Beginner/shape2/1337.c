/*
Jungol solution

Beginner No. 1337
Snail Triangle

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

enum State { RightDown, Left, Up };

int main(){
	int n, max, i, j;
	scanf("%d", &max);
	
	int arr[max][max];

	for( i=0 ; i<max ; i++ )
		for( j=0 ; j<max ; j++ )
			arr[i][j] = -1;
	
	enum State state = RightDown;
	i = -1; j = -1; n = 0;

	while( n < max*(max+1)/2 ) {
		switch(state){
			case RightDown:
				arr[++i][++j] = n++;
				if( i==max-1 | arr[i+1][j+1] != -1 ) state = Left;
			break;

			case Left:
				arr[--i][j] = n++;
				if( i==0 | arr[i-1][j] != -1 ) state = Up;
			break;

			case Up:
				arr[i][--j] = n++;
				if( j==1 | arr[i][j-1] != -1 ) state = RightDown;
			break;
		}
	} 

	for( i=0 ; i<max ; i++ ){
		for( j=0 ; j<max ; j++ ){
			if(arr[j][i]==-1) printf("  ");
			else printf("%d ", arr[j][i]%10);
		}
		printf("\n");
	}

	return 0;
}
