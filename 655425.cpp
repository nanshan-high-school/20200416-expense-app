#include <iostream>
using namespace std;

int main() {
    int c = 0;
    int c2 = 0;
    cout << "�п�J���X������:";
    cin >> c;
    string p[c];
    int num[c];

    for (int i = 0; i < c; i++){
        cout << "�п�J�����W:";
        cin >> p[i];
        cout << "�п�J�����N�X";
        cin >> num[i];
    }

    cout << "�аݦ��X���b:";
    cin >> c2;
    int m[c2];
    int number[c2];
    for (int i = 0; i < c2; i++){
        cout << "�аݤ����O:";
        cin >> number[i];
        cout << "�аݦh�ֿ�:";
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