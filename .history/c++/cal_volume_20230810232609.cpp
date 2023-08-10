#include<iostream>

using namespace std;

class Box
{
    public:
        double length;
        double weight;
        double high;

        double cal_volume(void);
        void set_size(double l, double w, double h){
            length = l;
            weight = w;
            high = h;
        }
};

double Box::cal_volume(void)
{
    return length * weight * high;
};

