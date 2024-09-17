#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Integer ranges
    printf("Integer ranges:\n");
    printf("CHAR_MIN = %d\n", CHAR_MIN);
    printf("CHAR_MAX = %d\n", CHAR_MAX);
    printf("SCHAR_MIN = %d\n", SCHAR_MIN);
    printf("SCHAR_MAX = %d\n", SCHAR_MAX);
    printf("UCHAR_MAX = %d\n", UCHAR_MAX);
    printf("SHRT_MIN = %d\n", SHRT_MIN);
    printf("SHRT_MAX = %d\n", SHRT_MAX);
    printf("USHRT_MAX = %d\n", USHRT_MAX);
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %d\n", INT_MAX);
    printf("UINT_MAX = %u\n", UINT_MAX);
    printf("LONG_MIN = %ld\n", LONG_MIN);
    printf("LONG_MAX = %ld\n", LONG_MAX);
    printf("ULONG_MAX = %lu\n", ULONG_MAX);

    // Floating-point ranges
    printf("\nFloating-point ranges:\n");
    printf("FLT_MIN = %f\n", FLT_MIN);
    printf("FLT_MAX = %f\n", FLT_MAX);
    printf("DBL_MIN = %f\n", DBL_MIN);
    printf("DBL_MAX = %f\n", DBL_MAX);
    printf("LDBL_MIN = %Lf\n", LDBL_MIN);
    printf("LDBL_MAX = %Lf\n", LDBL_MAX);

    return 0;
}
