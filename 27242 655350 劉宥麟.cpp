#include <iostream>
using namespace std;
int main() {
    cout << "請問有幾個分類:";
    int gg;
    int coin[100]={0};
    cin >> gg;
    cout << "請輸入類別\n";
    string choice[100];
    for (int i = 1; i <= gg; i++) {
        cout << "類" << i << ":";
        cin >> choice[i];
    }
    cout << "請問有幾筆帳:";
    int bill;
    cin >> bill;
    
    for (int i = 1; i <= bill; i++) {
        cout <<"帳單" << i <<":\n";
        cout <<"類別:";
        int project;
        cin >> project;
        cout << "多少?:";
        int money;
        cin >> money;
        coin[project] += money;
    }

    for (int i = 1; i <= gg; i++) {
        cout << choice[i] << ":" << coin[i] << "\n";
    }    
}
