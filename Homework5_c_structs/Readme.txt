C Structs
Complex Numbers
Implement a new type Complex that stores the real number and the imaginary unit (imag). Both real and image should be double. Implement the following functions:
Complex add(Complex a, Complex b);  // return the sum of `a` and `b`
Complex sub(Complex a, Complex b);  // return the difference of `a` and `b`
Complex mul(Complex a, Complex b);  // return the product of `a` and `b`
Having these functions in place, it becomes possible to add, substract, and multiply two complex numbers. The mathematical basis for the implementation is available for addition and multiplication.
Use these functions in main(.) to make sure they produce the correct outcomes for the following combinations:
5+5i, 7+i;
5+5i, 7-3i;
3-2i, 7-3i;
-5, 7-3i
Name the source file: complex_numbers.c


Student Data
Implement a struct that stores information about a student in a new type called Student. Each student has a char first_name[30], char last_name[50] and a unsigned long id. Implement the following functions:
Student read_student();  // read student information from stdin
// print one student per line to stdout
void print_students(Student students[], size_t dimension);
In main(.) ask the user how many students should be stored. Create an array holding the correct number of students and fill the array by repeatedly calling read_student(). Once finished, print your in-memory student database to stdout.
Name the source file: student_database.c