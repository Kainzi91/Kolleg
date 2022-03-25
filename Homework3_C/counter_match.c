#include <stdio.h>

int count_numbers(int *array,int size,int dimension)
{
    char line[10];
    for (int i=0; i<size;i++)
    {

        printf("%d. Number: ", i+1);
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d\n", &array[i]);
       
    }
    int cnt=0;
    for (int j=0; j<size; j++) 
    {
        
            
            if (array[j]==dimension) {
            cnt++;
            }
    }
    printf("you have %d matches\n",cnt);
    return cnt;
}
int main()
{
    printf("Enter a the size of Numbers: ");
    char line[10];
    int size=0;
    int dimension=0;
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &size);
    int Values[size];
    printf("Enter a Number you want to compare with: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &dimension);

    printf("Enter Numbers: \n");
    count_numbers(Values, size,dimension);
    
}