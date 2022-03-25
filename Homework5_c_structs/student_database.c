#include <stdio.h>


typedef struct {
    
    char  first_name[30];
    char last_name[50] ;
    unsigned long id;

}Student;

void print_students(Student *studentlist,unsigned long dimension) 
{

  for (unsigned long  i = 0; i < dimension; i++) 
  {

    printf("id= %lu firstname: %s lastname: %s ", studentlist[i].id, studentlist[i].first_name, studentlist[i].last_name);
  }
}
Student read_student(unsigned long id){
        
        Student pupil;
        printf(("Firstname: "));
        fgets(pupil.first_name, sizeof(pupil.first_name), stdin);
        printf(("Lastname:"));
        fgets(pupil.last_name, sizeof(pupil.last_name), stdin);
    
        pupil.id=id;
        
return pupil;
}

int main(){

char line[3];
unsigned long number;
printf("Number of Students:");
fgets(line, sizeof(line), stdin);
sscanf(line, "%lu",&number);

Student database_student[number];

for (unsigned long i=0; i<number;i++)
{
    database_student[i]=read_student(i+1);
}

 print_students(database_student,number);
}