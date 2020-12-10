#include <stdio.h>
#include <stdlib.h>

int sprawdz(){
int y;
printf("Zamiana z systemu dziesietnego na binarny:\n");
printf("Wprowadz liczbe w systemie dziesietnym: ");
stop:
scanf("%d", &y);
if(y>=0){
printf("Podales nieprawidlowa wartosc! Podaj ja jeszcze raz: \n");
goto stop;
}
return y;
}
int zamiana(){
int z,i=0,j,tab[100];
while(z>0){
tab[i++]=z%2;
z=z/2;
}
for(j=i-1; j>=0; j--){
printf("%d",tab[j]);
}
}
int main(){
int x;
x=sprawdz();
zamiana(x)
return 0;
}
