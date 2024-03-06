#include "stdio.h"

int main() {
  int n;
  printf("Wprowadz Liczbe calkowita, n:");
  scanf("%d", &n);

  if (n < 1) {
    printf("liczba ma byc wieksza badz rowna 1");
    return 0;
  }
  int summa = 0;
  for (int i = 1; i <= n; i++) {
    summa = summa + (i * i * i);
  }
  printf("summa szescianow liczby %d jest %d", n, summa);
  return 0;
}
