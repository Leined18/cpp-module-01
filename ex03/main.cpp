/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:04:41 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/20 11:06:43 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

int	main(void)
{
	Weapon club("crude spiked club");
	HumanA alice("Alice", club);
	HumanB bob("Bob");
	alice.attack();
	bob.attack();
	bob.setWeapon(club);
	bob.attack();
	club.setType("shiny sword");
	alice.attack();
	bob.attack();
	return (0);
}
