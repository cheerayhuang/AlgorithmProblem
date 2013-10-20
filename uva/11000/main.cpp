#include <iostream>

using namespace std; 

int main()
{
    int n;

    while (cin >> n, n != -1) {

        if (n == 0) {
            cout << "0 1" << endl;
            continue;
        }

        unsigned int x = 1;
        unsigned int c = 1;

        for (int i = 2; i <= n; ++i) {
            x = c + x;
            c = 1 + (x-c);
        }

        cout << x << " " << x + c << endl;
    }
}

