/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:27:27 by mbrija            #+#    #+#             */
/*   Updated: 2021/12/20 12:47:12 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONG_CAT_HPP_
#define _WRONG_CAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    /* data */
public:
    WrongCat(/* args */);
    WrongCat(const WrongCat &p);
    ~WrongCat();
    WrongCat &operator= (const WrongCat &p);
    void makeSound() const;
};

#endif