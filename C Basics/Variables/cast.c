#include <stdio.h>

int main()
{

    double testScore = 95.7;
    int displayScore = 0;

    // Both valid ways to cast types
    displayScore = testScore;
    displayScore = (int)testScore;

    printf("Great work, you got a %d%% on your test\n", displayScore);

    char targetChar;
    int sourceInt = 99;
    double sourceDouble = 55.67;

    // Int, Double and Float can be casted to Char type (Implicit or Explicit)
    targetChar = (char)sourceInt;
    targetChar = (char)sourceDouble;

    printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);
}