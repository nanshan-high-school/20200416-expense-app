#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    string categroy[num];
    for (int i = 0; i < num; i++) {
        cin >> categroy[i];
    }

    int piece;
    cin >> piece;

    int total[num];
    for (int i = 0; i < num; i++) {
        total[i] = 0;
    }

    string name[num][piece];
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < piece; j++) {
            name[i][j] = " ";
        }
    }

    int item;    
    int cost[piece];
    for (int i = 0; i < piece; i++) {
        cout << i + 1 << ":";
        cin >> item;
        cin >> name[item - 1][i];
        cin >> cost[i];
        total[item - 1] += cost[i];
    }

    cout << "\n";

    for (int i = 0; i < num; i++) {
        cout << categroy[i] << ": ";
        for (int j = 0; j < piece; j++) {
            if (name[i][j] != " ") {
                cout << name[i][j] << " ";
            }
        }             
        cout << "cost: " << total[i] << "\n";
    }    
}