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
{
}
########################################################################