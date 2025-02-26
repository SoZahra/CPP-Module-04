/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:22:25 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/26 18:17:45 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor start" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Animal copy constructor to Cat " << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor end" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignement operator called" << std::endl;
	if(this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou ! Miaou!" << std::endl;
}
