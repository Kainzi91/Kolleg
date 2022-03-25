#include "stdio.h"
#include "string.h"
#include "stdbool.h"

void str_inverse_case(char *string) 
{

  for (int i = 0; i < strlen(string); i++) {
    if(*(string+i)<95 &&*(string+i)>64)
    {
        *(string+i)=*(string+i)+32;
    }
    else if (*(string+i)<123 &&*(string+i)>96) {
     *(string+i)=*(string+i)-32;
    }
   
    }
}
bool beginsWith(char* prefix, char *string)
{ 
    // Function for comparing the first letter/s with prefix
    
    int pre_length = strlen(prefix);        //get length of array
    int str_length = strlen(string);        //get length of array
    int cnt=0;
    bool match=false;

    for (int i = 0; i < pre_length; i++) 
    {
            
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
int str_count_subs(char *string1, char *string2)
{
  // Find similar letter/s from string 1 in string 2

  int cnt_substrings = 0;
  int pre_length = strlen(string1);
  int str_length = strlen(string2);

  for (int i = 0; i <= (str_length - pre_length); i++) {
    if (beginsWith(string1, (string2 + i)) == true) {
      cnt_substrings++;
    }
  }
  return cnt_substrings;
}
bool str_ends_with(char *string, char *suffix)
{
    int forward_cnt=0;
    int similar_letter =0;
    bool match =false;
    int length=strlen(suffix);
    
    for(int i=length;i>0;i--)
    {
        if(*(suffix+strlen(suffix)-forward_cnt)==*(string+strlen(string)-forward_cnt))
        {
        similar_letter++;
        }
        forward_cnt++;
    }
    if(similar_letter==strlen(suffix)) match=true;

    return match;
}
bool str_is_ascii(char *string)
{
    bool digits_in=true;
    for (int i = 0; i < strlen(string); i++){
        if (*(string+i)>57 || *(string+i)<48) {
        
        }
        else {
        digits_in=false;
        }

    }
    return digits_in;
}
bool str_is_digit(char *string)
{

    bool ascii_in=false;
    for (int i = 0; i < strlen(string); i++){
        if (*(string+i)<=57 &&*(string+i)>=48) {
        ascii_in= true;
        }
        else {
        ascii_in=false;
        break;
        }

    }


    return ascii_in;
}
int str_index(char *sub,char *string )
{
   
    int pre_length = strlen(sub);
    int str_length = strlen(string);
    int sub_index= 0;
        for (int i = 0; i <= (str_length - pre_length); i++) 
        {
           
            if (beginsWith(sub, (string + i)) == true) {
        
            sub_index=i;     
            break;
            }
        }

    return sub_index;
    

}
void str_capitalize(char *string) 
{
  int upper=1;
  for (int i = 0; i < strlen(string); i++) 
  {
      if (upper>0 && *(string+i)<123 &&*(string+i)>96) {
        *(string+i)=*(string+i)-32;
        upper=0;
      }

      if (*(string+i)==32) {
      upper++;
      }
  }
}
int main(){

char suffix[]="beautiful!";
char sub[] = "world";
char string1[] = "The       world   world world is beautiful!";
char digits[] ="453245";
char string2[] ="hello world ";

printf("Substrings in String: %d\n",str_count_subs(sub, string1));       // number of occurences of sub in text
printf("Correct suffix: %d\n",str_ends_with(string1, suffix));           // true if str ends with suffix
printf("Only Ascii: %d\n",str_is_ascii(string1));                        // true if string only has ascii chars
printf("Only Digits: %d\n",str_is_digit(digits));                        // true if string only has digits
printf("First substring: %d\n",str_index(sub, string1));                 // pos. of first occ. of sub in str | -1
str_inverse_case(string1);                                               // "Hello World!" => "hELLO wORLD!"
printf("Inverse: %s\n",string1); 
str_capitalize(string2);                                                 //"hello world!" => "Hello World!"
printf("Capitalize: %s\n",string2);
}


