/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:44:14 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/26 19:02:24 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"
#include "iostream"

class WrongAnimal{

	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other); //copy
		~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& other); //affection

		const std::string& getType() const;
		void setType(std::string newType);
		void makeSound() const;
};

#endif