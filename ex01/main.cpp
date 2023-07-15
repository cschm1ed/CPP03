/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:38:16 by cschmied          #+#    #+#             */
/*   Updated: 2023/07/12 14:38:16 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
  //    ClapTrap Guillaume("Guillaume");
  //    ClapTrap Bethan("Bethan");
  //    ClapTrap Alberto(Bethan);
  //
  //    std::cout << "\n";
  //    Guillaume.attack("Bethan");
  //    Guillaume.beRepaired(10);
  //    Guillaume.setEP(1);
  //    Guillaume.setATK(10);
  //    Guillaume.attack("Bethan");
  //    Guillaume.setHP(1);
  //    Guillaume.attack("Bethan");
  //    std::cout << "\n";
  //
  //    Bethan.setEP(10);
  //    Bethan.beRepaired(10);
  //    Bethan.setATK(2);
  //    Bethan.attack("Alberto");
  //    std::cout << "\n";
  //
  //    Alberto.setEP(10);
  //    Alberto.attack("Guillaume");
  //    std::cout << "\n";
  //
  //    Guillaume = Bethan;
  //    Guillaume.attack("Bethan");
  //
  //    Bethan.beRepaired(100);
  //    std::cout << "\n";

  ScavTrap Peter("Piotr");

  std::cout << "\n\n";
  Peter.attack("Cylinder");
  Peter.takeDamage(10);
  Peter.beRepaired(100);
  Peter.guardGate();
  std::cout << "\n\n";

  ScavTrap Candice("Candice");
  std::cout << "\n\n";
  Candice = Peter;
  Candice.guardGate();
  std::cout << "\n\n";
  return 0;
}
