/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:46:53 by pineau            #+#    #+#             */
/*   Updated: 2024/02/01 15:33:36 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(Brain const & src);
		virtual ~Brain(void);
		Brain & operator=(Brain const & rhs);
		
		void setIdea(int i, std::string idea);
		void	display_idea(int i);
	private:
		std::string ideas[100];
	
};

#endif