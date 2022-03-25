#include "stdio.h"
#include "string.h"

void str_capitalize(char *string) {
  int upper=1;
  for (int i = 0; i < strlen(string); i++) 
  {
      if ((upper>0) && *(string+i)<123 &&*(string+i)>96) {
        *(string+i)=*(string+i)-32;
        upper=0;
      }

      if (*(string+i)==32) {
      upper++;
      }
  }
}

int main(){

char text[] = "the world is beautiful!\n";
str_capitalize(text); // `text` becomes "The World Is Beautiful."

printf("%s",text);
}