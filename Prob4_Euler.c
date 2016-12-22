#include <stdio.h>
#include <stddef.h>
#include <math.h>

int main(){

	int i=0, j=0, number=0, count, palin_found=0, div1, palin_num;
	int num_array[3]= {0};	
	
	for (i=997; i>0; i--){
		number = i;
		count = 0;
		while (number>0){
			num_array[count] = number%10;
			count++;
			number = number/10;
			}
		palin_num = num_array[2]*100000+num_array[1]*10000+num_array[0]*1000+num_array[0]*100+num_array[1]*10+num_array[2];
		for(j=100; j<=999; j++){
			if (palin_num%j==0){
				div1= palin_num/j;
				if(div1<1000){
					palin_found = 1;
					printf("my palin number is %d divided by %d\n", palin_num, j);
					break;
				}
			}
		}
		if (palin_found==1){
			break;
		}

	}
return 0;
}
