#include <stdio.h> 
#include <math.h>
 
int main(void)
{
    /* Konstante Pi definieren */
    const double Pi = 3.141592653;
	
    /* Variablen definieren */
    double winkel;
    double rad;
    double sinus;
    int i;
	
    printf("Programm zur Berechnung der Sinusfunktion in 10er Schritten\n");
    printf("Winkel   Sinus des Winkel\n");
 
    /* Schleife zur Berechnung der Sinuswerte */
    for (i = 0; i <= 36; i++)
    {
        winkel = 10 * i;         /* 10er Schritte berechnen */
		
        rad = winkel * Pi / 180; /* Berechnen des Bogenmaßwinkels */
        sinus = sin(rad);
 
        printf("%6g  %6.3f\n", winkel, sinus); /* tabellarische Ausgabe */
    }
	
    return 0;
}
