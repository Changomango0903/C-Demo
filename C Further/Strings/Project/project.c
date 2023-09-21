#include <stdio.h>
#include <string.h>
int main()
{

    int flag = 0;

    int counter1[4] = {0, 0, 0, 0};
    int counter2[4] = {0, 0, 0, 0};

    char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
    char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

    for (int i = 0; i < strlen(s1); i++)
    {
        switch (s1[i])
        {
        case ('a'):
            counter1[0]++;
            break;
        case ('b'):
            counter1[1]++;
            break;
        case ('c'):
            counter1[2]++;
            break;
        case ('d'):
            counter1[3]++;
            break;
        default:
            break;
        }
    }
    for (int i = 0; i < strlen(s2); i++)
    {
        switch (s2[i])
        {
        case ('a'):
            counter2[0]++;
            break;
        case ('b'):
            counter2[1]++;
            break;
        case ('c'):
            counter2[2]++;
            break;
        case ('d'):
            counter2[3]++;
            break;
        default:
            break;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (counter1[i] != counter2[i])
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("Not Anagram!");
    }
    else
    {
        printf("Anagram!");
    }
}
