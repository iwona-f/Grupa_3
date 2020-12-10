#include <stdio.h>
#include <stdlib.h>

int main(){
char tab1[224];
int i,j,k,licznik=31;
for(i=0;i<224;i++){
tab1[i]=licznik++;
}
i=1;
for(j=0;j<14;j++){
for(k=0;k<16;k++){
printf("\%c ",tab1[i]);
i++;
}
printf("/n");
}
return 0;
}
