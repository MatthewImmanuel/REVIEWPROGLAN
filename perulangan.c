#include <stdio.h>

int main(){
	int angka;
	char GRADE[2];
	scanf("%d", &angka);
	if(angka<=100 && angka>=85){
		printf("A");
	}
	else if(angka<=84 && angka>=80){
		printf("A-");
	}
	else if(angka<=79 && angka>=75){
		printf("B+");
	}
	else if(angka<=74 && angka>=70){
		printf("B");
	}
	else if(angka<=69 && angka>=65){
		printf("B-");
	}
	else if(angka<=64 && angka>=60){
		printf("C+");
	}
	else if(angka<=59 && angka>=55){
		printf("C");
	}
	else if(angka<=54 && angka>=50){
		printf("C-");
	}
	else if(angka<=49 && angka>=40){
		printf("D");
	}
	else if(angka<=39 && angka>=0){
		printf("E");
	}
	else{
		printf("Diluar range");
	}
return 0;}
