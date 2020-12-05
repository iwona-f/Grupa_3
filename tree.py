ilosc = int(input("Podaj ilosc wierszy\n"))
for wiersz in range(1, ilosc):
  print(" "*(ilosc-wiersz) + "*"*(wiersz*2-1))
print(" "*(wiersz-1) + "*"*2)