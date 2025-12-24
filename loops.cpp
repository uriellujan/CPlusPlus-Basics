#include <iostream>

using namespace std;

int main(){
    int x = 0;
    cout << "How many numbers would you like to print out?" << endl;
    cin >> x;
    cout << "Understood. Printing all the numbers from 0 to " << x << endl;
    for(int i = 0; i <= x; i++){
        cout << i << endl;
    }
    return 0;
}