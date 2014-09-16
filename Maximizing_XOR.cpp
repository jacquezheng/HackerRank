#include <iostream>
using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int temp, xor_max = -1;
    for(int i = l; i <= r; i++){
        for(int j = i; j <= r; j++){
            temp = i ^ j;
            if(temp > xor_max)
                xor_max = temp;
        }
    }
    return xor_max;
}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}
