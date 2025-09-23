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

void printaFatoriais(){
    for(int i = 0; i < fats.size(); i++){
        cout << fatorial(i) << " ";
    }

    cout << endl;
}

int main(){
    
    cout << fatorial(5) << endl;

    cout << permutacaoComRepeticao(10, {2, 3, 2}) << endl;

    return 0;

}