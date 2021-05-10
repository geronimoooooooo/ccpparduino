String...sequence of char
A c-string is a pointer to a NULL terminated array of chars.
char myArray[2]; myArray[0]='a'; myArray[1]='b'; ist kein c-string, da '\0' zum NULL terminieren fehlt; erst mit myArray[2]='\0' würde passen; char myArray[3]; updaten

http://www.cplusplus.com/forum/general/41912/
https://stackoverflow.com/questions/1195675/convert-a-char-to-stdstring
https://stackoverflow.com/questions/39324272/how-to-convert-char-to-stdstring
https://www.codegrepper.com/code-examples/cpp/convert+char+array+to+string+c%2B%2B
https://www.codegrepper.com/code-examples/cpp/convert+array+char+to+string+c%2B%2B
https://www.codegrepper.com/code-examples/cpp/convert+char%2A+to+string+c%2B%2B

https://forum.arduino.cc/t/weird-output-when-converting-character-array-to-a-string/331551/3
https://forum.arduino.cc/t/serial-monitor-displays-strange-characters/193118/13
https://forum.arduino.cc/t/strange-characters-on-serial-monitor/314714

#include <iostream>
#include <string> http://www.cplusplus.com/reference/string/string/
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
cout<<"enter your name"<<endl; 
getline(cin, firstName);

==pointer==
pointer ist ein integer, welcher eine Speicheradresse als Wert hat  
void* p = 0/NULL/nullptr; pointer ist einfach invalid

int var = 8;
int* ptr = &var;
*ptr = 10;

char* buffer = new char[8]; ptr zeigt auf die 1. Stelle des 8 Bytes arrays
memset(buffer,0,8); 8 Bytes des Speichers werden mit 0 befüllt

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
