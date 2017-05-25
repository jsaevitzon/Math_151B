//
//  Actual.cpp
//  HW3_x
//
//  Created by Jaryd Saevitzon on 5/18/17.
//  Copyright © 2017 Jaryd Saevitzon. All rights reserved.
//

#include "Actual.h"
#include <iostream>
#include <cmath>

using namespace std;

#define e  2.718281828

void solution(double a, double b, double h, double alpha) {
    
    int N = (b-a)/h;
    double t = a;
    double w = alpha;
    cout << h << "," << a << "," << alpha << endl;

    for(int i = 1; i <= N; i++) {
        t = a + i*h;
        double p = -20.0 * t;
        w = t*t + (1.0/3.0) * pow(e, p);
        
        cout << h << "," <<  t << "," << w << endl;
    }
}
