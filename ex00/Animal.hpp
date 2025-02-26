/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:06:43 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/26 14:56:37 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

	protected :
		std::string type;

	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &other); //copy
		Animal& operator=(const Animal& other); //affection

		const std::string& getType() const;
		void setType(std::string newType);
		virtual void makeSound() const; //sound by type
};


#endif