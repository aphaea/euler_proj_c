#include <stdio.h>
#include <stddef.h>

int main(){
	
	int i, sum;
	sum = 0;
	for (i=0; i<1000; i++){
		if ((((i%3==0)||(i%5==0)))&&(i !=0)){
			sum = sum + i;
		}
	}
	printf("the sum is %d\n", sum);
	

	return 0;
}
