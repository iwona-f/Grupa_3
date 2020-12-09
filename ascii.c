#include <stdio.h>
#include <stdlib.h>

int main(){
char tab[224];
int i,j,k,licznik=31;
for(i=0;i<224;i++){
tab[i]=licznik++;
}
i=1;
for(j=0;j<14;j++){
for(k=0;k<16;k++){
printf("\%c ",tab[i]);
i++;
}
printf("/n");
}
return 0;
}
