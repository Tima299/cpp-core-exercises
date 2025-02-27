#include <iostream>
using namespace std;
void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20();
void t21(), t22(), t23();

int main() {
    int input;
    char continueChoice;
    do {
        cout << "Qaysi masalani ishlatib ko'rmoqchisiz(1-23, chiqish uchun 0)" << endl;
        cout << "____________________________________________" << endl;
        cin >> input;
        switch (input) {
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
            case 21:
                t21();
                break;
            case 22:
                t22();
                break;
            case 23:
                t23();
                break;
            default:
                cout << "____________________________________________" << endl;
        }
        if (input != 0) {
            cout << "Boshqa masalani ishlatib ko'rmoqchisizmi?(y/n)" << endl;
            cin >> continueChoice;
        } else {
            continueChoice = 'n';
        }
    } while (continueChoice == 'Y' || continueChoice == 'y');

    return 0;
}

void t1() {
    int a, b, c, mean;
    cout << "3ta sonni o'rta arifmetigini topuvchi dastur tuzing" << endl;
    cin >> a >> b >> c;
    mean = (a + b + c) / 3;
    cout << "Sizning natijangiz: " << mean << endl;
    cout << "____________________________________________" << endl;
}

void t2() {
    int a, square;
    cout << "Foydalanuvchi tomonidan kiritilgan sonning\n kvadratini ekranga chiqaruvchi dastur tuzing." << endl;
    cin >> a;
    square = a * a;
    cout << "Sizning natijangiz: " << square << endl;
    cout << "____________________________________________" << endl;
}

void t3() {
    int a, dollarda;
    cout <<
            "1 dollar 12800 so’m. Mijoz necha so’m puli borligini kiritsa unga\n shu puliga to’g’ri keladigan valyuta miqdorini aniqlovchi dastur tuzing."
            << endl;
    cin >> a;
    dollarda = a / 12800;
    cout << "Sizning pulingiz dollarda: " << dollarda << " $" << endl;
    cout << "____________________________________________" << endl;
}

void t4() {
    int a, shart;
    cout <<
            "4 xonali son berilgan. Soning o’nlar va minglar xonasidagi\n raqamlar ko’paytmasini aniqlovchi dastur tuzing."
            << endl;
    cin >> a;
    if (a > 999 && a < 10000) {
        int onlar = a / 10 % 10;
        int minglar = a / 1000 % 10;
        shart = onlar * minglar;
        cout << "Sizning natijangiz " << shart << endl;
    } else {
        cout << "kiritgan soningiz 4 xonali bo'lishi kerak: " << endl;
    }
    cout << "____________________________________________" << endl;
}

void t5() {
    int a;
    cout <<
            "Berilgan to'rt xonali sonni o’nlar xonasidagi raqamni\n aniqlab natijani ekranga chiqaradigan dastur tuzing."
            << endl;
    cin >> a;
    if (a > 999 && a < 10000) {
        int onlar = a / 10 % 10;
        cout << "o'nlar xonasidagi son: " << onlar << endl;
    } else {
        cout << "kiritgan soningiz 4 xonali bo'lishi kerak" << endl;
    }
    cout << "____________________________________________" << endl;
}

void t6() {
    int a, m, n, k;
    cout <<
            "a haqiqiy son berilgan bo‘lsin. Faqat ko‘paytirish amalidan\n foydalanib: a7 darajasini 4 ta amal bilan hisoblaydigan dastur tuzing."
            << endl;
    cin >> a;
    m = a * a;
    n = m * m;
    k = n * m * a;
    cout << "Sizning natijangiz: " << k << endl;
    cout << "____________________________________________" << endl;
}

void t7() {
    double l, inMeters;
    cout << "Uzunlik L santimerda berilgan. Uni metrga o’tkazuvchi dastur tuzilsin." << endl;
    cin >> l;
    inMeters = l / 100;
    cout << "Sizning natijangiz: " << inMeters << " metr" << endl;
    cout << "____________________________________________" << endl;
}

void t8() {
    int a;
    cout << "Berilgan 4 xonali sonda 3 raqami ishtirok etgan yoki\n etmaganligini aniqlaydigan dastur tuzing" << endl;
    cin >> a;
    if (a > 999 && 10000) {
        int n = a % 10;
        int m = a / 10 % 10;
        int k = a / 100 % 10;
        int l = a / 1000 % 10;
        bool b = (n == 3 || m == 3 || k == 3 || l == 3);
        cout << "Sizning natijangiz: " << boolalpha << b << endl;
    } else {
        cout << "Siz kirtgan son 4 xonali son emas!" << endl;
    }
    cout << "____________________________________________" << endl;
}

void t9() {
    int a;
    cout <<
            "Uch xonali son berilgan. Uning raqamlarini teskari tartibda\n yozilishidan hosil bo’lgan sonni chiqaruvchi dastur tuzilsin. Masalan: 123 321"
            << endl;
    cin >> a;
    if (a > 99 && a < 1000) {
        int n = a % 10;
        int m = a / 10 % 10;
        int l = a / 100 % 10;
        cout << "Teskari son: " << n << m << l << endl;
    } else {
        cout << "Berilgan son 3 xonali son emas!" << endl;
    }
    cout << "____________________________________________" << endl;
}

void t10() {
    int a, M;
    cout << "To’rt xonali son berilgan. Uning raqamlari ko’paytmasini\n hisoblovchi dastur tuzilsin." << endl;
    cin >> a;
    if (a > 999 && a < 1000) {
        int n = a % 10;
        int m = a / 10 % 10;
        int l = a / 100 % 10;
        int k = a / 1000 % 10;
        M = n * m * l * k;
        cout << "Berilgan sonni raqamlar ko'paytmasi: " << M << endl;
    } else {
        cout << "Berilgan son 4 xonali son emas!" << endl;
    }
}

void t11() {
    int a, m, n, k, rY;
    cout << "Uch xonali son berilgan. Uning raqamlari yig’indisi hisoblovchi dastur tuzilsin." << endl;
    cin >> a;
    m = a % 10;
    n = a / 10 % 10;
    k = a / 100 % 10;
    rY = m + n + k;
    cout << "Berilgan sonni raqamlar yig'indisi " << rY << endl;
}

void t12() {
    /*Berilgan n sekund necha soatligini topuvchi dastur tuzing.
         *(1soat = 3600 sekund)
    */
    int n, m, H, rN;
    cout << "Soatga o'tkazish uchun sekundga qiymat bering: " << endl;
    cin >> n;
    H = n / 3600;
    m = (n - H * 3600) / 60;
    rN = n % 60;
    cout << H << " soat : " << m << " minut : " << rN << " sekund" << endl;
    cout << "___________________________________________________" << endl;
}

void t13() {
    int a, b;
    cout <<
            "Qo’shimcha o’zgaruvchidan foydalanmasdan a va b o’zgaruvchilar qiymatini almashtirib ekranga chiqaruvchi dastur tuzing.\nMasalan, a=3 va b=4 kiritilsa, u holda ekranga a=4 va b=3 kabi chiqarilishi kerak"
            << endl;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    a = a + b; //a=3 b=4; a = 7
    b = a - b; // b = 7 - 3 = 4;
    a = a - b; //  a = 7 - 4 = 3;
    cout << "A ->" << a << endl;
    cout << "B ->" << b << endl;
}

void t14() {
    int a, soat, minutda;
    cout <<
            "Qo’shimcha o’zgaruvchidan foydalanmasdan a va\n b o’zgaruvchilar qiymatini almashtirib ekranga chiqaruvchi dastur tuzing.\nMasalan, a=3 va b=4 kiritilsa, u holda ekranga a=4 va b=3 kabi chiqarilishi kerak"
            << endl;
    cout << "Sutka: " << endl;
    cin >> a;
    cout << "Soat: " << endl;
    cin >> soat;
    minutda = soat * 60 + a * 24 * 60;
    cout << "Jami minutda: " << minutda << endl;
}

void t15() {
    int S;
    int N;
    int V = 7;
    cout <<
            " Masofa S km. Agar inson 1 soatda 7 km tezlik bilan yura olsa u, bu shaharlar orasidagi masofani necha soatda bosib o'tadi?"
            << endl;
    cin >> S;
    N = S / 7;
    cout << "Sizning natijangiz" << N << " soatda" << endl;
}

void t16() {
    int a, b, soat;
    cout << "A hafta bilan b sutka berilgan. Bular jami nechi soat bo’lishini aniqlovchi dastur tuzing." << endl;
    cout << "Hafta: " << endl;
    cin >> a;
    cout << "Sutka: " << endl;
    cin >> b;
    soat = a * 7 * 24 + b * 24;
    cout << "Jami soatda: " << soat << endl;
}

void t17() {
    int kbayt_sekund;
    int GBayt;
    int n, m;
    cout <<
            "Agar internet tezligi 750 kbayt/sekund bo'lsa 1.8 GBayt axborotni necha sekundda uzatish mumkinligini aniqlaydigan dastur tuzing."
            << endl;
    cout << "Kegabyt sekundni  kiritng" << endl;
    cin >> kbayt_sekund;
    cout << "Gegabytni kiriting " << endl;
    cin >> GBayt;
    n = GBayt * 1024 * 1024;
    m = n / kbayt_sekund;
    cout << "Sizning natijangiz: " << m << endl;
}

void t18() {
    int S, H;
    cout << "Berilgan sekundni soatga o’tkazadigan dastur tuzing. 1 soat = 3600 s" << endl;
    cin >> S;
    H = S / 3600;
    cout << "Sizning natijangiz: " << H << endl;
}

void t19() {
    int A;
    cout <<
            "Deylik, A yilning tartibi bo’lsin (0<A<50000). Shu yil tegishli bo’lgan asr tartibini chiqaruvchi dastur tuzing."
            << endl;
    cin >> A;
    if (A > 0 && A < 50000) {
        int century = (A + 99) / 100;
        // c = (a-1)/100 + 1;
        cout << "Yil " << A << " tegishli bo'lgan asr: " << century << endl;
    } else {
        cout << "Yil 0 dan katta va 50000 dan kichik bo'lishi kerak." << endl;
    }
}

void t20() {
    int n, m, H, D, rN;
    cout <<
            "N sekund vaqt berilgan. Bu N sekund necha kun, soat, minut va\n sekunddan iborat ekanligini aniqlovchi programma tuzilsin."
            << endl;
    cin >> n;
    D = n / 24 / 3600;
    H = n / 3600;
    m = (n - H * 3600) / 60;
    rN = n % 60;
    cout << H << "kun : " << D << " soat : " << m << " minut : " << rN << " sekund" << endl;
    cout << "___________________________________________________" << endl;
}

void t21() {
    int a, m, n, k, rY;
    cout << "Berigan 3xonali sonning raqamlari ko’paymasini toping" << endl;
    cin >> a;
    m = a % 10;
    n = a / 10 % 10;
    k = a / 100 % 10;
    rY = m * n * k;
    cout << "Berilgan sonni raqamlar ko'paytmasi " << rY << endl;
}

void t22() {
    int R, L;
    double Pi = 3.14;
    cout << "Aylananing R radiusi berilgan. Uning uzunligini aniqlaydigan\n dastur tuzing. L=2*π*R, π=3.14" << endl;
    cin >> R;
    L = 2 * Pi * R;
    cout << "L = " << L << endl;
}

void t23() {
    int K;
    cout <<
            "Faylning hajmi foydalanuvchi tomonidan KBaytda kiritilsa unda nechta belgi borligini aniqlovchi dastur tuzing."
            << endl;
    cout << "Fayl hajmini KBaytda kiriting: ";
    cin >> K;
    if (K > 0) {
        int numCharacters = (K * 1024) / 2;
        cout << "Faylda " << numCharacters << " ta belgi bor." << endl;
    } else if(K<0){
        cout << "Fayl hajmi musbat bo'lishi kerak." << endl;
    }
}
