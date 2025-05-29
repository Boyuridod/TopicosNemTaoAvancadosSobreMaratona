#include <bits/stdc++.h>

using namespace std;

typedef long long longo;

int main() {

    longo num = 1e5, i = 0;

    for(i = 0; i < num; i++){

        if(i % (num / 100) == 0){
            cout << "\rProgresso: " << (i * 100) / num << "%";
        }

    }

    cout << "\rProgresso: 100%" << endl;

    cout << num << endl;

    return 0;
}