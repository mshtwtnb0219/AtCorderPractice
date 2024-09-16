#include <iostream>
#include <string>  // stringを使用するのでインクルード

using namespace std;

int main() {
    int i = 10;
    double d = i;  // doubleとintは互いに代入できる（小数点以下切り捨て）
    string s = "Hello";

    cout << i << endl;
    cout << d << endl;
    cout << s << endl;  // string型の変数sの内容を出力
}
