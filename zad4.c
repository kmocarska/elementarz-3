#include <stdio.h>

int main() {

int c=0, i, licznik, tabelka[256];

//czyszczenie tablicy
for (i = 0; i<=255; i++) {
  tabelka[i] = 0;
}

//czytanie
while ((c=getchar())!=EOF) {
  tabelka[c]++;
}

//liczenie i formatowanie w tabelke
printf("\nznak\tliczba znakow\n-----------------------\n");
for (i = 32; i<=255; i++) {
  if (tabelka[i] > 0) {
    printf("%c\t%d\t", i, tabelka[i]);
    for(licznik = 1; licznik <= tabelka[i]; licznik++) {
       printf("*");
    }
    printf("\n");
  }
}
printf("-----------------------\n");

return 0;
}
