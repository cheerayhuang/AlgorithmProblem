#include <iostream>
#include <cmath>

using namespace std; 

const double M_PI = 3.1415926;

int main()
{
    int n; 
    double x = 0, y = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        double s = M_PI * (x*x+y*y) / 2 /50;

        cout << "Property " << i+1 << ": This property will begin eroding in year " << static_cast<int>(trunc(s))+1 << "." << endl;
    }

    cout << "END OF OUTPUT." << endl;

    return 0;
}

