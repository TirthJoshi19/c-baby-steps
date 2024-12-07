#include <iostream>
#include <limits>

int main(){
    int a;
    double pi = 2;
    using namespace std;

    

    cin >> a;

    cout << a;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    return 0;
}