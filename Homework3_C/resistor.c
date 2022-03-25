#include <stdio.h> 

int *read_resistors(int* resistors, int amount){

    resistors[0]= amount;
    char size[50];
   
    for(int i=1;i<amount+1; i++ )
    {
        printf("Fill in the Resistance of the %d. Resistor: ",i);
        
        int cur_resitor=0;
        fgets(size,sizeof(size),stdin);
        sscanf(size,"%d",&cur_resitor);
        *(resistors+i)=cur_resitor;

    }
    
    return 0;
}

float sum_par_resistor(int *resistors) 
 {  
    float sum=0;
    int Length=*resistors;

    int *Values[Length];
    Values[Length+1]=&resistors[Length];
    

    
        for (int j=1; j<=Length;++j)
        {
            float Values=0;
            float inv_resistors=0.0;
            Values= *(resistors+j);
            inv_resistors=1/Values;
            
            sum += inv_resistors;

        }
        return printf("Total Resistance(parralel):  %0.2f\n" ,1/sum);
}
float sum_serial_resistor(int *resistors) 
 {  
    float sum=0;
    int Length=*resistors;

    for  (int j=1; j<=Length;++j)
    {
     sum += *(resistors+j);
    }
    return printf("Total Resistance(serial):  %0.2f\n" ,sum);
}
int main (){
    int amount=0;
    char line[10];

    printf("Fill in the number of resistors: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line,"%d",&amount);
    int resistors [amount+1];

    read_resistors(resistors, amount);
    sum_par_resistor(resistors);
    sum_serial_resistor(resistors);
    return 0;
}