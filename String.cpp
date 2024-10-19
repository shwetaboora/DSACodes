#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // char arrays - 1. need to know size beforehand. 2. larger size required for operations(concatenation or append). 3. No terminating extra character.
    //  VS
    // strings - 1. no need to know size beforehand. 2. performing operations like concatenation and append is easier. 3. terminated with a special character '\0'.

    // string str;
    // string str(5, 'n');
    string str = "abadfafac";
    // cin >> str;
    // getline(cin, str); // for sentence input in only cin we just get single word

    string str1 = "abc";
    // cout << str.length(); //.size()

    // str.append(str1);

    // cout << str + str1 << endl;
    // str = str + str1;

    // cout << str[3];

    // str.clear();

    // if (str.compare(str1) == 0) //! str.compare(str1)
    // {
    //     cout << "strings are equal" << endl;
    // }
    // cout << str1.compare(str) << endl;

    // if (!str.empty())
    // {
    //     cout << "string is not empty" << endl;
    // }

    // str.erase(2, 3);

    // cout << str.find("faf");

    // str.insert(3, "lol");

    // string s = str.substr(3, 4);
    // cout << s;

    // string num = "2345";
    // int n = stoi(num);
    // cout << n + 2 << endl;

    // int x = 3253;
    // string no = to_string(x) + "2";
    // cout << no;

    sort(str.begin(), str.end());
    cout << str;

    return 0;
}