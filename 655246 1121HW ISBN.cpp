#include <iostream>
using namespace std;

int main() {
    long long isbn = 0;

    do {
        cout << "請輸入書的ISBN檢查碼:";
        cin >> isbn;
    } while (isbn < 1000000000 || isbn >= 10000000000);
    
    int num;

    num = ((isbn / 10 % 10) * 9 + (isbn / 100 % 10) * 8 + (isbn / 1000 % 10) * 7 + (isbn / 10000 % 10) * 6 + (isbn / 100000 % 10) * 5 + (isbn / 1000000 % 10) * 4 + (isbn / 10000000 % 10) * 3 + (isbn / 100000000 % 10) * 2 + (isbn / 1000000000 % 10)) % 11;

    if (num != isbn % 10) {
        cout << "Error";
    } else if (num == isbn % 10) {
        cout << "Correct";
    }
}
