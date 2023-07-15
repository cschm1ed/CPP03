/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:16:30 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/13 09:33:10 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
    std::cout << "FragTrap " << _name << "constructor called\n";
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << _name << " destructor called\n";
}

void FragTrap::highFivesGuys() {
    if (_ep <= 0) {
        std::cout << "FragTrap " << _name << " does not have enough energy points to perform high-fives\n";
        return;
    } else if (_hp <= 0) {
        std::cout << "FragTrap " << _name << " does not have enough hit points to perform high-fives\n";
        return;
    }
    std::cout << "Lets go baby! FragTrap " << _name << " requests a high-five\n";
}
