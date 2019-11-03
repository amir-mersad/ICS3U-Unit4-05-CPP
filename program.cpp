// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on November 2019
// This program adds positive numbers

#include <iostream>


int main() {
    /// This function adds positive numbers
    std::string usernumber_str;
    std::string counter_str;
    int usernumber = 0;
    int counter = 0;
    int result = 0;
    int one;

    // Input, Process and Output
    try {
        std::cout << "How many numbers do you want to add: " << std::endl;
        std::cin >> counter_str;
        counter = std::stoi(counter_str);
        for (one = 1; one <= counter; one++) {
            std::cout << "enter a number: " << std::endl;
            std::cin >> usernumber_str;
            usernumber = std::stoi(usernumber_str);
            result = usernumber + result;
        }std::cout << result << std::endl;
    } catch(std::invalid_argument) {
        std::cout << "Wrong input!!!" << std::endl;
    }
}
