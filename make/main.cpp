//
// Created by apple on 2021/4/19.
//
#include <iostream>
#include <stdio.h>
#include "math_max.h"
#include "math_min.h"
#include <string>

using namespace std;

int main()
{
    printf("hello makefile\n");
    string main_min = find_min();
    string main_max = find_max();
    cout << main_min;
    cout << main_max;
    return 0;
}