#include <stdio.h>

int main()
{
  int *a, b;

  b = 17;
  a = &b;
  for (int i=0; i<3; i++) {
  
  
  printf("Inhalt der Variablen b:    %i\n", b);
  printf("Inhalt des Speichers der Adresse auf die a zeigt:    %i\n", *a);
  printf("Adresse der Variablen b:   %p\n", (void*)&b);
  printf("Adresse auf die die Zeigervariable a verweist:   %p\n", (void*)a);
  /* Aber */
  printf("Adresse der Zeigervariable a: %p\n", &a);
  
}
return 0;
}