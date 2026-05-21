/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 08:50:03 by aborda            #+#    #+#             */
/*   Updated: 2026/05/17 14:25:51 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public :
		Harl();
		Harl(const Harl& other);
		Harl& operator=(const Harl& other);
		~Harl();

		void complain(std::string level);
};

#endif
