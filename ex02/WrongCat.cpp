/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:50:21 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/26 18:57:38 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor start" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << " WrongAnimal copy constructor to WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destuctor end" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat assignement operator called" << std::endl;
	if(this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Wtf is this sound ???" << std::endl;
}
