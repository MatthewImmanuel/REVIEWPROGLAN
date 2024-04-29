#include <stdio.h>

int main(){
	int angka, i, j;
	scanf("%d",&angka);
	for(i=1; i<=angka; i++){
		for(j=1; j<=i; j++){
		printf("*");
	}
	printf("\n");
	}
	return 0;}
