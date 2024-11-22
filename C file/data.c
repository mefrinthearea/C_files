#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declare and initialize variables
    char a = 'C';                // Single character %c
    char b[] = "Cleopatra";      // Array of characters (string) %s

    float c = 3.141592;          // Floating point number %f
    double d = 3.1415926535897932;  // Double precision floating point %lf

    bool e = true;               // Boolean (true/false) %d

    char f = 100;                // Signed char %d or %c
    unsigned char g = 255;       // Unsigned char %d or %c

    short int h = 32767;         // Short integer %d
    unsigned short int i = 65535; // Unsigned short integer %d

    int j = 2147483647;          // Integer %d
    unsigned int k = 4294967296; // Unsigned integer %u

    long long int l = 9223372036854775807;  // Long long integer %lld
    unsigned long long int m = 18446744073709551615U;  // Unsigned long long integer %llu


    printf("a: %c\n", a);  // Output: C
    printf("b: %s\n", b);  // Output: Cleopatra
    printf("c: %f\n", c);  // Output: 3.141592
    printf("d: %lf\n", d); // Output: 3.141593
    printf("e: %d\n", e);  // Output: 1 (true)
    printf("f: %d\n", f);  // Output: 100
    printf("f as char: %c\n", f);  // Output: d (ASCII value of 100 is 'd')
    printf("g: %d\n", g);  // Output: 255
    printf("g as char: %c\n", g);  // Output: ÿ (ASCII value of 255 is 'ÿ')
    printf("h: %d\n", h);  // Output: 32767
    printf("i: %d\n", i);  // Output: 65535
    printf("j: %d\n", j);  // Output: 2147483647
    printf("k: %u\n", k);  // Output: 4294967296
    printf("l: %lld\n", l); // Output: 9223372036854775807
    printf("m: %llu\n", m); // Output: 18446744073709551615

    return 0;
}
