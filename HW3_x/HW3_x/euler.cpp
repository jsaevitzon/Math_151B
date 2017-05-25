//
//  euler.cpp
//  HW3_x
//
//  Created by Jaryd Saevitzon on 5/17/17.
//  Copyright © 2017 Jaryd Saevitzon. All rights reserved.
//

#include "euler.h"
#include "function.h"
#include <iostream>

using namespace std;


void  Euler (double a, double b, double h, double alpha) {
    
    int N = (b-a)/h;
    double t = a;
    double w = alpha;
    
    cout << h << "," << t << "," << w << endl;
    
    for(int i = 1; i <= N; i++) {
        
        w = w + h * yprime(t,w);
        t = a + i * h;
        
        cout << h << "," << t << "," << w << endl;
    }
    
}
