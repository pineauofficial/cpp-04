/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:46:53 by pineau            #+#    #+#             */
/*   Updated: 2024/01/30 19:07:29 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brian {
	public:
		Brian(void);
		Brian(Brian const & src);
		virtual ~Brian(void);
		Brian & operator=(Brian const & rhs);
		
		void makeSound(void) const;
		std::string getType(void) const;

		std::string ideas[100];//
	private:
	
}

#endif