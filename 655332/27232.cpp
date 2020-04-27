#include <iostream>
using namespace std;

int main() {
    int sub,gg,a,b,x;
    int jack[100] = {0};
    string tt[100];
    string xx[100][100];
    cout << "請問你要分幾類\n";
    cin >> sub;
    for (int zzz = 0; zzz < sub; zzz++){
        cout << "第" << zzz + 1 << "類名字是:";
        cin >> tt[zzz];
    }
    cout << "你要幾筆帳\n";
    cin >> gg;
    for (x = 0; x < gg; x++){
        cout << "你想要計的帳是哪一類?";
        cin >> a;
        cout << "帳單名字?";
        cin >> xx[a][x];
        cout << "多少錢";
        cin >> b;
        jack[a] += b;   
        }
    for (int y = 0; y < sub; y++){
        cout << tt[y] <<"類"<< "有";
        for(int t = 0; t < gg; t++){
            int pp = y + 1;
            cout << xx[pp][t];
        }
        cout << jack[a] << "\n";
    }
}