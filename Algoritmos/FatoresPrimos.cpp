#include <bits/stdc++.h>

using namespace std;

typedef long long int longo;

bool ehPrimo(longo num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (longo i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

vector<longo> fatoresPrimos(longo n){
    vector<longo> fatores;

    for(longo i = 2; i <= sqrt(n); i++){
        if(n % i == 0 && ehPrimo(i)){
            while(n % i == 0){
                fatores.push_back(i);
                n /= i;
            }
        }
    }
    if(n > 1){
        fatores.push_back(n);
    }

    return fatores;

}

void printaVetor(vector<longo> a){

    for(longo i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }

    cout << endl;

}

int main(){

    printaVetor(fatoresPrimos(100));
    printaVetor(fatoresPrimos(10));
    printaVetor(fatoresPrimos(15));
    printaVetor(fatoresPrimos(5));

    return 0;
}