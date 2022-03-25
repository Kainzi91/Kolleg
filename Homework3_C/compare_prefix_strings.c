#include "stdio.h"
#include "stdbool.h"
#include "string.h"

bool beginsWith(char* prefix, char *string)
{ 
    // Function for comparing the first letter/s with prefix
    
    int pre_length = strlen(prefix);        //get length of array
    int str_length = strlen(string);        //get length of array
    int cnt=0;
    bool match=false;

    for (int i = 0; i <= pre_length; i++) 
    {
            printf("%c %c\n",prefix[i],string[i]);
            if (*(prefix + i) == *(string +i))      
            {
                cnt++;
            }
            if (cnt == pre_length) 
            {
            match= true;
            }
            else 
            {
            match=false;
            }
    }
    return match;
}

int find_subs(char *string1,char *string2)
{
    // Find similar letter/s from string 1 in string 2
    
    int cnt_substrings=0;
    int pre_length = strlen(string1);
    int str_length = strlen(string2);
    
    for (int i=0; i<=(str_length-pre_length); i++)
    {     
        if (beginsWith(string1,(string2+i))==true) 
        {
        cnt_substrings++;
        } 
    }
    return cnt_substrings;
}


int main()
{
char prefix1[] = "Al";
char string1[] = "Hello";
char string2[] = "HelloichbinhaiHello";

printf("%d\n",beginsWith(string1, string2));
printf("%d\n",find_subs(string1, string2));  

return 0;
}