#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;
    cin.ignore();

    string categroy[num];
    for (int i = 0; i < num; i++) {
        getline(cin, categroy[i]);
    }

    int piece;
    cin >> piece;
    cin.ignore();

    int total[num];
    for (int i = 0; i < num; i++) {
        total[i] = 0;
    }
    
    string name[piece];
    for (int i = 0; i < piece; i++) {
        name[i] = " ";
    }

    int item[2][piece];
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ":";
        cin >> item[0][i];
        cin.ignore();
        cin >> name[i];
        cin.ignore();
        cin >> item[1][i];
        cin.ignore();
    }

    string output[num];
    for (int i = 0; i < piece; i++) {
        output[i] = "";
    }
    
    int a;
    for (int i = 0; i < piece; i++) {
        a = item[0][i] - 1;
        total[a] += item[1][i];
        if (name[i] != " ") {
            output[a] += name[i] + " ";
        }
    }

    for (int i = 0; i < num; i++) {
        cout << categroy[i] << ":";
        cout << output[i];
        cout << "total:" << total[i];
        cout << "\n";
    }
}