#include <unistd.h>

void ft_putchar(int c)
{
    write(1, &c, 1);
}

void putnbr(int i)
{
    if (i < 10)
        ft_putchar(i + 48);
    else
    {
        ft_putchar(i/10 + 48);
        ft_putchar(i%10 + 48);
    }
}

int main()
{
    int i = 0;
    while (++i < 101)
    {
        if (i%15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i%5 == 0)
            write(1, "buzz", 4);
        else if (i%3 == 0)
            write(1, "fizz", 4);
        else
            putnbr(i);
        write(1, "\n", 1);
    }
    return (0);
}