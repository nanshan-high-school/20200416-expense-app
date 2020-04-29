#include <iostream>
using namespace std;

int main() {
    cout << "你有幾個分類:";
    int type;
    cin >> type;

    int x[type];

    cout << "有多少筆帳:";
    int account;
    cin >> account;

    string name[1000];

    for (int i = 0; i < type; i++) {
        cout << "請輸入第" << i + 1 << "類名稱:";
        cin >> name[i];
    }

    int money;
    int category;

    for (int j = 0;j < account;j++) {
        cout << "第" << j + 1 << "筆是第幾類:";
        cin >> category;

        cout << "第" << j + 1 << "筆是多少:";
        cin >> money;
        x[j] = 0;
        x[j] += money;   
    }
    
    for (int i = 0;i < type;i++) {
        cout << name[i] << "類總共:" << x[i] << "元" << "\n";
    }
}
