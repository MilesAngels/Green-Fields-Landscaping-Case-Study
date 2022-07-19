// Green Fields Lanscaping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

/* CONSTANT */
double PRICE_PER_CUBIC_YARD = 22.00;  //the price for one delivered cubic yard of mulch

int main()
{
    /* INPUT */
    double squareFeet = 0.0;    //square feet of land to be covered
    int depth = 0;              //how many inches deep the mulch is to be spread
    
    /* OUTPUT */
    double cubicYards = 0.0;    //number of cubic yards of mulch needed
    double totalPrice = 0.0;    //total price for all the cubic yards ordered

    /* OTHER VARS */
    double cubicFeet = 0;

    /* ASK USER FOR INPUTS */
    std::cout <<  "Square feet to be covered by mulch: ";
    std::cin >> squareFeet;
    
    std::cout << "Depth of mulch to be spread (in inches): ";
    std::cin >> depth;

    /* CALCULATIONS */
    cubicFeet = squareFeet * (depth / 12.0);
    cubicYards = cubicFeet / 27;

    totalPrice = cubicYards * PRICE_PER_CUBIC_YARD;

    /* DISPLAY OUTPUT */
    std::cout << "\nNumber of cubic yards needed: " << cubicYards << "\n";

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\nPrice per cubic yard:       $" << std::setw(7) << PRICE_PER_CUBIC_YARD << "\n";

    std::cout << "\nTotal price:                $" << std::setw(7) << totalPrice << "\n";

    return 0;
}