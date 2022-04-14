// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program is to check if the number is even or odd

#include <iostream>
#include <string>

int main() {
    // this function checks to see if the number is even or odd
    std::string numberAsString;
    int numberAsInt;
    int mod;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // process & output
    try {
        numberAsInt = std::stoi(numberAsString);
        mod = numberAsInt % 2;
        if (mod == 0) {
            std::cout << "The number is even." << std::endl;
        } else if (mod == 1) {
            std::cout << "The number is odd." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
