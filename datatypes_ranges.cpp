// primitve datatypes & memory
// int, float, bool, double, char & sizeof
#include<iostream>
using namespace std;
int main() {

    // int a=500;
    // float b=20.545;
    // bool weather_is_rainy= true;
    // double c=4.227289443;
    // char ch = 'A';

    // //how much memory datatypes occupy
    // cout<<"int "<<sizeof(a)<<endl;// 4 byte
    // cout<<"float "<<sizeof(b)<<endl;// 4 byte
    // cout<<"bool "<<sizeof(weather_is_rainy)<<endl;// 1 byte
    // cout<<"double "<<sizeof(c)<<endl;// 8 byte
    // cout<<"char "<<sizeof(ch)<<endl;// 1 byte



    int x = 1999999999;
    int y = 1999999999;
    int z =  x + y;
    // cout << "x : " << x << endl;
    // cout << "y : " << y << endl;
    // cout << "z : " << z << endl;

    // for (int i = -10; i <= 10; i++) {
    //     if (i) { //true
    //         cout << i << "is true" << endl;
    //     } else { //false
    //         cout << i << "is false" << endl;
    //     }
    // }

    char ch;
    cin >> ch;
    if (ch) {
        cout << ch << "is true" << endl;
    } else {
        cout << ch << "is false" << endl;
    }
    return 0;

}