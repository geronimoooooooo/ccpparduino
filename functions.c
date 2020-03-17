functions are generally call by value
##################
void swapTwoNumbers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
/*
int first = 10;
int second = 20;
printf("first: %d\nsecond: %d\n", first, second);
swapTwoNumbers(&first, &second);
printf("first: %d\nsecond: %d\n", first, second);
// values will be swapped
##########################
