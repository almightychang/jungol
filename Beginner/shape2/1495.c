/*
Jungol solution

Beginner No. 1495
Diagonal ZigZag

Made by Joochul, Chang (JR coding)
*/

#include <stdio.h>

int main(){
	int n, cond1, cond2;
	int count = 1;
	int i=0, j=0;
	int di = 1, dj = -1;
	
	scanf("%d", &n);
	char arr[n][n];

	while( count <= n*n ){
		arr[i][j] = count++;
		cond1 = (di==-1&&i==0) ||  (dj==-1&&j==0);
		cond2 = (di==-1&&j==n-1) || (dj==-1&&i==n-1);
		
		if( cond1||cond2 ){
			i = cond2? i+(dj+1)/2: i+(di+1)/2;
			j = cond2? j+(di+1)/2: j+(dj+1)/2;

			di *= -1; dj *= -1;
		}
		else{
			i += di; j +=dj;
		}
	}

	for( i=0 ; i<n ; i++ ){
		for( j=0 ; j<n ; j++ ){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
