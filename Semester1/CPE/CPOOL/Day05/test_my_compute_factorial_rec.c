/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include <criterion/criterion.h>

int my_compute_factorial_rec(int nb);

Test(my_compute_factorial_rec, print_factorial_number)
{
    cr_assert_eq(my_compute_factorial_rec(3), 6); 
}
