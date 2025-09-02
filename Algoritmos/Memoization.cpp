#include <bits/stdc++.h>

using namespace std;

typedef long long int longo;

map<int, longo> memoria;

longo fibonacci(longo n){
    if(n == 0)
        memoria[n] = 0;
    else if(n == 1)
        memoria[n] = 1;
    else if(memoria[n] != 0)
        return memoria[n];
    else
        memoria[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return memoria[n];
}

int main(){

    cout << fibonacci(0) << endl;
    cout << fibonacci(1) << endl;
    cout << fibonacci(2) << endl;
    cout << fibonacci(3) << endl;
    cout << fibonacci(4) << endl;
    cout << fibonacci(5) << endl;
    cout << fibonacci(6) << endl;
    cout << fibonacci(20) << endl;
    cout << fibonacci(10) << endl;

    for(int i = 0; i < memoria.size(); i++){
        cout << memoria[i] << " ";
    }

    return 0;
}