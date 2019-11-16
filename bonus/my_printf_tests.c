#include <stdio.h>
#include <limits.h>
#include <my.h>

int main(void)
{
    char np_str[] = "hello";
    np_str[1] = 4;
    int var = 42;
    int *ptr = &var;

    signed char my_signed_char = -2;
    unsigned char my_unsigned_char = 42;

    signed short int my_signed_short_int = -84;
    unsigned short int my_unsigned_short_int = 66;

    signed long int my_signed_long_int = -329279279;
    unsigned long int my_unsigned_long_int = 240297049297490;

    signed long long int my_signed_long_long_int = -9223372034775807;
    unsigned long long int my_unsigned_long_long_int = 184467443709551615;

    my_printf("--- MY_PRINTF ---\n");
    my_printf("Conversions specifiers :\n");
    my_printf("\td : %d, %d, %d, %d, %d\n", 0, 42, -84, INT_MAX, INT_MIN);
    my_printf("\ti : %i, %i, %i, %i, %i\n", 0, 42, -84, INT_MAX, INT_MIN);
    my_printf("\tb : %b, %b, %b\n", 0, 42, INT_MAX);
    my_printf("\to : %o, %o, %o\n", 0, 42, INT_MAX);
    my_printf("\tu : %u, %u, %u\n", 0, 42, INT_MAX);
    my_printf("\tx : %x, %x, %x\n", 0, 42, INT_MAX);
    my_printf("\tX : %X, %X, %X\n", 0, 42, INT_MAX);
    my_printf("\tc : %c, %c\n", 'a', 48);
    my_printf("\ts : %s, %s\n", "hello_world", "");
    my_printf("\tS : %S\n", np_str);
    my_printf("\tp : %p\n", ptr);
    my_printf("\t%% : %%\n");
    my_printf("Length modifiers :\n");
    my_printf("\thhd : %hhd, %hhd, %hhd, %hhd\n", my_signed_char, -my_signed_char, SCHAR_MIN, SCHAR_MAX);
    my_printf("\thhi : %hhi, %hhi, %hhi, %hhi\n", my_signed_char, -my_signed_char, SCHAR_MIN, SCHAR_MAX);
    my_printf("\thhu : %hhu, %hhu, %hhu\n", 0, my_unsigned_char, UCHAR_MAX);
    my_printf("\thho : %hho, %hho, %hho\n", 0, my_unsigned_char, UCHAR_MAX);
    my_printf("\thhx : %hhx, %hhx, %hhx\n", 0, my_unsigned_char, UCHAR_MAX);
    my_printf("\thhX : %hhX, %hhX, %hhX\n", 0, my_unsigned_char, UCHAR_MAX);
    my_printf("\thd : %hd, %hd, %hd, %hd\n", my_signed_short_int, -my_signed_short_int, SHRT_MIN, SHRT_MAX);
    my_printf("\thi : %hi, %hi, %hi, %hi\n", my_signed_short_int, -my_signed_short_int, SHRT_MIN, SHRT_MAX);
    my_printf("\thu : %hu, %hu, %hu\n", 0, my_unsigned_short_int, USHRT_MAX);
    my_printf("\tho : %ho, %ho, %ho\n", 0, my_unsigned_short_int, USHRT_MAX);
    my_printf("\thx : %hx, %hx, %hx\n", 0, my_unsigned_short_int, USHRT_MAX);
    my_printf("\thX : %hX, %hX, %hX\n", 0, my_unsigned_short_int, USHRT_MAX);
    my_printf("\tld : %ld, %ld, %ld, %ld\n", my_signed_long_int, -my_signed_long_int, LONG_MIN, LONG_MAX);
    my_printf("\tli : %li, %li, %li, %li\n", my_signed_long_int, -my_signed_long_int, LONG_MIN, LONG_MAX);
    my_printf("\tlu : %lu, %lu, %lu\n", 0, my_unsigned_long_int, ULONG_MAX);
    my_printf("\tlo : %lo, %lo, %lo\n", 0, my_unsigned_long_int, ULONG_MAX);
    my_printf("\tlx : %lx, %lx, %lx\n", 0, my_unsigned_long_int, ULONG_MAX);
    my_printf("\tlX : %lX, %lX, %lX\n", 0, my_unsigned_long_int, ULONG_MAX);
    my_printf("\tlld : %lld, %lld, %lld, %lld\n", my_signed_long_long_int, -my_signed_long_long_int, LLONG_MIN, LLONG_MAX);
    my_printf("\tlli : %lli, %lli, %lli, %lli\n", my_signed_long_long_int, -my_signed_long_long_int, LLONG_MIN, LLONG_MAX);
    my_printf("\tllu : %llu, %llu, %llu\n", 0, my_unsigned_long_long_int, ULLONG_MAX);
    my_printf("\tllo : %llo, %llo, %llo\n", 0, my_unsigned_long_long_int, ULLONG_MAX);
    my_printf("\tllx : %llx, %llx, %llx\n", 0, my_unsigned_long_long_int, ULLONG_MAX);
    my_printf("\tllX : %llX, %llX, %llX\n", 0, my_unsigned_long_long_int, ULLONG_MAX);


    printf("\n--- PRINTF ---\n");
    printf("Conversions specifiers :\n");
    printf("\td : %d, %d, %d, %d, %d\n", 0, 42, -84, INT_MAX, INT_MIN);
    printf("\ti : %i, %i, %i, %i, %i\n", 0, 42, -84, INT_MAX, INT_MIN);
    printf("\tb : %b, %b, %b\n", 0, 42, INT_MAX);
    printf("\to : %o, %o, %o\n", 0, 42, INT_MAX);
    printf("\tu : %u, %u, %u\n", 0, 42, INT_MAX);
    printf("\tx : %x, %x, %x\n", 0, 42, INT_MAX);
    printf("\tX : %X, %X, %X\n", 0, 42, INT_MAX);
    printf("\tc : %c, %c\n", 'a', 48);
    printf("\ts : %s, %s\n", "hello_world", "");
    printf("\tS : %S\n", np_str);
    printf("\tp : %p\n", ptr);
    printf("\t%% : %%\n");
    printf("Length modifiers :\n");
    printf("\thhd : %hhd, %hhd, %hhd, %hhd\n", my_signed_char, -my_signed_char, SCHAR_MIN, SCHAR_MAX);
    printf("\thhi : %hhi, %hhi, %hhi, %hhi\n", my_signed_char, -my_signed_char, SCHAR_MIN, SCHAR_MAX);
    printf("\thhu : %hhu, %hhu, %hhu\n", 0, my_unsigned_char, UCHAR_MAX);
    printf("\thho : %hho, %hho, %hho\n", 0, my_unsigned_char, UCHAR_MAX);
    printf("\thhx : %hhx, %hhx, %hhx\n", 0, my_unsigned_char, UCHAR_MAX);
    printf("\thhX : %hhX, %hhX, %hhX\n", 0, my_unsigned_char, UCHAR_MAX);
    printf("\thd : %hd, %hd, %hd, %hd\n", my_signed_short_int, -my_signed_short_int, SHRT_MIN, SHRT_MAX);
    printf("\thi : %hi, %hi, %hi, %hi\n", my_signed_short_int, -my_signed_short_int, SHRT_MIN, SHRT_MAX);
    printf("\thu : %hu, %hu, %hu\n", 0, my_unsigned_short_int, USHRT_MAX);
    printf("\tho : %ho, %ho, %ho\n", 0, my_unsigned_short_int, USHRT_MAX);
    printf("\thx : %hx, %hx, %hx\n", 0, my_unsigned_short_int, USHRT_MAX);
    printf("\thX : %hX, %hX, %hX\n", 0, my_unsigned_short_int, USHRT_MAX);
    printf("\tld : %ld, %ld, %ld, %ld\n", my_signed_long_int, -my_signed_long_int, LONG_MIN, LONG_MAX);
    printf("\tli : %li, %li, %li, %li\n", my_signed_long_int, -my_signed_long_int, LONG_MIN, LONG_MAX);
    printf("\tlu : %lu, %lu, %lu\n", 0, my_unsigned_long_int, ULONG_MAX);
    printf("\tlo : %lo, %lo, %lo\n", 0, my_unsigned_long_int, ULONG_MAX);
    printf("\tlx : %lx, %lx, %lx\n", 0, my_unsigned_long_int, ULONG_MAX);
    printf("\tlX : %lX, %lX, %lX\n", 0, my_unsigned_long_int, ULONG_MAX);
    printf("\tlld : %lld, %lld, %lld, %lld\n", my_signed_long_long_int, -my_signed_long_long_int, LLONG_MIN, LLONG_MAX);
    printf("\tlli : %lli, %lli, %lli, %lli\n", my_signed_long_long_int, -my_signed_long_long_int, LLONG_MIN, LLONG_MAX);
    printf("\tllu : %llu, %llu, %llu\n", 0, my_unsigned_long_long_int, ULLONG_MAX);
    printf("\tllo : %llo, %llo, %llo\n", 0, my_unsigned_long_long_int, ULLONG_MAX);
    printf("\tllx : %llx, %llx, %llx\n", 0, my_unsigned_long_long_int, ULLONG_MAX);
    printf("\tllX : %llX, %llX, %llX\n", 0, my_unsigned_long_long_int, ULLONG_MAX);
}