/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:22:23 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/26 18:09:23 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

	public:
		Cat();
		Cat(const Cat& other); //copy
		~Cat();
		Cat& operator=(const Cat& other); //affetion

		void makeSound() const;
};


#endif