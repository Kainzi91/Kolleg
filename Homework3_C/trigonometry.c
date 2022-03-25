#include "stdio.h"
#include "math.h"
#include <math.h>

void trigonometry(){

    printf("  radian    |   sine   |   cosine    \n");
    printf("-------------------------------------\n");
        
        for (double i=0.0; i<=3.2; i=i+0.1) {    
            printf("%7.2lf     |%7.2lf   |%8.2lf\n",i , sinf(i), cosf(i));
        }
    
    printf("%7.2lf     |%7.2lf   |%8.2lf\n",M_PI , sinf(M_PI), cosf(M_PI));

}



int main()
{
    trigonometry();
    
    return 0;
}