/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:58:15 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/20 11:06:36 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *horde;

    horde = zombieHorde(5, "Gine_Horde");
    for (int i = 5; i > 0; i--)
        horde->announce();
    delete[] horde;
}
