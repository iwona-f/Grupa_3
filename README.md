#include<stdio.h>

int main(){
    int rows=3;

    for(int i=0; i<rows ; i++){
        int space = rows-i;

        for(int j=0 ; j<space ; j++)
           printf(" ");
        for(int j=0 ; j< (i*2+1) ; j++)
           printf("*");
          printf("\n");

    }
        for(int i=0 ; i<rows ; i++)
           printf(" ");
          printf("*\n");

         return 0;  
       
}
