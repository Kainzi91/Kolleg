C Strings
Capitalize String
Implement a function void capitalize(char string[]); that capitalizes the given string. For example,
char text[] = "The world is beautiful!";
capitalize(text);  // `text` becomes "The World Is Beautiful."
Name the source file: capitalize.c

String Functions Implement the following functions:

void str_inverse_case(char str[]);  // "Hello World!" => "hELLO wORLD!"
// Return true if str starts with prefix, otherwise false.
bool str_starts_with(char str[], char prefix[]);
bool str_ends_with(char str[], char suffix[]);  // true if str ends with suffix
int str_count(char str[], char sub[]);  // number of occurences of sub in text
// true if string only has ascii chars (not extended ascii)
bool str_is_ascii(char str[]);
bool str_is_digit(char str[]);  // true if string only has digits
// position of first occurance of sub in str | -1
int str_index(char str[], char sub[]);

Design multiple appropriate test cases (input output combinations) before implementing the above functions. Call the functions from within main(.) to make sure that the test cases pass.
Name the source file: cstring.c
