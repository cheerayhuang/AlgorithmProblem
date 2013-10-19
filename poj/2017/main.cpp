#include <iostream>

using namespace std; 

int main()
{
    int n; 

    while (cin >> n, n > 0)
    {
        int distance = 0;
        int speed = 0;
        int time = 0;
        int last_time = 0;

        for (int i = 0; i < n; ++i) 
        {
            cin >> speed >> time;  
            distance += speed * (time - last_time);
            last_time = time; 
        }
        cout << distance << " miles" << endl;
    }

    return 0;
}

