#include <bits/stdc++.h>

using namespace std;

typedef long long longo;

const long long mod = 998244353; // #define MOD 998244353 || 1e9+7

longo somaMod(longo a, longo b) {
    return (a + b) % mod;
}

longo subMod(longo a, longo b) {
    return ((a - b) + mod) % mod;
}

longo multMod(longo a, longo b) {
    return (a * b) % mod;
}

longo divMod(longo a, longo b){
    return (a * 1/b) % mod;
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

    cout << somaMod(123, 210) << endl;
    cout << subMod(123, 210) << endl;
    cout << multMod(100, 20) << endl;
    cout << divMod(120, 60) << endl;

    return 0;

}