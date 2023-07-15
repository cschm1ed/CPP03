/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:38:22 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/12 14:38:22 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

private:
  std::string _name;
  int _hp;
  int _atk;
  int _ep;

public:
  ClapTrap(std::string const &name);
  ClapTrap(ClapTrap &other);
  ClapTrap &operator=(ClapTrap const &other);
  ~ClapTrap();

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  void setEP(int amount);
  void setHP(int amount);
  void setATK(int amount);
};

#endif
