#include <bits/stdc++.h>

using namespace std;

typedef long long int longo;

bool ehPrimo(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main(){

    cout << ehPrimo(13) << endl;
    cout << ehPrimo(719) << endl;
    cout << ehPrimo(720) << endl;
    cout << ehPrimo(21) << endl;
    cout << ehPrimo(1e9 + 7) << endl;
    cout << ehPrimo(2) << endl;
    cout << ehPrimo(5) << endl;

    return 0;
}