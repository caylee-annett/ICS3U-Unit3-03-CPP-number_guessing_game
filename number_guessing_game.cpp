// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on April 2021
// This program is a game where the user tries to guess a randomly
//    generated number

#include <iostream>
#include <random>

int main() {
    // This function tells the user if their guess is correct
    int guessedNumber;
    int randomNumber;

    // Input
    std::cout << "Guess what the number between 0 and 10 is: ";
    std::cin >> guessedNumber;
    std::cout << "" << std::endl;

    // Process & Output
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 10);  // [0, 10]
    randomNumber = idist(rgen);

    if (guessedNumber == randomNumber) {
            std::cout << "You guessed it!" << std::endl;
    }
    if (guessedNumber != randomNumber) {
                std::cout << "Incorrect! The number was " << randomNumber
                    << "." << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
