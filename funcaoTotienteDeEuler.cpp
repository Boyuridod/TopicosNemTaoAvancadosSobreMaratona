#include <bits/stdc++.h>

using namespace std;

/* Dado um número inteiro n, a função
Totiente retorna a quantidade de
números inteiros, no intervalo de 1 a n,
que são coprimos de n. Formalmente:*/

int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0)
            n /= i;
            result -= result / i;
        }
    }
    if(n > 1)
        result -= result / n;
    return result;
}

int main(){

    cout << phi(1500) << endl;

    return 0;
}