#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    //integer
    printf("\nShort int %u Bytes %d to %d",sizeof(short int),SHRT_MIN,SHRT_MAX);
    printf("\nUnsigned short int %u Bytes 0 to %d",sizeof(unsigned short int),USHRT_MAX);
    printf("\nUnsigned int %u Bytes 0 to %u",sizeof(unsigned int),UINT_MAX);
    printf("\nint %u Bytes %d to %d",sizeof(int),INT_MIN,INT_MAX);
    printf("\nlong int %u Bytes %ld to %ld",sizeof(long int),LONG_MIN,LONG_MAX);
    printf("\nunsigned long int %u Bytes 0 to %u",sizeof(unsigned long int),ULONG_MAX);
    printf("\nlong long int %u Bytes %lld to %lld",sizeof(long long int),LONG_LONG_MIN,LONG_LONG_MAX);
    printf("\nunsigned long long int %u Bytes 0 to %llu \n\n",sizeof(unsigned long long int),ULONG_LONG_MAX);
    //Character
    printf("\nCharacter %u Bytes %d to %d",sizeof(char),CHAR_MIN,CHAR_MAX);
    printf("\nCharacter %u Bytes 0 to %d\n\n",sizeof(unsigned char),UCHAR_MAX);
    //Float
    printf("\nFloat %u Bytes",sizeof(float));
    printf("\nDouble %u Bytes",sizeof(double));
    printf("\nLong Double %u bytes\n\n",sizeof(long double));
    return 0;
}
