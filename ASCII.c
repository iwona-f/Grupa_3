#include<stdio.h>

int main()
{
  char c=32;
  int x=0;
  
  for (x=32; x<=255; c++ , x++)
 {
  printf("%c " , c );
 if (x% 16 == 0)
       printf ("\n");
}
return 0;
}
