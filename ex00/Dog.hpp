/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:22:27 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/26 18:00:01 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{

	public:
		Dog();
		Dog(const Dog& other); //copy
		~Dog();
		Dog& operator=(const Dog& other); //affetion

		void makeSound() const;
};


#endif