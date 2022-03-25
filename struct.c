#include "stdio.h"


struct Data {
    
    char Value[10];
    char Value2[10];
    char Value3[10];
    

}values;





void work_with_sructs(char *item1, char *item2 , char *item3)
{
    for (int i=0; i<10; i++) {
    
    
    *(values.Value+i)= *(item1+i);
    *(values.Value2+i)= *(item2+i);
    *(values.Value3+i)= *(item3+i);
    
    }
   
    


}


int main(){

  char *string1 = "hallo";
  char *string2 = "allo";
  char *string3 = "sad";

  work_with_sructs(string1, string2, string3);

  printf("%s\n", values.Value);
  printf("%s\n", values.Value2);
  printf("%s\n", values.Value3);

}