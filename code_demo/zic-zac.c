


#include<stdio.h>

int main(){


   for(int i = 0; i < 2; i++){
        printf("\n");
        for(int j = 0; j < 10; j++){
          if(i % 2 == 0){
             if(j%2 == 0){
                  printf(" * ");
               }else {
                  printf("  ");
               }
          }else{
            if(j%2 == 0){
                  printf("  ");
              }else{
                  printf(" * ");
              }
          }
        }
   }
  	printf("\n");
    return 0;
}