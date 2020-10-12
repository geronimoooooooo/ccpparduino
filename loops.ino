const int arraySize = 10; // constant variable indicating size of array
int a[ arraySize ] = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };
int total = 0;

void setup () {

}
void loop () {
   // sum contents of array a
   for ( int i = 0; i < arraySize; ++i )
      total += a[ i ];
   Serial.print (“Total of array elements : ”) ;
   Serial.print(total) ;
}
########################################################################
#define ARRAYSIZE 10
String results[ARRAYSIZE] = { "uno", "duo", "tri" };

void setup()
{
  Serial.begin(115200);
  for (int i =0; i< ARRAYSIZE; i++) Serial.println(results[i]);
}
void loop()
{}
########################################################################
char *strings[]={ "one", "two", "three", NULL };
int i=0;
while(strings[i]) {
  printf("%s\n", strings[i]);
  //do something
  i++;
};
########################################################################
std::array<std::string, 3> texts = {"Apple", "Banana", "Orange"};
  for (auto s : texts) {
    Serial.println(s.c_str());
  }
################################################################
String array[] = {"John Smith", "Susie Maye", "Tom Jones", "Sarrah Jones", "Martha Mayes", "Brenda Howard", "Dan Evens"};
    Serial.println(array[0]);
    for (byte i = 0; i < sizeof(array); i++)
    {
        Serial.println(array[i]);
        if (i == 5)
        {
            break;
        }
    }
############################################################
    std::map<std::string, std::string> mapper;
    mapper["aa"] = "uno";
    mapper["bb"] = "due";
    for (auto &t : mapper)
    {
        Serial.print("Key: ");
        Serial.print(t.first.c_str());        
        Serial.print("Value: ");
        Serial.print(t.second.c_str());        
    }
