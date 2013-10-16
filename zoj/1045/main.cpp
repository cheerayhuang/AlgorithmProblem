#include <iostream>
#include <vector>
#include <cmath>

using namespace std; 

const double delta = 1e-5;

int main()
{
    vector<double> len;
    len.push_back(0);

    vector<double>::size_type i = 0;

    while (len[i] < 5.20)
    {
        ++i;
        len.push_back(len[i-1] + 1.0/double(i+1));
    }

    double x;
    cin >> x;

    vector<double>::size_type beg, end, mid;
    
    while (fabs(x-0.0) > delta)
    {
        beg = 0;
        end = len.end() - 1 - len.begin();

        while (beg+1 < end)
        {
            mid = (beg + end) / 2;
            if (x < len[mid] ) {
                end = mid;
            }
            else if (x >= len[mid]) {
                beg = mid;
            }
        }
        cout << end << " card(s)" << endl;
        cin >> x;
    }

    return 0;
}

