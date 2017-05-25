//
//  main.cpp
//  HW3_x
//
//  Created by Jaryd Saevitzon on 5/17/17.
//  Copyright © 2017 Jaryd Saevitzon. All rights reserved.
//

#include <iostream>
#include "euler.h"
#include "amb4.h"
#include "function.h"
#include "ms.h"
#include "rk4.h"
#include <string.h>
#include "Actual.h"
#include <vector>
using namespace std;

#define size 4

vector<double> actual, guesses;

int main(int argc, char *argv[]) {
    
    double h[size] = {.9, .125, .1, .02};
    double init_y = 1.0/3.0;
    double a = 0, b = 1;
    
    cout << argv[1] <<endl;
    
    if (strcmp(argv[1], "euler") == 0) {
        for(int i = 0; i < size; i++) {
            Euler(a, b,  h[i],  init_y);
            cout << endl;
        }
    }
    
    
    if (strcmp(argv[1], "rk4") == 0) {
        for(int i = 0; i < size; i++) {
            rungK (a, b, h[i], init_y);
            cout << endl;
        }
        
    }
    
    if (strcmp(argv[1], "amb4") == 0)  {
        for(int i = 0; i < size; i++) {
            predict_correct(a, b, h[i], init_y);
            cout << endl;
        }
    }
    
    if (strcmp(argv[1], "ms") == 0) {
        for(int i = 0; i < size; i++) {
            mil_simpson(a, b, h[i], init_y);
            cout << endl;
        }
    }
    
    if (strcmp(argv[1], "solution") == 0) {
        for(int i = 0; i < size; i++) {
            solution(a,b,h[i],init_y);
            cout <<endl;
        }
    }
    
    
    return 0;
}



