#include <bits/stdc++.h>

using namespace std;

typedef long long int longo;

vector<bool> crivo(longo n){

    vector<bool> primos(n + 1, true);

    primos[0] = false;
    primos[1] = false;

    for(longo i = 0; i < n+1; i++){
        if(primos[i]){
            for(longo j = i * i; j < n + 1; j+=i){
                primos[j] = false;
            }
        }
    }

    return primos;

}

void printaPrimos(vector<bool> a){
    for(longo i = 0; i < a.size(); i++){
        if(a[i])
            cout << i << " ";
    }

    cout << endl;
}

int main(){

    // printaPrimos(crivo(10));
    // printaPrimos(crivo(100));
    // printaPrimos(crivo(200));
    printaPrimos(crivo(1000));
    // printaPrimos(crivo(10));

    return 0;

}

