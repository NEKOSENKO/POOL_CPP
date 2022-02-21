/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:23:39 by mbrija            #+#    #+#             */
/*   Updated: 2021/11/24 15:45:15 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

int main (int ac, char **av)
{
    std::string s1;
    std::string s2;
    std::string file;
    size_t index;
    
    if (ac == 4)
    {
        file = av[1];
        s1 = av[2];
        s2 = av[3];

        std::fstream filein;
        std::ofstream fileout(file + ".replace");

        filein.open(av[1]);
        std::string content( (std::istreambuf_iterator<char>(filein) ),
                       (std::istreambuf_iterator<char>()    ) );
        while((index = content.find(s1)) != 0)
        {
            if (index == -1)
                break ;
            content.erase(index, s1.length());
            content.insert(index, s2);
        }
      
        fileout << content << std::endl;
        //fileout.close();
        filein.close();
    }
    return 0;
}