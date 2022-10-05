// Copyright (c) 2022 Marcus Wehbi All rights reserved.
//
// Created by: Marcus Wehbi
// Date: Oct 2nd, 2022
// This program calculates the volume and surface area of an ellipsoid
// Include the libraries needed
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // declare variables as floats (axis lengths, volume, etc)
    float firstAxisLength, secondAxisLength, thirdAxisLength, volume,
surfaceAreaStepOne, surfaceAreaStepTwo, surfaceAreaStepThree;
    // declare string variable
    std::string userInputUnits;

    // get the units from the user
    std::cout << "Enter the units to calculate for the ellipsoid: ";
    std::cin >> userInputUnits;

    // get first axis length from the user
    std::cout << "Enter the first axis length of the ellipsoid: ";
    std::cin >> firstAxisLength;

    // get the second axis length form the user
    std::cout << "Enter the second axis length of the ellipsoid: ";
    std::cin >> secondAxisLength;

    // get third axis length from the user
    std::cout << "Enter the third axis length of the ellipsoid: ";
    std::cin >> thirdAxisLength;

    // calculate the volume of the ellipsoid with given axis lengths
    volume = static_cast<float>(4) / static_cast<float>(3) * M_PI *
firstAxisLength * secondAxisLength * thirdAxisLength;

    // calculate the surface area of the ellipsoid with given axis lengths
    // calculate in steps following math rules
    // step one
    surfaceAreaStepOne = static_cast<float>(pow(((firstAxisLength) *
(secondAxisLength)), 1.6)
+ pow(((firstAxisLength) * (thirdAxisLength)), 1.6) + pow(((secondAxisLength)
* (thirdAxisLength)), 1.6)) / static_cast<float>(3);
    // step two (powers)
    surfaceAreaStepTwo = pow(surfaceAreaStepOne, 0.625);
    // step three (multiplication)
    surfaceAreaStepThree = 4 * M_PI * surfaceAreaStepTwo;

    // display the volume of the ellipsoid to the user with units
    std::cout << "\n";
    std::cout << "The volume of this ellipsoid is: " << std::fixed <<
std::setprecision(2) << volume << userInputUnits << "^3" << std::endl;
    // display the surface area of the ellipsoid to the user with units
    std::cout << "\n";
    std::cout << "The surface area of this ellipsoid is: " << std::fixed <<
std::setprecision(2) << surfaceAreaStepThree << userInputUnits
<< "^2" << std::endl;
}
