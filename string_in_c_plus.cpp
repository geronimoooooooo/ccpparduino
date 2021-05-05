String...sequence of char

#include <iostream>
#include <string>
#include<cctype> hat 10 function bezüglich strings https://www.programiz.com/cpp-programming/library-function/cctype
using namespace std;

cout <<"stringLiteral"<< endl;

string str = "hello";
string s = "a"+"b"; //geht nicht, da man string literals so nicht concatenieren kann s="a""b"; geht

char firstName[] ="first";
char lastName[] ="last";
char *fullName = strcat(firstName, lastName);
