/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 04:17:39 by elpah             #+#    #+#             */
/*   Updated: 2025/09/22 02:01:35 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>

int main(int ac, char **av)
{
    int i;
    int j; 

    if(ac <2)
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(i = 1; i < ac; i++)
        {
            j = 0;
            while(av[i][j])
            {
                std::cout<<(char)toupper(av[i][j]);
                j++;
            }
            if(i < ac - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
