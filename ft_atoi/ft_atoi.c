int	ft_atoi(const char *str)
{
    int i = 0;
    int negative = 1;
    int result = 0;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v')
        i++;
    if (str[i] == '+')
        i++;
    if (str[i] == '-')
    {
        negative = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * negative);
}