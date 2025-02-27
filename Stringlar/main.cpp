//Temur Eshboyev
//24/10/2024
//23:14:21
#include <iostream>
#include <string>
using namespace std;

void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18();

void t110(), t111(), t112(), t113(), t114(), t115(), t116(), t117(), t118(), t119(), t120();
void t121(), t122(), t123(), t124(), t125(), t126(), t127(), t128(), t129(), t130();
void t131(), t132(), t133(), t134(), t135(), t136(), t137(), t138(), t139();

void p1(), p2(), p3(), p4(), p5(), p6(), p7(), p8(), p9(), p10();
void p11(), p12(), p13(), p14(), p15(), p16(), p17(), p18(), p19(), p20();

int main() {
    string category;
    int choice;
    char toCont;
    do {
        cout << "________________________________________________________________________________" << endl;
        cout << "Foundation : F  [1-18] \n"
                "Part2      : P2 [1-20]\n"
                "Imtihon    : I  [110-139]" << endl;
        cin >> category;

        if (category == "exit") {
            break;
        }
        cout << "Nechinchi savolni ishlatib ko'rmoqchisiz? ";
        cin >> choice;

        if (category == "f" || category == "foundation" || category == "F" || category == "Foundation") {
            switch (choice) {
                case 1: t1();
                    break;
                case 2: t2();
                    break;
                case 3: t3();
                    break;
                case 4: t4();
                    break;
                case 5: t5();
                    break;
                case 6: t6();
                    break;
                case 7: t7();
                    break;
                case 8: t8();
                    break;
                case 9: t9();
                    break;
                case 10: t10();
                    break;
                case 11: t11();
                    break;
                case 12: t12();
                    break;
                case 13: t13();
                    break;
                case 14: t14();
                    break;
                case 15: t15();
                    break;
                case 16: t16();
                    break;
                case 17: t17();
                    break;
                case 18: t18();
                    break;
                default:
                    cout << "Iltimos berilgan oraliqdan tanlang! [1-18]." << endl;
            }
        } else if (category == "i" || category == "I" || category == "imtihon" || category == "Imtihon") {
            switch (choice) {
                case 110:
                    t110();
                    break;
                case 111:
                    t111();
                    break;
                case 112:
                    t112();
                    break;
                case 113:
                    t113();
                    break;
                case 114:
                    t114();
                    break;
                case 115:
                    t115();
                    break;
                case 116:
                    t116();
                    break;
                case 117:
                    t117();
                    break;
                case 118:
                    t118();
                    break;
                case 119:
                    t119();
                    break;
                case 120:
                    t120();
                    break;
                case 121:
                    t121();
                    break;
                case 122:
                    t122();
                    break;
                case 123:
                    t123();
                    break;
                case 124:
                    t124();
                    break;
                case 125:
                    t125();
                    break;
                case 126:
                    t126();
                    break;
                case 127:
                    t127();
                    break;
                case 128:
                    t128();
                    break;
                case 129:
                    t129();
                    break;
                case 130:
                    t130();
                    break;
                case 131:
                    t131();
                    break;
                case 132:
                    t132();
                    break;
                case 133:
                    t133();
                    break;
                case 134:
                    t134();
                    break;
                case 135:
                    t135();
                    break;
                case 136:
                    t136();
                    break;
                case 137:
                    t137();
                    break;
                case 138:
                    t138();
                    break;
                case 139:
                    t139();
                    break;
                default:
                    cout << "[110 - 139] oraliqda tanlang! " << endl;
            }
        } else if (category == "part-2" || category == "Part-2" || category == "part 2" || category == "PART 2" ||
                   category == "p2" || category == "p" || category == "p 2" || category == "P2" || category == "P 2" ||
                   category == "P") {
            switch (choice) {
                case 1:
                    p1();
                    break;
                case 2:
                    p2();
                    break;
                case 3:
                    p3();
                    break;
                case 4:
                    p4();
                    break;
                case 5:
                    p5();
                    break;
                case 6:
                    p6();
                    break;
                case 7:
                    p7();
                    break;
                case 8:
                    p8();
                    break;
                case 9:
                    p9();
                    break;
                case 10:
                    p10();
                    break;
                case 11:
                    p11();
                    break;
                case 12:
                    p12();
                    break;
                case 13:
                    p13();
                    break;
                case 14:
                    p14();
                    break;
                case 15:
                    p15();
                    break;
                case 16:
                    p16();
                    break;
                case 17:
                    p17();
                    break;
                case 18:
                    p18();
                    break;
                case 19:
                    p19();
                    break;
                case 20:
                    p20();
                    break;
                default:
                    cout << "[1 - 20] oraliqda tanlang! " << endl;
            }
        } else {
            cout <<
                    "Iltimos to'g'ri tanlov kiriting! Tanlov faqat 'imtihon', 'part-2' yoki 'foundation' bo'lishi mumkin"
                    << endl;
        }

        cout << "________________________________________________________________________________" << endl;
        cout << "Do you want to continue? y/n: ";
        cin >> toCont;
    } while (toCont == 'y' || toCont == 'Y');

    cout << "Exiting the program." << endl;
    return 0;
}

void t1() {
    string s;
    int count = 0;
    cout << "Berilgan satrda nechta raqamlari borligini ekranga chiqaring.";
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (isdigit(c)) {
            count++;
        }
    }
    if (count > 0) {
        cout << "Ushbu satrda jami raqamlar : " << count << endl;
    } else {
        cout << "Ushbu satrda raqam mavjud emas!" << endl;
    }
}

void t2() {
    string s;
    bool found = true;
    cout << "Berilgan satrda harf bo’lmagan belgilarni ekranga chiqaring.";
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (!isalpha(s[i])) {
            cout << s[i] << " ";
            found = true;
        }
    }
    if (found == false) {
        cout << "Ushbu satrda harf bo'lmagan belgilar mavjud emas!" << endl;
    }
    cout << endl;
}

void t3() {
    string s;
    bool found = true;
    cout << "Berilgan satrda raqam bo’lmagan begilar joylashgan\n"
            " indekslarni chiqaring." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (!isdigit(s[i])) {
            cout << i << " ";
            found;
        }
    }
    cout << endl;
    if (!found) {
        cout << "Berilgan satrda raqam bo’lmagan begilar joylashgan\n"
                " indekslari yo'q" << endl;
    }
}

void t4() {
    string s;
    int count = 0;
    cout << "Berilgan satrda nechta unli harfi borligini toping. (Unlilar: a, e, i, o, u)" << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    cout << "Ushbu satrda jami unli harflar: " << count << endl;
}

void t5() {
    string s;
    int count = 0;
    cout << "Berilgan satrda nechta undosh harfi borligini toping." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);
        if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            count++;
        }
    }
    cout << "Ushbu satrda jami undosh harflar: " << count << endl;
}

void t6() {
    string s;
    int count = 0;
    int countL = 0;
    cout << "Berilgan satrda katta harflar va kichik harflar sonini toping." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i]) && isupper(s[i])) {
            count++;
        }
        if (isalpha(s[i]) && islower(s[i])) {
            countL++;
        }
    }
    cout << "Katta harflar: " << count << endl;
    cout << "Kichik harflar: " << countL << endl;
}

void t7() {
    string s;
    bool found = true;
    cout << "Berilgan satrda harf bo’lmagan belgilar qaysi indekslarda\n"
            " joylashganini konsolga chiqaring." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (!isalpha(s[i])) {
            cout << i << " ";
            found;
        }
    }
    cout << endl;
    if (!found) {
        cout << "Berilgan satrda harf bo’lmagan begilar joylashgan\n"
                " indekslari yo'q" << endl;
    }
}

void t8() {
    string s;
    cout << "Berilgan satrni uzunligi toq bo’lsa,\n"
            " o’rtadagi 1ta belgini, juft bo’lsa,\n"
            " o’rtadagi 2ta belgini chiqaring.\n"
            " Misol: Python -> th, android -> r." << endl;
    cin.ignore();
    getline(cin, s);
    if (s.length() % 2 != 0) {
        cout << s[(s.length() - 1) / 2] << endl;
    } else {
        cout << s[s.length() / 2 - 1] << s[s.length() / 2] << endl;
    }
}

void t9() {
    string s;
    cout << "Berilgan s satrda harflar soni 5 tadan ko’p bo’lsa,\n"
            " “SALOM”, aks holda “XAYR” sozini ekranga chiqaring." << endl;
    while (true) {
        cin.ignore();
        getline(cin, s);
        for (int i = 0; i < s.length(); ++i) {
            if (s.length() >= 5) {
                cout << "SALOM" << endl;
                break;
            } else {
                cout << "XAYR" << endl;
                break;
            }
        }
    }
}

void t10() {
    string s;
    cout << "Berilgan satrda harflar soni raqamlar sonidan\n"
            " ko’p bo’lsa, PDP sozini aks holda raqamlar kop\n"
            " bolsa, Academy sozini chiqaring." << endl;
    for (int j = 0; j < 3; ++j) {
        cin.ignore();
        getline(cin, s);
        int count = 0;
        int countD = 0;
        for (char c: s) {
            if (isalpha(c)) {
                count++;
            } else if (isdigit(c)) {
                countD++;
            }

            // if (s[i] > 47 && s[i] < 58) {
            //     countA++;
            // }
            // if (s[i] > 64 && s[i] < 91) {
            //     count++;
            // }
        }
        if (count > countD) {
            cout << "PDP" << endl;
        } else if (count == countD) {
            cout << "harflar = raqamlar" << endl;
        } else {
            cout << "boshqa holat" << endl;
        }
    }
}

void t11() {
    string s;
    cout << "Berilgan satrda katta harflar soni kichik\n"
            " harflar soniga teng bo’lsa, satrni birinchi\n"
            " va oxirgi belgisini chiqaring, aks holda teng\n"
            " bolmasa satrni ozini chiqaring." << endl;
    cin.ignore();
    for (int j = 0; j < 3; ++j) {
        getline(cin, s);
        int countU = 0;
        int countL = 0;
        for (char c: s) {
            if (isalpha(c)) {
                if (isupper(c)) {
                    countU++;
                } else if (islower(c)) {
                    countL++;
                }
            }
        }
        if (countU == countL) {
            cout << s[0] << " " << s[s.length() - 1] << endl;
        }
        if (countU != countL) {
            cout << s << endl;
        }
    }
}

void t12() {
    string s;
    bool n;
    cout << "Satr berilgan. Agar satrning oxiri satrning\n"
            " boshidagi 2ta belgi bilan tugasa, true qaytaring.\n"
            " 'edited' → true, 'darsda' → true, 'kiyik' → false" << endl;
    cin.ignore();
    for (int j = 0; j < 3; j++) {
        getline(cin, s);
        if (s[0] == s[s.length() - 2] && s[1] == s[s.length() - 1]) {
            n = true;
        } else if (s[0] == s[s.length() - 1] && s[1] == s[s.length() - 2]) {
            n = false;
        }
        cout << "\"" << s << "\"" << " -> " << boolalpha << n << endl;
    }
}

void t13() {
    string s;
    cout << "Berilgan satrni birinchi uchta harfni chiqaring." << endl;
    cin.ignore();
    getline(cin, s);
    if (s.length() >= 3) {
        cout << "Birinchi uchta harf: " << s.substr(0, 3) << endl;
    } else {
        cout << "Satr uzunligi 3ta harfdan kam" << endl;
    }
}

void t14() {
    string s;
    cout << "Berilgan satrda oxirgi 2ta raqamni chiqaring." << endl;
    cin.ignore();
    getline(cin, s);
    if (s.length() < 2) {
        cout << "Satr uzunligi 2ta harfdan kam " << endl;
    } else {
        cout << s[s.length() - 2] << s[s.length() - 1] << endl;
    }
}

void t15() {
    string s;
    cout << "Berilgan satrda oxirgi 3ta kichik harfini chiqairng" << endl;
    cin.ignore();
    getline(cin, s);
    string lowercase_chars;
    for (int i = s.length(); i >= 0; --i) {
        if (islower(s[i])) {
            lowercase_chars = s[i] + lowercase_chars;
            if (lowercase_chars.length() == 3) {
                break;
            }
        }
    }
    if (lowercase_chars.length() < 3) {
        cout << "Berilgan satrda 3ta kichik harf mavjud emas" << endl;
    } else {
        cout << "Oxirgi 3ta kichik harf: " << lowercase_chars << endl;
    }
}

void t16() {
    string s;
    cout << "Berilgan satrdan ikkinchi uchragan raqamni\n"
            " chiqaring,  agar ikkinchi raqami bolmasa -1\n"
            " chiqaring." << endl;
    cin.ignore();
    getline(cin, s);
    int digitCount = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (isdigit(s[i])) {
            digitCount++;
        }
        if (digitCount == 2) {
            cout << "Ikkinchi raqam : " << s[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
}

void t17() {
    string s;
    cout << "Berilgan satrdan uchinchi uchragan harfni\n"
            " chiqaring, agar uchinchi harfi bolmasa -1\n"
            " chiqaring." << endl;
    cin.ignore();
    getline(cin, s);
    int letterCount = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (isalpha(s[i])) {
            letterCount++;
        }
        if (letterCount == 3) {
            cout << "Uchinchi harf : " << s[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
}

void t18() {
    string s;
    cout << "Berilgan satrdagi toq indeksdagi belgilarni chiqairng." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); i += 2) {
        cout << s[i] << " ";
    }
    cout << endl;
}

void t110() {
    string s;
    int count = 0;
    cout << "Str satrini tarkibida \n"
            "‘*’ belgisi necha marta borligini\n"
            " aniqlovchi dastur tuzing" << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (c == '*') {
            count++;
        }
    }
    if (count > 0) {
        cout << "Ushbu satrda jami '*' belgisi " << count << " marta uchragan" << endl;
    } else {
        cout << "Bu satrda '*' belgisi yo'q!" << endl;
    }
}

void t111() {
    string s;
    cout << "Berilgan str satrida harf bo’lmagan belgilarni ekranga\n"
            " chiqaruvchi dastur tuzing. Masalan: salom123##  →  123##" << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (!isalpha(c)) {
            cout << c << "";
        }
    }
    cout << endl;
}

void t112() {
    string s;
    int count = 0;
    cout << "Str satrini tarkibida nechta harf borligini aniqlovchi dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (isalpha(c)) {
            count++;
        }
    }
    cout << "Jami " << count << "ta harf bor!" << endl;
}

void t113() {
    string s;
    int count = 0;
    cout << "Str satrini tarkibida ‘A’ harfi necha \n"
            "marta borligini aniqlovchi dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (c == 'A') {
            count++;
        }
    }
    if (count > 0) {
        cout << "Ushbu satrda jami 'A' harfi " << count << " marta uchragan" << endl;
    } else {
        cout << "Bu satrda 'A' harfi yo'q!" << endl;
    }
}

void t114() {
    string s;
    cout << "Berilgan str satrdan faqatgina raqamlarini ekranga\n"
            " chiqaradigan dastur tuzing" << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (isdigit(c)) {
            cout << c << "";
        }
    }
    cout << endl;
}

void t115() {
    string s;
    int count = 0;
    cout << "Str satrini tarkibida ‘5’ raqami necha \n"
            "marta borligini aniqlovchi dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (c == '5') {
            count++;
        }
    }
    if (count > 0) {
        cout << "Ushbu satrda jami '5' raqami " << count << " marta uchragan" << endl;
    } else {
        cout << "Bu satrda '5' raqami yo'q!" << endl;
    }
}

void t116() {
    string s;
    cout << "Berilgan str satrdagi dastlabki va oxirgi belgilarini ekranga chiqaruvchi dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    if (s[s.length() - 1] > 0) {
        cout << s[0] << "" << s[s.length() - 1] << endl;
    }
}

void t117() {
    string s;
    cout << "Berilgan str satrida raqam bo’lmagan belgilarni ekranga chiqaruvchi dastur tuzing" << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (!isdigit(c)) {
            cout << c << "";
        }
    }
    cout << endl;
}

void t118() {
    string s;
    int count = 0;
    cout <<
            "Berilgan str satrda harf va raqam bo’lmagan belgilarni nechtaligini ekranga chiqaruvchi dastur tuzing. Masalan: salom123##  →  2ta"
            << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (!isdigit(c) && !isalpha(c)) {
            count++;
        }
    }
    cout << "Jami " << count << "ta" << endl;
}

void t119() {
    string s;
    int countH = 0;
    int countL = 0;
    cout << "Berilgan satrda katta harflar va kichik harflar sonini toping." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            countH++;
        }
        if (islower(s[i])) {
            countL++;
        }
    }
    cout << "Katta harflar soni : " << countH << endl;
    cout << "Kichik harflar soni : " << countL << endl;
}

void t120() {
    string s;
    cout << "Berilgan satrni teskari tartibda ekranga\n"
            " chiqaradigan dastur tuzing.Masalan: \n"
            "foundation -- > noitadnuof" << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = s.size() - 1; i >= 0; --i) {
        cout << s[i];
    }
    cout << endl;
}

void t121() {
    string s;
    int count = 0;
    int countL = 0;
    int countD = 0;
    cout << "Berilgan satrda raqamlar, kichik harflar, katta harflar nechtaligini aniqlaydigan dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i]) && isupper(s[i])) {
            count++;
        }
        if (isalpha(s[i]) && islower(s[i])) {
            countL++;
        }
        if (isdigit(s[i])) {
            countD++;
        }
    }
    cout << "Raqamlar: " << countD << endl;
    cout << "Katta harflar: " << count << endl;
    cout << "Kichik harflar: " << countL << endl;
}

void t122() {
    string s;
    int countA = 0;
    int countD = 0;
    cout << "Bеrilgan str satrda harf va raqam jami necha marta\n"
            " qatnashganini chiqaruvchi dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            countA++;
        }
        if (isdigit(s[i])) {
            countD++;
        }
    }
    cout << "Harflar : " << countA << endl;
    cout << "Raqamlar : " << countD << endl;
}

void t123() {
    string s;
    cout << "Berilgan juft uzunlikdagi str satrdagi o’rtadagi\n"
            " 2ta belgilarini ekranga chiqaruvchi dastur tuzing" << endl;
    cin.ignore();
    getline(cin, s);
    if (s.length() % 2 == 0) {
        cout << s[s.length() / 2 - 1] << s[s.length() / 2] << endl;
    } else {
        cout << "Berilgan string uzunligini qiymati juft emas!" << endl;
    }
}

void t124() {
    string s;
    int sum = 0;
    cout << "Berilgan str satrdan raqamlar yig’indisini ekranga chiqaradigan dastur tuzing" << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (isdigit(c)) {
            sum += c - '0';
        }
    }
    cout << "Stringdagi raqamlar yig'indisi : " << sum << endl;
}

void t125() {
    string s;
    int sum = 1;
    cout << "Bеrilgan str  satrda raqamlar ko’paytmasini chiqaruvchi dastur tuzing" << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (isdigit(c)) {
            sum *= c - '0';
        }
    }
    cout << "Stringdagi raqamlar ko'paytmasi : " << sum << endl;
}

void t126() {
    string s;
    cout << "Berilgan satrda harflar soni raqamlar sonidan\n"
            " ko’p bo’lsa, PDP sozini aks holda raqamlar kop\n"
            " bolsa, Academy sozini chiqaring." << endl;
    for (int j = 0; j < 3; ++j) {
        cin.ignore();
        getline(cin, s);
        int count = 0;
        int countD = 0;
        for (char c: s) {
            if (isalpha(c)) {
                count++;
            } else if (isdigit(c)) {
                countD++;
            }
        }
        if (count > countD) {
            cout << "PDP" << endl;
        } else {
            cout << "ACADEMY" << endl;
        }
    }
}

void t127() {
    string s;
    int count = 0;
    cout << "s satr berilgan. Agar s satrida raqamlar soni,\n"
            " 8 ta dan ko’p bo’lsa PDP, aks holda ACADEMY so’zini\n"
            " chiqaruvchi dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (isdigit(c)) {
            count++;
        }
    }
    if (count >= 8) {
        cout << "PDP" << endl;
    } else {
        cout << "ACADEMY" << endl;
    }
}

void t128() {
    string s;
    cout << "Berilgan str satrda dastlabki 4 ta kichkina harfni\n"
            " ekranga chiqaruvchi dastur tuzing. Masalan: GoOglE\n"
            " Apple → oglp" << endl;
    cin.ignore();
    getline(cin, s);
    string lowercase_chars;
    for (char c: s) {
        if (islower(c)) {
            lowercase_chars += c;
            if (lowercase_chars.length() == 4) {
                break;
            }
        }
    }
    if (lowercase_chars.length() < 4) {
        cout << "Berilgan satrda 4 ta kichkina harf mavjud emas" << endl;
    } else {
        cout << "Dastlabki 4 ta kichkina harf: " << lowercase_chars << endl;
    }
}

void t129() {
    string s;
    cout << "Str satridagi oxirgi 2 katta harfni ekranga chiqaruvchi dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    string uppercase_chars;
    for (int i = s.size() - 1; i >= 0; --i) {
        if (isupper(s[i])) {
            uppercase_chars += s[i];

            if (uppercase_chars.length() == 2) {
                break;
            }
        }
    }

    if (uppercase_chars.length() < 2) {
        cout << "Berilgan satrda 2 ta katta harf mavjud emas" << endl;
    } else {
        cout << "Oxirgi 2 ta katta harf: " << uppercase_chars[1] << uppercase_chars[0] << endl;
    }
}

void t130() {
    string s;
    int count = 0;
    int countL = 0;
    int countH = 0;
    cout << "Berilgan belgini katta yoki kichik harf ekanligini aniqlaydigan\n"
            " dastur tuzing. Agar belgi harf bo’lmasa “harf emas”,\n"
            " katta harf bo’lsa “katta harf”, kichik harf bo’lsa \n"
            "“kichik harf” nomli natijani chop qiling." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            count++;
        }
        if (islower(s[i])) {
            countL++;
        }
        if (!isalpha(s[i])) {
            countH++;
        }
    }
    cout << "Katta harflar : " << count << endl;
    cout << "Kichik harflar : " << countL << endl;
    cout << "Harf emas : " << countH << endl;
}

void t131() {
    string s;
    cout << "Berilgan satrdagi barcha katta harflarni ’*’\n"
            " ga almashiradigan dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (isupper(s[i])) {
            s[i] = '*';
        }
    }
    cout << "Natija: " << s << endl;
}

void t132() {
    string s;
    cout << "Berilgan satrdagi barcha harflarni kattasiga almashtiradigan dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (isalpha(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    cout << "Natija: " << s << endl;
}

void t133() {
    string s;
    cout << "Berilgan satrdagi barcha harflarni ’+’ ga almashiradigan dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (isalpha(s[i])) {
            s[i] = '+';
        }
    }
    cout << "Natija: " << s << endl;
}

void t134() {
    string s;
    cout << "Berilgan str satrida raqamlarni o’rniga ‘&’ belgisini chiqaruvchi dastur tuzing" << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (isdigit(s[i])) {
            s[i] = '&';
        }
    }
    cout << "Natija: " << s << endl;
}

void t135() {
    string s;
    bool n;
    cout << "Kiritilgan str sat rdagi katta harflarni ’*’ ga,\n"
            " kichik harflarni  ’+’ harfga almashtiradigan\n"
            " dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (isupper(s[i])) {
            s[i] = '*';
            n = true;
        }
        if (islower(s[i])) {
            s[i] = '+';
            n = false;
        }
    }
    if (n) {
        cout << "Natija: " << s << endl;
    }
    if (!n) {
        cout << "Natija: " << s << endl;
    }
}

void t136() {
    string s;
    bool n;
    cout << "Kiritilgan satrdagi katta harflarni kichik harfga,\n"
            " kichik harflarni katta harfga almashtiradigan\n"
            " dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
            n = true;
        } else if (islower(s[i])) {
            s[i] = toupper(s[i]);
            n = false;
        }
    }
    if (n) {
        cout << s;
    } else {
        cout << s;
    }
    cout << endl;
}

void t137() {
    string s;
    cout << "Foydalanuvchi tomonidan kiritilgan so‘zdagi ‘a’\n"
            " harfini ‘b’ bilan, ‘b’ harfini esa ‘d’ bilan \n"
            "almashtiruvchi dastur tuzilsin." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if ((s[i]) == 'a') {
            s[i] = 'b';
        } else if ((s[i]) == 'b') {
            s[i] = 'd';
        }
    }
    cout << "Natija: " << s << endl;
}

void t138() {
    string s;
    cout << "Foydalanuvchi tomonidan kiritilgan parol ya`ni\n"
            " passwordni quyidagi shartlarga mos kelishini\n"
            " tekshiradigan dastur tuzing." << endl;
    cin.ignore();
    getline(cin, s);
    int countA, countL = 0, countStar = 0, countD = 0;
    for (char c: s) {
        if (islower(c)) {
            countL++;
        } else if (c == '*') {
            countStar++;
        } else if (isdigit(c)) {
            countD++;
        }
    }
    countA = s.length();
    if (countA >= 8 && countL >= 1 && countStar >= 1 && countD >= 1) {
        cout << "Omadli Urinish!" << endl;
    } else {
        cout << "Qayta urining!" << endl;
    }
}

void t139() {
    string s;
    bool n = true;
    cout << "Berilgan str satrda faqatgina belgi va raqam qatnashsa\n"
            " true, aks holda false degan yozuv chiqaradigan dastur tuzing" << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (!isalnum(c)) {
            n = false;
        }
    }
    cout << s << " - > " << boolalpha << n << endl;
}

void p1() {
    string s;
    cout << "Berilgan satrni barcha unli harflarini ‘*’ bilan almashtiring." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            s[i] = '*';
        }
    }
    cout << s << endl;
}

void p2() {
    string s;
    cout << "Berilgan satrni barcha unli harflarini ‘*’ bilan almashtiring." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') && isalpha(ch)) {
            s[i] = '+';
        }
    }
    cout << s << endl;
}

void p3() {
    string s;
    cout << "Berilgan satrni hamma kichik harfini katta harfga almashtiring." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;
}

void p4() {
    string s;
    cout << "Berilgan satrni hamma katta harfini kichik harfga almashtiring." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
}

void p5() {
    string s;
    cout << "Berilgan satrni katta harflarini kichikka, kichik harflarini katta harfga almashtiring." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        } else if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;
}

void p6() {
    string s;
    cout << "Berilgan satrni barcha ‘a’ harflarini ‘b’ ga almashtiring." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if ((s[i]) == 'a') {
            s[i] = 'b';
        }
    }
    cout << s << endl;
}

void p7() {
    string s;
    cout << "Foydalanuvchi tomonidan kiritilgan so‘zdagi ‘a’\n"
            " harfini ‘b’ bilan, ‘b’ harfini esa ‘d’ bilan \n"
            "almashtiruvchi dastur tuzilsin." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if ((s[i]) == 'a') {
            s[i] = 'b';
        } else if ((s[i]) == 'b') {
            s[i] = 'd';
        }
    }
    cout << s << endl;
}

void p8() {
    string s;
    cout <<
            "Berilgan satr ikki ta teng bo’lakka bo’lingan bo’lib, 1-yarmidagi barcha belgilarini ‘*’ ga almashtiring. “Google” -> “***gle”"
            << endl;
    cin.ignore();
    getline(cin, s);
    for (int j = 0; j < s.length() / 2; ++j) {
        s[j] = '*';
    }
    cout << s << endl;
}

void p9() {
    string s;
    cout << "Berilgan satr ikki ta teng bo’lakka bo’lingan bo’lib,\n"
            " 2-yarmidagi barcha belgilarini‘+’ ga almashtiring.\n"
            " “Google” -> “Goo+++”" << endl;
    cin.ignore();
    getline(cin, s);
    for (int j = s.length() / 2; j < s.length(); ++j) {
        s[j] = '+';
    }
    cout << s << endl;
}

void p10() {
    string s;
    cout << "Berilgan toq uzunlikdagi satrni o’rtadagi belgisini\n"
            " ‘|’ bilan almashitrib ekranga chiqaring.NETFLIX -> \n"
            "NET|LIX" << endl;
    cin.ignore();
    getline(cin, s);
    s[s.length() / 2] = '|';
    cout << s << endl;
}

void p11() {
    string s;
    cout << "Berilgan toq uzunlikdagi satrni o’rtadagi 3 ta\n"
            " belgisini ‘*’ bilan almashitring." << endl;
    cin.ignore();
    getline(cin, s);
    if (s.length() % 2 != 0) {
        s[s.length() / 2] = '*';
        s[s.length() / 2 - 1] = '*';
        s[s.length() / 2 + 1] = '*';
        cout << s << endl;
    } else {
        cout << "Kiritilgan satr uzunligi toq emas." << endl;
    }
}

void p12() {
    string a, b;
    cout << "2ta a va b satrlar berilgan. Shu satrlarni biri\n"
            " kalta, biri uzun bo’lsin. kalta+uzun+kalta\n"
            " korinishda yangi satrni ekranga chiqaring. " << endl;
    cin.ignore();
    getline(cin, a);
    getline(cin, b);
    if (a.length() > b.length()) {
        cout << b << a << b << endl;
    } else {
        cout << a << b << a << endl;
    }
}

void p13() {
    string s;
    cout << "Berilgan satrni barcha harf va raqam bo’lmagan belgilarini chiqaring." << endl;
    cin.ignore();
    getline(cin, s);
    for (char c: s) {
        if (!isalnum(c)) {
            cout << c;
        }
    }
    cout << endl;
}

void p14() {
    string a, b;
    bool n = false;
    cout << "2ta satr berilgan. Shu satrlar katta-kichik harflarini\n"
            " hisobga olmaganda shu satrlar teng bo’lsa, true aks\n"
            " holda false chiqaring. (“GoOglE”, “gooGle” -> true)" << endl;
    cin.ignore();
    getline(cin, a);
    string originalA = a;
    getline(cin, b);
    string originalB = b;
    for (int i = 0; i < a.length(); ++i) {
        a[i] = tolower(a[i]);
    }
    for (int j = 0; j < b.length(); ++j) {
        b[j] = tolower(b[j]);
    }
    if (a == b) n = true;
    cout << originalA << " , " << originalB << " -> " << boolalpha << n << endl;
}

void p15() {
    string s;
    int count = 0;
    cout << "Satr berilgan. Satrda “abc” so’zi nechi marta joylashganligini toping." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i - 1] == 'a' && s[i] == 'b' && s[i + 1] == 'c') {
            count++;
        }
    }
    cout << "Jami : " << count << " marta uchragan!" << endl;
}

void p16() {
    string s;
    bool q = false;
    cout << "Satr berilgan. Satrda “c++” so’zi qaysi indekslarda joylashganligini toping." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i - 1] == 'c' && s[i] == '+' && s[i + 1] == '+') {
            cout << "index [ " << i - 1 << " , " << i << " , " << i + 1 << " ]" << endl;
            q = true;
        }
    }
    if (!q) {
        cout << "Ushbu satrda c++ so'zi yo'q!" << endl;
    }
}

void p17() {
    string s;
    int count = 0;
    cout << "Satr berilgan. Satrda “java” so’zi nechi marta joylashganligini toping." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i - 2] == 'j' && s[i - 1] == 'a' && s[i] == 'v' && s[i + 1] == 'a') {
            count++;
        }
    }
    cout << "Jami : " << count << " marta uchragan!" << endl;
}

void p18() {
    string s;
    cout << "Satr berilgan. Satrda “code” so’zi necha marta borligini qaytaring.\n"
            " faqat “code” so’zidagi d harfi o’rnida ixtiyoriy harf bo’lishi mumkin. \n"
            "“cope” yoki “cooe”." << endl;
    cin.ignore();
    while (true) {
        getline(cin, s);
        int count = 0;
        for (int i = 0; i <= s.length() - 4; ++i) {
            if (s[i] == 'c' && s[i + 1] == 'o' && s[i + 3] == 'e') {
                count++;
            }
        }
        cout << "countCode(\"" << s << "\") - > " << count << endl;
    }
}

void p19() {
    string a, b;
    int n;
    cout << "2ta word va sep nomli satrlar va n soni berilgan.\n"
            " n ta wordni birin ketin joylashtiring va orasiga\n"
            " sep satrlarni qoying. Hosil bolgan satrni qaytaring." << endl;
    cin.ignore();
    cout << "a satrga matn kiriting :";
    getline(cin, a);
    cout << "b satrga matn kiriting :";
    getline(cin, b);
    cout << "nechi marta :";
    cin >> n;
    if (n <= 0) {
        cout << endl;
        return;
    }
    cout << a;
    for (int i = 1; i < n; ++i) {
        cout << b << a;
    }
    cout << endl;
}

void p20() {
    string s;
    int count = 0;
    cout << "Yulduzchalar bilan aralashtirgan holda 1ta satr berilgan.\n"
            " Satrda shunday yulduzchalar sonini sanangki, shu\n"
            " yulduzchalardan 1ta oldingi va 1ta keyingi harflari teng bolsin." << endl;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length() - 2; ++i) {
        if ((s[i] == s[i + 2]) && s[i + 1] == '*') {
            count++;
        }
    }
    cout << s << " -> " << count << endl;
}
