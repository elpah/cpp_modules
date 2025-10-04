/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:46:02 by eobeng            #+#    #+#             */
/*   Updated: 2025/10/03 19:43:34 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl testing;

    testing.complain("DEBUG");
    testing.complain("INFO");
    testing.complain("WARNING");
    testing.complain("ERROR");
}
