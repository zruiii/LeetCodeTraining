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



int main()
{
    Box box1;
    double vol;

    box1.set_size(1, 2, 3);
    vol = box1.cal_volume();
    cout << vol << endl;
}

