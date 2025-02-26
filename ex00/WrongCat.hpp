/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:50:23 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/26 18:52:02 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Wrong.hpp"

class WrongCat : public WrongAnimal{

	public:
		WrongCat();
		WrongCat(const WrongCat& other); //copy
		~WrongCat();
		WrongCat& operator=(const WrongCat& other); //affetion

		void makeSound() const;
};

#endif