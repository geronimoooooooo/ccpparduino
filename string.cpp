TEXTE ÜBER STRING: 
https://www.geeksforgeeks.org/stdstring-class-in-c/
https://www.programiz.com/cpp-programming/strings
http://openbook.rheinwerk-verlag.de/c_von_a_bis_z/011_c_arrays_011.htm

2 types of strings in C++
+ Strings that are objects of string class (The Standard C++ Library string class)
+ C-strings (C-style Strings) (Array of type char)
#####################################################
SO NICHT: char *strPtr = "Compiler zeigt WARNUNG an"; //man kann teile des Strings ändern

//man kann Teile des strings nicht ändern, aber neuen string zuweisen
NUTZEN: const char *strPtr = "DAs ist ein string literal"; strPtr = "neuer Text"; 
String str = "String object."; //braucht aber dann .c_str() damit char* kommt
std::string input = "std::cxx_11::string input";//braucht aber dann .c_str() damit char* kommt
NICHT NUTZEN: char str[] = "C++"; // "C++" has 3 character, the null character \0 is added to the end of the string automatically.

char str[4] = "C++";
char str[100] = "C++"; //not needed to use up all the space

char *carr[] = {"This is string 1", "This is string 2"}; //array of c-strings

char s[] == char *
void display(char s[]) == void display(char *);
#####################################################
#include <array>
 std::array<std::string, 3> texts = {"Apple", "Banana", "Orange"};
    // ^ An array of 3 elements with the type std::string

  for(const auto& text : texts) {   // Range-for!
      std::cout << text << std::endl;
  }

 std::array<std::string, 3> texts2 = {"aaaaa", "bbbbb", "cccccc"};
  for(auto s : texts2){
    cout <<s.c_str();
  }
#####################################################
void display(char *); //deklaration
display("abc11");
void display(char cs[]){
    printf(cs);
}
#####################################################
std::string name = "John";
int age = 21;
John21
dog2->name="NAme "+to_string(age); 
// 2. with C++11
result = name + std::to_string(age);
#####################################################
char str1[15];
   char str2[15];

   strcpy(str1, "tutorialspoint");
   strcpy(str2, "compileonline");

   puts(str1);
#####################################################
char carr[]----> string:
char arr[ ] = "This is a test";
string str(arr);

//  You can also assign directly to a string.
str = "This is another string";
str = arr; // or
----
#####################################################
std::string----->String
String SS ="";
std::string std= "adf";
SS=std.c_str();

std::string ---->const char *
std::string std= "adf";
const char *c = std.c_str();

 
String------->std::string
std::string std(SS.c_str())
  
String------>const char *
const char *c = SS.c_str()    
 
 
//make sure const char * is not NULL 
const char * -----> std::string
const char* s="hello";
std::string str = s; || std::string str(s);

const char * ----->String
?
#####################################################
INT--->STRING
https://stackoverflow.com/questions/191757/how-to-concatenate-a-stdstring-and-an-int
    
float pi = 3.14159265359;
std::string pi_str = std::to_string(pi);
//with build_flags = -std=gnu++11

#####################################################
C++ String examples: https://www.javatpoint.com/cpp-strings
#####################################################
string texts[5];
texts[0] = "uno";
for(const string &text : texts)
    cout << "value of text: " << text << endl;
#####################################################
tolower(): https://www.tutorialspoint.com/c_standard_library/c_function_tolower.htm
for(int i = 0; str[i]; i++){
  str[i] = tolower(str[i]);
}
or
for ( ; *p; ++p) *p = tolower(*p);

#####################################################
COMPARE: 
http://www.cplusplus.com/reference/cstring/strcmp/
http://www.cplusplus.com/reference/string/string/compare/
length: https://stackoverflow.com/questions/44690087/best-way-to-get-length-of-const-char-in-c

#####################################################
