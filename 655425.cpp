#include <iostream>
using namespace std;

int main() {
    int c = 0;
    int c2 = 0;
    cout << "請輸入有幾項分類:";
    cin >> c;
    string p[c];
    int num[c];

    for (int i = 0; i < c; i++){
        cout << "請輸入分類名:";
        cin >> p[i];
        cout << "請輸入分類代碼";
        cin >> num[i];
    }

    cout << "請問有幾筆帳:";
    cin >> c2;
    int m[c2];
    int number[c2];
    for (int i = 0; i < c2; i++){
        cout << "請問分類是:";
        cin >> number[i];
        cout << "請問多少錢:";
        cin >> m[i];
    }

    int total[c];
    for (int i = 0; i < c2; i++){
        for (int k = 0; k < c2; k++){
            if (num[i] == number[k]){
                total[i] = m[k];
            }
        }
    }
    
    for (int i = 0; i < c; i++){
        cout << p[i] << total[i] << "\n";
    }
}