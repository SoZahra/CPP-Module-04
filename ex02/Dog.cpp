/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:22:29 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/28 15:11:33 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor start" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Animal copy constructor to Dog" << std::endl;
	this->brain = new Brain(*(other.brain));
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor end" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if(this != &other)
	{
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*(other.brain));
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof ! Woof!" << std::endl;
}

Brain* Dog::getBrain() const{
	return this->brain;
}

void Dog::setIdeas(int i, const std::string& idea)
{
	if(i >= 0 && i < 100)
		this->brain->setIdeas(i, idea);
}

std::string Dog::get_ideas(int i) const
{
	if(i >= 0 && i < 100){
		return this->brain->get_ideas(i);
	}
	return "";
}

void* Dog::getAddress() const
{
	return (void *)this->brain;
}