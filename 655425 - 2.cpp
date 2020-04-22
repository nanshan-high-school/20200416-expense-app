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
    string name[c + 1][c2];
    int x = 0;
    for (int i = 0; i < c2; i++){
        if (x == 0){
        cout << "請問分類是:";
        cin >> number[i];
        cout << "請問品名是:";
        cin >> name[number[i]][x];
        cout << "請問多少錢:";
        cin >> m[i];
        cout << "請問分類是:";
        cin >> number[i];
            }
        else if (number[i] == number[i - 1]){
            int x2[c2];
            x2[i] = x;
            cout << "請問品名是:";
            cin >> name[number[i]][x2[i]];
            cout << "請問多少錢:";
            cin >> m[i];
            if (x != c2 - 1){
                cout << "請問分類是:";
                cin >> number[i];
            }
        }
        else {
            int x3[c2];
            x3[i] = i - (c - 1);
            cout << "請問分類是:";
            cin >> number[i];
            cout << "請問品名是:";
            cin >> name[number[i]][x];
            cout << "請問多少錢:";
            cin >> m[i];
            if (x != c2 - 1){
                cout << "請問分類是:";
                cin >> number[i];
            }
        }
    x++;
    }
//如何判斷一個分類(25 ~ 63)中做了幾次?

    int total[c];
    string nameTotal[c];
    for (int i = 0; i < c2; i++){
        for (int k = 0; k < c2; k++){
            if (num[i] == number[k]){
                total[i] = m[k];
                nameTotal[i] = name[k];
            }
        }
    }
    
    for (int i = 0; i < c; i++){
        cout << p[i] << total[i] << "\n";
    }
}