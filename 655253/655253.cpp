#include <iostream>
using namespace std;

int main() {
    string item[500];
    int quatity;
    cout << "有幾種分類？(小於500)\n";
    cin >> quatity;
    for (int i = 0; i < quatity; i++) {
        cout << i + 1 << "：";
        cin >> item[i];
    }
    cout << "有多少項目：\n";
    int thing;
    cin >> thing;
    int money;
    int total[500] = {0};
    cout << "請輸入分類及$$\n";
    for (int j = 0; j < thing; j++) {
        cout << j + 1 << "：";
        int k;
        cin >> k;
        cin >> money;
        total[k] += money;
    }
    for (int l = 1; l < quatity + 1; l++){
        cout << item[l - 1] << " ," << total[l] << "\n";
    }
}