/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:57:24 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/27 18:37:43 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor start" << std::endl;
}
Brain::~Brain()
{
	std::cout << "Brain destuctor end" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}

}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assignement operator called" << std::endl;
	if(this != &other)
	{
		for(int i = 0; i < 100; i++){
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

void Brain::setIdeas(int i, const std::string& idea)
{
	if(i >= 0 && i < 100)
		this->ideas[i] = idea;
}

std::string Brain::get_ideas(int i) const
{
	if(i >= 0 && i < 100)
		return(this->ideas[i]);
	return "";
}
