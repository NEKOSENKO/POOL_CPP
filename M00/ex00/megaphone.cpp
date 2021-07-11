/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 13:14:34 by mbrija            #+#    #+#             */
/*   Updated: 2021/07/11 18:36:29 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

using namespace std;

int len(string str)
{
	return (int)str.size();
}

int main(int ac, char **av)
{
	string str[ac];
	
	if (ac <= 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;

	for (int i = 0; i < ac; i++)
	   str[i] = av[i];
	   
	for (int i = 1; i < ac - 1; i++)
	{
		printf("%d \n", len(str[i]));
		//cout << len(str[i]) << endl;
		// for(int j = 0; i < len(str[i]) ;j++)
		// 	cout << str[i][j] << endl;
	}
	
	return 0;
}