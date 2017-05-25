//
//  rk4.cpp
//  HW3_x
//
//  Created by Jaryd Saevitzon on 5/17/17.
//  Copyright © 2017 Jaryd Saevitzon. All rights reserved.
//

#include "rk4.h"
#include "function.h"
#include <iostream>
using namespace std;

void rungK (double a, double b, double h, double alpha) {
    
    int N = (b-a) / h;
    double t = a, w = alpha;
    double K1, K2, K3, K4;
    
    cout << h << "," << t << "," << w << endl;
    
    for (int i = 1; i <= N; i++) {
        K1 = h * yprime (t, w);
        K2 = h * yprime (t + h/2.0, w + K1/2.0);
        K3 = h * yprime (t + h/2.0, w + K2/2.0);
        K4 = h * yprime (t + h, w + K3);
        
        w = w + (K1 + 2*K2 + 2*K3 + K4)/6.0;
        t += h;
        
        cout << h << "," << t << "," << w << endl;
        
    }
    
    
}
