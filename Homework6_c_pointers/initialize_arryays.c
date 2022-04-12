#include "stdio.h"



void zeros(int *array, int count){

for (int i=0; i<count; i++) {

    array[i]=0;
    printf("%d", array[i]);
}
printf("\n");
}

void ones(int *array, int count){

for (int i=0; i<count; i++) {

    array[i]=1;
    printf("%d", array[i]);
}
printf("\n");
}
void range(int *array, int count){

for (int i=0; i<count; i++) {

    array[i]=i;
    printf("%d", array[i]);
}
printf("\n");

}


int main(){
char line[10];
int count;


printf("Size of array: ");
fgets(line, sizeof(line),stdin);
sscanf(line, "%d",&count);
int array[count];

zeros(array, count);
ones(array, count);
range(array, count);

}