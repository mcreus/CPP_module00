/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:52:15 by mcreus            #+#    #+#             */
/*   Updated: 2023/08/25 13:07:57 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	ft_toupper(std::string &str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int	i;
	std::string	str;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	i = 1;
	while (i < ac)
	{
		str = av[i];
		ft_toupper(str);
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
	return (0);
}