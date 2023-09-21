#include <stdio.h>
#include <string.h>

int main()
{

    char src[] = "banana";
    char dst[7];

    char pan[] = "How vexingly quick daft zebras jump!";
    int len = strlen(pan) + 1; //To copy a string array, the length of the copy location must be the length of the string + 1 to account for the empty char
    char dst2[len];

    // Code for checkpoint 1 goes here
    strcpy(dst, src);
    printf("%s\n", dst);

    // Code for checkpoint 3 goes here
    strcpy(dst2, pan);
    printf("%s", dst2);
}