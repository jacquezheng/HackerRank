#include <iostream>
using namespace std;


int main() {
    int num_test;
    cin >> num_test;
    
    for(int i = 0; i<num_test; i++){
        long int cut;
        cin >> cut;
        long int col = cut/2;
        long int row = cut - col;
        cout << col*row << endl;
    }
    return 0;
}
