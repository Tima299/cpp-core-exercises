#include <iostream>
using namespace std;

void t1(int a, int b);

void t2(int olmaKg, int oNarx, int anorKg, int aNarx);

void t3(int num);

void t4(int a, int b);

void t5(int n);

void t6(int ball);

void t7(int a, int b);

void t8(int a, int b, int c, int d);

void t9(int a, int b, int c);

void t10(int a, int b, int c);

void t11(int a, int b, int c);

void t12(int a, int b, int c);

string t13(int num);

void t14(int n);

void t15(int n);

void t16(int n);

void t17(int a, int b);

void t18(int n);

void t19(int a, int b);

void t20(int a, int b);

void t21();

void t22();

void t23(int a, int b);

void t24(int a, int b);

void t25(int n);

void t26(int num);

void t27(int num);

int main() {
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 27, 0-chiqish)" << endl;
        cout << "_____________________________________________________________________________" << endl;
        cin >> task;
        switch (task) {
            case 1: {
                int a, b;
                cout << "a :";
                cin >> a;
                cout << "b :";
                cin >> b;
                t1(a, b);
                break;
            }
            case 2: {
                int olmaKg, oNarx, anorKg, aNarx;
                cout << "Necha kilo olma olasiz?";
                cin >> olmaKg;
                cout << "Olmani nechi so'mligidan olasiz?";
                cin >> oNarx;
                cout << "Necha kilo anor olasiz?";
                cin >> anorKg;
                cout << "Anorni nechi so'mligidan olasiz?";
                cin >> aNarx;
                t2(olmaKg, oNarx, anorKg, aNarx);
                break;
            }
            case 3: {
                int num;
                cout << "Uch xonali son berilgan. Uni o’ngliklar xonasidagi raqam bilan\n"
                        " yuzliklar xonasidagi raqamni almashtirishdan hosil bo’lgan sonni\n"
                        " aniqlovchi programma tuzilsin. (Masalan: input - 387, output - 837)" << endl;
                cin >> num;
                if (num > 99 && num < 1000) {
                    t3(num);
                } else {
                    cout << "Kiritilgan son 3 xonali son emas!" << endl;
                }
                break;
            }
            case 4: {
                int a, b;
                cout << "Ikkita son a va b berilgan . Ularning yig‘indisi,"
                        " ko‘paytmasi va ayirmasini aniqlovchi dastur tuzilsin" << endl;
                cin >> a >> b;
                t4(a, b);
                break;
            }
            case 5: {
                int n;
                cout << "n soni berilgan. 1 dan n gacha sonlar orasida nechta juft"
                        " va nechta toq son borligini aniqlovchi programma tuzilsin." << endl;
                cin >> n;
                t5(n);
                break;
            }
            case 6: {
                int ball;
                cout << "Imtihondan olingan ball kiritilsa uning bahosini aniqlovchi dastur tuzing."
                        " Bunda 0-54 2 baho, 55-70 3 baho, 71-84 4 baho, 85-100 5 baho ga teng." << endl;
                cin >> ball;
                t6(ball);
                break;
            }
            case 7: {
                int a, b;
                cout << "2 ta a va b butun sonlar berilgan. Ularning yig’indisi 10...19 oraliqda bo’lsa,"
                        " ekranga 20 chiqaring, aks holda yig’indini o’zini chiqaradigan dastur tuzilsin." << endl;
                cin >> a >> b;
                t7(a, b);
                break;
            }
            case 8: {
                int a, b, c, d;
                cout << "Berilgan 4ta son orasidan eng katta va eng kichik"
                        " sonlarni toping. Math funksiyalari orqali." << endl;
                cin >> a >> b >> c >> d;
                t8(a, b, c, d);
                break;
            }
            case 9: {
                int a, b, c;
                cout << "Uchta son berilgan. Shu sonlardan yig’indisi eng katta bo’ladigan "
                        "ikkitasini ekranga chiqaruvchi dastur tuzilsin. Masalan: 4, 2, 7 → 4 va 7"
                        "    13, 100, 50 → 100 va 50" << endl;
                cin >> a >> b >> c;
                t9(a, b, c);
                break;
            }
            case 10: {
                int a, b, c;
                cout << "Uchta son berilgan. Agar berilgan sonlar o’sish yoki kamayish tartibida bo’lsa,"
                        " sonlarni ikkilantiring, aks holda sonlarni ishorasi o’zgaritirilsin. "
                        "Yangi sonlarni ekranga chiqaring." << endl;
                cin >> a >> b >> c;
                t10(a, b, c);
                break;
            }
            case 11: {
                int a, b, c;
                cout << "Uchta son berilgan. Shu sonlarni avval kichigini keyin kattasini ekranga"
                        " chiqaruvchi programma tuzilsin." << endl;
                cin >> a >> b >> c;
                t11(a, b, c);
                break;
            }
            case 12: {
                int a, b, c;
                cout << "3 ta a, b, c sonlari berilgan. Agar shu sonlar ichida faqat 2 tasi musbat bo’lsa,"
                        " bu sonlarni yig’indisini aks holda ko’paytmasini ekranga chiqaruvchi dastur tuzing." << endl;
                cin >> a >> b >> c;
                t12(a, b, c);
                break;
            }
            case 13: {
                int num;
                cout << "0 dan 99 gacha son kiriting: ";
                cin >> num;
                if (num < 0 || num > 99) {
                    cout << "Berilgan son 0 dan 99 gacha bo'lishi kerak." << endl;
                } else {
                    cout << "So'zda: " << t13(num) << endl;
                }
                break;
            }
            case 14: {
                int n = 1;
                cout << "n soni berilgan. 1 dan n gacha bo’lgan sonlar orasida barcha sonlarni ekranga chiqaring." <<
                        endl;
                cin >> n;
                t14(n);
                break;
            }
            case 15: {
                int n;
                cout << "n soni berilgan. 1 dan n gacha bo’lgan sonlar orasida toq sonlarni"
                        " alohida, juft sonlarni alohida ekranga chiqaring." << endl;
                cin >> n;
                t15(n);
                break;
            }
            case 16: {
                int n;
                cout << "n soni berilgan. 1 dan n gacha bo’lgan sonlar orasidan 3 ga bo’linadigan lekin"
                        " 5 ga bo’linmaydigan sonlarni ekranga chiqaring." << endl;
                cin >> n;
                t16(n);
                break;
            }
            case 17: {
                int a, b;
                cout <<
                        "a va b butun sonlari berilgan (a<b). a va b sonlari orasidagi juft sonlarni (a va b ham kiradi)"
                        " kamayish tartibida (ya’ni b dan a gacha) ekranga chiqaruvchi programma tuzilsin." << endl;
                cin >> a >> b;
                t17(a, b);
                break;
            }
            case 18: {
                int n;
                cout << "Berilgan songa mos karra jadvalni ekranga chiqaring : " << endl;
                cin >> n;
                t18(n);
                break;
            }
            case 19: {
                int a, b;
                cout << "a va b butun sonlari berilgan (a<b). Ular orasidagi butun juft sonlar"
                        " yig‘indisini va toq sonlarning ko‘paytmasini xisoblovchi dastur tuzing." << endl;
                cin >> a >> b;
                t19(a, b);
                break;
            }
            case 20: {
                int a, b;
                cout << "a va b butun sonlar berilgan (b>0) a sonini b marta chiqaruvchi pragramma tuzilsin." << endl;
                cin >> a >> b;
                t20(a, b);
                break;
            }
            case 21: {
                cout << "Barcha 3 xonali sonlar ichidan raqamlar yigindisi"
                        " 12 ga yoki 9 ga teng bolgan sonlarni chiqaring : " << endl;
                t21();
                break;
            }
            case 22: {
                cout << "Barcha 4 xonali sonlar ichidan palindrom sonlarni chiqaring." << endl;
                t22();
                break;
            }
            case 23: {
                int a, b;
                cout << "2 ta son a va b berilgan. Shu sonlarning umumiy bo’luvchilarini ekranga chiqaring."
                        " Misol uchun: a = 12 va b = 18 kiritilsa, 1, 2, 3, 6 sonlarni chiqarish kk." << endl;
                cin >> a >> b;
                t23(a, b);
                break;
            }
            case 24: {
                int a, b;
                cout << "2 ta son a va b berilgan. "
                        "Shu sonlarning umumiy bo’luvchilari nechtaligini "
                        "va ularning yig’indisini ekranga chiqar" << endl;
                cin >> a >> b;
                t24(a, b);
                break;
            }
            case 25: {
                int n;
                cout << "n butun soni berilgan. Berilgan son nechi xonali ekanligini va raqamlar"
                        " yig’indisini topuvchi programma tuzilsin" << endl;
                cin >> n;
                t25(n);
                break;
            }
            case 26: {
                int num;
                cout << "Foydalanuvchi tomonidan sonlar kiritilaveradi. Bu jarayon "
                        "0 raqami kiritilguncha davom ettirilsin. 0 raqamidan so‘ng"
                        " esa (0 dan tashqari) kiritilgan sonlarning orasidan eng kattasini "
                        "va eng kichigini hisoblovchi dastur tuzilsin." << endl;
                cin >> num;
                t26(num);
                break;
            }
            case 27: {
                int num;
                t27(num);
                break;
            }
            default:
                cout << "Xato! Kiritilgan mashq raqami mavjud emas." << endl;
                break;
        }

        if (task != 0) {
            cout << "Do you want to run another program? y/n" << endl;
            cin >> toContinue;
        } else {
            toContinue = 'n';
        }
    } while (toContinue == 'Y' || toContinue == 'y');

    return 0;
}

void t1(int a, int b) {
    int S = a * b;
    int P = 2 * (a + b);
    cout << "Ushbu to'rtburchakning yuzi = " << S << ", perimetri = " << P << endl;
}

void t2(int olmaKg, int oNarx, int anorKg, int aNarx) {
    int tOlmaNarx = olmaKg * oNarx;
    int tAnorNarx = anorKg * aNarx;
    cout << endl;
    cout << "Siz " << olmaKg << " kg olma xarid qildingiz va buning kilosi " << oNarx << " so'mdan tushdi!" << endl;
    cout << "Shunday qilib olmani jami : " << tOlmaNarx << " so'mga xarid qildingiz" << endl;
    cout << endl;
    cout << "Yana siz " << anorKg << " kg anor xarid qildingiz va buning kilosi " << aNarx << " so'mdan tushdi!" <<
            endl;
    cout << "Shunday qilib anorni esa jami : " << tAnorNarx << " so'mga xarid qildingiz" << endl;
}

void t3(int num) {
    int birlik = num % 10;
    int onliklar = num / 10 % 10;
    int yuzliklar = num / 100 % 10;
    cout << "output : " << onliklar << yuzliklar << birlik << endl;
}

void t4(int a, int b) {
    int kopaytmasi = a * b;
    int yigindisi = a + b;
    int ayirmasi;
    if (max(a, b) == a) {
        ayirmasi = a - b;
    } else {
        ayirmasi = (b - a);
    }
    cout << "ko'paytmasi : " << kopaytmasi << endl;
    cout << "yig'indisi : " << yigindisi << endl;
    cout << "ayirmasi : " << ayirmasi << endl;
}

void t5(int n) {
    int sanoqJ = 0;
    int sanoqT = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sanoqJ++;
        } else {
            sanoqT++;
        }
    }
    cout << "Jami juft sonlar : " << sanoqJ << endl;
    cout << "Jami toq sonlar : " << sanoqT << endl;
}

void t6(int ball) {
    if (ball >= 0 && ball <= 54) {
        cout << "2 baho" << endl;
    } else if (ball >= 55 && ball <= 70) {
        cout << "3 baho" << endl;
    } else if (ball >= 71 && ball <= 84) {
        cout << "4 baho" << endl;
    } else if (ball >= 85 && ball <= 100) {
        cout << "5 baho" << endl;
    } else {
        cout << "Berilgan ball bilan baholash ilojsiz!" << endl;
    }
}

void t7(int a, int b) {
    if ((a + b) >= 10 && (a + b) <= 19) {
        cout << "Natija : " << 20 << endl;
    } else {
        cout << "Natija : " << a + b << endl;
    }
}

void t8(int a, int b, int c, int d) {
    int maxi = max(max(max(a, b), c), d);
    int mini = min(min(min(a, b), c), d);
    cout << "Eng katta son : " << maxi << endl;
    cout << "Eng kichik son : " << mini << endl;
}

void t9(int a, int b, int c) {
    int max = a;
    int min = a;
    if (max < b) max = b;
    if (max < c) max = c;
    if (min > b) min = b;
    if (min > c) min = c;
    int sum = a + b + c;
    int rSum = sum - min - max;
    cout << a << " , " << b << " , " << c << " -> " << max << " va " << rSum << endl;
}

void t10(int a, int b, int c) {
    int aNew, bNew, cNew;
    if ((a > b && b > c) || (a < b && b < c)) {
        aNew = 2 * a;
        bNew = 2 * b;
        cNew = 2 * c;
    } else {
        aNew = -a;
        bNew = -b;
        cNew = -c;
    }
    cout << "a = " << aNew << " , " << "b = " << bNew << " , " << "c = " << cNew << endl;
}

void t11(int a, int b, int c) {
    int mini = min(min(a, b), c);
    int maxi = max(max(a, b), c);
    int sum = a + b + c;
    int minMax = mini + maxi;
    int middle = sum - minMax;
    cout << "Min : " << mini << ", Middle : " << middle << ", Max : " << maxi << endl;;
}

void t12(int a, int b, int c) {
    if (a > 0 && b > 0 && c < 0) {
        cout << "Yig'indisi : " << a + b + c << endl;
    } else if (a > 0 && b < 0 && c > 0) {
        cout << "Yig'indisi : " << a + b + c << endl;
    } else if (a < 0 && b > 0 && c > 0) {
        cout << "Yig'indisi : " << a + b + c << endl;
    } else {
        cout << "Ko'paytmasi : " << a * b * c << endl;
    }
}

string t13(int num) {
    string ones[] = {"nol", "bir", "ikki", "uch", "to'rt", "besh", "olti", "yetti", "sakkiz", "to'qqiz"};
    string teens[] = {
        "o'n bir", "o'n ikki", "o'n uch", "o'n to'rt", "o'n besh", "o'n olti", "o'n yetti", "o'n sakkiz", "o'n to'qqiz"
    };
    string tens[] = {"", "o'n", "yigirma", "o'ttiz", "qirq", "ellik", "oltmis", "yetmis", "sakson", "to'qson"};

    if (num < 10) {
        return ones[num];
    } else if (num < 20) {
        return teens[num - 11];
    } else {
        int tenPart = num / 10;
        int onePart = num % 10;
        if (onePart == 0) {
            return tens[tenPart];
        } else {
            return tens[tenPart] + " " + ones[onePart];
        }
    }
}

void t14(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
    cout << endl;
}

void t15(int n) {
    cout << "Toq sonlar :";
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Juft sonlar :";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t16(int n) {
    cout << " 3 ga bo’linadigan lekin 5 ga bo’linmaydigan sonlar :";
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t17(int a, int b) {
    cout << "Kamayish tartibida: ";
    if (min(a, b) == b) {
        for (int i = a; i >= b; --i) {
            if (i % 2 == 0)
                cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "a<b sharti qanoatlantirilmadi!" << endl;
    }
}

void t18(int n) {
    for (int i = 2; i <= 10; ++i) {
        cout << n << " * " << i << " = " << i * n << endl;
    }
}

void t19(int a, int b) {
    int y = 0;
    int k = 1;
    if (min(a, b) == b) {
        for (int i = b; i <= a; ++i) {
            if (i % 2 == 0) {
                y += i;
            }
            if (i % 2 != 0) {
                k *= i;
            }
        }
        cout << "Juft sonlar yig'indisi : " << y << endl;
        cout << "Toq sonlar ko'paytmasi : " << k << endl;
    }
}

void t20(int a, int b) {
    if (b > 0) {
        for (int i = 0; i < b; ++i) {
            cout << a << " ";
        }
        cout << endl;
    }
}

void t21() {
    for (int i = 100; i < 1000; ++i) {
        int bir = i % 10;
        int on = (i / 10) % 10;
        int yuzlar = i / 100;
        if (bir + on + yuzlar == 12 || bir + on + yuzlar == 9) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t22() {
    for (int i = 1000; i < 10000; ++i) {
        int birlar = i % 10;
        int onlar = i / 10 % 10;
        int yuzlar = i / 100 % 10;
        int minglar = i / 1000 % 10;
        if (birlar == minglar && onlar == yuzlar) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t23(int a, int b) {
    for (int i = 1; i < min(a, b); ++i) {
        if (a % i == 0 && b % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t24(int a, int b) {
    int count = 0;
    for (int i = 1; i < min(a, b); ++i) {
        if (a % i == 0 && b % i == 0) {
            count++;
        }
    }
    cout << "Jami umumiy bo'luvchilar soni : " << count << endl;
}

void t25(int n) {
    int sanoq = 0;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
        sanoq++;
    }
    cout << "Berilgan son " << sanoq << " xonali" << endl;
    cout << "Raqamlar yig'indisi : " << sum << endl;
}

void t26(int num) {
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num < minVal) {
            minVal = num;
        }
        if (num > maxVal) {
            maxVal = num;
        }
    }
    if (minVal == INT_MAX && maxVal == INT_MIN) {
        cout << "Hech qanday son kiritilmadi!" << endl;
    } else {
        cout << "Eng kichik son: " << minVal << endl;
        cout << "Eng katta son: " << maxVal << endl;
    }
}

void t27(int num) {
    int positiveSum = 0;
    int negativeCount = 0;

    cout << "Sonlarni kiriting (0 ni kiritish bilan yakunlanadi):" << endl;

    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num > 0) {
            positiveSum += num;
        } else {
            negativeCount++;
        }
    }

    cout << "Musbat sonlarning yig’indisi :" << positiveSum << endl;
    cout << "Manfiy sonlarning soni :" << negativeCount << endl;
}
