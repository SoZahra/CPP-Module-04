/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:44:16 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/26 19:02:52 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal constructor start" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = other;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor is called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if(this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

const std::string& WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::setType(std::string newType)
{
	this->type = newType;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes generic sound" << std::endl;
}
