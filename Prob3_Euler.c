#include <stdio.h>
#include <stddef.h>
#include <math.h>

int main(){
	
	
	long num, max_fact=0, number,number1=0, i;
	printf("type a number\n");
	scanf("%ld", &number);
	if (number%2==0){
		number1 = number/2;
		max_fact = 2;
	}
	num = sqrt(number);

	for (i=3; i<num; i=i+2){
		if (number%i==0){
			number = number/i;
			max_fact = i;
		}
	}
	printf("the maximum factor is %ld\n", max_fact);
	return 0;

}
