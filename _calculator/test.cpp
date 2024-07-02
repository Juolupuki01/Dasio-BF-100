#include <iostream>

using namespace std;

double Sqrt(double x, int accuracy){
    //Approximation of the square root by iterating through Heron's method
    double s;
    s = x;
    for(int i = 0; i < accuracy; i++){
        x = 0.5*(x + s/x);
    }
    return x;
}

int main(){
    double x;
    double res;
    do{
        cin >> x;
        res = Sqrt(x, 100);
        cout << res << endl;
    } while(x != -1);
    return 0;
}