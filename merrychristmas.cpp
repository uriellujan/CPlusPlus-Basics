#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){

    int animationTimer = 10;
    while (animationTimer != 0){
        cout << "Merry Christmas!!!";
        this_thread::sleep_for(chrono::seconds(1));
        system("clear");
        this_thread::sleep_for(chrono::seconds(1));
        cout << flush;
        animationTimer--;
    }
    return 0;
}