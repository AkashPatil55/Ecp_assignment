#include<stdio.h>
#include<limits.h>

int main() 
{
    printf("Data Type \t Size \t Format Specifier \t Range\n");
    printf("_____________________________________________________\n");

    // char
    printf("char      \t %zu   \t%%c \t\t %d to %d\n",sizeof(char),CHAR_MIN,CHAR_MAX);
    
    // unsigned char
    printf("unsigned char \t   %zu \t %%c \t\t  0 to %u\n",sizeof(unsigned char),UCHAR_MAX);

    // short int
    printf("short int     \t %zu\t%%hd \t\t %d to %d\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
    
    // unsigned short int
    printf("unsigned short int %zu   \t %%hu \t\t 0 to %u\n",sizeof(unsigned short int),USHRT_MAX);

    // int
    printf("int \t\t   %zu \t  %%d \t  \t%d to %d\n",sizeof(int),INT_MIN,INT_MAX);
    
    // unsigned int
    printf("unsigned int       %zu\t  %%u  \t\t 0 to %u\n",sizeof(unsigned int),UINT_MAX);

    // long int
    printf("long int \t   %zu \t  %%ld  \t\t %ld to %ld\n",sizeof(long int),LONG_MIN,LONG_MAX);
    
    // unsigned long int
    printf("unsigned long int  %zu \t  %%lu \t\t 0 to %lu\n",sizeof(unsigned long int),ULONG_MAX);

    return 0;
}
