// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: April. 12, 2022
// This program asks the user for a year
// then check if the year is leap year or a normal year
// then display answers


#include <iostream>
// import string
#include <string>


int main() {
  // variables for user input
  std::string year_as_string;
  int year_as_integer;

  // asking users for a year
  std::cout << "Enter the year ";
  std::cin >> year_as_string;

  // change year from string to integer
  try {
        year_as_integer = std::stoi(year_as_string);
    }
  // display invalid input
  catch (std::invalid_argument) {
    std::cout <<"invalid input" << std::endl;
  }
  // check if year is a leap year or not
  if (year_as_integer % 4 == 0) {
    if (year_as_integer % 100 == 0) {
      if (year_as_integer % 400 == 0) {
        std::cout <<" is a leap year.";
      }
      else {
        std::cout <<"It  is not a leap year.";
      }
    }
    else {
      std::cout <<" It is a leap year.";
    }
  }
  else {
    std::cout <<" It is not a leap year.";
  }

}

