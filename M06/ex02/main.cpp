/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrija <mbrija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:25:05 by mbrija            #+#    #+#             */
/*   Updated: 2022/02/15 12:24:01 by mbrija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BaseClass.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

Base * generate(void)
{
    srand(time(NULL));
    
	int	randValue = rand() % 3;
    if (randValue == 1)
    {
        ClassA *ChildA = new ClassA();
        Base *baseA = dynamic_cast<Base *>(ChildA);
        return (baseA);
    }
    else if (randValue == 2)
    {
        ClassB *ChildB = new ClassB();
        Base *baseB = dynamic_cast<Base *>(ChildB);
        return (baseB);    
    }
    else
    {
        ClassC *ChildC = new ClassC();
        Base *baseC = dynamic_cast<Base *>(ChildC);
        return (baseC);
    }
}

void identify(Base* p)
{
    if (dynamic_cast<ClassA*>(p))
         std::cout << "Type : A\n";
    else if (dynamic_cast<ClassB*>(p))
         std::cout << "Type : B\n";
    else if (dynamic_cast<ClassC*>(p))
         std::cout << "Type : C\n";
}

void identify(Base& p)
{
    try
    {
        ClassA &a = dynamic_cast<ClassA&>(p);
        std::cout << "Type : A\n";
        (void)a;
    }
    catch(const std::exception& e)
    {
        try
        {
            ClassB &b = dynamic_cast<ClassB&>(p);
            std::cout << "Type : B\n";
            (void)b;
        }
        catch(const std::exception& e)
        {
            try
            {
                ClassC &c = dynamic_cast<ClassC&>(p);
                std::cout << "Type : C\n";
                (void)c;
            }
            catch(const std::exception& e)
            {
            }
        }
    }
}

int main()
{
    Base *curr = generate();
    identify(*curr);
    return 0;    
}