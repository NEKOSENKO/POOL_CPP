/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 13:14:34 by mbrija            #+#    #+#             */
/*   Updated: 2021/07/12 13:24:48 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

using namespace std;

int main(int ac, char **av)
{
	int i = 1, j = 0;
	
	
	if (ac <= 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	
	while (av[i])
	{	
		j = 0;
		while(av[i][j])
		{
			cout << (char)toupper(av[i][j]);
			j++;
		}
		i++;
	}
	cout << endl;
	return 0;
}