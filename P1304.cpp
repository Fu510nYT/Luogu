#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

bool is_prime(int a){
    bool prime = true;
    for (int i = 2; i < a; i ++){
        if (a % i == 0){
            prime = false;
        }
    }
    return prime;
}

int main() {
    int n; cin >> n;
    for (int i = 4; i <= n; i += 2){
        // cout << i << endl;
        int min_first = 1000;
        if (i == 4){
            cout << "4=2+2" << endl;
            continue;
        }
        for (int j = 3; j < i; j += 2){
            // cout << j << endl;
            if (is_prime(j) && is_prime(i - j)){
                if (j < min_first && i - j >= 2){
                    min_first = j;
                }
            }
            if (min_first != 1000){
                cout << i << '=' << min_first << '+' << i - min_first << endl;
                break;
            }
            
        }
        
        
    }
    return 0;
}
