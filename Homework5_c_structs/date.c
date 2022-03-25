#include "stdio.h"


typedef struct {
    
    int year;
    int month;
    int day;


}date;

date print_date(date d){

 d.year=1991;


return d;
}


int main(){

    date today={2022,03,22};
    date a =print_date(today);
    
    printf("%d-%d-%d\n", a.year,a.month,a.day);
    return 0;

}