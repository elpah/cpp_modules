/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 21:28:40 by eobeng            #+#    #+#             */
/*   Updated: 2025/10/09 03:32:03 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void printTest(int *number)
{
    cout << "number is " << *number << endl;
}

int main(void)
{

    int x = 4;
    printTest(&x);

    return 0;
}