#include <iostream>
using namespace std;

int main() {
    string item[500];
    int quatity;
    cout << "���X�ؤ����H(�p��500)\n";
    cin >> quatity;
    for (int i = 0; i < quatity; i++) {
        cout << i + 1 << "�G";
        cin >> item[i];
    }
    cout << "���h�ֶ��ءG\n";
    int thing;
    cin >> thing;
    int money;
    int total[500] = {0};
    cout << "�п�J������$$\n";
    for (int j = 0; j < thing; j++) {
        cout << j + 1 << "�G";
        int k;
        cin >> k;
        cin >> money;
        total[k] += money;
    }
    for (int l = 1; l < quatity + 1; l++){
        cout << item[l - 1] << " ," << total[l] << "\n";
    }
}