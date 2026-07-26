/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 11:08:46 by aborda            #+#    #+#             */
/*   Updated: 2026/06/04 08:36:22 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MSG_HPP
# define MSG_HPP

#include <string>

void	msg(std::string msg);
void	msg(std::string color, std::string msg);
void	msg_no(std::string color, std::string msg);
void	msg_nl();

#endif
