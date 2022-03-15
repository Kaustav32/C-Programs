#include <stdio.h>
void printUnsignedRange(int bytes)
{
    int bits = 8 * bytes;
    unsigned long long to = (1LLU << (bits = 1)) + ((1LL << (bits - 1)) - 1);
    printf(" to %llu\n\n", to);
}
void printsignedRange(int bytes)
{
    int bits = 8 * bytes;
    long long from = -(1LL << (bits - 1));

    long long to = (1LL << (bits - 1)) - 1;
    printf(" %lld to %lld\n\n", from, to);
}
int main()
{
    printf("\n Kaustav Chamola");
    printf("\n Range of int =");
    /* print the range of integer type */
    printsignedRange(sizeof(int));
    printf("Range of unsigned int =");
    printUnsignedRange(sizeof(unsigned int));
    /* print the range of character type */
    printf("Range of char =");
    printf("Range of unsigned char =");
    printUnsignedRange(sizeof(unsigned char));
    printsignedRange(sizeof(char));
    /*print the range of Long type */ printf("Range of long =");
    printsignedRange(sizeof(long));
    printf("Range of unsigned long =");
    printUnsignedRange(sizeof(unsigned long));
    /* print the range of short type */
    printf("Range of short =");
    printsignedRange(sizeof(short));
    printf("Range of unsigned short =");
    printUnsignedRange(sizeof(unsigned short));
    /* print the range of Long Long type */
    printf("Range of long long =");
    printsignedRange(sizeof(long long));
    printf("Range of unsigned long long =");
    printUnsignedRange(sizeof(unsigned long long));
    return 0;
}