/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:22:29 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/26 18:53:44 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor start" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Animal copy constructor to Dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor end" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignement operator called" << std::endl;
	if(this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof ! Woof!" << std::endl;
}