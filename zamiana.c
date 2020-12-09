#include <stdio.h>
#include <stdlib.h>

int main(){
int liczba;
printf("Zamiana z systemu dziesietnego na binarny:\n");
printf("Wprowadz liczbe w systemie dziesietnym: ");
scanf("%d", &liczba);
int i=0,j,tab[100];
while(liczba>0){
tab[i++]=liczba%2;
liczba=liczba/2;
}
for(j=i-1; j>=0; j--){
printf("%d",tab[j]);
}
return 0;
}
