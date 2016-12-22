#include <stdio.h>

int main(){

	int i, next;
	int sum=0, is_prev_fib = 0, is_next_fib=0;
	for (i=1;i<=4000000; i++){
		if (i==1){
			is_prev_fib = 1;
			is_next_fib = i+1;
		}
		else {
			if(i==is_next_fib){
				if(i%2==0){
					sum = sum +i;
				}
				is_next_fib = i + is_prev_fib;
				is_prev_fib = i;
			}
			
		}
	}
	printf("the sum is %d\n", sum);
	return 0;
}
