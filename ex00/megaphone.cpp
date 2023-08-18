/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:45:07 by mcreus            #+#    #+#             */
/*   Updated: 2023/08/18 11:57:30 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;
    
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    i = 1;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            std::cout << (char)std::toupper(av[i][j]);
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}