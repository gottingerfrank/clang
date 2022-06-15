#include <stdio.h>
#include <string.h>

int copy(char *dst, char *src)
{
    while (*src != '\0')
    {
        *dst = *src;
        src++;
        dst++;
    }
    *dst = '\0';

    return 0;
}

int main()
{
    char srcString[] = "We promptly judged antique ivory buckles for the next prize!";

    char dstString[strlen(srcString) + 1];

    copy(dstString, srcString);

    printf("[dstString]: %s\n", dstString);
    printf("[strlen(srcString)]: %lu\n", strlen(srcString));
    printf("[strlen(dstString)]: %lu\n", strlen(srcString));
    printf("[sizeof(srcString)]: %lu\n", sizeof(srcString));
    printf("[sizeof(dstString)]: %lu\n", sizeof(dstString));
    printf("[srcString]: %p\n", srcString);
    printf("[&srcString[0]]: %p\n", &srcString[0]);
    printf("[dstString]: %p\n", dstString);
    printf("[&dstString[0]]: %p\n", &dstString[0]);
    printf("[dstString[0] Hex]: 0x%x\n", dstString[0]);
    printf("[dstString[0] Ascii Char]: %c\n", dstString[0]);
    
    return 0;
}