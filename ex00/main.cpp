/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:06:32 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/20 11:06:33 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("Zombie1");
    randomChump("Zombie2");
    zombie->announce();
    delete zombie;
    return 0;
}
