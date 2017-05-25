//
//  ms.cpp
//  HW3_x
//
//  Created by Jaryd Saevitzon on 5/17/17.
//  Copyright © 2017 Jaryd Saevitzon. All rights reserved.
//


#include "ms.h"
#include "function.h"

#include <iostream>
#include <vector>

using namespace std;


void mil_simpson(double a, double b, double h, double alpha) {
    
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
        
        cout << t << " " << w[i] << endl;
        
    }
    
    /*calculate the rest of the values*/
    double w_predict, w_correct;
    for(int i = 4; i <= N; i++) {
        t = a + i*h;
        
        w_predict = w[i-3] + ((4.0*h)/3.0) * (2 * yprime(t, w[i])  -
                               yprime(t-h,   w[i-1])   +
                              2 * yprime(t-2*h, w[i-2]));
                     
        
        w_correct = w[i-1] + h/3.0 * ( yprime(t+h,w_predict) +
                                   4 * yprime(t, w[i])       +
                                       yprime(t-h, w[i-1]));
        
        cout << h << "," << t << "," << w_correct << endl;
        
        w.push_back(w_correct);
                
    }
    
}
