#include <stdio.h>

int main(){
	int i, j, n, base, shift, num;
	scanf("%d", &n);

	base = (n/2)*(n/2) + 1;

	for( i=0 ; i<n ; i++ ){
		shift = n-1;
		num = base + i;

		for( j=0 ; j<=i && j<n-i ; j++){
			printf("%d ", num);
			num -= shift;
			shift -= 2;
		}
		printf("\n");
	}

	return 0;
}
