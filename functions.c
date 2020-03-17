functions are generally call by value. arrays are passed as pointers to functions.
##################
void swapTwoNumbers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

swapTwoNumbers(&first, &second);
/*
int first = 10;
int second = 20;
printf("first: %d\nsecond: %d\n", first, second);
swapTwoNumbers(&first, &second);
printf("first: %d\nsecond: %d\n", first, second);
// values will be swapped
##########################
// Size must be passed!
// Otherwise, this function has no way of knowing how big the array is.
void printIntArray(int *arr, size_t size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("arr[%d] is: %d\n", i, arr[i]);
    }
}
printIntArray(my_arr, size);
/*
int my_arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int size = 10;
printIntArray(my_arr, size);
// will print "arr[0] is: 1" etc
*/
####################################
