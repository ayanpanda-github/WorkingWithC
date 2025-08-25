#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>

int main(void) {
    // Integer types
    printf("=== INTEGER DATA TYPES ===\n");
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("CHAR_MIN: %d, CHAR_MAX: %d\n", CHAR_MIN, CHAR_MAX);
    printf("UCHAR_MAX: %u\n\n", UCHAR_MAX);
    
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("SHRT_MIN: %d, SHRT_MAX: %d\n", SHRT_MIN, SHRT_MAX);
    printf("USHRT_MAX: %u\n\n", USHRT_MAX);
    
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("INT_MIN: %d, INT_MAX: %d\n", INT_MIN, INT_MAX);
    printf("UINT_MAX: %u\n\n", UINT_MAX);
    
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("LONG_MIN: %ld, LONG_MAX: %ld\n", LONG_MIN, LONG_MAX);
    printf("ULONG_MAX: %lu\n\n", ULONG_MAX);
    
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("LLONG_MIN: %lld, LLONG_MAX: %lld\n", LLONG_MIN, LLONG_MAX);
    printf("ULLONG_MAX: %llu\n\n", ULLONG_MAX);

    // Fixed-width integer types (C99)
    printf("=== FIXED-WIDTH INTEGER TYPES ===\n");
    printf("Size of int8_t: %zu bytes\n", sizeof(int8_t));
    printf("Size of uint8_t: %zu bytes\n", sizeof(uint8_t));
    printf("Size of int16_t: %zu bytes\n", sizeof(int16_t));
    printf("Size of uint16_t: %zu bytes\n", sizeof(uint16_t));
    printf("Size of int32_t: %zu bytes\n", sizeof(int32_t));
    printf("Size of uint32_t: %zu bytes\n", sizeof(uint32_t));
    printf("Size of int64_t: %zu bytes\n", sizeof(int64_t));
    printf("Size of uint64_t: %zu bytes\n\n", sizeof(uint64_t));

    // Floating-point types
    printf("=== FLOATING-POINT DATA TYPES ===\n");
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("FLT_MIN: %e, FLT_MAX: %e\n", FLT_MIN, FLT_MAX);
    printf("FLT_DIG: %d (decimal digits of precision)\n\n", FLT_DIG);
    
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("DBL_MIN: %e, DBL_MAX: %e\n", DBL_MIN, DBL_MAX);
    printf("DBL_DIG: %d (decimal digits of precision)\n\n", DBL_DIG);
    
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    printf("LDBL_MIN: %Le, LDBL_MAX: %Le\n", LDBL_MIN, LDBL_MAX);
    printf("LDBL_DIG: %d (decimal digits of precision)\n\n", LDBL_DIG);

    // Pointer types
    printf("=== POINTER TYPES ===\n");
    printf("Size of void*: %zu bytes\n", sizeof(void*));
    printf("Size of char*: %zu bytes\n", sizeof(char*));
    printf("Size of int*: %zu bytes\n", sizeof(int*));
    printf("Size of double*: %zu bytes\n\n", sizeof(double*));

    // Other types
    printf("=== OTHER TYPES ===\n");
    printf("Size of size_t: %zu bytes\n", sizeof(size_t));
    printf("Size of ptrdiff_t: %zu bytes\n", sizeof(ptrdiff_t));
    printf("Size of time_t: %zu bytes\n", sizeof(time_t));

    return 0;
}