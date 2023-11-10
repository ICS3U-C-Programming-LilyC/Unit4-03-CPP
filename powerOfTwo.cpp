// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Nov/8/2023
// This program calculates
// the power of 2, of all the
// numbers up to the number that
// you enter.

#include<iostream>
#include<cmath>
#include<string>

int main() {
    // Declaring and initiating variables.
    int power = 0;
    std::string userNumberAsString;

    // Getting user input.
    std::cout << "Enter a positive integer: ";
    std::cin >> userNumberAsString;

    // Initiating try catch.
    try {
        // Converting user input as string to an integer.
        int userNumberAsInteger = std::stoi(userNumberAsString);

        // Converting user input as decimal to an integer.
        float userNumberAsFloat = std::stof(userNumberAsString);

        // If user number is not a decimal
        // Then tell the user their input is not a whole number.
        if (userNumberAsInteger != userNumberAsFloat) {
            std::cout << "Invalid input.";
            // Else if user number is less than 0
            // Then tell the user to enter a positive number.

        } else if (userNumberAsInteger < 0) {
            std::cout << userNumberAsInteger <<
            " is not a positive number. Please try again.";
            // Else their input is greater than 0, then run for loop.
        } else {
                // Setting counter to 1.
                // When counter is greater than or equal
                // to user input. Increment the counter.
                for (int counter = 0;
                counter <= userNumberAsInteger;
                counter++) {
                    // Calculating the power of all numbers
                    // from 0 to the user's number.
                    power = pow(counter, 2);
                    // Display the calculated output back to the user.
                    std::cout << counter << "^2 = " << power << "\n";
                }
        }
    // Catching any errors.
    } catch (std::invalid_argument) {
        std::cout << "Invalid input.";
    }
}
