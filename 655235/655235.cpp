#include <iostream>
#include <string>
using namespace std;

int main() {
    int sort;
    cout << "共有幾種：";
    cin >> sort;
    cin.ignore();
    string name[100];

    for (int i = 0; i < sort; i++) {
        cout << "第" << i + 1 << "類名稱：";
        getline(cin,name[i]);
    }

    int account[1000][2] = {0};
    int num = 0;
    cout << "共有幾筆帳：";
    cin >> num;
    cin.ignore();
    string goods[1000];
    
    for (int i = 0; i < num; i++) {
        cout << i + 1 << "：第幾類型帳單：";
        cin >> account[i][0];
        cin.ignore();
        cout << i + 1 << "：帳單名稱：";
        getline(cin,goods[i]);
        cout << i + 1 << "：金額：";
        cin >> account[i][1];
        cin.ignore();
    }

    int output[100] = {0};
    for (int i = 0; i < sort; i++) {
        for (int j = 0; j < num; j++) {
            if(account[j][0] == i + 1) {
                output[i] += account[j][1];
            }
        }
    }

    for (int i = 0; i < sort; i++) {
        cout << name[i] << "品項總共花了：" << output[i] << "元\n";
        cout << "細項：\n";
        for (int j = 0; j < num; j++) {
            if (account[j][0] == i + 1) {
                cout << goods[j] << "\n";
            }
        }
    }
}
