#include <iostream>
#include <cmath>
using namespace std;

int t1(int a, int b);

int t2(int a);

int t3(int a, int b);

int t4(int n);

double t5(double N);

double t6(double x);

double t7(double a);

int t8(int a);

string t9(int oy);

string t10(int ball);

bool t11(int a, int b);

string t12(int a);

int t13(int a, int b, int c);

int t14(int son);

int t15(int a, int b);

int t16(int a, int b);

int t17();

int t18();

int t19(int a);

string t20(int a);

string t21(int a);

bool isPrime(int a);

string t22(int son);

string t23(int a, int b);

bool isPerfect(int n);

double t24(int son);

double t25(int n);

int main() {
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 25, 0-chiqish)" << endl;
        cout << "_____________________________________________________________________________" << endl;
        cin >> task;
        switch (task) {
            case 1: {
                int a, b;
                cout << "2 ta a va b sonlar berilgan. Ularning ko’paytmasidan yig’indisini ayiring." << endl;
                cin >> a >> b;
                cout << "Natija : " << t1(a, b) << endl;
                break;
            }
            case 2: {
                int a;
                cout << "Kubning yon tomoni a berilgan. Uning to’la sirti S=6*a*a aniqlansin." << endl;
                cin >> a;
                cout << "Natija : " << t2(a) << endl;
                break;
            }
            case 3: {
                int a, b;
                cout << "Ikkita son a va b berilgan. Ularning o’rta arifmetigi (a+b)/2 formulasi orqali aniqlansin." <<
                        endl;
                cin >> a >> b;
                cout << "Natija : " << t3(a, b) << endl;
                break;
            }
            case 4: {
                int n;
                cout << "Uch xonali son berilgan. Uni raqamlar yig’indisini aniqlovchi programma tuzilsin." << endl;
                cin >> n;
                cout << "Natija : " << t4(n) << endl;
                break;
            }
            case 5: {
                double N;
                cout <<
                        "Kun boshidan boshlab N sekund vaqt o’tti. Kun boshidan boshlab qancha soat to’la o’tganini aniqlovchi programma tuzilsin."
                        << endl;
                cin >> N;
                cout << "Kun boshidan beri " << t5(N) << " soat to'liq o'tdi!" << endl;
                break;
            }
            case 6: {
                double x;
                cout << "Ma’lumot o’lchov birliklarida x kilobayt berilgan. Ushbu malumot nechi "
                        "megabaytligini toping.(1 MB = 1024 KB)  (Masalan, 2000    —>   1.95 megabayt)" << endl;
                cin >> x;
                cout << "Megabaytda : " << t6(x) << endl;
                break;
            }
            case 7: {
                double a;
                cout << "Butun son berilgan. Agar son musbat bo’lsa, 1 ga oshirilsin, aks holda 2 ga"
                        " kamaytiring. Hosil bo’lgan sonni ekranga chiqaruvchi programma tuzilsin." << endl;
                cin >> a;
                cout << "Natija : " << t7(a) << endl;
                break;
            }
            case 8: {
                int a;
                cout << "Berilgan 4 xonali sonning eng katta raqamini topuvchi funksiya yarating." << endl;
                cin >> a;
                cout << "Natija : " << t8(a) << endl;
                break;
            }
            case 9: {
                int oy;
                cout << "Foydalanuvchi tomonidan oyning raqami kiritilsa u "
                        "qaysi faslga kirishini aniqlovchi dastur tuzing." << endl;
                cin >> oy;
                cout << "Natija : " << t9(oy) << endl;
                break;
            }
            case 10: {
                int ball;
                cout << "Imtihondan olingan ball kiritilsa uning bahosini aniqlovchi dastur tuzing. "
                        "Bunda 0-54 2 baho, 55-70 3 baho, 71-84 4 baho, 85-100 5 baho ga teng" << endl;
                cin >> ball;
                cout << "Siz to'plagan baho : " << t10(ball) << endl;;
                break;
            }
            case 11: {
                int a, b;
                cout << "A va B natural sonlar berilgan. Bu sonlarning biri ikkinchisining "
                        "kvadrati bo’lishi yoki bo’lmasligini aniqlaydigan dastur tuzing. " << endl;
                cin >> a >> b;
                cout << max(a, b) << " , " << min(a, b) << " -> " << boolalpha << t11(a, b) << endl;;
                break;
            }
            case 12: {
                int a;
                cout << "Berilgan 4 xonali sonda 3 raqami ishtirok etgan bo’lsa, ha 3 bor aks holda "
                        "3 raqami yo’q degan yozuvni ekranga chiqaring." << endl;
                cin >> a;
                cout << t12(a) << endl;;
                break;
            }
            case 13: {
                int a, b, c;
                cout << "Uchta son berilgan. Shu sonlarni o’rtachasini aniqlovchi programma tuzilsin." << endl;
                cin >> a >> b >> c;
                cout << "O'rtanchasi : " << t13(a, b, c) << endl;
                break;
            }
            case 14: {
                int son;
                cout <<
                        "Berilgan uch xonali son juft bo’lsa raqamlari yigindisi aks holatda raqamlar ko’paytmasini aniqlovchi dastur tuzing."
                        << endl;
                cin.ignore();
                cin >> son;
                cout << "Natija : " << t14(son) << endl;;
                break;
            }
            case 15: {
                int a, b;
                cout << "a va b butun sonlari berilgan (a<b). a va b sonlari orasidagi"
                        " sonlarni ko’paytmasini topuvchi programma tuzing." << endl;
                cin >> a >> b;
                cout << "Natija : " << t15(a, b) << endl;
                break;
            }
            case 16: {
                int a, b;
                cout << "a va b butun sonlari berilgan (a<b). a va b sonlari orasidagi "
                        "sonlardan 3 ga bo’linadiganlari nechtaligini topuvchi programma tuzing." << endl;
                cin >> a >> b;
                cout << "Natija : " << t16(a, b) << endl;
                break;
            }
            case 17: {
                cout << "Barcha 3 xonali sonlar ichidan raqamlar yigindisi 15 bolgan sonlar nechtaligini chiqaring." <<
                        endl;
                cout << "Natija : " << t17() << endl;
                break;
            }
            case 18: {
                cout << "Barcha 2 xonali sonlar ichidan 8ni o’z ichiga olgan sonlarni nechtaligini toping." << endl;
                cout << "Natija : " << t18() << endl;
                break;
            }
            case 19: {
                int a;
                cout << "Kiritlgan a sonni barcha boluvchilarini yig’indisini toping." << endl;
                cin >> a;
                cout << "Natija : " << t19(a) << endl;;
                break;
            }
            case 20: {
                int a;
                cout << "Berilgan son tub son yoki tub emasligini aniqlang. "
                        "Yordam: Berilgan sonning bo’luvchilar soni topilsin. "
                        "Shu sanoq 2 ga teng bo’lsa, tub son deyiladi." << endl;
                cin >> a;
                cout << "Natija : " << t20(a) << endl;
                break;
            }
            case 21: {
                int a;
                cout << "x soni berilgan. 1 dan x gacha barcha tub sonlarni ekranga chiqaring." << endl;
                cin >> a;
                cout << "Natija : " << t21(a) << endl;
                break;
            }
            case 22: {
                int son;
                cout << "Berilgan son mukammal son yoki emasligini aniqlang. Sonning o’zidan"
                        " farqli bo’luvchilar yigindisi topilsin. Shu yigindi berilgan sonning "
                        "o’ziga teng bo’lsa, mukammal son deyiladi." << endl;
                cin >> son;
                cout << "Natija : " << t22(son) << endl;
                break;
            }
            case 23: {
                int a, b;
                cout << "a va b sonlari berilgan. a dan b gacha barcha mukammal sonlarni ekranga chiqaring." << endl;
                cin >> a >> b;
                cout << "Natija : " << t23(a, b) << endl;;
                break;
            }
            case 24: {
                int son;
                cout << "n butun soni berilgan. Quyidagi ko’paytmani hisoblovchi programma"
                        " tuzilsin:S = 1.1 * 1.2 * 1.3 * …n" << endl;
                cin >> son;
                cout << "Natija : " << t24(son) << endl;
                break;
            }
            case 25: {
                int son;
                cout <<
                        "n butun soni berilgan. Quyidagi yignidni hisoblovchi programma tuzilsin: S = 10.1 + 10.2 + 10.3 + …    (n ta qoshiluvchi)"
                        << endl;
                cin >> son;
                cout << "Natija : " << t25(son) << endl;
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

int t1(int a, int b) {
    int r = a * b - (a + b);
    return r;
}

int t2(int a) {
    int S = 6 * a * a;
    return S;
}

int t3(int a, int b) {
    int r = (a + b) / 2;
    return r;
}

int t4(int n) {
    int sum = 0;
    if (n > 99 && n < 1000) {
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
    }
    return sum;
}

double t5(double N) {
    double soat = N / 3600;
    return soat;
}

double t6(double x) {
    double mgb = x / 1024;
    return mgb;
}

double t7(double a) {
    double r;
    if (a > 0) {
        r = a + 1;
    } else {
        r = a - 2;
    }
    return r;
}

int t8(int a) {
    int maxDigit = 0;
    if (a > 999 && a < 10000) {
        while (a > 0) {
            int raqam = a % 10;
            if (raqam > maxDigit)
                maxDigit = raqam;
            a /= 10;
        }
    }
    return maxDigit;
}

string t9(int oy) {
    switch (oy) {
        case 12:
        case 1:
        case 2: {
            return "Qish!";
            break;
        }
        case 3:
        case 4:
        case 5: {
            return "Bahor!";
            break;
        }
        case 6:
        case 7:
        case 8: {
            return "Yoz!";
            break;
        }
        case 9:
        case 10:
        case 11: {
            return "Kuz!";
            break;
        }
        default: {
            return "Siz kiritgan songa mos oy mavjud emas!";
        }
    }
}

string t10(int ball) {
    if (ball >= 0 && ball <= 54) {
        return "2";
    } else if (ball >= 55 && ball <= 70) {
        return "3";
    } else if (ball >= 71 && ball <= 84) {
        return "4";
    } else if (ball >= 85 && ball <= 100) {
        return "5";
    } else {
        return "Xato!";
    }
}

bool t11(int a, int b) {
    if (a == sqrt(b) || b == sqrt(a)) {
        return true;
    } else {
        return false;
    }
}

string t12(int a) {
    int raqam;
    if (a > 999 && a < 10000) {
        while (a > 0) {
            raqam = a % 10;
            if (raqam == 3)
                return "3 bor!";
            a /= 10;
        }
        return "3 yo'q!";
    } else {
        return "4 xonali son emas!";
    }
}

int t13(int a, int b, int c) {
    int kattasi = max(max(a, b), c);
    int kichiki = min(min(a, b), c);
    for (int i = kichiki + 1; i < kattasi; ++i) {
        if (i == a || i == b || i == c) {
            return i;
        }
    }
}

int t14(int son) {
    int result = (son % 2 == 0) ? 0 : 1;
    bool isEven = (son % 2 == 0);
    while (son > 0) {
        result = isEven ? result + (son % 10) : result * (son % 10);
        son /= 10;
    }
    return result;
}

int t15(int a, int b) {
    int mul = 1, maxi = max(a, b), mini = min(a, b);
    for (int i = mini + 1; i < maxi; ++i) {
        mul *= i;
    }
    return mul;
}

int t16(int a, int b) {
    int count = 0, maxi = max(a, b), mini = min(a, b);
    for (int i = mini + 1; i < maxi; ++i) {
        if (i % 3 == 0) {
            count++;
        }
    }
    return count;
}

int t17() {
    int count = 0;
    for (int i = 100; i < 1000; ++i) {
        int temp = i;
        int raqam = 0;
        while (temp > 0) {
            raqam += i % 10;
            if (raqam == 15) {
                count++;
            }
            temp /= 10;
        }
    }
    return count;
}

int t18() {
    int raqam, count = 1;
    for (int i = 10; i < 100; ++i) {
        int temp = i;
        while (temp > 0) {
            raqam = i % 10;
            if (raqam == 8)
                count++;
            temp /= 10;
        }
    }
    return count;
}

int t19(int a) {
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            sum += i;
        }
    }
    return sum;
}

string t20(int a) {
    int count = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        return "tub son!";
    } else {
        return "tub son emas!";
    }
}

string t21(int a) {
    string r;
    for (int i = 1; i < a; i++) {
        if (isPrime(i)) {
            r += to_string(i) + " ";
        }
    }
    return r;
}

bool isPrime(int a) {
    int count = 0;

    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }
    return count == 2;
}

string t22(int son) {
    int sum = 0;
    for (int i = 1; i < son; ++i) {
        if (son % i == 0) {
            sum += i;
        }
    }
    if (sum == son) {
        return "Mukammal son!";
    } else {
        return "Mukammal son emas!";
    }
}

string t23(int a, int b) {
    string r;
    int mini = min(a, b);
    int maxi = max(a, b);
    for (int i = mini; i < maxi; ++i) {
        if (isPerfect(i)) {
            r += to_string(i) + " ";
        }
    }
    return r;
}

bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

double t24(int son) {
    double S = 1.1;
    double res = 1;
    for (int i = 0; i < son; ++i) {
        res *= S;
        S += 0.1;
    }
    return res;
}

double t25(int n) {
    double S = 10.1;
    double res = 0;
    for (int i = 0; i < n; ++i) {
        res += S;
        S += 0.1;
    }
    return res;
}




