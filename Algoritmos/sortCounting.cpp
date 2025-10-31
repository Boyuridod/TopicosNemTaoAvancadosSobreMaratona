#include <bits/stdc++.h>
#include <ranges>

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

void printMap(map<int, int> a){
    for(auto [chave, valor] : a){
        cout << chave << " | " << valor << endl;
    }
}

vector<int> countingSort(vector<int> a, bool reverse = false){

    int i = 0, j = 0;
    map<int, int> count;
    vector<int> ordenado;

    for(i = 0; i < a.size(); i++){
        count[a[i]]++;
    }

    if(!reverse){
        for(auto [numero, quantidade] : count){
            for(j = 0; j < quantidade; j++){
                ordenado.push_back(numero);
            }
        }
    }
    else{
        for (auto it = count.rbegin(); it != count.rend(); ++it) {
            for (j = 0; j < it->second; j++) {
                ordenado.push_back(it->first);
            }
        }
    }

    return ordenado;
}

int main(){

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    vector<int> vetor = {4, 5, 1, 2, 7, 6, 1, 3, 1, 10};

    printVector(vetor);

    printVector(countingSort(vetor));

    printVector(countingSort(vetor, true));

    return 0;
}