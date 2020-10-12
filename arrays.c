Simple Erklärung für Arrays in C++: https://www.programiz.com/cpp-programming/arrays
##################################################
An array is a collection of data that holds fixed number of values of same type.
dataType arrayName[arraySize];
arrayName represents the memory address of first element of array

void display(int m[5]);
display(arrayName);

formal argument int m[5] in function declaration converts to int* m;. 
This pointer points to the same address pointed by the arrayName.
PASS BY REFERENCE

########################################################
char carr[] = "c-string. array of chars";
    strcpy(carr, "fuuu");
    Serial.println(carr);
##############################################

#define ANZAHL 10
int arr[ANZAHL], i;

for(int i=0; i<ANZAHL; i++){
  arr[i] = 1*i;
  printf("%d. Element: %d \n", i, arr[i]);
}
########################################################
String fString[8];  //array of Strings
for (i=0; i<7; i++)//       <-- Now we can use the "Array of Strings" to
     fString[i] += splitStr();//   make life simple, using "for" loops!
########################################################
C - Array of Strings mit char
const int NUMBER_OF_ELEMENTS = 2;
const int MAX_SIZE = 12;

char descriptions [NUMBER_OF_ELEMENTS] [MAX_SIZE] = { 
 { "Furnace on" }, 
 { "Furnace off" }
 };
for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
    Serial.println (descriptions [i]);
  }

char arr[MAX_NUMBER_STRINGS][MAX_STRING_SIZE]; 
strcpy(arr[0], "blah"); //besser strlcpy()
  
//declares an array of two pointers to constant characters, and initializes them to point at two hardcoded string constants.
const char *strings[2] = {"blah", "hmm"};
printf(strings[0]);//blah
strings[0]="fuu";
printf(strings[0]); //fuu

const char *ar[2];
ar[0] = "blah";
ar[1] = "hmm";
ar[0] = "change";

char *carr[]={ "one", "two", "three", NULL };
int i=0;
while(strings[i]) {
  printf("%s\n", carr[i]);
  //do something
  i++;
};
########################################################

int Feld[5];
int daten[] = { 4, 10, -20 }; //da compiler 3 Elemente eh sieht

int daten [3][2] = { { 1, 2 } , { 3, 4 } , { 5, 6 } };

int dreidimensional [3][4][34]; // 3 * 4 * 34 = 408 (!) Elemente.
dreidimensional [1][3][30] = 409;
int d3 [3][2][4] = {
                      { {1,2,3,4}, {5,6,7,8} } ,
                      { {9,10,11,12}, {13,14,15,16} } ,
                      { {17,18,19,20}, {21,22,23,24} }
                    };
########################################################
int test[2][3] = {2, 4, -5, 9, 0, 9};
int  test[2][3] = { {2, 4, 5}, {9, 0 0}};
 cout << test[0][2]; //-5

for(int i = 0; i < "; ++i)    {
      for(int j = 0; j < §; ++j)        {
          cout<< "test[" << i << "][" << j << "] = " << test[i][j] << endl;
      }
  }
########################################################
String in C ist ein Array vom Typ char;
char text[21]; //hier passt ein Text mit 20 Zeichen rein (wegen \0)
char text[16] = { 'E','i','n',' ','l','a','n','g','e','r',' ','T','e','x','t','\0' };
########################################################
int myarray[] = {123, 456, 789}; // 3 values stored
int number_of_stored_values_in_myarray = sizeof(myarray)/sizeof(int);

sizeof() liefert die Bytes die im Array zur Verfügung stehen

 int arr[4] = {1,2,3,4};
 long arr2[5] = {1,2,3,4,5};
 printf("int sizeof in Bytes: %d \n",sizeof(arr)); //16
 printf("long sizeof in Bytes: %d \n",sizeof(arr2));//40
 printf("elemente im Array: %d \n",sizeof(arr)/sizeof(int)); //4
 printf("elemente im Array: %d \n",sizeof(arr2)/sizeof(long));//5
########################################################
String array[] = { 
  "John Smith",  
  "Brenda Howard", 
  "Dan Evens"
};
########################################################
std::string arrStr[] == const char *arrChar[]

char *carr[] ={"xy","fu"};
for(auto &e:carr){
  puts(e);
  Serial.printf("This element: %s\n",e);
}

std::string strarr[] = {"uno", "due"};
for (auto &e : strarr) {
  printf("Some text in strarr: %s\n", e.c_str());
}

std::array<std::string, 3> texts = {"Apple", "Banana", "Orange"};
for (auto s : texts) {
  Serial.println(s.c_str());
}
    
string texts[] = {"Apple", "Banana", "Orange"};
for(const string &text : texts)
  cout << "value of text: " << text << endl;
########################################################
    To define an array of C string with a 2D array,  
char foo[][4] = {"bar", "baz"}; // why not 3? 
Note 1: For any multiple dimensional array with an initialization list, 
    all dimension size except the first must be specified. Therefore, 
char foo[][] = {"bar", "baz"};  // compile-time error. 
########################################################
    If the array is declared in a function, then the value is undefined. int x[10]; in a function means: take the ownership of 10-int-size area of memroy without doing any initialization. If the array is declared as a global one or as static in a function, then all elements are initialized to zero if they aren't initialized already.
########################################################
size_t my_array_size = sizeof(my_array) / sizeof(my_array[0]);
int arr[3];
int arrLength = sizeof(arr)/sizeof(int);
for(int x=0;x<arrLength;x++){
  printf("this is arr0 %d\n",arr[x]);
}
########################################################
char **argv: pointer to a pointer to a char; and an array argument is demoted to a pointer (when sent as arguent to function), 
so pointer to pointer to char, or char **.
char *argv[]: array of pointers to char
char *a[] = {"foo", "bar", "baz"};
printf("%d\n", sizeof a / sizeof *a);
########################################################
Passing array by reference
int arr[1];
ret = changeArrByRef(&arr);
int changeArrByRef(int *arr[1]){
  arr[0]=2;
  return 2;
}
########################################################
########################################################
########################################################
    
