#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "String str =";
    cin.ignore();
    getline(cin, s);
    if ((s.length()-1) % 2 == 0) {
        cout << "Output : \"" << s[(s.length() / 2) - 1] << s[s.length() / 2] << "\""
                << endl;
    } else {
        cout << "Ushbu satr uzunligi juft emas!" << endl;
    }
}
