#include <iostream> 
#include <bitset>
#include <string>

using namespace std; 

int main() {

    bitset<100> res_bitset;

    res_bitset.set();

    int n = 0; 
    int d = 0; 

    cin >> n >> d;

    while (n != 0 && d != 0) {
        
        string tmp_str(""); 

        for (int i = 0; i < d; ++i) {
            for (int j = 0; j < n; ++j) {

                int tmp; 
                cin >> tmp;
                tmp_str += static_cast<char>(tmp+48);
            }

            bitset<100> cur_bitset(tmp_str);
            res_bitset &= cur_bitset;
            /*if (res_bitset.any() == false) {
                break;
            }*/
        }

        if (res_bitset.any()) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }

        res_bitset.set();

        cin >> n >> d;
    }
    
    return 0;
}

