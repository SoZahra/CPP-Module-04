/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:57:21 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/27 18:33:06 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"
#include "string"

class Brain {

	private:
		std::string ideas[100];
	public:

		Brain();
		~Brain();
		Brain(const Brain& other);

		void setIdeas(int i, const std::string& idea);

		std::string get_ideas(int i) const;
		Brain& operator=(const Brain& other);

};

#endif
