/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** desc
*/

int my_char_isnum(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int my_str_isnum(char const *str)
{
    int is_okay = 0;

    for (int i = 0; str[i] != 0; i++) {
        if (str[i] >= 48 && str[i] <= 57)
            is_okay = 1;
        else
            return (0);
    }
    return (is_okay);
}
