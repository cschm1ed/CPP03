/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:54:58 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/12 16:54:58 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "ScavTrap " << name << " constructor called\n";
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destructor called\n";
}

void ScavTrap::guardGate( void ) {
    if (_ep <= 0) {
        std::cout << "ScavTrap " << _name << " does not have enough energy points to perform attacks\n";
        return;
    } else if (_hp <= 0) {
        std::cout << "ScavTrap " << _name << " does not have enough hit points to perform attacks\n";
        return;
    }
    std::cout << "ScavTrap" << _name << " is now in gate guarding mode\n";
    _ep--;
}

void ScavTrap::attack(const std::string &target) {
    if (_ep <= 0) {
        std::cout << "ScavTrap " << _name << " does not have enough energy points to perform attacks\n";
        return;
    } else if (_hp <= 0) {
        std::cout << "ScavTrap " << _name << " does not have enough hit points to perform attacks\n";
        return;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _atk << " points of damage!\n";
    _ep--;
}
