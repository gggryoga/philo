/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 04:01:00 by rozeki            #+#    #+#             */
/*   Updated: 2023/11/27 04:26:58 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

// i want to make philosopher

int check_num(char *argv)
{
    int i;

    i = 0;
    if (argv[i] == '-')
        return (ERROR);
    if (argv[i] == '+')
        i ++;
    if (argv[i] == )
}

int error_check(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        if (check_num(argv[i]) == ERROR)
            return (ERROR);
        if (ft_atoi(argv[i] == 0))
            return (ERROR);
    }
    return (OK);
}

int main(int argc, char **argv)
{
    t_data  data;

    if (argc < 5 || argc > 6)
        return (1);
    if (error_check (argc, argv) == ERROR)
        return (1);
    philo (argc, argv);
    return (0);
}