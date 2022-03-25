#include "stdio.h"
#include "string.h"

void inverse_case(char *string) {

  for (int i = 0; i < strlen(string); i++) {
    if(*(string+i)<95 &&*(string+i)>64)
    {
        *(string+i)=*(string+i)+32;
    }
    else if (*(string+i)<123 &&*(string+i)>96) {
     *(string+i)=*(string+i)-32;
    }
    else {
     *(string+i)=*(string+i);
    }
    }
}

int main(){

char text[] = "The world is beautiful!";
inverse_case(text); // `text` becomes "The World Is Beautiful."

printf("%s",text);
}