#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    char categroy[num];
    for (int i = 0; i < num; i++) {
        cin >> categroy[i];
    }

    int piece;
    cin >> piece;

    int item;
    int total[num];
    int cost[piece];

    for (int i = 0; i < num; i++) {
        total[i] = 0;
    }

    for (int i = 0; i < piece; i++) {
        cout << i + 1 << ":";
        cin >> item >> cost[i];
        total[item - 1] += cost[i];
    }

    cout << "\n";

    for (int i = 0; i < num; i++) {
        cout << categroy[i] << ":" << total[i] << "\n";
    }    
}