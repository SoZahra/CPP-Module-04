/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:22:27 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/27 18:25:57 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain* brain;

	public:
		Dog();
		Dog(const Dog& other);
		~Dog();
		Dog& operator=(const Dog& other); //affetion

		Brain* getBrain() const;
		void setIdeas(int i, const std::string& idea);
		std::string get_ideas(int i) const;
		void* getAddress() const;
		void makeSound() const;
};


#endif