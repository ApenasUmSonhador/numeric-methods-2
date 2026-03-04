#ifndef Diff_H
#define Diff_H

class Diff {
public:
    float fw(float (*f)(float), float x, float h, int order);
    // float bw(float (*f)(float), float x, float h, int order);
    // float ct(float (*f)(float), float x, float h, int order);
};

#endif
