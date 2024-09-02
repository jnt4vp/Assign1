// Jack Turner
// Assignment 1
// September 1, 2024

#include <iostream>
#include <array>
#include <fstream>

using namespace std;

int int_exist(int array1[], int size, int intcheck);
// Checks to see if user inputted integer exists in the array

int int_change(int array1[], int size, int newint, int position);
// Changes original value to user inputted value at a specified position

void new_int(int array1[], int size, int newint);
// Allows user to add new number to the end of the array

void int_zero(int array1[], int size, int position);
// Changes value at user inputted position to 0