// Copyright (c) 2021 St. Mother Teresa HS All rights reserved.
//
// Created by: Lauren Wheatley
// Created on: May 2021
// This program plays the number guessing game

#include <iostream>
using namespace std

; int main() {
    int number;


    cout << "Enter a number: ";
    cin >> number
    ; if (number > 0) {
        cout << number << " is positive" << endl; }

    else if (number < 0) {
        cout << number << " is negative" << endl; }

    else if (number == 0) {
        cout << number << " is just 0" << endl; }
}
