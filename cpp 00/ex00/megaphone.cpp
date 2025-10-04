/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:18:13 by eobeng            #+#    #+#             */
/*   Updated: 2025/10/03 17:18:26 by eobeng           ###   ########.fr       */
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
