#include <unistd.h>
int main(int ac, char **av)
{
    int i =0;
    int j = 0;
    char a = 'a';
    char A = 'A';
    char Z = 'Z';
    char z = 'z';
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= a && av[1][i] <= z)
                j = av[1][i] - a + 1;
            else if (av[1][i] >= A && av[1][i] <= Z)
                j = av[1][i] - A + 1;
            else
                write(1, &av[1][i], 1);
            while (j > 0)
            {
                write(1, &av[1][i], 1);
                j--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}