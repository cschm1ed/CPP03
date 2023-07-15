/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:38:27 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/12 14:38:27 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name) : _name(name), _hp(10), _atk(0), _ep(10) {
    std::cout << "ClapTrap " << name << " constructor called\n";
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destructor called\n";
}

ClapTrap::ClapTrap(ClapTrap &other) : _name(other._name), _hp(other._hp), _atk(other._atk), _ep(other._ep) {
    std::cout << "ClapTrap " << _name << " copy constructor called\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other) {
    _name = other._name;
    _atk = other._atk;
    _ep = other._ep;
    _hp = other._hp;
    return (*this);
}

void ClapTrap::attack(const std::string &target) {
    if (_ep <= 0) {
        std::cout << "ClapTrap " << _name << " does not have enough energy points to perform attacks\n";
        return;
    } else if (_hp <= 0) {
        std::cout << "ClapTrap " << _name << " does not have enough hit points to perform attacks\n";
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _atk << " points of damage!\n";
    _ep--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hp <= 0) {
        std::cout << "ClapTrap " << _name << " is already dead and can take no more damage you dummy!\n";
        return ;
    }
    std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!\n";
    if (amount > (unsigned int)_hp)
        _hp = 0;
    else
        _hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_ep <= 0) {
        std::cout << "ClapTrap " << _name << " does not have enough energy points to perform repairs\n";
        return;
    } else if (_hp <= 0) {
        std::cout << "ClapTrap " << _name << " does not have enough hit points to perform repairs\n";
        return;
    }
    std::cout << "ClapTrap " << _name << " got repaired and received " << amount << " hit points!\n";
    _hp += amount;
    _ep--;
}
