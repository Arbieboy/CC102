#include <iostream>
using namespace std;

int main() {
    

    for (int a = 0; a< 8; a++) {
        
        if (a % 2 == 0) {
            cout << " ";  
        }
        
        for (int b= 0; b < 4; b++) {
            cout << "# * ";
        }
        
        cout << endl;
    }

    return 0;
}