#include <iostream> 
#include "Point.h" 

using namespace std;

Point makeNumber(double a, double b) {
    if (b > 0) {
        Point obj;
        obj.setfirst(a);
        obj.setsecond(b);
        obj.Display();
       double n = obj.Distance();
       cout << "l = " << n << endl;
        return obj;
    }
    else {
        cout << "ERROR: WRONG TYPE FOR SECOND";
        exit(1);
    }
}


int main() {
    Point i;
    double a, b;
    cout << "First = "; cin >> a;
    cout << "Second = "; cin >> b;
    i = makeNumber(a, b);

    Point i1;
    i1.Read();
    cout << "First: " << i1.getfirst() << endl;
    cout << "Second: " << i1.getsecond() << endl;
    double n1 = i1.Distance();
    cout << "l = " << n1 << endl;
    return 0;
}