// Anagram Finder
#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    int counter1[] = {0, 0, 0, 0};
    int counter2[] = {0, 0, 0, 0};
    char string1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
    char string2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
    int flag = 0; // Flag 0: Match; 1: Mismatch
    int i, j, k;

    for (i = 0; i < strlen(string1); i++)
    {
        switch (string1[i])
        {
        case 'a':
            counter1[0]++;
            break;
        case 'b':
            counter1[1]++;
            break;
        case 'c':
            counter1[2]++;
            break;
        case 'd':
            counter1[3]++;
            break;
        case ' ':
            continue;
        default:
            printf("Error: Only chars from lowercase a - d are allowed!\n");
            return 1;
        }
    }
    for (j = 0; j < strlen(string2); j++)
    {
        switch (string2[j])
        {
        case 'a':
            counter2[0]++;
            break;
        case 'b':
            counter2[1]++;
            break;
        case 'c':
            counter2[2]++;
            break;
        case 'd':
            counter2[3]++;
            break;
        case ' ':
            continue;
        default:
            printf("Error: Only chars from lowercase a - d are allowed!\n");
            return 1;
        }
    }
    for (k = 0; k < 4; k++)
    {
        if (counter1[k] != counter2[k])
            flag = 1;
    }

    if (flag == 0)
    {
        printf("Anagram!\n");
        return 0;
    }
    else
    {
        printf("Not Anagram!\n");
        return 0;
    }
}
