#include <iostream>
#include <vector>

using namespace std; 

int main() {

    vector<int> sum; 

    sum.push_back(1);
    int cur_val = 2;
    int day = cur_val;

    for (int i = 1; i < 10000; ++i, --day) {
        if (day == 0) {
            ++cur_val; 
            day = cur_val;
        }
        sum.push_back(sum.at(i-1) + cur_val);    
    }

    int n; 

    cin >> n;

    while (n != 0) {
        cout << n << ' ' << sum.at(n-1) << endl; 
        cin >> n;
    }

    return 0;
}

