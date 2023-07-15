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
#include "FragTrap.hpp"

int main() {
    // Test FragTrap
    FragTrap frag("Fromage");
    std::cout << "\n\n";

    frag.highFivesGuys();
    frag.attack("Käse");
    frag.takeDamage(10);
    frag.beRepaired(10);
    std::cout << "\n\n";

    // Test ScavTrap
    ScavTrap scav("Cheese");
    std::cout << "\n\n";

    scav.guardGate();
    scav.attack("fromaggio");
    scav.takeDamage(10);
    scav.beRepaired(10);

    std::cout << "\n\n";
    return 0;
}
