#include <iostream>
#include <math.h>
using namespace std;

//variant 8
class SqLev{
private:
    float a;
    float b;
    float c;

public:
    SqLev(float ValueA, float ValueB, float ValueC){
        a =ValueA;
        b = ValueB;
        c = ValueC;
    }
   
    void Print(){
        cout << "a = "<< a<<"b = "<< b << "c =" << c<<endl;
    }
    void Discr(){
        cout<<"Your diskriminant" << b * b - 4 * a * c << endl;
    }
    void Root(){
        
    double x1,x2;
    double d = b * b - 4 * a * c;
        if (d > 0){
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
    cout << "x1 = " << x1 << "\n";
    cout << "x2 = " << x2 << "\n";
        }
        if (d == 0){
        x1 = -(b / (2 * a));
    cout << "x1 = x2 = " << x1 << "\n";
        }
        if (d < 0){ 
    cout << "D < 0"<<endl; 
        }
    }
};

int main(){
    SqLev a(1,1,1);

    return 0;

}
