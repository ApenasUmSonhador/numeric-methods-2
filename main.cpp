#include <iostream>
#include "Diff.h"

using namespace std;

float f(float x){
    return x*x*x + 9*x*x - 12*x;
}

int main() {
    float (*fptr)(float) = f;
    Diff diffObj;
    float fw1 = diffObj.fw(fptr, 1.0, 0.001, 1);
    // float bw1 = diffObj.bw(fptr, 1.0, 0.001, 1);
    // float ct1 = diffObj.ct(fptr, 1.0, 0.001, 1);

    cout << "Results from Foward Derivative Method order 1: " << fw1 << endl;
    // cout << "Results from Backward Derivative Method order 1: " << bw1 << endl;
    // cout << "Results from Central Derivative Method order 1: " << ct1 << endl;
    return 0;
}
