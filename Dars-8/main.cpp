//Temur Eshboyev
//05/10/2024  - 18:12:43
#include <iostream>
using namespace std;
void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20();
bool isDayExists(int d, int m);
void number_to_words(int n);
void getMonthName(int m);
int main() {
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 20, 0-chiqish)" << endl;
        cout << "_____________________________________________________________________________" << endl;
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
                t20();
            break;
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

void t1() {
    int a;
    cout << "1-7 gacha butun sonlar berilgan. Kiritilgan songa mos ravishda\n"
            " hafta kunlarini ekranga chiqaruvchi programma tuzilsin.\n"
            " (1-Dushanba, 2-Seshanba, …)" << endl;
    cin >> a;
    switch (a) {
        case 1:
            cout << "1 - Dushanba" << endl;
            break;
        case 2:
            cout << "2 - Seshanba" << endl;
            break;
        case 3:
            cout << "3 - Chorshanba" << endl;
            break;
        case 4:
            cout << "4 - Payshanba" << endl;
            break;
        case 5:
            cout << "5 - Juma" << endl;
            break;
        case 6:
            cout << "6 - Shanba" << endl;
            break;
        case 7:
            cout << "7 - Yakshanba" << endl;
            break;
        default:
            cout << "Siz kiritgan hafta kuni mavjud emas!" << endl;
    }
}

void t2() {
    int a;
    cout << "K butun soni berilgan. Baho natijalarini chiqaruvchi programma \n"
            "tuzilsin. (1-yomon, 2-qoniqarsiz, 3-qoniqarli, 4-yaxshi, 5-a’lo).\n"
            " Agar k ga boshqa son kiritilsa, “xato” deb chiqarilsin." << endl;
    cin >> a;
    switch (a) {
        case 1:
            cout << "1 - yomon" << endl;
            break;
        case 2:
            cout << "2 - qoniqarsiz" << endl;
            break;
        case 3:
            cout << "3 - qoniqarli" << endl;
            break;
        case 4:
            cout << "4 - yaxshi" << endl;
            break;
        case 5:
            cout << "5 - a'lo" << endl;
            break;
        default:
            cout << "Xato!" << endl;
    }
}

void t3() {
    int a;
    cout << "Oy raqami berilgan. Kiritilgan tartib raqamdagi oy nomini\n"
            " chiqaruvchi programma tuzilsin. (3 -> mart, 11 -> noyabr)" << endl;
    cin >> a;
    switch (a) {
        case 1:
            cout << "1 - yanvar" << endl;
            break;
        case 2:
            cout << "2 - fevral" << endl;
            break;
        case 3:
            cout << "3 - mart" << endl;
            break;
        case 4:
            cout << "4 - aprel" << endl;
            break;
        case 5:
            cout << "5 - may" << endl;
            break;
        case 6:
            cout << "6 - iyun" << endl;
            break;
        case 7:
            cout << "7 - iyul" << endl;
            break;
        case 8:
            cout << "8 - avgust" << endl;
            break;
        case 9:
            cout << "9 - sentyabr" << endl;
            break;
        case 10:
            cout << "10 - oktyabr" << endl;
            break;
        case 11:
            cout << "11 - noyabr" << endl;
            break;
        case 12:
            cout << "12 - dekabr" << endl;
            break;
        default:
            cout << "Siz kiritgan oy mavjud emas!" << endl;
    }
}

void t4() {
    int a;
    cout << "Oy raqami berilgan. Kiritilgan tartib raqamdagi oy qaysi faslga\n"
            " tegishli ekanligini chiqaruvchi programma tuzilsin. \n"
            "(3 -> bahor, 11 -> kuz)" << endl;
    cin >> a;
    switch (a) {
        case 1:
        case 2:
        case 3:
            cout << "Qish" << endl;
            break;
        case 4:
        case 5:
        case 6:
            cout << "Bahor" << endl;
            break;
        case 7:
        case 8:
        case 9:
            cout << "Yoz" << endl;
            break;
        case 10:
        case 11:
        case 12:
            cout << "Kuz" << endl;
            break;
        default:
            cout << "Bunday oy mavjud emas!" << endl;
    }
}

void t5() {
    int a;
    cout << "Oy raqami berilgan. Shu oyda nechta kun\n"
            " borligini chiqaruvchi programma tuzilsin." << endl;
    cin >> a;
    switch (a) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Bu oyda 31 kun bor." << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Bu oyda 30 kun bor." << endl;
            break;
        case 2:
            cout << "Bu oyda 28 yoki 29 kun bor (yilga bog'liq)." << endl;
            break;
        default:
            cout << "Iltimos, 1 dan 12 gacha bo'lgan raqamni kiriting." << endl;
    }
}

void t6() {
    int a;
    cout << "1 dan 10gacha ixtiyoriy son berilgan.\n"
            " Shu sonni juft yoki toqligini ekranga chiqairng." << endl;
    cin >> a;
    switch (a) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            cout << "Bu son toq!" << endl;
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            cout << "Bu son juft!" << endl;
            break;
        default:
            cout << "faqat 1-10 bo'lgan sonlar!" << endl;
    }
}

void t7() {
    int a;
    cout << "Foydalanuvchi tamonidan kiritilgan n sonini so‘zlar yordamida ifodalovchi\n"
            " dastur tuzilsin. n soni 1 dan katta 99 dan kichik deb olinsin.\n"
            " Misol uchun: n = 27 Natija: yigirma yetti" << endl;
    cin >> a;
    int o = a / 10 % 10;
    int b = a % 10;
    switch (o) {
        case 1:
            cout << "o'n ";
            break;
        case 2:
            cout << "yigirma ";
            break;
        case 3:
            cout << "o'ttiz ";
            break;
        case 4:
            cout << "qiriq ";
            break;
        case 5:
            cout << "ellik";
            break;
        case 6:
            cout << "oltmish ";
            break;
        case 7:
            cout << "yetmish ";
            break;
        case 8:
            cout << "sakson ";
            break;
        case 9:
            cout << "to'qson ";
            break;
        default:
            cout << "Berilgan son mavjud emas! " << endl;
    }
    switch (b) {
        case 1:
            cout << "bir " << endl;
            break;
        case 2:
            cout << "ikki " << endl;
            break;
        case 3:
            cout << "uch " << endl;
            break;
        case 4:
            cout << "to'rt " << endl;
            break;
        case 5:
            cout << "besh " << endl;
            break;
        case 6:
            cout << "olti " << endl;
            break;
        case 7:
            cout << "yetti " << endl;
            break;
        case 8:
            cout << "sakkiz " << endl;
            break;
        case 9:
            cout << "to'qqiz " << endl;
            break;
        default:
            cout << "Berilgan son mavjud emas!" << endl;
    }
}

void t8() {
    int a;
    cout << "Foydalanuvchi tamonidan kiritilgan n sonini so‘zlar yordamida ifodalovchi\n"
            " dastur tuzilsin. n soni 1 dan katta 999 dan kichik deb olinsin.\n"
            " Misol uchun: n = 257 Natija: ikki yuz ellik yetti" << endl;
    cin >> a;
    int y = a / 100 % 10;
    int o = a / 10 % 10;
    int b = a % 10;
    switch (y) {
        case 1:
            cout << "bir yuz ";
            break;
        case 2:
            cout << "ikki yuz ";
            break;
        case 3:
            cout << "uch yuz ";
            break;
        case 4:
            cout << "to'rt yuz ";
            break;
        case 5:
            cout << "besh yuz";
            break;
        case 6:
            cout << "olti yuz ";
            break;
        case 7:
            cout << "yetti yuz ";
            break;
        case 8:
            cout << "sakkiz yuz ";
            break;
        case 9:
            cout << "to'qqiz yuz ";
            break;
        default:
            cout << "Berilgan son mavjud emas! " << endl;
    }
    switch (o) {
        case 1:
            cout << "o'n ";
            break;
        case 2:
            cout << "yigirma ";
            break;
        case 3:
            cout << "o'ttiz ";
            break;
        case 4:
            cout << "qiriq ";
            break;
        case 5:
            cout << "ellik";
            break;
        case 6:
            cout << "oltmish ";
            break;
        case 7:
            cout << "yetmish ";
            break;
        case 8:
            cout << "sakson ";
            break;
        case 9:
            cout << "to'qson ";
            break;
        default:
            cout << "Berilgan son mavjud emas! " << endl;
    }
    switch (b) {
        case 1:
            cout << "bir " << endl;
            break;
        case 2:
            cout << "ikki " << endl;
            break;
        case 3:
            cout << "uch " << endl;
            break;
        case 4:
            cout << "to'rt " << endl;
            break;
        case 5:
            cout << "besh " << endl;
            break;
        case 6:
            cout << "olti " << endl;
            break;
        case 7:
            cout << "yetti " << endl;
            break;
        case 8:
            cout << "sakkiz " << endl;
            break;
        case 9:
            cout << "to'qqiz " << endl;
            break;
        default:
            cout << "Berilgan son mavjud emas!" << endl;
    }
}

void t9() {
    int a;
    cout << "Foydalanuvchi tamonidan kiritilgan n sonini so‘zlar yordamida ifodalovchi dastur tuzilsin.\n"
            " n soni -99 dan katta -1 dan kichik deb olinsin.\n"
            " Misol uchun: n = -27 Natija: minus yigirma yetti" << endl;
    cin >> a;
    if (a < 0) {
        cout << "minus ";
        a *= -1;
    }
    int o = a / 10 % 10;
    int b = a % 10;
    switch (o) {
        case 1:
            cout << "o'n ";
            break;
        case 2:
            cout << "yigirma ";
            break;
        case 3:
            cout << "o'ttiz ";
            break;
        case 4:
            cout << "qiriq ";
            break;
        case 5:
            cout << "ellik";
            break;
        case 6:
            cout << "oltmish ";
            break;
        case 7:
            cout << "yetmish ";
            break;
        case 8:
            cout << "sakson ";
            break;
        case 9:
            cout << "to'qson ";
            break;
        default:
            cout << "Berilgan son mavjud emas! " << endl;
    }
    switch (b) {
        case 1:
            cout << "bir " << endl;
            break;
        case 2:
            cout << "ikki " << endl;
            break;
        case 3:
            cout << "uch " << endl;
            break;
        case 4:
            cout << "to'rt " << endl;
            break;
        case 5:
            cout << "besh " << endl;
            break;
        case 6:
            cout << "olti " << endl;
            break;
        case 7:
            cout << "yetti " << endl;
            break;
        case 8:
            cout << "sakkiz " << endl;
            break;
        case 9:
            cout << "to'qqiz " << endl;
            break;
        default:
            cout << "Berilgan son mavjud emas!" << endl;
    }
}

void t10() {
    int a;
    cout << "Foydalanuvchi tamonidan kiritilgan n sonini so‘zlar yordamida ifodalovchi dastur tuzilsin.\n"
            " n soni -999 dan katta -1 dan kichik deb olinsin.\n"
            " Misol uchun: n = -257 Natija: minus ikki yuz ellik yetti" << endl;
    cin >> a;
    if (a < 0) {
        cout << "minus ";
        a *= -1;
    }
    int y = a / 100 % 10;
    int o = a / 10 % 10;
    int b = a % 10;
    switch (y) {
        case 1:
            cout << "bir yuz ";
            break;
        case 2:
            cout << "ikki yuz ";
            break;
        case 3:
            cout << "uch yuz ";
            break;
        case 4:
            cout << "to'rt yuz ";
            break;
        case 5:
            cout << "besh yuz";
            break;
        case 6:
            cout << "olti yuz ";
            break;
        case 7:
            cout << "yetti yuz ";
            break;
        case 8:
            cout << "sakkiz yuz ";
            break;
        case 9:
            cout << "to'qqiz yuz ";
            break;
        default:
            cout << "Berilgan son mavjud emas! " << endl;
    }
    switch (o) {
        case 1:
            cout << "o'n ";
            break;
        case 2:
            cout << "yigirma ";
            break;
        case 3:
            cout << "o'ttiz ";
            break;
        case 4:
            cout << "qiriq ";
            break;
        case 5:
            cout << "ellik";
            break;
        case 6:
            cout << "oltmish ";
            break;
        case 7:
            cout << "yetmish ";
            break;
        case 8:
            cout << "sakson ";
            break;
        case 9:
            cout << "to'qson ";
            break;
        default:
            cout << "Berilgan son mavjud emas! " << endl;
    }
    switch (b) {
        case 1:
            cout << "bir " << endl;
            break;
        case 2:
            cout << "ikki " << endl;
            break;
        case 3:
            cout << "uch " << endl;
            break;
        case 4:
            cout << "to'rt " << endl;
            break;
        case 5:
            cout << "besh " << endl;
            break;
        case 6:
            cout << "olti " << endl;
            break;
        case 7:
            cout << "yetti " << endl;
            break;
        case 8:
            cout << "sakkiz " << endl;
            break;
        case 9:
            cout << "to'qqiz " << endl;
            break;
        default:
            cout << "Berilgan son mavjud emas!" << endl;
    }
}

void t11() {
    int a;
    cout << "Quyidagi matematik amallar bajaradigan dastur tuzing.\n"
            " 1 – Qo’shish 2– Ayirish 3 – Bo’lish 4 - Ko’paytirish, \n"
            "5- sonning kvadratini topish, 6-sonni oxirgi raqamini olish\n"
            " amallari bajarilsin." << endl;
    cin >> a;
    switch (a) {
        case 1:
            int x, y, S;
            cout << "Ikkita sonni qo'shish uchun ikkita son kiriting" << endl;
            cin >> x >> y;
            S = x + y;
            cout << "Natija : " << S << endl;
            break;
        case 2:
            int q, e, R;
            cout << "Ikkita sonni ayirish uchun ikkita son kiriting" << endl;
            cin >> q >> e;
            R = q - e;
            cout << "Natija : " << R << endl;
            break;
        case 3:
            int w, t, U;
            cout << "Ikkita sonni bo'lish uchun ikkita son kiriting" << endl;
            cin >> w >> t;
            U = w / t;
            cout << "Natija : " << U << endl;
            break;
        case 4:
            int p, P, po;
            cout << "Ikkita sonni bo'lish uchun ikkita son kiriting" << endl;
            cin >> p >> po;
            P = p - po;
            cout << "Natija : " << P << endl;
            break;
        case 5:
            int k, K;
            cout << "Sonni kvadratini topish" << endl;
            cin >> k;
            K = k * k;
            cout << "Natija : " << K << endl;
            break;
        case 6:
            int son, birlar;
            cout << "Sonni ohirgi raqami: " << endl;
            cin >> son;
            birlar = son % 10;
            cout << "Natija : " << birlar << endl;
        default:
            cout << "Noto'g'ri tanlov!" << endl;
    }
}

void t12() {
    int a;
    cout << "Yoshni yillarda aniqlovchi 20-69 gacha butun son berilgan.\n"
            " Son kiritilganda, unga mos so’zlarda ifodalab ekranga chiqaruvchi\n"
            " programma tuzilsin. (input - 47, output - “qirq yetti yosh”)" << endl;
    cin >> a;
    int o = a / 10 % 10;
    int b = a % 10;
    switch (o) {
        case 1:
            cout << "o'n ";
            break;
        case 2:
            cout << "yigirma ";
            break;
        case 3:
            cout << "o'ttiz ";
            break;
        case 4:
            cout << "qiriq ";
            break;
        case 5:
            cout << "ellik";
            break;
        case 6:
            cout << "oltmish ";
            break;
        case 7:
            cout << "yetmish ";
            break;
        case 8:
            cout << "sakson ";
            break;
        case 9:
            cout << "to'qson ";
            break;
        default:
            cout << "Berilgan son mavjud emas! " << endl;
    }
    switch (b) {
        case 1:
            cout << "bir yosh" << endl;
            break;
        case 2:
            cout << "ikki yosh" << endl;
            break;
        case 3:
            cout << "uch yosh" << endl;
            break;
        case 4:
            cout << "to'rt yosh" << endl;
            break;
        case 5:
            cout << "besh yosh" << endl;
            break;
        case 6:
            cout << "olti yosh" << endl;
            break;
        case 7:
            cout << "yetti yosh" << endl;
            break;
        case 8:
            cout << "sakkiz yosh" << endl;
            break;
        case 9:
            cout << "to'qqiz yosh" << endl;
            break;
        default:
            cout << "Berilgan son mavjud emas!" << endl;
    }
}

void t13() {
    int a;
    cout << "O’quv masalalarini aniqlovchi 10-40 gacha butun son berilgan.\n"
            " Son kiritilganda, unga mos so’zlarda ifodalab ekranga chiqaruvchi programma\n"
            " tuzilsin. (input - 13, output - “o’n uchta masala”)" << endl;
    cin >> a;
    int o = a / 10 % 10;
    int b = a % 10;
    switch (o) {
        case 1:
            cout << "o'n ";
            break;
        case 2:
            cout << "yigirma ";
            break;
        case 3:
            cout << "o'ttiz ";
            break;
        case 4:
            cout << "qiriq ";
            break;
        case 5:
            cout << "ellik";
            break;
        case 6:
            cout << "oltmish ";
            break;
        case 7:
            cout << "yetmish ";
            break;
        case 8:
            cout << "sakson ";
            break;
        case 9:
            cout << "to'qson ";
            break;
        default:
            cout << "Berilgan son mavjud emas! " << endl;
    }
    switch (b) {
        case 1:
            cout << "bitta masala" << endl;
            break;
        case 2:
            cout << "ikkita masala" << endl;
            break;
        case 3:
            cout << "uchta masala" << endl;
            break;
        case 4:
            cout << "to'rtta masala" << endl;
            break;
        case 5:
            cout << "beshta masala" << endl;
            break;
        case 6:
            cout << "oltita masala" << endl;
            break;
        case 7:
            cout << "yettita masala" << endl;
            break;
        case 8:
            cout << "sakkizta masala" << endl;
            break;
        case 9:
            cout << "to'qqizta masala" << endl;
            break;
        default:
            cout << "Berilgan son mavjud emas!" << endl;
    }
}

void t14() {
    int a;
    cout << "Ixtiyoriy son berilgan. Shu sonning juft\n"
            " yoki toqligini ekranga chiqaruvchi dastur tuzing." << endl;
    cout << "Son kiriting: ";
    cin >> a;

    switch (a % 2) {
        case 0:
            cout << "Son juft." << endl;
            break;
        case 1:
            cout << "Son toq." << endl;
            break;
        default:
            cout << "Noto'g'ri qiymat!" << endl;
    }
}

void t15() {
    int a;
    cout << "Ixtiyoriy son berilgan. Shu sonning 4ga karrali bolsa,\n"
            " ha karrali, aks holda yoq karrali emas deb ekranga\n"
            " chiqaruvchi dastur tuzing." << endl;
    cout << "Son kiriting: ";
    cin >> a;

    switch (a % 4) {
        case 0:
            cout << "Son 4ga karrali." << endl;
            break;
        default:
            cout << "Son 4ga karrali emas." << endl;
    }
}

void t16() {
    int a;
    cout << "Foydalanuvchi tamonidan kiritilgan n sonini so‘zlar\n"
            " yordamida ifodalovchi dastur tuzilsin. n soni -99 va\n"
            " 99 oraliqda. Misol uchun: n = -27 -> minus yigirma yetti,\n"
            " 35 -> o’ttiz besh" << endl;
    cin >> a;
    if (a < 0) {
        cout << "minus ";
        a *= -1;
    }
    int o = a / 10 % 10;
    int b = a % 10;
    switch (o) {
        case 1:
            cout << "o'n ";
            break;
        case 2:
            cout << "yigirma ";
            break;
        case 3:
            cout << "o'ttiz ";
            break;
        case 4:
            cout << "qiriq ";
            break;
        case 5:
            cout << "ellik";
            break;
        case 6:
            cout << "oltmish ";
            break;
        case 7:
            cout << "yetmish ";
            break;
        case 8:
            cout << "sakson ";
            break;
        case 9:
            cout << "to'qson ";
            break;
        default:
            cout << "Berilgan son mavjud emas! " << endl;
    }
    switch (b) {
        case 1:
            cout << "bir " << endl;
            break;
        case 2:
            cout << "ikki " << endl;
            break;
        case 3:
            cout << "uch " << endl;
            break;
        case 4:
            cout << "to'rt " << endl;
            break;
        case 5:
            cout << "besh " << endl;
            break;
        case 6:
            cout << "olti " << endl;
            break;
        case 7:
            cout << "yetti " << endl;
            break;
        case 8:
            cout << "sakkiz " << endl;
            break;
        case 9:
            cout << "to'qqiz " << endl;
            break;
        default:
            cout << "Berilgan son mavjud emas!" << endl;
    }
}

void t17() {
    int a;
    cout << "Foydalanuvchi tamonidan kiritilgan n sonini so‘zlar yordamida\n"
            " ifodalovchi dastur tuzilsin. n soni -999 va 999 oraliqda. \n"
            "Misol uchun: n = -227 -> minus ikki yuz yigirma yetti, 835\n"
            " -> sakkiz yuz o’ttiz besh" << endl;
    cin >> a;
    if (a < 0) {
        cout << "minus ";
        a *= -1;
    }
    int y = a / 100 % 10;
    int o = a / 10 % 10;
    int b = a % 10;
    switch (y) {
        case 1:
            cout << "bir yuz ";
            break;
        case 2:
            cout << "ikki yuz ";
            break;
        case 3:
            cout << "uch yuz ";
            break;
        case 4:
            cout << "to'rt yuz ";
            break;
        case 5:
            cout << "besh yuz";
            break;
        case 6:
            cout << "olti yuz ";
            break;
        case 7:
            cout << "yetti yuz ";
            break;
        case 8:
            cout << "sakkiz yuz ";
            break;
        case 9:
            cout << "to'qqiz yuz ";
            break;
        default:
            cout << "Berilgan son mavjud emas! " << endl;
    }
    switch (o) {
        case 1:
            cout << "o'n ";
            break;
        case 2:
            cout << "yigirma ";
            break;
        case 3:
            cout << "o'ttiz ";
            break;
        case 4:
            cout << "qiriq ";
            break;
        case 5:
            cout << "ellik";
            break;
        case 6:
            cout << "oltmish ";
            break;
        case 7:
            cout << "yetmish ";
            break;
        case 8:
            cout << "sakson ";
            break;
        case 9:
            cout << "to'qson ";
            break;
        default:
            cout << "Berilgan son mavjud emas! " << endl;
    }
    switch (b) {
        case 1:
            cout << "bir " << endl;
            break;
        case 2:
            cout << "ikki " << endl;
            break;
        case 3:
            cout << "uch " << endl;
            break;
        case 4:
            cout << "to'rt " << endl;
            break;
        case 5:
            cout << "besh " << endl;
            break;
        case 6:
            cout << "olti " << endl;
            break;
        case 7:
            cout << "yetti " << endl;
            break;
        case 8:
            cout << "sakkiz " << endl;
            break;
        case 9:
            cout << "to'qqiz " << endl;
            break;
        default:
            cout << "Berilgan son mavjud emas!" << endl;
    }
}

void t18() {
    int d, m;
    cout<<"Kun va oy kiriting (d/m) : "<<endl;
    cout<<"kun : "<<endl;
    cin>>d;
    cout<<"oy : "<<endl;
    cin>>m;
    if (isDayExists(d, m)) {
        cout << "Natija: ";
        number_to_words(d);
        cout << " ";
        getMonthName(m);
        cout << endl;
    } else {
        cout << "Kiritilgan sana noto'g'ri" << endl;
    }

}

     bool isDayExists(int d, int m) {
    if ((d >= 1 && d <= 31) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)) {
return true;
    }
    if ((d >= 1 && d <= 30) && (m == 4 || m == 6 || m == 9 || m == 11)) {
return true;
    }
    if (((d >= 1 && d <= 28) || (d >= 1 && d <= 29)) && (m == 2)) {
return true;
    }
    else {
return false;
    }
}
void number_to_words(int n) {
    switch(n) {
        case 1: cout << "birinchi"; break;
        case 2: cout << "ikkinchi"; break;
        case 3: cout << "uchinchi"; break;
        case 4: cout << "to'rtinchi"; break;
        case 5: cout << "beshinchi"; break;
        case 6: cout << "oltinchi"; break;
        case 7: cout << "yettinchi"; break;
        case 8: cout << "sakkizinchi"; break;
        case 9: cout << "to'qqizinchi"; break;
        case 10: cout << "o'ninchi"; break;
        case 20: cout << "yigirmanchi"; break;
        case 30: cout << "o'ttizinchi"; break;
        default:
            if(n > 10 && n < 20) {
                cout << "o'n ";
                number_to_words(n % 10);
            } else if(n > 20 && n < 30) {
                cout << "yigirma ";
                number_to_words(n % 10);
            } else if(n > 30) {
                cout << "o'ttiz ";
                number_to_words(n % 10);
            }
        break;
    }
}
void getMonthName(int m) {
    switch(m) {
        case 1: cout << "yanvar"; break;
        case 2: cout << "fevral"; break;
        case 3: cout << "mart"; break;
        case 4: cout << "aprel"; break;
        case 5: cout << "may"; break;
        case 6: cout << "iyun"; break;
        case 7: cout << "iyul"; break;
        case 8: cout << "avgust"; break;
        case 9: cout << "sentabr"; break;
        case 10: cout << "oktabr"; break;
        case 11: cout << "noyabr"; break;
        case 12: cout << "dekabr"; break;
    }
}
void t19() {
    int year;
    int baseYear = 1984;
    cout<<"Insoning tu’g’ilgan yili mos muchalni chiqaruvchi dastur tuzing.\n"
          " Yil hisobi 1984 yil Sichqondan boshlanadi deb hisoblang.\n"
          " Muchallar(sichqon, sigir, yo’lbars, quyon, ajdar, ilon, ot, qo’y,\n"
          " maymun, tovuq, it, to’ng’iz)"<<endl;
    cin>>year;
    cout << "Tug'ilgan yilingiz: " << year << " - ";
    int diff = abs((year - baseYear)%12);
    switch(diff) {
        case 0:  cout << "Sichqon"; break;
        case 1:  cout << "Sigir"; break;
        case 2:  cout << "Yo'lbars"; break;
        case 3:  cout << "Quyon"; break;
        case 4:  cout << "Ajdar"; break;
        case 5:  cout << "Ilon"; break;
        case 6:  cout << "Ot"; break;
        case 7:  cout << "Qo'y"; break;
        case 8:  cout << "Maymun"; break;
        case 9:  cout << "Tovuq"; break;
        case 10: cout << "It"; break;
        case 11: cout << "To'ng'iz"; break;
        default: cout << "Noma'lum"; break;
    }
    cout<<endl;
}
void t20() {
    int year;
    int baseYear = 1984;
    cout<<"Insoning tu’g’ilgan yili mos rangni chiqaruvchi dastur\n"
          " tuzing. Yil hisobi 1984 yil Yashil boshlanadi deb hisoblang.\n"
          " Muchallar(yashil, qizil, sariq, oq, qora)"<<endl;
    cin>>year;
    cout<<"Natija : " <<year <<" - ";
    int diff = abs((year - baseYear)%5);
    switch(diff) {
        case 0:
            cout<<"yashil"<<endl;
        break;
        case 1:
            cout<<"qizil"<<endl;
        break;
        case 2:
            cout<<"sariq"<<endl;
        break;
        case 3:
            cout<<"oq"<<endl;
        break;
        case 4:
            cout<<"qora"<<endl;
        break;
        default:
            cout<<"Noma'lum"<<endl;
    }
    cout<<endl;
}