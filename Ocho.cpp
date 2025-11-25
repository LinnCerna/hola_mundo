#include  <bits/stdc++.h>
using namespace std;

int main() {
    int w, f;
    cin >> w;

    for (int l = 0; l < w; l++) {
        cin >> f;
        if (f == 8) {   //buscamos el número deseado
            cout << 1;
            return 0;   // ya lo encontramos el número deseado por lo tanto ya hemos terminamos
        }
    }

    cout << 0;
    return 0;
}

