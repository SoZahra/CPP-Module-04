/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:22:23 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/27 18:44:25 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

	private:
		Brain* brain;

	public:
		Cat();
		Cat(const Cat& other);
		~Cat();
		Cat& operator=(const Cat& other);

		Brain* getBrain() const;
		void setIdeas(int i, const std::string& idea);
		std::string get_ideas(int i) const;
		void* getAddress() const;

		void makeSound() const;
};


#endif