# include <stdio.h> 
# include <stdbool.h> 

void size_of();

int main ()
{

    size_of();
    
    return 0; 
}
void size_of(int a , int b)
{

    printf ( "Size Bool=%lu\n",sizeof(bool));
    printf ( "Size Char=%lu\n",sizeof(char));
    printf ( "Size Short=%lu\n",sizeof(short));
    printf ( "Size Int=%lu\n",sizeof(int));
    printf ( "Size Unsigned Int=%lu\n",sizeof(unsigned int));
    printf ( "Size Signed Int=%lu\n",sizeof(signed int) );
    printf ( "Size Long int=%lu\n",sizeof(long int) );
    printf ( "Size Unsigned Long=%lu\n",sizeof(unsigned long) ) ;
    printf ( "Size Unsigned Long Long=%lu\n",sizeof(unsigned long long) );
    printf ( "Size Float=%lu\n",sizeof(float));
    printf ( "Size Double=%lu\n",sizeof(double));
    printf ( "Size Long Double=%lu\n",sizeof(long double));

}
