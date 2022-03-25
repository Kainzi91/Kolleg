#include "stdio.h"
#include "stdbool.h"
#include "string.h"

int find(char *prefix,char *string){
    int cnt_substrings=0;
    int cnt=0;
    int pre_length = strlen(prefix);
    
    int str_length = strlen(string);
    
    for (int j=0; j<(str_length-pre_length+1); j++) {
         
        for (int i = 0; i < pre_length; i++) {
            
            printf("%c %c\n",prefix[i] ,string[i+j]);
            
            if (*(prefix + i) == *(string +j+i)) {
                cnt++;
            }
        }
        
        if (cnt == pre_length) {

        cnt_substrings++;
        cnt=0;

        } 
        cnt=0;
 
    }
    return cnt_substrings;
}


int main(){
char prefix1[] = "Allo";
char string1[] = "Hello";
char string2[] = "AllomaAlhsloAllo";



printf("%d\n",find(prefix1, string2));  // returns `false`

return 0;
}