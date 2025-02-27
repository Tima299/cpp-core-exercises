//HW-3
//Temur Eshboyev
// 25/09/2024 -> 01:43:26
#include <iostream>
using namespace std;
void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20();
void t21(), t22(), t23(), t24(), t25(), t26(), t27(), t28(), t29(), t30();
void t31(), t32(), t33(), t34(), t35();

int main() {
    int task;
    char continueChoice;
    do {
        cout << "Select a task (1-35, to exit 0)" << endl;
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
            default:
                cout << "Bunday tanlov yo'q!" << endl;
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
    int a, b, S, P;
    cout << "To'g'ri to'rtburchakni 1-chi tomonini kiriting" << endl;
    cin >> a;
    cout << "To'g'ri to'rtburchakni 2-chi tomonini kiriting" << endl;
    cin >> b;
    S = a * b;
    P = 2 * (a + b);
    cout << "Siz kiritgan qiymatlarga asoslansak to'g'ri to'rtburchakning yuzasi " << S << " metr kvadrat" << endl;
    cout << "Siz kiritgan qiymatlarga asoslansak to'g'ri to'rtburchakning perimetri " << P << " metr kvadrat" << endl;
    cout << "___________________________________________________" << endl;
}

void t2() {
    // Kvadratning tomoni a berilgan. P = 4 * a formula orqali uning perimetrini aniqlovchi dastur tuzilsin.
    int a, P;
    cout << "Kvadratni  tomonini kiriting!" << endl;
    cin >> a;
    P = 4 * a;
    cout << "Sizning kvadratingizni perimetri " << P << " metr kvadrat" << endl;
    cout << "___________________________________________________" << endl;
}

void t3() {
    // 1 kg olma narxi berilgan. 4 kg olma narxini ekranga chiqaring.
    int o, narx, tnarx;
    cout << "Olmani narxi qancha bo'lsin?" << endl;
    cin >> narx;
    cout << "Nechi kilo olma olmoqchisiz" << endl;
    cin >> o;
    tnarx = o * narx;
    cout << "Siz " << o << " kilo olma oldingiz va bu sizga " << tnarx << " so'm pulga tushdi" << endl;
    cout << "___________________________________________________" << endl;
}

void t4() {
    /*1 kg olma narxi berilgan. Sizda 100.000 so’m pul bo’lsa, 2 kg olma olgandan keyin qolgan pulni toping.*/
    double oNarxi;
    double tNarx;
    double pul = 100000;
    int olmaKg;
    cout << " 1 kg olmani narxi qancha bo'lsin?\n";
    cin >> oNarxi;
    cout << "Sizga necha kilo olma kerak?\n";
    cin >> olmaKg;
    tNarx = oNarxi * olmaKg;

    if (tNarx > pul) {
        cout << "Azizim Sizni Pulingiz Bunchalik ko'p olma olishga yetmaydi\n";
    } else if (tNarx == pul) {
        cout << "Sizni pulingiz qolmadi, Siz barcha pulingizga olma xarid qildingiz \n";
    } else if (tNarx < pul) {
        double qolganPul = pul - tNarx;
        cout << "Siz olgan olma " << olmaKg << " kg va bu Sizga " << tNarx <<
                " so'm pulga tushdi\n va Sizda qolgan pul " << qolganPul << " so'm\n";
    }
    cout << "___________________________________________________" << endl;
}

void t5() {
    // Sizda x so’m va do’stingizda y so’m pul bor. Siz do’stingizdan 10.000 so’m pul oldingiz.
    // Ekranga sizda va do’stingizda qancha pullar borligini chiqaring.
    int x, y, M, D;
    int qarz;
    cout << " Sizda qancha pul bor?\n";
    cin >> x;
    cout << " Do'stingizda qancha pul bor?\n";
    cin >> y;
    cout << " Do'stingizdan qancha pul olib turmoqchisiz?\n";
    cin >> qarz;
    M = x + qarz;
    D = y - qarz;
    cout << "Sizda " << M << " so'm pul bo'ldi!\n";
    cout << "Do'stingizda " << D << " so'm pul qoldi!\n";
    cout << "___________________________________________________" << endl;
}

void t6() {
    /*Kvadratning tomoni a berilgan. S = a * a formula
     *orqali kvadratning yuzasini aniqlovchi dastur tuzilsin.*/
    int a, S;
    cout << "Kvadratni  tomonini kiriting!" << endl;
    cin >> a;
    S = a * a;
    cout << "Sizning kvadratingizni yuzasi " << S << " metr kvadrat" << endl;
    cout << "___________________________________________________" << endl;
}

void t7() {
    /* 1 kg olma va 1kg anor narxlari berilgan.
     Ekranga 3 kg olma va 4 kg anor narxlarining umumiy qanchalgini chiqarig.*/
    int o, a;
    int oN, aN;
    int tNarx;
    cout << "Olma narxi qancha?" << endl;
    cin >> oN;
    cout << "Anorni narxi qancha?" << endl;
    cin >> aN;
    cout << "Olma nechi kg?" << endl;
    cin >> o;
    cout << "Anorni nechi kg?" << endl;
    cin >> a;
    tNarx = o * oN + a * aN;
    cout << "Siz " << o << " kg Olma va " << a << " kg Anorni " << tNarx << " so'm evaziga oldingiz\n";
    cout << "___________________________________________________" << endl;
}

void t8() {
    // 1 kg olma narxi x so’m va sizda a so’m pul bor.
    // Shu pulga nechi kg olma olsa bo’lishini toping.
    double oNarxi;
    double tNarx;
    double pul;
    int olmaKg;
    cout << " 1 kg olmani narxi qancha bo'lsin?\n";
    cin >> oNarxi;
    cout << "Sizga necha kilo olma kerak?\n";
    cin >> olmaKg;
    cout << "O'zi qancha puliz bor?\n";
    cin >> pul;
    tNarx = oNarxi * olmaKg;

    if (tNarx > pul) {
        cout << "Azizim Sizni Pulingiz Bunchalik ko'p olma olishga yetmaydi\n";
    } else if (tNarx == pul) {
        cout << "Sizni pulingiz qolmadi, Siz barcha pulingizga olma xarid qildingiz \n";
    } else if (tNarx < pul) {
        double qolganPul = pul - tNarx;
        cout << "Siz olgan olma " << olmaKg << " kg va bu Sizga " << tNarx <<
                " so'm pulga tushdi\n va Sizda qolgan pul " << qolganPul << " so'm\n";
    }
    cout << "___________________________________________________" << endl;
}

void t9() {
    /*x, y, a va B sonlar berilgan. x kg olma a so‘m turadi va y kg konfet B so‘m turadi.
    1 kg konfet 1 kg olmadan qancha qimmat turishini aniqlovchi dastur tuzilsin.
    x, y, a va B o’zgaruvchilari qiymati konsoldan kiritilsin.*/
    int x, y, a, B;
    cout << "Olma nechi kg?\n";
    cin >> x;
    cout << "Olma narxi qancha?\n";
    cin >> a;
    cout << "Konfet nechi kg?\n";
    cin >> y;
    cout << "Konfet narxi qancha?\n";
    cin >> B;
    if (x * a > y * B) {
        int tOlma = x * a - y * B;
        cout << "Olmani narxi Konfet narxidan " << tOlma << " so'mga qimmat\n";
    } else if (x * a < y * B) {
        int tKonfet = y * B - x * a;
        cout << "Konfetni narxi Olmani narxidan " << tKonfet << " so'mga qimmat\n";
    }
    cout << "___________________________________________________" << endl;
}

void t10() {
    /*x, a, va y sonlar berilgan. x kg konfet a so’m turadi.
     *1kg va y kg konfet qancha turishini aniqlovchi programma tuzilsin. */
    int x, a, y;
    cout << "Konfetni og'irligini (kg) kiriting!" << endl;
    cin >> x;
    cout << "Konfetni narxi (so'm) qancha?" << endl;
    cin >> a;
    cout << "Nechi kilogram konfet kerak?" << endl;
    cin >> y;
    //Narxni hisoblash
    int narx_1kg = a / x;
    int narx_Ykg = narx_1kg * y;
    cout << "1 kg konfet narxi: " << narx_1kg << " so'm." << endl;
    cout << y << " kg konfet narxi: " << narx_1kg << " so'm." << endl;
    cout << "___________________________________________________" << endl;
}

void t11() {
    int a, V, S;
    cout << "Kubning tomoni nechi sm?" << endl;
    cin >> a;
    V = a * a * a;
    S = 6 * a * a;
    cout << "Kubning hajmi: " << V << " sm kub." << endl;
    cout << "Kubning to'la sirtini yuzi: " << S << " sm kvadrat." << endl;
    cout << "___________________________________________________" << endl;
}

void t12() {
    int a, b, c, P, S;
    cout << "Uchburchakning a tomonini kiriting!" << endl;
    cin >> a;
    cout << "Uchburchakning b tomonini kiriting!" << endl;
    cin >> b;
    cout << "Uchburchakning c tomonini kiriting!" << endl;
    cin >> c;
    P = a + b + c;
    S = a * b / 2;
    cout << "Uchburchakning perimetri: " << P << endl;
    cout << "Uchburchakning yuzi: " << S << endl;
    cout << "___________________________________________________" << endl;
}

void t13() {
    int a, b, Y, K, A;
    cout << "A songa qiymat bering" << endl;
    cin >> a;
    cout << "B songa qiymat bering" << endl;
    cin >> b;
    Y = a + b;
    K = a * b;
    if (a > b) {
        A = a - b;
    } else if (a < b) {
        A = b - a;
    }
    cout << "Ushbu sonlarning yig'indisi " << Y << endl;
    cout << "Ushbu sonlarning ko'paytmasi " << K << endl;
    cout << "Ushbu sonlarning ayirmasi " << A << endl;
    cout << "___________________________________________________" << endl;
}

void t14() {
    int a, b, ortaArif;
    cout << "A songa qiymat bering" << endl;
    cin >> a;
    cout << "B songa qiymat bering" << endl;
    cin >> b;
    ortaArif = (a + b) / 2;
    cout << "Ushbu sonlarning o'rta arifmetigi " << ortaArif << endl;
    cout << "___________________________________________________" << endl;
}

void t15() {
    int a, K;
    cout << "Son kiriting: " << endl;
    cin >> a;
    K = a * a;
    cout << "Siz bergan sonni kvadrati " << K << endl;
    cout << "___________________________________________________" << endl;
}

void t16() {
    int a, K;
    cout << "Son kiriting: " << endl;
    cin >> a;
    K = a * a * a;
    cout << "Siz bergan sonni kubi " << K << endl;
    cout << "___________________________________________________" << endl;
}

void t17() {
    int p, j;
    cout << "Patrikda qancha pul bor?" << endl;
    cin >> p;
    cout << "Juliada qancha pul bor?" << endl;
    cin >> j;
    if (p > j) {
        int teng = p - j;
        cout << "Patrik Juliaga " << teng << " so'm pul bersa ulardagi pul miqdori tenglashadi" << endl;
    }
    if (p < j) {
        int teng = j - p;
        cout << "Julia Patrikga " << teng << " so'm pul bersa ulardagi pul miqdori tenglashadi" << endl;
    }
    cout << "___________________________________________________" << endl;
}

void t18() {
    double x, dollarda;
    cout << "Sizda qancha pul bor?" << endl;
    cin >> x;
    dollarda = x / 12300;
    cout << "Sizning mavjud pulingiz dollarda " << dollarda << "$" << endl;
    cout << "___________________________________________________" << endl;
}

void t19() {
    int a, b, c, Y, K;
    cout << "A songa qiymat bering!" << endl;
    cin >> a;
    cout << "B songa qiymat bering!" << endl;
    cin >> b;
    cout << "C songa qiymat bering!" << endl;
    cin >> c;
    Y = a + b + c;
    K = a * b * c;
    cout << "Ushbu sonlarning yig'indisi " << Y << endl;
    cout << "Ushbu sonlarning ko'paytmasi " << K << endl;
    cout << "___________________________________________________" << endl;
}

void t20() {
    double b, t4;
    cout << "Boboyni qancha puli bor?" << endl;
    cin >> b;
    t4 = b / 4;
    cout << "Boboy navaraliga " << t4 << " so'mdan pul bo'lib bera oladi" << endl;
    cout << "___________________________________________________" << endl;
}

void t21() {
    int s, kmH;
    cout << "Masofani kiriting" << endl;
    cin >> s;
    kmH = s / 5;
    cout << "Berilgan masofaga " << kmH << " soatda yetib boradi" << endl;
    cout << "___________________________________________________" << endl;
}

void t22() {
    int a, P;
    cout << "Kvadratni tomonini kiriting " << endl;
    cin >> a;
    P = 4 * a;
    cout << "Perimetr: " << P << endl;
    cout << "___________________________________________________" << endl;
}

void t23() {
    int a, S;
    cout << "Kvadratni tomonini kiriting " << endl;
    cin >> a;
    S = a * a;
    cout << "Yuzasi: " << S << endl;
    cout << "___________________________________________________" << endl;
}

void t24() {
    int a, b, S;
    cout << "To'rtburchakni A tomonini kiriting " << endl;
    cin >> a;
    cout << "To'rtburchakni B tomonini kiriting " << endl;
    cin >> b;
    S = a * b;
    cout << "Yuzasi: " << S << endl;
    cout << "___________________________________________________" << endl;
}

void t25() {
    int a, V, S;
    cout << "Kubning tomoni nechi sm?" << endl;
    cin >> a;
    V = a * a * a;
    S = 6 * a * a;
    cout << "Kubning hajmi: " << V << " sm kub." << endl;
    cout << "Kubning to'la sirtini yuzi: " << S << " sm kvadrat." << endl;
    cout << "___________________________________________________" << endl;
}

void t26() {
    int a, b, K, Y, N;
    cout << "A songa qiymat bering!" << endl;
    cin >> a;
    cout << "B songa qiymat bering!" << endl;
    cin >> b;
    K = a * b;
    Y = a + b;
    N = K - Y;
    cout << "Natija " << N << endl;
    cout << "___________________________________________________" << endl;
}

void t27() {
    int a, x, N;
    cout << "1 kilo konfet naxi" << endl;
    cin >> a;
    cout << "og'irligi?" << endl;
    cin >> x;
    N = a * x;
    cout << " Siz olgan konfet narxi " << N << endl;
    cout << "___________________________________________________" << endl;
}

void t28() {
    int a, M;
    cout << "nechi metrni sm ga o'tqazmoqchisiz?" << endl;
    M = a / 100;
    cout << "Santimetrda: " << M;
    cout << "___________________________________________________" << endl;
}

void t29() {
    int a, K;
    cout << "qancha kiloni grammga o'tqazmoqchisiz?" << endl;
    K = a / 1000;
    cout << "Grammda: " << K;
    cout << "___________________________________________________" << endl;
}

void t30() {
    int a, b, ortaArif;
    cout << "A songa qiymat bering" << endl;
    cin >> a;
    cout << "B songa qiymat bering" << endl;
    cin >> b;
    ortaArif = (a + b) / 2;
    cout << "Ushbu sonlarning o'rta arifmetigi " << ortaArif << endl;
    cout << "___________________________________________________" << endl;
}

void t31() {
    int a, b, Y, K, A;
    cout << "A songa qiymat bering" << endl;
    cin >> a;
    cout << "B songa qiymat bering" << endl;
    cin >> b;
    Y = a + b;
    K = a * b;
    if (a > b) {
        A = a - b;
    } else if (a < b) {
        A = b - a;
    }
    cout << "Ushbu sonlarning yig'indisi " << Y << endl;
    cout << "Ushbu sonlarning ko'paytmasi " << K << endl;
    cout << "Ushbu sonlarning ayirmasi " << A << endl;
    cout << "___________________________________________________" << endl;
}

void t32() {
    int a, b;

    cout << "A songa qiymat bering!" << endl;
    cin >> a;
    cout << "B songa qiymat bering!" << endl;
    cin >> b;
    cout << "Qiymatlar almashinuvidan keyingi natija: " << endl;
    a += b;
    b = a-b;
    a -= b;
    cout << "A -> " << a << endl;
    cout << "B -> " << b << endl;
    cout << "___________________________________________________" << endl;
}

void t33() {
    int A, B, C;
    cout << "A songa qiymat bering!" << endl;
    cin >> A;
    cout << "B songa qiymat bering!" << endl;
    cin >> B;
    cout << "C songa qiymat bering!" << endl;
    cin >> C;
    A = B;
    cout << "A -> " << A << endl;
    B = C;
    cout << "B -> " << B << endl;
    C = A;
    cout << "C -> " << C << endl;
    cout << "___________________________________________________" << endl;
}

void t34() {
    double X, A, Y;
    cout << "Nechi kilo konfet?" << endl;
    cin >> X;
    cout << "Narxi qancha?" << endl;
    cin >> A;
    cout << "Nechi kilo konfet olmoqchisiz?(Y)" << endl;
    cin >> Y;
    double kilosi = A / X;
    double N = kilosi * Y;
    cout << "Siz " << X << " kilo konfetni " << A << " so'mga sotib oldingiz va bu Sizga kilosi " << kilosi <<
            " so'mga tushdi." << endl;
    cout << " Siz umumiy olmoqchi bo'lgan Y konfetlar shunda sizga " << N << " so'mga tushadi." << endl;
    cout << "___________________________________________________" << endl;
}

void t35() {
    double X, A, Y, B, shN, kN;
    cout << "Shokolad nechi kg?" << endl;
    cin >> X;
    cout << "Shokolad nechi so'm?" << endl;
    cin >> A;
    cout << "Konfet nechi kg?" << endl;
    cin >> Y;
    cout << "Konfet nechi so'm?" << endl;
    cin >> B;
    shN = X * A;
    kN = Y * B;
    if (shN > kN) {
        double N = shN - kN;
        cout << "Siz sotib olgan shokoladlar narxi konfetlar narxidan " << N << " so'mga ko'p" << endl;
    } else if (shN < kN) {
        double M = kN - shN;
        cout << "Siz sotib olgan konfetlar narxi shokoladlar narxidan " << M << " so'mga ko'p" << endl;
    }

    cout << "___________________________________________________" << endl;
}
