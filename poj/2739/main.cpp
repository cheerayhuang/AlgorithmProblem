#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std; 


bool is_prime(int x)
{
    for (int i = 2; i <= static_cast<int>(sqrt(x)); ++i)  {
        if (x % i  == 0) return false;
    }
    return true;
}

int main()
{
    vector<int> prime_table;

    for(int i = 2; i <= 10000; ++i) {
        if (is_prime(i)) {
            prime_table.push_back(i); 
        }
        
    }

    int sum; 
    cin >> sum; 

    while (sum) {
        
        vector<int>::iterator iter = prime_table.begin();
        int count = 0;

        while(*iter <= sum) {

            int total = 0; 
            vector<int>::iterator iter_sum = iter; 
            while (total < sum) 
            {
                total += *iter_sum; 
                ++iter_sum;
            }
            if (total == sum) { 
                count++;
            }
            
            iter++;
        }
        cout << count << endl;
        cin >> sum;
    }
    return 0;
}

