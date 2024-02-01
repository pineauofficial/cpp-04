/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:50:58 by pineau            #+#    #+#             */
/*   Updated: 2024/02/01 17:46:54 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Brain.hpp"
# include "AAnimal.hpp"

class Cat : public AAnimal {
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);
		Cat & operator=(Cat const & rhs);
		Cat(std::string type);
		
		void makeSound(void) const;
		Brain* getBrain(void) const;
		
	private:
		Brain*	_brain;
};

#endif