#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n; 

    while (cin >> n, n > 0) {

        int min = 0;

        for (int i = 0; i < n; ++i) {

            int speed = 0; 
            int wait_time = 0;
            double total_time;

            cin >> speed >> wait_time;
            if (wait_time < 0) continue;

            total_time = wait_time + 4.5*3600/speed;
            if (ceil(total_time) < min || min == 0) {
                min = static_cast<int>(ceil(total_time));
            }
        }

        cout << min << endl;
    }
    return 0;
}

