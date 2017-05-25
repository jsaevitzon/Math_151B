//
//  amb4.cpp
//  HW3_x
//
//  Created by Jaryd Saevitzon on 5/17/17.
//  Copyright © 2017 Jaryd Saevitzon. All rights reserved.
//


#include "amb4.h"
#include "function.h"
#include <vector>
#include <iostream>

using namespace std;

void predict_correct(double a, double b, double h, double alpha) {
    /*vars*/
    double K1, K2, K3, K4;
    int N = (b-a)/h;
    double t = a;
    
    /*to store w's*/
    vector<double> w;
    w.push_back(alpha);
    
    
    
    /*output first value */
    cout << h << "," << t << "," << w[0] << endl;
    
    
    /*calculate first 4 values */
    for (int i = 1; i <= 3; i++) {
        
        K1 = h * yprime(t, w[i-1]);
        K2 = h * yprime(t + h/2.0, w[i-1] + K1/2.0);
        K3 = h * yprime(t + h/2.0, w[i-1] + K2/2.0);
        K4 = h * yprime(t + h, w[i-1] + K3);
        
        w.push_back( w[i-1] + (K1 + 2*K2 + 2*K3 + K4) / 6.0);
        t = a + i*h;
        
        cout << h << "," << t << "," << w[i] << endl;
        
    }
    
    /*calculate the rest of the values*/
    double w_predict, w_correct;
    for(int i = 4; i <= N; i++) {
        t = a + i*h;
        
        w_predict = w[i-1] + h * (55 * yprime(t-h, w[i-1])  -
                                  59 * yprime(t-2*h, w[i-2])  +
                                  38 * yprime(t-3*h, w[i-3])  -
                                  9 * yprime(t-4*h, w[i-4])) / 24;
        
        w_correct = w[i-1] + h * (9  * yprime(t,w_predict)   +
                                  19 * yprime(t-h, w[i-1])   -
                                  5 * yprime(t-2*h, w[i-2]) +
                                  yprime(t-3*h, w[i-3]))/24;
        
        cout << h << "," << t << "," << w_correct << endl;
        
        w.push_back(w_correct);
        
    }
    
}
