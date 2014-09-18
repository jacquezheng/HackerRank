#include <iostream>
using namespace std;


int main() {
    int num_test;
    cin >> num_test;
    
    for(int i = 0; i<num_test; i++){
        int cut;
        cin >> cut;
        int col = cut/2;
        int row = cut - col;
        cout << col*row << endl;
    }
    return 0;
}
