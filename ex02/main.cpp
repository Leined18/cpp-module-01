/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:50:07 by danpalac          #+#    #+#             */
/*   Updated: 2025/08/13 11:54:43 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	// Puntero a brain
	std::string *stringPTR = &brain;
	// Referencia a brain
	std::string &stringREF = brain;
	// Imprimir direcciones
	std::cout << "Dirección de brain: " << &brain << std::endl;
	std::cout << "Dirección en stringPTR: " << stringPTR << std::endl;
	std::cout << "Dirección de stringREF: " << &stringREF << std::endl;
	// Imprimir valores
	std::cout << "Valor de brain: " << brain << std::endl;
	std::cout << "Valor apuntado por stringPTR: " << *stringPTR << std::endl;
	std::cout << "Valor apuntado por stringREF: " << stringREF << std::endl;
	return (0);
}
