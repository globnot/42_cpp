/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 08:08:25 by aborda            #+#    #+#             */
/*   Updated: 2026/06/04 09:01:09 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	private :
		std::string _ideas[100];

	public :
		Brain();
		Brain(const Brain& src);
		Brain& operator=(const Brain& src);
		~Brain();
};

#endif
