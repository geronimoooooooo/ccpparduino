String...sequence of char
c-string...pointer to null terminated char arr

#include <iostream>
#include <string>
#include <cctype> hat 10 function bezüglich strings https://www.programiz.com/cpp-programming/library-function/cctype
#include <cstring>
using namespace std;

cout <<"stringLiteral"<< endl;

string str = "hello";
string s = "a"+"b"; //geht nicht, da man string literals so nicht concatenieren kann s="a""b"; geht

char firstName[] ="first";
char lastName[] ="last";
char *fullName = strcat(firstName, lastName);

string::size_type

std::string str;
const char *c = str.c_str(); //often needed for a function



https://www.geeksforgeeks.org/how-to-convert-c-style-strings-to-stdstring-and-vice-versa/

https://www.geeksforgeeks.org/strdup-strdndup-functions-c/
https://stackoverflow.com/questions/347949/how-to-convert-a-stdstring-to-const-char-or-char
https://www.geeksforgeeks.org/convert-string-char-array-cpp/
https://gist.github.com/ybakos/9078101
http://www.cplusplus.com/reference/string/string/
https://www.javatpoint.com/cpp-strings
https://www.guru99.com/stdstring-class-in-cpp.html
https://www.w3schools.in/cplusplus-tutorial/manipulating-strings/
https://www.cprogramming.com/tutorial/string.html
https://cal-linux.com/tutorials/strings.html
https://www.w3schools.com/cpp/cpp_data_types_char.asp
https://www.geeksforgeeks.org/stdstring-class-in-c/
https://www.educba.com/c-plus-plus-string-functions/
https://www.tutorialspoint.com/cplusplus/cpp_strings.htm
https://www.javatpoint.com/cpp-strings
