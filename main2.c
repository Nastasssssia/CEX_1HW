#include <stdio.h>
#include <stdint.h>

/*
На вход программе подается беззнаковое 32-битное целое число N.
 Требуется изменить значения всех битов старшего байта числа на противоположные и вывести полученное таким образом число.
*/

uint32_t reverse_upper_byte(uint32_t number)
{

    // Маска для старшего байта (биты 24-31)
    uint32_t mask = 0xFF000000;
    uint32_t upper_byte = (number & mask) >> 24;
    upper_byte = ~upper_byte & 0xFF;
    number = (number & ~mask) | (upper_byte << 24);
    return number;
}

int main()
{
    uint32_t number;
    scanf("%u", &number);
    printf("%u\n", reverse_upper_byte(number));

    return 0;
}