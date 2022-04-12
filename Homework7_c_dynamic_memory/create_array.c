
#include "stdio.h"
#include "stdlib.h"

void *zero(int count){

    int *array = (int*) calloc(count,sizeof(int));          // erspart 1 Zeile Code , alle Indexe werden mit 0 initialisiert
    if (array==NULL) exit(EXIT_FAILURE);

return array;
}
void *one(int count){
   
    
    int *array = (int*) malloc(count * sizeof(int));
    if (array==NULL) exit(EXIT_FAILURE);
    for (int i=0; i<count; i++) {
        array[i]=1;
    }
return array;   
}

void *count(int count) 
{   
    int *array = (int *)malloc(count * sizeof(int));
    if (array==NULL) exit(EXIT_FAILURE);
    for (int i=0; i<count; i++) {
        array[i]=i+1;
    }
return array;
}
int main(){
  
    char line[10];
    int size;
    printf("Size of Array:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &size);
    int *array ;
    array = zero(size);
    for (int i = 0; i < size; i++) {   
        printf("%d,", array[i]);
    }
    printf("\n");
    free(array);                        // Reservierung über Referenz löschen

    array = one(size);
    for (int i = 0; i < size; i++) {  
        printf("%d,", array[i]); 
    }
    printf("\n");
    free(array);                        // Reservierung über Referenz löschen

    array = count(size);
    for (int i = 0; i < size; i++) {       
        printf("%d,", array[i]);
    }
    printf("\n");
    free(array);                        // Reservierung über Referenz löschen
    array=NULL;                         //Referenz löschen
}







