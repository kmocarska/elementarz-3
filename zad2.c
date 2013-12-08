#include <stdio.h>
#include <math.h>

int main() {

int liczba = 0;

printf("_____________________\n");
for (liczba; liczba <= 20; liczba++){
  printf("| %d\t|\t%3.2f|\n", liczba, sqrt(liczba));
}
printf("---------------------\n");

return 0;
}
