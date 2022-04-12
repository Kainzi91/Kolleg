#include "stdio.h"
#include "stdbool.h"
#include "ctype.h"

void to_upper(char *array){


    while(*array){
        *array=toupper(*array);
        array++;
        }
    }



bool has_upper(char *array){
    
   
    int count=0;
    bool has_upper=false;
    while(*array){
        if (*array< 91&&*array>64) 
        {
            count++;
        }
        array++;
    }
    if(count!=0) has_upper=true;
    return has_upper;

}
bool is_upper(char *array){

    int count=0;
    bool is_upper=true;
    while(*array){
        if (*array<123 &&*array>96) 
        {
            count++;
        }
        array++;
    }
    if(count!=0) is_upper=false;
    return is_upper;



}

void to_lower(char *array){
    
    while(*array){
        
        *array=tolower(*array);
        array++;
    }
}
bool has_lower(char *array){

    int count=0;
    bool has_lower=false;
    while(*array){
        if (*array<123 &&*array>96) 
        {
            count++;
        }
        array++;
    }
    if(count!=0) has_lower=true;
    return has_lower;

}
bool is_lower(char *array){
    int i=0;
    int count=0;
    bool is_lower=true;
    while(*array){
        if (*array<91 && *array>64) 
        {
            count++;
        }
        array++;
    }
    if(count!=0) is_lower=false;
    return is_lower;
}


int main(){

    char array[]="hello world";
    
    printf("%d\n", has_lower(array));
    printf("%d\n", is_lower(array));
    
    to_upper(array);
    printf("%d\n",has_upper(array));
    printf("%d\n", is_upper(array));

}