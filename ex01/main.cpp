/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:58:15 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/06 13:59:52 by danpalac         ###   ########.fr       */
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
