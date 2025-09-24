#include <bits/stdc++.h>

using namespace std;

typedef long long int longo;

map<longo, longo> fats;

longo fatorial(longo n){
    if(n == 0){
        fats[n] = 1;
    }

    else if(n == 1){
        fats[n] = 1;
    }

    else if(fats[n] == 0){
        fats[n] = n * fatorial(n-1);
    }

    return fats[n];
}

longo exponenciacaoRapida(longo x, longo y){
    if(y == 0) return 1;
    else if(y == 1) return x;
    else if(y % 2 == 0){
        longo aux = exponenciacaoRapida(x, longo(y / 2));
        return aux * aux;
    }
    else{
        longo aux = exponenciacaoRapida(x, longo(y / 2));
        return aux * aux * x;
    }
}

longo permutacaoSimples(longo n){
    return fatorial(n);
}

double permutacaoComRepeticao(longo n, vector<longo> rept){
    longo nfat = fatorial(n), mult = 1;
    for(longo i = 0; i < rept.size(); i++){
        mult *= fatorial(rept[i]);
    }

    return (nfat / mult);
}

double arranjoSimples(longo n, longo k){
    return (fatorial(n) / fatorial(n - k));
}

double arranjoComRepeticao(longo n, longo k){
    return exponenciacaoRapida(n, k);
}

double combinacaoSimples(longo n, longo k){
    return (fatorial(n) / (fatorial(k) * fatorial(n - k)));
}

double combinacaoComposta(longo n, longo p){
    return (fatorial(n - p + 1) / (fatorial(p) * fatorial(n - 1)));
}

void printaFatoriais(){
    for(int i = 0; i < fats.size(); i++){
        cout << fatorial(i) << " ";
    }

    cout << endl;
}

int main(){
    
    cout << fatorial(5) << endl;

    cout << permutacaoComRepeticao(10, {2, 3, 2}) << endl;

    cout << exponenciacaoRapida(5, 5) << endl;

    return 0;

}