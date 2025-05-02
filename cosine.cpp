// // copyright (c) 2025 Chanella rights reserved.
// Created by: Chanella
// Date:April 28, 2025
// This program calculates the cosine of an angle in degrees

#include <iostream>
#include <cmath>

int main() {
    std::cout << "Welcome to the cosine generator!" << std::endl;

    // Variable to hold the degree value
    int degree = 0;

    // loop from 0 to 360 degrees 
     while (degree <= 360) {
        // convert degree to radians
        double radians = degree * (M_PI / 180.0);

        // Calculate cosine
        double cosine = cos(radians);

       // Display results
        std::cout << "Degree: " << degree << ", cosine: " 
        << cosine << std::endl;

        // Increment degree
        degree++;
     }
        // End the program
        std::cout << "Thank you for using the cosine generator!" << std::endl;
     }
