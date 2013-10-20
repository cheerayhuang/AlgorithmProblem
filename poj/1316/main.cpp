#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int digit_addition(int x)
{
    ostringstream oss; 

    oss << x; 

    int digit_sum = 0; 
    string::iterator iter = oss.str().begin();

    for (; iter != oss.str().end(); ++iter) {
        digit_sum += *iter - 48;
    }

    return digit_sum + x;
}

int main()
{
    vector<bool> self_num(11000, true);
    
    for(int i = 1; i < 10000; ++i) {
        
        self_num[digit_addition(i)] = false;
        cout << digit_addition(i) << endl;

    }

    cout << "---------" << endl;

    for(int i = 1; i < 10000; ++i) {

        if (self_num[i]) {
            cout << i << endl;
        }
    }

    return 0;
}

