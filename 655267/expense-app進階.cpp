#include <iostream>
using namespace std;

int main() {
    cin.tie(0);

    int kinds;
    cout << "輸入幾種項目:";
    cin >> kinds;

    string item[kinds];
    for(int i = 0; i < kinds; i++){
        cout << "輸入第" << i + 1 << "項名稱:";
        cin.get();
        getline(cin,item[i]);
    }

    int number;
    cout << "\n要記帳幾項:";
    cin >> number;

    string name[kinds][number];
    name[0][0] = '\0';

    int cash[kinds][number];
    for(int i = 0; i < number; i++){
        for(int j = 0; j < kinds; j++){
            cash[j][i] = 0;
        }
    }

    int c[kinds][1];
    for(int i = 0; i < number; i++){
        for(int j = 0; j < kinds; j++){
            c[j][i] = 0;
        }
    }

    bool yes[kinds][number];
    for(int i = 0; i < number; i++){
        for(int j = 0; j < kinds; j++){
            yes[j][i] = false;
        }
    }

    for(int a,b,d,i = 0; i < number; i++){
        d = 0;

        do{
            cout << "\n第" << i + 1 << "項\n編號:";
            cin >> a;
        }while(a > kinds || a < 1);

        cout << "品名:";
        cin.get();
        getline(cin,name[a - 1][c[a - 1][0]]);

        cout << "錢:";
        cin >> b;

        for(int j = 0; j <= c[a - 1][0]; j++){
            if(name[a - 1][c[a - 1][0]] == name[a - 1][j]){
                cash[a - 1][j] += b;
                d = 1;
                break;
            }
        }

        if(d == 0){
            yes[a - 1][i] = true;
            cash[a - 1][i] += b;
            c[a - 1][0]++;
        }
    }

    ios::sync_with_stdio(false);

    cout << "\n";
    for(int i = 0; i < kinds; i++){
        cout << item[i] << "\n";
        for(int j = 0; j < c[i][0]; j++){
            if(yes[i][j] == true){
                cout << name[i][j] << ":" << cash[i][j] << "\n";
            }
        }
    }
}
