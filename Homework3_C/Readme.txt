3
Total Resistance
Develop a program that calculates the total resistance of  parallel resistors like in the schematic below.
File:Resistors in parallel.svg
The program should use a separate function for the actual calculation.
In main(.)) deal with user input and output. Ask the user to enter the number of parallel resistors of the circuit and then ask for the resistance of each resistor using a for loop.
The other function should take an array of resistances and the length of this array as input and return the total resistance.
The total resistance can be calculated with this formula:

Name the source file: parallel_resistors.c

Count Matching Elements
Write a function int countNumInArray(int array[], int dimension, int number) that returns how many times the given number occurs in the array. For example
int array[] = {4, 1, 7, 5, 4, 1, 4, 2, 7};
countNumInArray(array, 9, 5);  // returns 1
countNumInArray(array, 9, 4);  // returns 3

Find Maximum
Write a function int max(int array[], int dimension) that takes an array of integers and its dimension and returns the array's highest number. Try to determine a way to figure out the number of elements in the array inside the function max(.). You may assume that the passed array is never empty.
int array[] = {4, 1, 7, 5, 4, 1, 4, 2, 7};
max(array, 9);  // returns 7

Determine Prefix
Write a function bool beginsWith(char prefix[], char string[]) that returns true if prefix[] is a prefix of string[]. For example
char prefix1[] = "Al";
char string1[] = "Aline";
char string2[] = "Hello World!";
beginsWith(prefix, string1);  // returns `true`
beginsWith(prefix, string2);  // returns `false`
Don't forget to #include <stdbool.h> in order to use the bool data type.

Mathematical functions
Write a program that prints the sine and cosine of all values between 0 and π in steps of 0.1. The last value must be π. All values should be fixed to 2 digits after the decimal point.
A sample run of this program:
radians |  sine | cosine
------------------------
    0.0 |  0.00 |   1.00
    0.1 |  0.10 |   1.00
    0.2 |  0.20 |   0.98
[...]
    3.0 |  0.14 |  -0.99
    3.1 |  0.04 |  -1.00
   3.14 |  0.00 |  -1.00