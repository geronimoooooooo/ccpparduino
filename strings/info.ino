Arduino/C strings

Arduino RAM:
BSS area: statische und globale Variablen abgespeicehrt
Stack: lokale Variablen
Heap: für dynamische Variablen

The Evils of Arduino Strings:
https://hackingmajenkoblog.wordpress.com/2016/02/04/the-evils-of-arduino-strings/

Strings (als Klasse) nutzen den dynamischen Speicher(Heap) im RAM.
Nutzen: C String-> String = Array of characters (\0 terminated)
\0 als Marker, der anzeigt wo String endet

char string[30]; // 29 chars + \0. Der 0er deutet das Ende vom Array an.
char string[30] = "This is a string";
char string[] = "Length unknown";
Der C String beinhaltet nicht den Text, sondern die Adresse wo sich diese Charakters befinden. "string" ist der Pointer.
string = "Neuer string"; wird nicht gehen!
Man muss folgendes machen: strcpy(string, "Neuer string");

char *string; //this format just creates a pointer to a string. Speicheradresse wo man den Text dann findet. Nur zum Lesen gedacht. Gibt Probleme wenn verändert wird
char *string = "This is text"; //pointer to some text in memory
Deswegen gleich von anfang an: 
const char *string = "This is text";

*pointer: Give me the value that is stored in the memory that pointer is pointing at

Bei einer function die Argumente char *: Pointers to memory that I can edit
const char *tag: der Compilter weiß, dass hier nie Änderung vergenommen wird
void printVal(const char *tag, const char *value){
  Serial.print(tag);
  Serial.print(" = ");
  Serial.print(value);
}

void PrintString(const char *str) {
    const char *p;
    p = str;
    while (*p) {
        Serial.print(*p);
        p++;
    }
}
--------------------------------------------------------------------------------------
https://www.tutorialspoint.com/arduino/arduino_strings.htm

2 Arten von Strings: a) Array of characters b) String object
Array ist dann "null terminated"
