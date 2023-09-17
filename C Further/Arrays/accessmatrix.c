#include <stdio.h>

int main()
{
    int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}};
    int sum = 0;

    // Checkpoint 1 code goes here.
    printf("%i\n", matrix[3][1]);
    // Checkpoint 2 code goes here.
    for (int r = 0; r < sizeof(matrix) / sizeof(matrix[0]); r++)
    {
        for (int c = 0; c < sizeof(matrix[0]) / sizeof(int); c++)
        {
            sum += matrix[r][c];
        }
    }
    printf("%i\n", sum);
}