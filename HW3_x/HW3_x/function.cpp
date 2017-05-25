//
//  function.cpp
//  HW3_x
//
//  Created by Jaryd Saevitzon on 5/17/17.
//  Copyright © 2017 Jaryd Saevitzon. All rights reserved.
//

#include "function.h"


double yprime (double t, double y) {
    
    double yp = (-20 * y) + (20 * t * t) + (2 * t);
    
    return yp;
}

