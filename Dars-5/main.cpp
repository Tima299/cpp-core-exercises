/* Temur Eshboyev
 * telegram && instagram = @eshbcyev
 * 04:54:40
 */
#include <iostream>
using namespace std;
void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20_way1(), t20_way2();
void t21(), t22(), t23(), t24(), t25(), t26(), t27(), t28(), t29(), t30();
void t31(), t32(), t33(), t34(), t35(), t36(), t37(), t38(), t39(), t40();
void t41(), t42(), t43(), t44(), t45(), t46(), t47(), t48(), t49(), t50();

int main() {
    int task;
    char continueChoice;
    do {
        cout << "Select a task (1-50, to exit 0)" << endl;
        cout << "___________________________________________________" << endl;

        cin >> task;
        switch (task) {
            case 1:
                t1();
                break;
            case 2:
                t2();
                break;
            case 3:
                t3();
                break;
            case 4:
                t4();
                break;
            case 5:
                t5();
                break;
            case 6:
                t6();
                break;
            case 7:
                t7();
                break;
            case 8:
                t8();
                break;
            case 9:
                t9();
                break;
            case 10:
                t10();
                break;
            case 11:
                t11();
                break;
            case 12:
                t12();
                break;
            case 13:
                t13();
                break;
            case 14:
                t14();
                break;
            case 15:
                t15();
                break;
            case 16:
                t16();
                break;
            case 17:
                t17();
                break;
            case 18:
                t18();
                break;
            case 19:
                t19();
                break;
            case 20:
                cout << "1-usul" << endl;
                t20_way1();
                cout << "2-usul" << endl;
                t20_way2();
            case 21:
                t21();
                break;
            case 22:
                t22();
                break;
            case 23:
                t23();
                break;
            case 24:
                t24();
                break;
            case 25:
                t25();
                break;
            case 26:
                t26();
                break;
            case 27:
                t27();
                break;
            case 28:
                t28();
                break;
            case 29:
                t29();
                break;
            case 30:
                t30();
                break;
            case 31:
                t31();
                break;
            case 32:
                t32();
                break;
            case 33:
                t33();
                break;
            case 34:
                t34();
                break;
            case 35:
                t35();
                break;
            case 36:
                t36();
                break;
            case 37:
                t37();
                break;
            case 38:
                t38();
                break;
            case 39:
                t39();
                break;
            case 40:
                t40();
                break;
            case 41:
                t41();
                break;
            case 42:
                t42();
                break;
            case 43:
                t43();
                break;
            case 44:
                t44();
                break;
            case 45:
                t45();
                break;
            case 46:
                t46();
                break;
            case 47:
                t47();
                break;
            case 48:
                t48();
                break;
            case 49:
                t49();
                break;
            case 50:
                t50();
                break;
            default:
                cout << "___________________________________________________" << endl;
        }
        if (task != 0) {
            cout << "Do you want to run another task? (y/n): ";
            cin >> continueChoice;
        } else {
            continueChoice = 'n';
        }
    } while (continueChoice == 'y' || continueChoice == 'Y');
    return 0;
}

void t1() {
    int a;
    cout << "Sonni juft sonlikka teshirish uchun qiymat bering: " << endl;
    cin >> a;
    bool n = a % 2 == 0;
    cout << boolalpha << "Sizning natijangiz: " << n << endl;
}

void t2() {
    int a;
    cout << "Sonni musbat sonlikka tekshirish uchun qiymat bering: " << endl;
    cin >> a;
    bool n = !(a < 0);
    cout << boolalpha << "Sizning natijangiz: " << n << endl;
}

void t3() {
    int a;
    cout << "Sonni ikki xonali son ekanligini tekshirish uchun qiymat bering: " << endl;
    cin >> a;
    bool n = a > 9 && a < 100;
    cout << boolalpha << "Sizning natijangiz: " << n << endl;
}

void t4() {
    int a, b;
    cout << "A soni 2 dan katta va B soni 3 dan kichik yoki tengligini tekshirish uchun. Ikkita qiymat bering!" << endl;
    cout << "A =  ";
    cin >> a;
    cout << "B =  ";
    cin >> b;
    bool m = a > 2 && b <= 3;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t5() {
    int a, b;
    cout << "A soni musbat yoki B soni -2 dan kichikligini tekshirish uchun. Ikkita qiymat bering!" << endl;
    cout << "A =  ";
    cin >> a;
    cout << "B =  ";
    cin >> b;
    bool m = a > 0 || b < -2;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t6() {
    int a, b;
    cout << "A soni juft son yoki B soni 10 dan kattaligini tekshirish uchun. Ikkita qiymat bering!" << endl;
    cout << "A =  ";
    cin >> a;
    cout << "B =  ";
    cin >> b;
    bool m = a % 2 == 0 || b > 10;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t7() {
    int a, b;
    cout << "A soni toq son va B soni juft sonligini tekshirish uchun. Ikkita qiymat bering!" << endl;
    cout << "A =  ";
    cin >> a;
    cout << "B =  ";
    cin >> b;
    bool m = a % 2 != 0 && b % 2 == 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t8() {
    int a, b, c;
    cout << "A soni juft son va B soni juft son va\n C toq sonligini tekshirish uchun. Ikkita qiymat bering!" << endl;
    cout << "A =  ";
    cin >> a;
    cout << "B =  ";
    cin >> b;
    cout << "C =  ";
    cin >> c;
    bool m = a % 2 == 0 && b % 2 == 0 && c % 2 != 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t9() {
    int a, b, c;
    cout << "a, b va c sonlar yigindisi toq son va b soni 10 dan kichik son." << endl;
    cout << "A =  ";
    cin >> a;
    cout << "B =  ";
    cin >> b;
    cout << "C =  ";
    cin >> c;
    bool m = (a + b + c) % 2 != 0 && b < 10;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t10() {
    int a, b, c;
    cout << "a soni b dan kichik hamda b soni c dan kichik." << endl;
    cout << "A =  ";
    cin >> a;
    cout << "B =  ";
    cin >> b;
    cout << "C =  ";
    cin >> c;
    bool m = a < b && b < c;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t11() {
    int a;
    cout << "a soni 10 va 15 oraliqda joylashgan" << endl;
    cin >> a;
    bool m = a > 10 && a < 15;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t12() {
    int a, b;
    cout << "2 ta a va b butun sonlar berilgan. Rostlikka tekshiring:\n Ularning yig’indisi 10...19 oraliqda joylashgan"
            << endl;
    cout << "A =  ";
    cin >> a;
    cout << "B =  ";
    cin >> b;
    bool m = (a + b) > 10 && (a + b) < 19;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t13() {
    int a, b;
    cout << "2 ta a va b sonlar berilgan. Rostlikka tekshiring:\n Shu sonlarni yig’indisi yoki ayirmasi 10 ga teng." <<
            endl;
    cout << "A =  ";
    cin >> a;
    cout << "B =  ";
    cin >> b;
    bool m = (b - a) == 10 || (a - b) == 10 || (a + b) == 10;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t14() {
    int a, b;
    cout <<
            "2 ta a va b sonlar berilgan. Bu sonlarni birontasi 7 ga teng bo’lsa, yoki ularning yig’indisi yoki ularning farqi 7 bo’lsa,\n ekranga true, aks holda false dastur tuzing"
            << endl;
    cout << "A =  ";
    cin >> a;
    cout << "B =  ";
    cin >> b;
    bool m = (a == 7) || (b == 7) || (a - b) == 7 || (b - a) == 7 || (a + b) == 7;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t15() {
    int a, b;
    cout << "Ikkita butun a va b sonlar berilgan. Jumlani rostlikka tekshiring:\n a va b sonlari toq sonlar." << endl;
    cout << "A =  ";
    cin >> a;
    cout << "B =  ";
    cin >> b;
    bool m = a % 2 != 0 && b % 2 != 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t16() {
    int a;
    cout << "Musbat butun son berilgan. Jumlani rostlikka tekshiring:\n Berilgan son ikki xonali juft son." << endl;
    cin >> a;
    bool m = (a > 9 && a < 100) && a % 2 == 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t17() {
    int a;
    cout << "Musbat butun son berilgan. Jumlani rostlikka tekshiring:\n Berilgan son uch xonali toq son." << endl;
    cin >> a;
    bool m = a > 0 && a > 100 && a < 1000 && a % 2 != 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t18() {
    int a;
    cout << "Musbat butun son berilgan. Jumlani rostlikka tekshiring:\n Berilgan son to’rt xonali juft son" << endl;
    cin >> a;
    bool m = a > 0 && a > 999 && a < 10000 && a % 2 == 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t19() {
    int a, b, c;
    cout << "Jumlani rostlikka tekshiring: Berilgan uchta butun\n sonlarning hech bo’lmaganda ikkitasi bir biriga teng."
            << endl;
    cout << "A =  ";
    cin >> a;
    cout << "B =  ";
    cin >> b;
    cout << "C =  ";
    cin >> c;
    bool m = a == b || b == c || c == a;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t20_way1() {
    int n;
    cout << "Sonni kiriting: ";
    cin >> n;
    string son = to_string(n);
    for (int i = 0; i < son.length(); i++) {
        for (int j = i + 1; j < son.length(); j++) {
            if (son[i] == son[j]) {
                cout << "Siz kiritgan sonda turli raqamlar mavjud emas" << endl;
                return;
            }
        }
    }
    cout << "Siz kiritgan sonda turli raqamlar mavjud" << endl;
}

void t20_way2() {
    int n;
    cout << "Jumlani rostlikka tekshiring:\n Berilgan uch xonali sonning barcha raqamlari xar hil" << endl;
    cin >> n;
    bool m = (n % 10 != n / 10 % 10) && (n / 10 % 10 != n / 100 % 10) && (n / 100 % 10 != n % 10);
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t21() {
    int n;
    cout <<
            "Jumlani rostlikka tekshiring:\n Berilgan uch xonali sonning raqamlari ketma ket o’suvchi bo’lib joylashgan."
            << endl;
    cin >> n;
    int a = n / 100 % 10;
    int b = n / 10 % 10;
    int c = n % 10;
    bool m = (c > b) && (b > a);
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t22() {
    int n;
    cout <<
            "Jumlani rostlikka tekshiring: Berilgan uch xonali sonning raqamlari\n ketma ket o’suvchi yoki kamayuvchi bo’lib joylashgan."
            << endl;
    cin >> n;
    int a = n / 100 % 10;
    int b = n / 10 % 10;
    int c = n % 10;
    bool m = (c > b) && (b > a) || (a > b) && (b > c);
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t23() {
    int n;
    cout <<
            "Jumlani rostlikka tekshiring: Berilgan uch xonali sonni\n chapdan o’qiganda ham, o’ngdan o’qiganda ham bir xil."
            << endl;
    cin >> n;
    int a = n / 100 % 10;
    int b = n / 10 % 10;
    int c = n % 10;
    bool m = c == a || a == b && b == c;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t24() {
    int a;
    cout << "Rostlikga tekshiring. Berilgan a sonni 7\n ga bo'linadigan juft sonlikka tekshiring." << endl;
    cin >> a;
    bool m = (a % 7 == 0) && (a % 2 == 0);
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t25() {
    int a;
    cout << "Rostlikga tekshiring.\n Berilgan a sonni 4ga bolinadigan 3 xonali son." << endl;
    cin >> a;
    bool m = (a % 4 == 0) && (a > 99 && a < 1000);
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t26() {
    int a;
    cout << "Rostlikga tekshiring.\n Berilgan a sonni 2ga bolinib 3 ga bolinmaydigan son." << endl;
    cin >> a;
    bool m = (a % 2 == 0 && a % 3 != 0);
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t27() {
    int a, b;
    cout << "Rostlikga tekshiring.\n Berilgan a va b sonlarni yigindisi 3ga bolinadigan son." << endl;
    cin >> a >> b;
    bool m = (a + b) % 3 == 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t28() {
    int a, b, c;
    cout << "Rostlikga tekshiring.\n Berilgan a, b va c sonlarni kopaytmasi 4 ga bolinmaydigan son." << endl;
    cin >> a >> b >> c;
    bool m = (a * b * c) % 4 != 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t29() {
    int a, b;
    cout <<
            "Rostlikga tekshiring. Ikkta 3 xonali a va b soni berilgan.\n a sonning raqamlari yig’indisi b sonnning raqamlari yig’indisiga teng."
            << endl;
    cin >> a >> b;
    int c = (a % 10 + a / 10 % 10 + a / 100 % 10);
    int d = (b % 10 + b / 10 % 10 + b / 100 % 10);
    bool m = (a > 99 && a < 1000) && (b > 99 && b < 1000) && c == d;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t30() {
    int n;
    cout << "Rostlikga tekshiring. Berilgan 3 xonali a sonning raqamlari\n yig’indisi 3ga bo’linib 4ga bolinmaydi. " <<
            endl;
    cin >> n;
    int a = n / 100 % 10;
    int b = n / 10 % 10;
    int c = n % 10;
    int d = a + b + c;
    bool m = (n > 99 && n < 1000) && (d % 3 == 0 && d % 4 != 0);
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t31() {
    int n;
    cout << "Rostlikga tekshiring. 3 xonali a soni berilgan.\n A sonini yuzlar xonasidagi raqam eng kattasi." << endl;
    cin >> n;
    int a = n / 100 % 10;
    int b = n / 10 % 10;
    int c = n % 10;
    bool m = (c < b || b < c || c == b) && b < a;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t32() {
    int n;
    cout <<
            "Rostlikga tekshiring. a soni berilgan.\n Berilgan 4 xonali sonni birlar xonasi b-n minglar xonasidagi raqamlari\n yig'indisi o'nlar xonasidagi va yuzlar xonasidagi raqamlar yig'indisiga teng."
            << endl;
    cin >> n;
    int a = n / 1000 % 10;
    int b = n / 100 % 10;
    int c = n / 10 % 10;
    int d = n % 10;
    bool m = d + a == b + c;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t33() {
    int a, b, c, d;
    cout << "Rostlikga tekshiring. a , b , c , d sonlari berilgan.\n Shu sonlar yigindisi 6 ga bo’linadi." << endl;
    cin >> a >> b >> c >> d;
    bool m = ((a + b + c + d) % 2 == 0 && (a + b + c + d) % 3 == 0);
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t34() {
    int n;
    cout << "Rostlikga tekshiring. Berilgan 3 xonali a sonni\n birlar xonasidagi raqam eng kichigidir." << endl;
    cin >> n;
    int a = n / 100 % 10;
    int b = n / 10 % 10;
    int c = n % 10;
    bool m = (a < b || b < a || a == b) && b > c && a > c;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t35() {
    int n;
    cout << "Rostlikga tekshiring. Berilgan 4 xonali sonda\n 7 raqami ishtirok etgan yoki etmaganligini chiqaring." <<
            endl;
    cin >> n;
    int a = n / 1000 % 10;
    int b = n / 100 % 10;
    int c = n / 10 % 10;
    int d = n % 10;
    bool m = a == 7 || b == 7 || c == 7 || d == 7;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t36() {
    int a, b, c, d;
    cout << "4ta berilgan sonni yig’indisi 3ga bo’linib\n 2 ga bo’linmasligiga tekshiring." << endl;
    cin >> a >> b >> c >> d;
    bool m = (a + b + c + d) % 3 == 0 && (a + b + c + d) % 2 != 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t37() {
    int a;
    cout << "Berilgan a son 6 ga bo’linadigan manfiy sonlikka tekshiring." << endl;
    cin >> a;
    bool m = a < 0 && a % 6 == 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t38() {
    int a;
    cout << "Berilgan a son 3 xonali manfiy son ekanligini tekshiring." << endl;
    cin >> a;
    bool m = a > -1000 && a < -99;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t39() {
    int n, k;
    cout <<
            "Rostlikka tekshiring. 1ta 4 xonali a va 1ta bir xonali b\n sonlar berilgan. a sonning raqamlar o’rta arifmetigi b ga tengligiga tekshiring."
            << endl;
    cin >> n >> k;
    int a = n / 1000 % 10;
    int b = n / 100 % 10;
    int c = n / 10 % 10;
    int d = n % 10;
    int mean = a + b + c + d;
    bool m = (n > 999) && (n < 10000) && (k > -1) && (k < 10) && mean / 4 == k;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t40() {
    int n;
    cout << "Berilgan yilning kabisa yil ekanligini tekshiring." << endl;
    cin >> n;
    bool m = ((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0);
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t41() {
    int a, b;
    cout << "Rostlikga tekshiring. Berilgan a va b sonlarni faqat 1tasi musbat son." << endl;
    cin >> a >> b;
    bool m = (a > 0 && b < 0) || (a < 0 && b > 0);
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t42() {
    int a, b;
    cout << "Rostlikga tekshiring. Berilgan a va b sonlarni kamida 1tasi juft son." << endl;
    cin >> a >> b;
    bool m = a % 2 == 0 || b % 2 == 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t43() {
    int a, b;
    cout << "Rostlikga tekshiring. Berilgan a va b sonlarni ikkisi ham toq son." << endl;
    cin >> a >> b;
    bool m = a % 2 != 0 && b % 2 != 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t44() {
    int a, b;
    cout <<
            "Ikkita butun a va b sonlar berilgan.\n Jumlani rostlikka tekshiring: a va b sonlarning hech bo’lmaganda bittasi toq son."
            << endl;
    cin >> a >> b;
    bool m = a % 2 != 0 || b % 2 != 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t45() {
    int a, b;
    cout <<
            "Ikkita butun a va b sonlar berilgan.\n Jumlani rostlikka tekshiring: a va b sonlarning faqat bittasi toq son."
            << endl;
    cin >> a >> b;
    bool m = a % 2 != 0 ^ b % 2 != 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t46() {
    int a, b;
    cout <<
            "Ikkita butun a va b sonlar berilgan. Jumlani rostlikka tekshiring:\n a va b sonlarning ikkalasi ham yoki toq son yoki juft son."
            << endl;
    cin >> a >> b;
    bool m = (a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0);
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t47() {
    int a, b, c;
    cout << "Uchta butun a, b, c sonlar berilgan. Jumlani rostlikka tekshiring: a, b, c sonlarning har biri musbat." <<
            endl;
    cin >> a >> b >> c;
    bool m = a > 0 && b > 0 && c > 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t48() {
    int a, b, c;
    cout <<
            "Uchta butun a, b, c sonlar berilgan. Jumlani rostlikka tekshiring:\n a, b, c sonlarning hech bo’lmaganda bittasi toqson."
            << endl;
    cin >> a >> b >> c;
    bool m = a % 2 != 0 || b % 2 != 0 || c % 2 != 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t49() {
    int a, b, c;
    cout <<
            "Uchta butun a, b, c sonlar berilgan. Jumlani rostlikka tekshiring:\n a, b, c sonlarning faqat bittasi musbat."
            << endl;
    cin >> a >> b >> c;
    bool m = a > 0 ^ b > 0 ^ c > 0;
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}

void t50() {
    int a, b, c;
    cout <<
            "Uchta butun a, b, c sonlar berilgan. Jumlani rostlikka tekshiring:\n a, b, c sonlarning faqat ikkitasi musbat son."
            << endl;
    cin >> a >> b >> c;
    bool m = (a > 0 && b > 0) || (a > 0 && c > 0) || (b > 0 && c > 0);
    cout << "Sizning natijangiz = " << boolalpha << m << endl;
}
