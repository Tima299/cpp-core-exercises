//Temur Eshboyev
//18/11/2024
//01:45:15
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

string helloName(string name) {
    string s1 = "Hello ";
    string s2 = " va boshqalar";
    return s1 + name + s2;
}

string makeAbba(string a, string b) {
    return a + b + b + a;
}

string makeOutWord(string a, string b) {
    string p1 = a.substr(0, 2);
    string p2 = a.substr(a.length() - 2);
    return p1 + b + p2;
}

string extraEnd(string end) {
    string last2 = end.substr(end.length() - 2);
    return last2 + last2 + last2;
}

string firstTwo(string first2) {
    string first = first2.substr(0, 2);
    return first;
}

string firstHalf(string word) {
    string half = word.substr(0, word.length() / 2);
    return half;
}

string nTwice(string word, int num) {
    string p1 = word.substr(0, num);
    string p2 = word.substr(word.length() - num);
    return p1 + p2;
}

string middleThree(string word) {
    if (word.size() % 2 != 0) {
        string p1 = word.substr(word.length() / 2 - 1, 3);
        return p1;
    } else {
        cout << "Berilgan son juft son!" << endl;
    }
}

string withoutEnd(string s) {
    if (s.length() >= 2) {
        s.erase(0, 1);
        s.erase(s.size() - 1, 1);
        return s;
    } else {
        cout << "Kiritilgan satrni hajmi juda kichik!" << endl;
    }
}

string nonStart(string a, string b) {
    a.erase(0, 1);
    b.erase(0, 1);
    return a + b;
}

string left2(string s) {
    if (s.length() >= 2) {
        string p1 = s.substr(0, 2);
        s.erase(0, 2);
        return s + p1;
    } else {
        cout << "Kiritilgan satrni hajmi juda kichik!" << endl;
    }
}

string conCat(string a, string b) {
    if (a[a.size() - 1] == b[0]) {
        b = b.substr(1);
    }
    return a + b;
}

string lastTwo(string s) {
    swap(s[s.size() - 1], s[s.size() - 2]);
    return s;
}

string deFront(string s) {
    if (s[0] == 'a' and s[1] == 'b') {
        s = s.substr(0);
    } else if ((s[0] == 'a')) {
        s.erase(1, 1);
    } else if ((s[1] == 'b')) {
        s.erase(0, 1);
    } else {
        s.erase(0, 2);
    }
    return s;
}

string seeColor(string s) {
    if (s[0] == 'r' and s[1] == 'e' and s[2] == 'd') {
        s.erase(3);
    } else if (s[0] == 'b' and s[1] == 'l' and s[2] == 'u' and s[3] == 'e') {
        s.erase(4);
    } else {
        s.erase(0);
    }
    return s;
}

bool frontAgain(string s) {
    if (s[0] == s[s.size() - 2] and s[1] == s[s.size() - 1]) {
        return true;
    } else {
        return false;
    }
}

string minCat(string a, string b) {
    if (a.size() < b.size()) {
        b = b.erase(0, (b.size() - a.size()));
    } else if (b.size() < a.size()) {
        a = a.erase(0, (a.size() - b.size()));
    }
    return a + b;
}

string withoutX(string s) {
    if (s[0] == 'x' and s[s.size() - 1] == 'x') {
        s.erase(0, 1);
        s.erase(s.size() - 1, 1);
    } else if (s[0] == 'x') {
        s.erase(0, 1);
    } else if (s[s.size() - 1] == 'x') {
        s.erase(s.size() - 1, 1);
    } else if (s[0] == 'X' and s[s.size() - 1] == 'X') {
        s.erase(0, 1);
        s.erase(s.size() - 1, 1);
    } else if (s[0] == 'X') {
        s.erase(0, 1);
    } else if (s[s.size() - 1] == 'X') {
        s.erase(s.size() - 1, 1);
    } else {
        s = s.substr(0);
    }
    return s;
}

bool catDog(string s) {
    int countCat = 0, countDog = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'c' and s[i + 1] == 'a' and s[i + 2] == 't') {
            countCat++;
        }
        if (s[i] == 'd' and s[i + 1] == 'o' and s[i + 2] == 'g') {
            countDog++;
        }
    }
    if (countCat == countDog) {
        return true;
    } else {
        return false;
    }
}

string pdpAcademy(string s) {
    int countAcer = 0;
    int countJava = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'a' and s[i + 1] == 'c' and s[i + 2] == 'e' and s[i + 3] == 'r') {
            countAcer++;
        }
        if (s[i] == 'j' and s[i + 1] == 'a' and s[i + 2] == 'v' and s[i + 3] == 'a') {
            countJava++;
        }
    }
    if (countAcer > countJava) {
        return "PDP";
    } else {
        return "ACADEMY";
    }
}

string pdpIndex(string find) {
    int index1 = 0;
    int index2 = 0;
    int index3 = 0;
    for (int i = 0; i < find.size(); ++i) {
        if (find[i] == 'p' and find[i + 1] == 'd' and find[i + 2] == 'p') {
            index1 = i, index2 = i + 1, index3 = i + 2;
        }
    }
    string result = to_string(index1) + ", " + to_string(index2) + ", " + to_string(index3);
    return result;
}

string rmLast4(string s) {
    s.erase(s.size() - 4);
    return s;
}

int sumDigits(int son) {
    if (son == 0) {
        return 0;
    }

    return son % 10 + sumDigits(son / 10);
}

string pdpCpp(string s) {
    int countPdp = 0;
    int countCpp = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'p' and s[i + 1] == 'd' and s[i + 2] == 'p') {
            countPdp++;
        }
        if (s[i] == 'c' and s[i + 1] == '+' and s[i + 2] == '+') {
            countCpp++;
        }
    }
    if (countPdp > countCpp) {
        return "PDP";
    } else if (countPdp < countCpp) {
        return "C++";
    } else {
        return "Ikkalasi bir xil marta uchragan!";
    }
}

string rmCpp(string s) {
    int n = s.find("c++");
    while (n > -1 && n < s.size()) {
        s.erase(n, 3);
        n = s.find("c++");
    }
    return s;
}

int androidCount(string s) {
    int count = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'a' and s[i + 1] == 'n' and s[i + 2] == 'd' and s[i + 3] == 'r' and s[i + 4] == 'o' and s[i + 5] ==
            'i' and s[i + 6] == 'd') {
            count++;
        }
    }
    return count;
}

string rmD(string s) {
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'd') {
            s = s.erase(i, 1);
        }
    }
    return s;
}

string pdpToJava(string s) {
    string s2 = "java";
    for (int i = 0; i < s.size(); ++i) {
        if (s.substr(i, 3) == "pdp") {
            s.replace(i, 3, s2);
        }
    }
    return s;
}

bool endOther(string a, string b) {
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if (a.size() >= b.size() && a.substr(a.size() - b.size()) == b) {
        return true;
    }
    if (b.size() >= a.size() && b.substr(b.size() - a.size()) == a) {
        return true;
    }
    return false;
}

string repeatEnd(string s, int n) {
    string result;
    s = s.substr(s.size() - n, n);
    while (n > 0) {
        result += s;
        n--;
    }
    return result;
}

/*bool isPalindrom(string s) {
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]==s[s.size()-1])
    }
}*/
void sum5(int son) {
    for (int i = 100; i < 1000; ++i) {
        int a, b, c;
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;
        if (a + b + c == 5) {
            cout << i << setw(3);
        }
    }
}

void sumIncreasingNums(int son) {
    for (int i = 100; i < 1000; ++i) {
        int a, b, c;
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;
        if (a < b && b < c) {
            cout << i << ", digitProduct -> " << a * b * c << endl;
        }
    }
}

void ArmstrongNumbers(int son) {
    for (int i = 100; i < 1000; ++i) {
        int a, b, c;
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;
        if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i) {
            cout << i << " is an Armstrong number. " << endl;
        }
    }
}

bool isPalindrom(string s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int countCode(string s) {
    int count = 0;
    for (int i = 0; i < s.size() - 3; ++i) {
        if (s[i] == 'c' && s[i + 1] == 'o' && s[i + 3] == 'e') {
            count++;
        }
    }
    return count;
}


int main() {
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 59, 0-chiqish)" << endl;
        cout << "_____________________________________________________________________________" << endl;
        cin >> task;
        switch (task) {
            case 1: {
                string name;
                cout << "Ism kiriting : ";
                cin.ignore();
                getline(cin, name);
                string result = helloName(name);
                cout << result << endl;;
                break;
            }
            case 2: {
                string str1, str2;
                cout << "a satrni kiriting:";
                cin.ignore();
                getline(cin, str1);
                cout << "b satrni kiriting:";
                getline(cin, str2);
                cout << "Natija -> " << makeAbba(str1, str2) << endl;
                break;
            }
            case 3: {
                string str1, str2;
                cout << "a satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, str1);
                cout << "b satrga qiymat bering : " << endl;
                getline(cin, str2);
                cout << "makeOutWord(\"" << str1 << "\", \"" << str2 << "\") -> \"" << makeOutWord(str1, str2) << "\""
                        << endl;
                break;
            }
            case 4: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "extraEnd(\"" << word << "\") -> \"" << extraEnd(word) << "\"" << endl;
                break;
            }
            case 5: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "firstTwo(\"" << word << "\") -> \"" << firstTwo(word) << "\"" << endl;
                break;
            }
            case 6: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "firstHalf(\"" << word << "\") -> \"" << firstHalf(word) << "\"" << endl;
                break;
            }
            case 7: {
                string str1;
                int num;
                cout << "a satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, str1);
                cout << "n soniga qiymat bering : " << endl;
                cin >> num;
                cout << "nTwice(\"" << str1 << "\", num) -> \"" << nTwice(str1, num) << "\"" << endl;
                break;
            }
            case 8: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "middleThree(\"" << word << "\") -> \"" << middleThree(word) << "\"" << endl;
                break;
            }
            case 9: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "withoutEnd(\"" << word << "\") -> \"" << withoutEnd(word) << "\"" << endl;
                break;
            }
            case 10: {
                string str1, str2;
                cout << "a satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, str1);
                cout << "b satrga qiymat bering : " << endl;
                getline(cin, str2);
                cout << "nonStart(\"" << str1 << "\", \"" << str2 << "\") -> \"" << nonStart(str1, str2) << "\""
                        << endl;
                break;
            }
            case 11: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "left2(\"" << word << "\") -> \"" << left2(word) << "\"" << endl;
                break;
            }
            case 12: {
                string str1, str2;
                cout << "a satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, str1);
                cout << "b satrga qiymat bering : " << endl;
                getline(cin, str2);
                cout << "conCat(\"" << str1 << "\", \"" << str2 << "\") -> \"" << conCat(str1, str2) << "\""
                        << endl;
                break;
            }
            case 13: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "lastTwo(\"" << word << "\") -> \"" << lastTwo(word) << "\"" << endl;
                break;
            }
            case 14: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "deFront(\"" << word << "\") -> \"" << deFront(word) << "\"" << endl;
                break;
            }
            case 15: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "seeColor(\"" << word << "\") -> \"" << seeColor(word) << "\"" << endl;
                break;
            }
            case 16: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "frontAgain(\"" << word << "\") -> \"" << boolalpha << frontAgain(word) << "\"" << endl;
                break;
            }
            case 17: {
                string str1, str2;
                cout << "a satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, str1);
                cout << "b satrga qiymat bering : " << endl;
                getline(cin, str2);
                cout << "minCat(\"" << str1 << "\", \"" << str2 << "\") -> \"" << minCat(str1, str2) << "\""
                        << endl;
                break;
            }
            case 18: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "withoutX(\"" << word << "\") -> \"" << withoutX(word) << "\"" << endl;
                break;
            }
            case 19: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "catDog(\"" << word << "\") -> \"" << boolalpha << catDog(word) << "\"" << endl;
                break;
            }
            case 20: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "pdpAcademy(\"" << word << "\") -> \"" << pdpAcademy(word) << "\"" << endl;
                break;
            }
            case 21: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "pdpIndex(\"" << word << "\") -> \"" << pdpIndex(word) << "\"" << endl;
                break;
            }
            case 22: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "rmLast4(\"" << word << "\") -> \"" << rmLast4(word) << "\"" << endl;
                break;
            }
            case 23: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "pdpCpp(\"" << word << "\") -> \"" << pdpCpp(word) << "\"" << endl;
                break;
            }
            case 24: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "androidCount(\"" << word << "\") -> \"" << androidCount(word) << "\"" << endl;
                break;
            }
            case 25: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "rmD(\"" << word << "\") -> \"" << rmD(word) << "\"" << endl;
                break;
            }
            case 26: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "rmCpp(\"" << word << "\") -> \"" << rmCpp(word) << "\"" << endl;
                break;
            }
            case 27: {
                int s;
                cout << " qiymat bering : " << endl;
                cin >> s;
                cout << "sumDigits(\"" << s << "\") -> \"" << sumDigits(s) << "\"" << endl;
                break;
            }
            case 28: {
                string s;
                cout << "String kiriting : " << endl;
                cin >> s;
                cout << "pdpToJava(\"" << s << "\") -> \"" << pdpToJava(s) << "\"" << endl;
                break;
            }
            case 29: {
                string s;
                cout << "1-String kiriting : " << endl;
                cin.ignore();
                getline(cin, s);
                string t;
                cout << "2-String kiriting : " << endl;
                getline(cin, t);
                cout << "endOther(\"" << s << "\") -> \"" << boolalpha << endOther(s, t) << "\"" << endl;
                break;
            }
            case 30: {
                string s;
                cout << "1-String kiriting : " << endl;
                cin.ignore();
                getline(cin, s);
                int t;
                cout << "2-String kiriting : " << endl;
                cin >> t;
                cout << "repeatEnd(\"" << s << ", " << t << "\") -> \"" << boolalpha << repeatEnd(s, t) << "\"" << endl;
                break;
            }

            case 31: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                if (isPalindrom(word)) {
                    cout << "\"" << word << "\" -> Ha, palindrom" << endl;
                } else {
                    cout << "\"" << word << "\" -> Yo'q, palindrom emas" << endl;
                }
                break;
            }
            case 32: {
                string word;
                cout << "Satrga qiymat bering : " << endl;
                cin.ignore();
                getline(cin, word);
                cout << "countCode(\"" << word << "\") -> " << countCode(word) << endl;
                break;
            }

            default:
                cout << "_____________________________________________________________________________" << endl;
        }
        if (task != 0) {
            cout << "Do you want to run another program? y/n" << endl;
            cin >> toContinue;
        } else {
            toContinue == 'n';
        }
    } while ((toContinue == 'Y') || (toContinue == 'y'));

    return 0;
}

