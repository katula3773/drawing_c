
#include<stdio.h>

int main(){
    int n = 16;
    int soDinh = 4;
    int kcach = n/soDinh;
    int dem = 0;
  	for(int i = 0; i <= n / 2; i++){
  		printf("\n");
  		for(int j = 0; j<= n; j++){
  			if((j + i)% kcach == 0 || (j - i)% kcach == 0){
  				printf(" %d ",j);
  			}else {
  				printf(" - ");
  			}
  			dem++;
  		}
  	}

  	printf("\n");
    return 0;
}
