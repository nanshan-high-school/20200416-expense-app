#include <iostream>
using namespace std;

int main() {
    cin.tie(0);

    int kind;
    cout << "輸入幾種項目:";
    cin >> kind;
    
    cin.get();
    string item[kind];
    for(int i = 0; i < kind; i++){
        cout << "輸入第" << i + 1 << "項名稱:";
        getline(cin,item[i]);
        cout << item[i];
    }
    
    int number;
    cout << "\n要記帳幾項:";
    cin >> number;

    string name[kind][number];
    for(int i = 0; i < number; i++){
        for(int j = 0; j < kind; j++){
            name[j][i] = '\0';
        }
    }
    
    int cash[kind][number];
    for(int i = 0; i < number; i++){
        for(int j = 0; j < kind; j++){
            cash[j][i] = 0;
        }
    }

    int c[number];
    for(int i = 0; i < number; i++){
        c[i] = 0;
    }
    
    bool yes[kind][number];
    for(int i = 0; i < number; i++){
        for(int j = 0; j < kind; j++){
            yes[j][i] = false;
        }
    }

    for(int a,b,d,i = 0; i < number; i++){
        d = 0;
        
        cout << "\n第" << i + 1 << "項";
        do{
            cout << "\n編號:";
            cin >> a;
        }while(a > kind || a < 1);

        cout << "品名:";
        cin.get();
        getline(cin,name[a - 1][c[a - 1]]);

        cout << "錢:";
        cin >> b;

        if(c[a - 1] > 0){
            for(int j = 0; j < c[a - 1]; j++){
                if(name[a - 1][c[a - 1]] == name[a - 1][j]){
                    cash[a - 1][j] += b;
                    d = 1;
                    break;
                }
            }
        }

        if(d == 0){
            yes[a - 1][c[a - 1]] = true;
            cash[a - 1][c[a - 1]] += b;
            c[a - 1]++;
        }
    }

    ios::sync_with_stdio(false);

    cout << "\n";
    for(int i = 0; i < kind; i++){
        cout << item[i] << "\n";
        for(int j = 0; j < number; j++){
            if(yes[i][j] == true){
                cout << name[i][j] << ":" << cash[i][j] <<   "\n";
            }
        }
    }
}
