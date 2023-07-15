/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:16:30 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/13 09:16:42 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {

public:

    FragTrap(const std::string &name);
    ~FragTrap();

    void highFivesGuys(void);
} ;


#endif //FRAGTRAP_HPP
