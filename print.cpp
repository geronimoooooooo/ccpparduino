ALLE MÖGLICHEN PRINT FUNCTIONS
https://en.cppreference.com/w/c/io/fprintf
###########################################
###########################################  
  snprintf(msg, 255, "#%ld RSSI: %ld from Id: %s", msgCounter, rssi, addressChar);
###########################################
char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
printf("Greeting message: %s\n", greeting );
###########################################
std::string name = "Tester";
Serial.println(name.c_str()); 
###########################################
C
printf ("hello, world!");
printf ("Global: %d\n", globale_variable); // int globale_variable;
###########################################
int var = 5;
char z[100] = "I am learning C programming language.";
printf("hi: %d %s", var, z);
###########################################
printf ("%-10d%70d\n", 1, 1000); //muss 80 ergeben; - ist linksbündig
printf ("%80s","Dieser Text wird rechtsbuendig angezeigt.");
1                                       100  
  Dieser Text wird rechtsbuendig angezeigt.
###########################################
int i;
  scanf ("%d", &i);
  printf("Your input: %d", i);
###########################################
cout << "Sum = " << sum << endl;  
Sum = 18
  
int test[2][3] = {2, 4, -5, 9, 0, 9};
cout << test[0][2] <<"some text"<< endl;
cin>>test[0][2]; //input über console wird hier abgespeichert
cout << test[0][2] <<"some text";
###########################################
  char str[100];

  cout << "Enter a string: ";
  cin >> str; //the extraction operator >> works as scanf() in C and considers a space " " has a terminating character.
  cout << "You entered: " << str << endl;
  cin.get(str, 100); //To read the text containing blank space, cin.get
###########################################
format specifier, List of all format specifiers in C programming:
https://codeforwin.org/2015/05/list-of-all-format-specifiers-in-c-programming.html
https://alvinalexander.com/programming/printf-format-cheat-sheet#a-summary-of-printf-format-specifiers
https://notgnoshi.github.io/printf/

\n...new line, \t...tabulator, \v...vertical tab
%s ...char*, char[] array   (String str.c_str(), std::string str.c_str())
%c ...char int8_t (unsigned 0 .. 255, signed -128...127)
%d ...int (int8_t, 16)
%3d ...integer with minimum of length 3 digits (right justifies text)  
%ld...long (int32_t)
%u... unsigned integer (uint8_t)
%lu...long unsigned int (uint32_t 0 .. 4,294,967,295) millis()
%llu...unsigned long long
%f... float (10.5)
%3.2f... minimum 3 digits and 2 digits right decimal float
%lf...double pi=3.14156 (%.2lf liefert 3.14)
%f...430.500000  %.2f...430.50
%zu...size_t unsigned
%zd...ssize_t signed
%p...Speicheradresse (z.B. 0x7ffdf25cef40) printf("%p\n", (void *)&x); // Use & to retrieve the address of a variable
%%...prints %
bool x = true; printf("%d\n", x); // prints 1
printf("%s", x ? "true" : "false");...bool

u prints an unsigned number in decimal.
d prints a signed number in decimal.
x prints an unsigned number in hexadecimal.
o prints an unsigned number in octal.
i prints a signed number in decimal.
###########################################
Serial.printf("Sha256 from: %s to: %s \n",input4Sha256.c_str(), outputSha256.c_str());
snprintf (msg, 50, "#%ld RSSI send to mqtt: %ld", value, WiFi.RSSI());
Serial.print("Publish message: ");
Serial.println(msg);
###############################################
 // Read the WHO_AM_I register, this is a good test of communication
  byte c = IMU.readByte(MPU9250_ADDRESS, WHO_AM_I_MPU9250); //
  Serial.print("MPU9250 ");
  Serial.print("I AM ");
  Serial.print(c, HEX);
  Serial.print(" I should be ");
  Serial.println(0x71, HEX);
     Serial.println(c, HEX);
     M5.Lcd.printf("Could not connect to MPU9250: 0x%x \n",c);
##########################################
https://en.wikibooks.org/wiki/C_Programming/stdio.h/puts
puts("literal string"); puts(array of chars); int puts(const char *str);

GEHT NICHT: string str="a"; puts(str); 
NUTZEN puts(str.c_str());

puts is a function used to output a c-string (plus a newline)
puts prints the string as is (it does not process % codes).
puts returns the number of bytes written

To print a string without processing % codes, or outputting a newline, try:
printf("%s", "welcome to WIKIPEDIA!!!");
##########################################
int num1, num2;   // Define two integer variables
scanf("%d %d", &num1, &num2);  // Get input for the two variables
sum = num1 + num2;
printf("%d\n", sum);   // Print the sum
##########################################
Serial.println(accelgyro.testConnection() ? "MPU9250 connection successful" : "MPU9250 connection failed");
##########################################
Serial.print("\t");
##########################################
int bootCount = 2;
 str= "testLoop";
  String st= "string s";
  Serial.println(str + st+": "+String(bootCount));
##########################################
  char buffer[75];
  const char *s2 = "Connecting to new WiFi:";
  snprintf(buffer, 75, "connecting to: %s", ssid);
  printAddSimpleLineOfText(buffer);
##########################################
##########################################
##########################################
##########################################
##########################################
##########################################
