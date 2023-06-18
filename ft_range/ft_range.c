#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *str;
    int c;
    int i = 0;
    if (end > start)
        c = end - start;
    else
        c = start - end;
    str = malloc((c + 1) * sizeof(int));
    if (start < end)
    {
        while (i < c + 1)
        {
            str[i] = start;
            start++;
            i++;
        }
    }
    if (end < start)
    {
        while (i < c + 1)
        {
            str[i] = start;
            start--;
            i++;
        }
    }
    else
    {
        str[i] = start;
        i++;
    }
    return (str);
}
// int main(int ac, char **av)
// {
//     int started = atoi(av[1]);
//     int end = atoi(av[2]);
//     int stp = atoi(av[3]);
//     int *n;
//     int i = 0;
//     n = ft_range(started, end);
//     while(i < stp)
//         printf("%d ",n[i++]);
// }