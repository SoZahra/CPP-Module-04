/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:22:25 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/27 19:00:37 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat constructor start" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Animal copy constructor to Cat " << std::endl;
	this->brain = new Brain(*(other.brain));
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor end" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignement operator called" << std::endl;
	if(this != &other)
	{
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*(other.brain));
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou ! Miaou!" << std::endl;
}

void* Cat::getAddress() const{
	return (void *)this->brain;
}

Brain* Cat::getBrain() const
{
	return this->brain;
}


void Cat::setIdeas(int i, const std::string& idea)
{
	if(i >= 0 && i < 100)
		this->brain->setIdeas(i, idea);
}


std::string Cat::get_ideas(int i) const
{
	if(i >= 0 && i < 100){
		return this->brain->get_ideas(i);
	}
	return "";
}
