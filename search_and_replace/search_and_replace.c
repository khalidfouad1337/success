#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;

    if (ac == 4 && av[2][j+1] == '\0' && av[3][j+1] == '\0')
    {
        while (av[1][i])
        {
            if (av[1][i] == av[2][j])
            {
                av[1][i] = av[3][j];
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}