2 types of strings in C++
+ Strings that are objects of string class (The Standard C++ Library string class)
+ C-strings (C-style Strings) (Array of type char)
#####################################################
SO NICHT: char *strPtr = "Compiler zeigt WARNUNG an";
const char *strPtr = "So einen Text deklarieren";
String str = "String object."; //braucht aber dann .c_str() damit char* kommt
std::string input = "std::cxx_11::string input";
    
char str[] = "C++"; // "C++" has 3 character, the null character \0 is added to the end of the string automatically.
char str[4] = "C++";
char str[100] = "C++"; //not needed to use up all the space

char s[] == char *
void display(char s[]) == void display(char *);
#####################################################
void display(char *); //deklaration
display("abc11");
void display(char cs[]){
    printf(cs);
}
#####################################################
#####################################################
#####################################################
#####################################################
#####################################################
#####################################################
#####################################################
#####################################################
#####################################################
#####################################################
