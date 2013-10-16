#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
    double avg = 0;
    double sum = 0; 
    double a[12] = {0};

    for (int i = 0; i < 12; ++i)
    {
        cin >> a[i]; 
        sum += a[i];
    }

    avg = sum / 12;
    cout << "$" << fixed << setprecision(2) << avg << endl;

    return 0; 
}
