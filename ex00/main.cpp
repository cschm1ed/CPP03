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
#include <iostream>

int main() {
    ClapTrap Guillaume("Guillaume");
    ClapTrap Bethan("Bethan");
    ClapTrap Alberto(Bethan);

    std::cout << "\n";
    Guillaume.attack("Bethan");
    Guillaume.beRepaired(10);
    Guillaume.attack("Bethan");
    Guillaume.attack("Bethan");
    Bethan.takeDamage(0);
    std::cout << "\n";

    Bethan.beRepaired(10);
    Bethan.attack("Alberto");
    Alberto.takeDamage(11);
    std::cout << "\n";

    Alberto.attack("Guillaume");
    std::cout << "\n";

    Guillaume = Bethan;
    Guillaume.attack("Bethan");

    Bethan.beRepaired(100);
    std::cout << "\n";
    return 0;
}
