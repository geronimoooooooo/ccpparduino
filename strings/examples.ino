char myStr[6];
myStr[0] = 'A';
char myStr[] = "Hello";
char z[100] = "I am learning C programming language.";
printf("hi: %d %s", var, z);

myStr[5] = 0; //null terminated

num = strlen(str);
strcpy(out_str, str); //wenn man String out_str neuen Text geben möchte

// (5) add a string to the end of a string (append)
   strcat(out_str, " sketch.");
   
  String str = "some String";
  char arr[] = "This is an array of chars";
  char arr2[] = "This 2nd array";
  char *arr3 = "arr3";
  Serial.println(arr);
  Serial.println(arr2);  
  strcpy(arr2, arr);
  Serial.println(arr2);  
  Serial.println(arr3);  
  strcpy(arr2, arr3);
  Serial.println(arr2);  

char arr[]; //geht nicht, da Größe fehlt
char c[] = "abcd";
char c[50] = "abcd";
char c[] = {'a', 'b', 'c', 'd', '\0'};
char c[5] = {'a', 'b', 'c', 'd', '\0'};


String aStupidWasteOfResource = "Pissing away resources uselessly";
char copy[50];
aStupidWasteOfResource.toCharArray(copy, 50);

String stringOne = "123456789";
char charBuf[50];
stringOne.toCharArray(charBuf, 50) ;
Serial.println(stringOne);
for (int i = 0; i < 9; i++) {
  Serial.print(" 0x");
  Serial.print(charBuf[i], HEX);
}
Serial.println();
##############################
 Serial.printf("Advertised Device: %s \n", advertisedDevice.toString().c_str());
##############################
char message[6] = "hello";
char string[] = "Hello World";
Serial.println(string);
##############################
const char* host = "esp32";
const char* ssid = "REPLACE_WITH_YOUR_SSID";
const char* password = "REPLACE_WITH_YOUR_PASSWORD";
##############################
char carr[] = "c-string. array of chars";
void setup() {
    Serial.println(carr);
    strcpy(carr, "fuuu"); //geht
    Serial.println(carr);
}
##############################
char buffer[30];
int anInt = 123;
sprintf(buffer, "Number %d on the screen", anInt);
Serial.println(buffer);
##############################
uses little memory
Serial.print(F("Number "));
Serial.print(anInt);
Serial.println(F(" on the screen"));
############################################################
%d	int	Dezimalzahl
%u	unsigned int	Natürliche (Dezimal-)Zahl (pos. Zahl)
%x, %X	unsigned int	Hexadezimalzahl
%o	unsigned int	Oktalzahl
%c	char	Einzelnes Zeichen (ASCII-Zeichen)
%s	char *	Zeichenkette (String)
%f	float, double	Gleitkommazahl
%e, %E	float, double	Gleitkommazahl in Exponential-Darstellung
%g, %G	float, double	Normale od. Exponential-Darstellung (was günstiger ist)
############################################################
