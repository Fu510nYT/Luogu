#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    if (n == 0){
        cout << '0' << endl;
        return 0;
    }
    
    if (n < 0){
        cout << '-';
        n *= -1;
    }
    bool stopped = false;
    while (n != 0){
        
        if (n % 10 == 0 && stopped == false){
            n /= 10;
            continue;
        }
        stopped = true;
        int a = n % 10;
        cout << a;
        n /= 10;
    }
    
    return 0;
}
