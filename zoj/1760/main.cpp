#include <iostream>
#include <vector>

using namespace std; 

int main()
{
    vector<int> hash(100); 
    vector<int>::iterator iter;
    int num = 0;
    
    cin >> num;

    while (num != -1)
    {
        hash[num] = 1;
        
        while(1)
        {
            cin >> num; 
            if (num == 0) break;
            hash[num] = 1;
        }

        int count = 0;
        int index = 0;
        for(iter = hash.begin(); iter != hash.end(); ++iter, ++index)
        {
            if (*iter == 0) continue; 
            if (index *2 <= 99 && hash[index * 2]) count++;
        }
        cout << count << endl;

        for(iter = hash.begin(); iter != hash.end(); ++iter)
        {
            *iter = 0;
        }
        
        cin >> num;
    }

    return 0; 
}

