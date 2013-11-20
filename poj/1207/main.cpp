#include <iostream> 
#include <vector>

using namespace std; 

vector<int> sum;

int func_3n_1(int x) {

    int step = 1; 

    while (x != 1) {

        if (x % 2 == 0) {
            x /= 2;
        }
        else {
            x = 3*x + 1;
        }
        ++step;
    }

    return step;
}

int main() {

    for (int i = 1; i <= 10000; ++i) {

        int num_step = func_3n_1(i);
        if (num_step == -1) {
            return -1;
        }
        
        sum.push_back(num_step);
    }

    int m = 0; 
    int n = 0; 

    while (cin >> m >> n) {

        bool exchange = false; 
        if (m > n) {
            int tmp = n; 
            n = m; 
            m = tmp;
            exchange = true;
        }

        int max = 0;
        for(int i = m-1; i < n; ++i) {
            if (sum.at(i) > max) {
                max = sum.at(i);
            }
        }

        if (exchange) {
            cout << n << ' ' << m << ' ' << max << endl;
        }
        else {
            cout << m << ' ' << n << ' ' << max << endl;
        }
    }

    return 0;
}

