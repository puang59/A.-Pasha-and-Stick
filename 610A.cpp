#include <iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    if (size%2 == 0){
        if(size%4 == 0){
            cout << (size/4)-1 << endl;
        } else {
            cout << size/4 << endl;
        }
    }
}

