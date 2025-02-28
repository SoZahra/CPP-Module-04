/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:06:43 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/28 19:25:45 by fzayani          ###   ########.fr       */
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
		virtual ~Animal(); //virtuel
		Animal(const Animal &other);
		Animal& operator=(const Animal& other);

		const std::string& getType() const;
		void setType(std::string newType);

		virtual void makeSound() const = 0; //fonction virtuel pure 
};


#endif