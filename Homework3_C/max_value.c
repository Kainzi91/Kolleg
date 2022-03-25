#include "stdio.h"


int max_value(int *array, int size){
    int max=0;
    

    for (int i=0; i<size; i++) {


        if ((*array+i)>max) max=*(array+i); 

    }
    return printf("%d\n",max);
}


int main()
{

int values[] = {4, 1, 7, 5, 4, 1, 4, 20, 7};
int lenght= sizeof(values)/sizeof(int);
max_value(values, lenght);



}