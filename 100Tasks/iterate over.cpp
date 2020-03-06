1. char array
2. int array





1 #############################
char myStr[] = "this is some string";
for(byte i=0; i<sizeof(myStr)-1; i++)
  {Serial.println(myStr[i]);
 }
2 #############################
int myVal[] = {12,34,56};
for (byte i = 0; i < (sizeof(myVal) / sizeof(myVal[0])); i++) {
  // do something with myVal[i]
}
#############################
#############################
#############################
#############################
#############################
#############################
