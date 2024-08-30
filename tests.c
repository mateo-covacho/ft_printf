#include "ft_printf.h"


void test_hello_string_and_int(void)
{
    ft_printf("test_hello_string_and_int %s is %d years old\n", "Laura", 22);
    printf("test_hello_string_and_int %s is %d years old\n\n", "Laura", 22);

    // Edge cases
    ft_printf("test_hello_string_and_int %s is %d years old\n", "", -1);
    printf("test_hello_string_and_int %s is %d years old\n\n", "", -1);

    // TODO Assure both fail & in the same way
    /* ft_printf("test_hello_string_and_int %s is %d years old\n", NULL, 0); */
    /* printf("test_hello_string_and_int %s is %d years old\n\n", NULL, 0); */
}

void test_single_character(void)
{
    ft_printf("test_single_character %c\n", 'c');
    printf("test_single_character %c\n\n", 'c');

    // Edge cases
    ft_printf("test_single_character %c\n", '\0');
    printf("test_single_character %c\n\n", '\0');

    ft_printf("test_single_character %c\n", 255);
    printf("test_single_character %c\n\n", 255);
}

void test_string(void)
{
    ft_printf("test_string %s\n", "hola");
    printf("test_string %s\n\n", "hola");

    // Edge cases
    ft_printf("test_string %s\n", "");
    printf("test_string %s\n\n", "");

    // TODO Assure both fail & in the same way
    /* ft_printf("test_string %s\n", NULL); */
    /* printf("test_string %s\n\n", NULL); */
}

void test_pointer(void)
{
    char b = 'x';
    void* p = &b;
    ft_printf("test_pointer %p\n", p);
    printf("test_pointer %p\n\n", p);

    // Edge cases
    ft_printf("test_pointer %p\n", NULL);
    printf("test_pointer %p\n\n", NULL);

    void* p_invalid = (void*)0xDEADBEEF; // Example of an invalid pointer value
    ft_printf("test_pointer %p\n", p_invalid);
    printf("test_pointer %p\n\n", p_invalid);
}

void test_decimal_number(void)
{
    ft_printf("test_decimal_number %d\n", 10);
    printf("test_decimal_number %d\n\n", 10);

    // Edge cases
    ft_printf("test_decimal_number %d\n", 0);
    printf("test_decimal_number %d\n\n", 0);

    // TODO Assure both fail & in the same way
    /* ft_printf("test_decimal_number %d\n", -2147483648); // Min value for a 32-bit int */
    /* printf("test_decimal_number %d\n\n", -2147483648); */

    ft_printf("test_decimal_number %d\n", 2147483647);  // Max value for a 32-bit int
    printf("test_decimal_number %d\n\n", 2147483647);
}

void test_integer(void)
{
    ft_printf("test_integer %i\n", 10);
    printf("test_integer %i\n\n", 10);

    // Edge cases
    ft_printf("test_integer %i\n", 0);
    printf("test_integer %i\n\n", 0);

    /* ft_printf("test_integer %i\n", -2147483648); // Min value for a 32-bit int */
    /* printf("test_integer %i\n\n", -2147483648); */

    ft_printf("test_integer %i\n", 2147483647);  // Max value for a 32-bit int
    printf("test_integer %i\n\n", 2147483647);
}

void test_unsigned_number(void)
{
    ft_printf("test_unsigned_number %u\n", (unsigned int)10);
    printf("test_unsigned_number %u\n\n", (unsigned int)10);

    // Edge cases
    ft_printf("test_unsigned_number %u\n", (unsigned int)0);
    printf("test_unsigned_number %u\n\n", (unsigned int)0);

    //TODO fix test 
    /*
    OUTPUT
    test_unsigned_number -1
    test_unsigned_number 4294967295
    */
    ft_printf("test_unsigned_number:4294967295  %u\n", (unsigned int)4294967295); // Max value for a 32-bit unsigned int
    printf("test_unsigned_number:4294967295 %u\n\n", (unsigned int)4294967295);

    //TODO fix test 
    /*
    OUTPUT
    test_unsigned_number -1
    test_unsigned_number 4294967295
    */
    ft_printf("test_unsigned_number:-1 %u\n", (unsigned int)-1); // Tests how negative values are handled
    printf("test_unsigned_number:-1 %u\n\n", (unsigned int)-1);
}

void test_hexadecimal_number(void)
{
    ft_printf("test_hexadecimal_number %x\n", 10);
    printf("test_hexadecimal_number %x\n\n", 10);

    // Edge cases
    ft_printf("test_hexadecimal_number %x\n", 0);
    printf("test_hexadecimal_number %x\n\n", 0);

    //TODO fix test 
    /*
    OUTPUT
    test_uppercase_hexadecimal_number FFFFFFFFFFFFFFFF
    test_uppercase_hexadecimal_number FFFFFFFF
    */
    ft_printf("test_hexadecimal_number %x\n", 0xFFFFFFFF); // Large number
    printf("test_hexadecimal_number %x\n\n", 0xFFFFFFFF);

    //TODO fix test 
    /*
    OUTPUT
    test_uppercase_hexadecimal_number FFFFFFFFFFFFFFFF
    test_uppercase_hexadecimal_number FFFFFFFF
    */
    ft_printf("test_hexadecimal_number %x\n", -1); // Negative value
    printf("test_hexadecimal_number %x\n\n", -1);
}

void test_uppercase_hexadecimal_number(void)
{
    ft_printf("test_uppercase_hexadecimal_number %X\n", 1000);
    printf("test_uppercase_hexadecimal_number %X\n\n", 1000);

    // Edge cases
    ft_printf("test_uppercase_hexadecimal_number %X\n", 0);
    printf("test_uppercase_hexadecimal_number %X\n\n", 0);
    
    //TODO fix test 
    /*
    OUTPUT
    test_uppercase_hexadecimal_number FFFFFFFFFFFFFFFF
    test_uppercase_hexadecimal_number FFFFFFFF
    */
    ft_printf("test_uppercase_hexadecimal_number %X\n", 0xFFFFFFFF); // Large number
    printf("test_uppercase_hexadecimal_number %X\n\n", 0xFFFFFFFF);

    //TODO fix test 
    /*
    OUTPUT
    test_uppercase_hexadecimal_number FFFFFFFFFFFFFFFF
    test_uppercase_hexadecimal_number FFFFFFFF
    */
    ft_printf("test_uppercase_hexadecimal_number %X\n", -1); // Negative value
    printf("test_uppercase_hexadecimal_number %X\n\n", -1);
}

void test_percent(void)
{
    ft_printf("test_percent %%\n");
    printf("test_percent %%\n\n");

    // Edge cases
    ft_printf("test_percent %%%% %d %%\n", 10);
    printf("test_percent %%%% %d %%\n\n", 10);
}

void run_tests(void)
{
  test_hello_string_and_int();
  test_single_character();
  test_string();
  test_pointer();
  test_decimal_number();
  test_integer();
  test_unsigned_number();
  test_hexadecimal_number();
  test_uppercase_hexadecimal_number();
  test_percent();
}

