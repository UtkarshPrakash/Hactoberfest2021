#include <iostream>

using namespace std;

int fib_r(int n){    // Recursive function for Fibonacci series
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    return fib_r(n-1) + fib_r(n-2);
}

int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << fib_r(n-1);
    return 0;
}

