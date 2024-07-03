#include <iostream>

using namespace std;

double Sqrt(double x, int accuracy){
    //Approximation of the square root by iterating through Heron's method
    double s = x;
    for(int i = 0; i < accuracy; i++){
        x = 0.5*(x + s*(1/x));
    }
    return x;
}

double NatPwr(double x, int n){
    //Power of any natural number
    if(n == 0)return 1;
    double s = x;
    for(int i = 1; i < n; i++){
        x *= s;
    }
    return x;
}

double NthRoot(double x, double n, int accuracy){
    //Newton's method for nth root computation
    double s = x;
    double nMinusOne = (n-1)*1/n;
    double sDivideN = s * 1/n;
    for(int i = 0; i < accuracy; i++){
        x = nMinusOne*x + sDivideN*(1/NatPwr(x, n-1));
    }
    return x;
}

int main(){
    double x;
    double n;
    double res;
    do{
        cin >> x;
        cin >> n;
        res = NthRoot(x, n, 40);
        cout << res << endl;
    } while(x != -1);
    return 0;
}