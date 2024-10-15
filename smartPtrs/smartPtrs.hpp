#ifndef SMARTPOINTER_HPP
#define SMARTPOINTER_HPP
#include <iostream>
using namespace std;
unique_ptr<int[]> readNumbers(int& count);
int calculateSum(const unique_ptr<int[]>& arr, int count);

#endif