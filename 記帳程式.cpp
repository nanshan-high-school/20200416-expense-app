#include <iostream>
using namespace std;

int main() {
    int type;
    cout << "你有幾個分類:";
    cin >> type;

    int x[type];

    int account;
    cout << "有幾筆帳要記:";
    cin >> account;

    int money;
    int kind;
    for (int i = 0;i < account;i++) {
        cout << "第" << i + 1 << "筆是第幾類:";
        cin >> kind;
        cout << "第" << i + 1 << "筆是多少:";

        cin >> money;
        x[i] = 0;
        x[i]+= money;   
    }
    
    for (int i = 0;i < type;i++) {
        cout << "第" << i+1 << "類總額:" << x[i] << "\n";
    }
}
