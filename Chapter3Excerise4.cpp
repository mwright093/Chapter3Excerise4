// Chapter3Excerise4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "This program will help you calculate the minimum amount of insurance you should purchase for your home or building. \n";

    std::cout << "How much would it cost to replace the home/building? $";
    float replacement_cost = 0.0f;
    std::cin >> replacement_cost;


    float min_insurcance_amount = 0.80 * replacement_cost;

    std::cout << "\nThe minimum amount of insurance you should purchase is $" << min_insurcance_amount << "." << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
