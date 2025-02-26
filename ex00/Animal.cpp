/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:01:47 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/26 17:58:26 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal() : type("")
{
	std::cout << "Animal constructor start" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal destructor end" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	if(this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal makes generic sound" << std::endl;
}

const std::string& Animal::getType() const
{
	return (type);
}

void  Animal::setType(std::string newType)
{
	this->type = newType;
}
