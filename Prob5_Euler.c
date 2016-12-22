#include <stdio.h>
#include <stddef.h>

int main(){
	
	int init_num=20, even_div_flag=0, even_div_flag9=0, i;
	while(even_div_flag==0){
		i=3;
		while(i<=9){
			if (init_num%i!=0){
				even_div_flag9=0;
				break;
			}
			else{
				even_div_flag9=1;
			}
			i++;
		}
		if(even_div_flag9==1){
			i=11;
			while(i<=20){
				if (init_num%i!=0){
				even_div_flag=0;
				break;
				}
				else{
					even_div_flag=1;
				}
				i++;
			}
		}
		if(even_div_flag==1){

	
			printf("the number is %d\n", init_num);
			break;
		}
		init_num= init_num+20;
	
	}


}
