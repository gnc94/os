#include<iostream>
#include<regex>
using namespace std;

int main() {
    string str;
    while(true) {
        cin >> str;
        if (str == "exit") break;
        regex a("abc");
        bool match = regex_match(str, a);
        cout << (match ? "Matched" : "Not Matched") << endl;
    }
    return 0;
}

