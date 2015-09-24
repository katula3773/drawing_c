
#include<stdio.h>

int main(){
    int n = 30;
    int soDinh = 3;
    int kcach = n/soDinh;

    for(int i = 0; i <= n; i++){
      printf("\n");
      for(int j = 0; j<= n; j++){
        if((j-i) % kcach == 0 || (j+i)% kcach == 0){
          printf(" + ");
        }else{
          printf(" - ");
        }
      }
    }
    printf("\n");
    return 0;
}
