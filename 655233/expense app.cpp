#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum;

    cout << "�п�J�X��?";
    cin >> sum;
    cin.ignore();
    string num[sum];    

    for (int i = 0; i < sum; i++) {
        cout << i + 1 << "�G";
        getline(cin,num[i]);
    }

    cout << "�п�J�X��?";
    int item;
    int cost;
    int total[sum - 1];
    cin >> item;
    cin.ignore();
    string detail[item];
    
    for (int i = 0; i < sum; i++) {
        total[i] = 0;
    }      

    for (int j = 0; j < item; j++) {
        cout << "�п�J";
        cout << j + 1 << "�G";
        int code;
        cin >> code;
        cin.ignore();
        cin >> cost;
        cin.ignore();
        cout << "���~���W��?";
        getline(cin,detail[j]);
        total[code - 1] += cost;
    }

    for (int k = 0; k < sum; k++) {
        cout << num[k] << " ";
        cout << detail[k] << ":";
        cout << total[k] << endl;
    }
}
