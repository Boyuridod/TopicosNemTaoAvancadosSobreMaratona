#include <bits/stdc++.h>

using namespace std;

typedef long long longo;

const long long mod = 998244353;

longo somaMod(longo a, longo b) {
    return (a + b) % mod;
}

longo multMod(longo a, longo b) {
    return (a * b) % mod;
}

longo exponenciacaoRapida(longo base, longo expoente) {
    if(expoente == 0) return 1;
    if(expoente == 1) return base % mod;
    if(expoente % 2 == 0){
        longo aux = exponenciacaoRapida(base, expoente / 2);
        return multMod(aux, aux);
    }
    else{
        longo aux = exponenciacaoRapida(base, (expoente - 1) / 2);
        return multMod(multMod(aux, aux), base);
    }
}

int main(){

    int N = 0;

    cin >> N;

    while (N--){

        

    }

    return 0;

}