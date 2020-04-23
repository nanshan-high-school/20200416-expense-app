#include <iostream>
using namespace std;
#include <string>
int main() {
    int  numtype= 0;
    cout << "請問要分幾類:";
    cin >> numtype;
    int price[numtype + 1];
    for (int i = 1; i <= numtype; i++) {
        price[i] = 0;
    }
    string b[numtype + 1];
    for (int i = 1; i <= numtype; i++) {
        cout << i << ":";
        cin >> b[i];
    } 
    int numbill = 0;
    int num = 0;
    int plusprice = 0;
    cout << "幾筆帳:";
    cin >> numbill;
    for (int i = 1; i <= numbill; i++) {
        cout << i << ":";
        cin >> num >> plusprice; 
        price[num] += plusprice;
    } 
    for (int i = 1; i <= numtype; i++) {
        cout << b[i] << ":" << price[i] << "\n";
    } 

}
