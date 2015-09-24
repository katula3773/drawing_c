


#include<stdio.h>

int main(){
    int n = 12;
    int soDinh = 3;
    int kcach = n/soDinh;

  	for(int i = 0; i <= n / 2; i++){
  		printf("\n");
  		for(int j = 0; j<= n; j++){
  			if(j % soDinh == 0  && j % 2 != 0){
  				printf(" + ");
  			}else {
  				printf(" - ");
  			}
  		}
  	}

  	printf("\n");
    return 0;
}