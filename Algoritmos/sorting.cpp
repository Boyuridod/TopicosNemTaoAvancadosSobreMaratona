#include <bits/stdc++.h>

using namespace std;

typedef long long int longo;

const int mod = 1e9+7; // Primo
const int INF = 1e9; // Infinito ou (INT_MAX)
const double EPS = 1e-9; // Epsilon (Numero muito pequeno) (ou 1e-12)

void printVector(vector<int> a){
    int i = 0;

    for(i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }

    cout << endl;
}

vector<int> sorting(vector<int> a, bool reverse = false){

    if(!reverse){
        sort(a.begin(), a.end());
    }

    else{
        sort(a.rbegin(), a.rend());
    }

    return a;
}

int main(){

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    vector<int> vetor = {4, 5, 1, 2, 7, 6, 3};

    printVector(vetor);

    vetor = sorting(vetor);

    printVector(sorting(vetor));

    printVector(sorting(vetor, true));

    return 0;
}

// Em python mantém o [array].sort() ou sorted([array])