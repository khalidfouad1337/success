#include <stdio.h>
#include <stdlib.h>

unsigned char swap_bits(unsigned char octet)
{
    return((octet >> 4) + (octet << 4));
}

// int main(int ac, char **av)
// {
//     unsigned char n;

//     n = atoi(av[1]);
//     printf("%d\n",n);
//     printf("the value now is %d",swap_bits(n));
// }