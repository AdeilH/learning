#include <stdio.h>
#include <limits.h> 
#include <float.h>

int main(int argc, char** argv){
    // Char

    // Max Values of Char
    printf("minimum char value %d, maximum char value %d \n", CHAR_MIN, CHAR_MAX);
    // Min Max Values of Signed Char
    printf("minimum signed char value %d, maximum signed char value %d \n", SCHAR_MIN, SCHAR_MAX);
    // Min Max Values of Unsigned Char
    printf("minimum unsigned char value %d, maximum unsigned char value %d \n", 0, UCHAR_MAX);
    
    // short 
    // signed short values
    printf("minimum signed short value, %d, maximum signed short value %d\n", SHRT_MIN, SHRT_MAX);

    // unsigned short values
    printf("minimum unsigned short value %d, maximum unsigned short value %d\n", 0, USHRT_MAX);

    // int
    // signed int values
    printf("minimum signed int value, %d, maximum signed int value %d\n", INT_MIN, INT_MAX);

    // unsigned int values
    printf("minimum unsigned int value %d, maximum unsigned int value %u\n", 0, UINT_MAX);

     // long
    // signed long values
    printf("minimum signed long value, %ld, maximum signed long value %ld\n", LONG_MIN, LONG_MAX);

    // unsigned long values
    printf("minimum unsigned long value %u, maximum unsigned long value %lu\n", 0, ULONG_MAX);

     //  long long
    // signed long long values
    printf("minimum signed long long value, %lld, maximum signed long long value %lld\n", LLONG_MIN, LLONG_MAX);

    // unsigned long long values
    printf("minimum unsigned long long value %u, maximum unsigned long long value %llu\n", 0, ULLONG_MAX);


  //  float
    // maximum and minimum value
    printf("minimum float value, %f, maximum double value %0.01f\n", FLT_MIN , FLT_MAX );

     //  double
    // maximum and minimum value
    printf("minimum double value, %f, maximum double value %0.01f\n", DBL_MIN , DBL_MAX );

      // long double
    // maximum and minimum value
    printf("minimum long double value, %Lf, maximum long double value %0.01Lf\n", LDBL_MIN , LDBL_MAX );


    return 0; 
} 