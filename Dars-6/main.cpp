#include <iostream>
using namespace std;

void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20();
void t21(), t22(), t23(), t24(), t25(), t26(), t27(), t28(), t29(), t30();
void t31(), t32(), t33(), t34(), t35(), t36(), t37(), t38(), t39(), t40();
void t41(), t42(), t43(), t44(), t45();

int main() {
    int task;
    char continuetheChoice;

    do {
        cout << "Masalani tanlang: 1 -> 45 (0 - chiqish uchun)" << endl;
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
            default:
                cout << "__________________________________________________" << endl;
        }
        if (task != 0) {
            cout << "Boshqa masalani ishlatib ko'rmoqchimisiz?(y/n)" << endl;
            cin >> continuetheChoice;
        } else {
            continuetheChoice = 'n';
        }
    } while ((continuetheChoice = 'Y') || (continuetheChoice = 'y'));
    return 0;
}

void t1() {
    int a;
    cout <<
            "Butun son berilgan. Agar son musbat bo’lsa, 1 ga oshirilsin, aks holda 2 ga kamaytiring.\n"
            " Hosil bo’lgan sonni ekranga chiqaruvchi programma tuzilsin."
            << endl;
    cin >> a;
    if (a > 0) {
        a += 1;
        cout << "Natijangiz: a = " << a << endl;
    } else if (a < 0) {
        a -= 2;
        cout << "Natijangiz: a = " << a << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t2() {
    int a;
    cout <<
            "Butun son berilgan. Agar son juft son bo’lsa, sonni 10 marta oshiring,\n "
            "aks holda 100 marta oshiring. Hosil bo’lgan sonni ekranga chiqaruvchi programma tuzilsin"
            << endl;
    cin >> a;
    if (a % 2 == 0) {
        a *= 10;
        cout << "Natijangiz: a = " << a << endl;
    } else {
        a *= 100;
        cout << "Natijangiz: a = " << a << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t3() {
    int a;
    cout <<
            "Ikki xonali son berilgan. Agar son juft bo’lsa, uni o’nlar xonasidagi raqamni,\n "
            "aks holda toq bo’lsa, birlar xonasidagi raqamni chiqaring."
            << endl;
    cin >> a;
    if (a > 9 && a < 100) {
        int bir = a % 10;
        int on = a / 10 % 10;
        if (a % 2 == 0) {
            cout << "Sizning kiritgan soningiz juft shu sababli Sizga o'nlar xonasidagi son " << on << " ni chiqardik!"
                    << endl;
        } else if (a % 2 != 0) {
            cout << "Sizning kiritgan soningiz toq shu sababli Sizga birlar xonasidagi son " << bir << " ni chiqardik!"
                    << endl;
        }
    } else {
        cout << "Siz kiritgan son ikki xonali son emas!" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t4() {
    int a, b;
    cout << "Ikkita butun son berilgan. Berilgan sonlar orasida kattasini aniqlovchi programma tuzilsin." << endl;
    cin >> a >> b;
    if (a > b) {
        cout << "Sizning a soningiz b soningizdan katta shu sababli sizga " << a << " ni ko'rsatdik!" << endl;
    } else if (a < b) {
        cout << "Sizning b soningiz a soningizdan katta shu sababli sizga " << b << " ni ko'rsatdik!" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t5() {
    int a;
    cout <<
            "Berilgan 2 xonali sonda 3 raqami ishtirok etgan bo’lsa,\n"
            " ha 3 bor aks holda 3 raqami yo’q degan yozuvni ekranga chiqaring."
            << endl;
    cin >> a;
    if (a > 9 and a < 100) {
        int birlar = a % 10;
        int onlar = a / 10 % 10;
        if (birlar == 3 || onlar == 3) {
            cout << "Ha 3 raqami bor!" << endl;
        } else {
            cout << "Yo'q 3 raqami yo'q!" << endl;
        }
    } else {
        cout << "Siz kiritgan son ikki xonali son bo'lishi kerak!" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t6() {
    int a, b;
    cout <<
            "2 ta a va b butun sonlar berilgan. Ularning yig’indisi 10...19 oraliqda bo’lsa,\n "
            "ekranga 20 chiqaring, aks holda yig’indini o’zini chiqaradigan dastur tuzilsin."
            << endl;
    cin >> a >> b;
    if ((a + b) >= 10 || (a + b) <= 19) {
        cout << "Natija: 20" << endl;
    } else {
        cout << "Natija: " << a + b << endl;
    }
}

void t7() {
    int A, B;
    cout <<
            "A va B natural sonlar berilgan. Bu sonlarning biri ikkinchisining\n "
            "kvadrati bo’lishi yoki bo’lmasligini aniqlaydigan dastur tuzing.\n"
            " Masalan: 3 va 9 → bo’la oladi;   16 va 4 → bo’la oladi;  5 va 10 → bo’la olmaydi. "
            << endl;
    cin >> A >> B;
    if (B == A * A) {
        cout << "Bu shartni qanoatlantiradi, A soni ya'ni " << A << " ning kvadrati " << B << " teng" << endl;
    } else if (A == B * B) {
        cout << "Bu shartni qanoatlantiradi, B soni ya'ni " << B << " ning kvadrati " << A << " teng" << endl;
    } else {
        cout << "Shart qanoatlantirmadi" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t8() {
    int a, b, c;
    cout <<
            "Uchta son berilgan. Agar berilgan sonlar o’sish tartibida bo’lsa,\n "
            "sonlarni ikkilantiring, aks holda sonlarni ishorasi o’zgaritirilsin. Yangi sonlarni ekranga chiqaring"
            << endl;
    cin >> a >> b >> c;
    if (a < b && b < c) {
        cout << " Sizning sonlaringiz ikkilantirildi:\n" << 2 * a << " " << 2 * b << " " << 2 * c << endl;
    } else {
        cout << "Sizning natijangiz " << -a << " " << -b << " " << -c << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t9() {
    int a, b, c;
    cout <<
            "Uchta son berilgan. Agar berilgan sonlar o’sish yoki kamayish tartibida bo’lsa,\n "
            "sonlarni uchmarta oshiring, aks holda sonlarni ishorasi o’zgaritirilsin. Yangi sonlarni ekranga chiqaring."
            << endl;
    cin >> a >> b >> c;
    if ((a < b && b < c) || (a > b) && (b > c)) {
        cout << " Sizning sonlaringiz uchlantirildi:\n" << 3 * a << " " << 3 * b << " " << 3 * c << endl;
    } else {
        cout << "Sizning natijangiz " << -a << " " << -b << " " << -c << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t10() {
    int baho;
    cout <<
            "Imtihondan olingan ball kiritilsa uning bahosini aniqlovchi dastur tuzing.\n"
            " Bunda 0-54 2 baho, 55-70 3 baho, 71-84 4 baho, 85-100 5 baho ga teng."
            << endl;
    cin >> baho;
    if (baho >= 0 && baho <= 54) {
        cout << "2 baho" << endl;
    } else if (baho >= 55 && baho <= 70) {
        cout << "3 baho" << endl;
    } else if (baho >= 71 && baho <= 84) {
        cout << "4 baho" << endl;
    } else if (baho >= 85 && baho <= 100) {
        cout << "5 baho" << endl;
    } else {
        cout << "Bunday baho mavjud emas!" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t11() {
    int a;
    cout <<
            "Butun son berilgan. Agar son musbat bo’lsa, 1 ga oshirilsin,\n "
            "agar manfiy bo’lsa, 2 ga kamaytiring. Agar 0 ga teng bo’lsa, 10 ni o’zlashtirsin.\n "
            "Hosil bo’lgan sonni ekranga chiqaruvchi programma tuzilsin"
            << endl;
    cin >> a;
    if (a > 0) {
        a++;
        cout << "A = " << a << endl;
    } else if (a < 0) {
        a -= 2;
        cout << "A = " << a << endl;
    } else if (a == 0) {
        a = 10;
        cout << "A = " << a << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t12() {
    int a;
    cout <<
            "Butun son berilgan. Agar son musbat bo’lsa 15 martaga oshiring,\n "
            "manfiy bo’lsa absolut qiymatini (ya’ni modulini), aks holda berilgan\n "
            "sonning o’zini ekranga chiqaruvchi dastur tuzing."
            << endl;
    cin >> a;
    if (a > 0) {
        a *= 15;
        cout << "A = " << a << endl;
    } else if (a < 0) {
        cout << "A = " << -(a) << endl;
    } else {
        a;
        cout << "A = " << a << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t13() {
    int A;
    cout <<
            "A son berilgan. Agar A musbat bo’lsa 1 qo’shilgan, manfiy bo’lsa absolyut\n "
            "qiymatiga (moduliga) 2 qo’shilgan, aks holda 100 ga bo’lingan qiymatini\n "
            "chiqaruvchi dastur tuzilsin."
            << endl;
    cin >> A;
    if (A > 0) {
        A += 1;
        cout << "A = " << A << endl;
    } else if (A < 0) {
        cout << "A = " << -(A) + 2 << endl;
    } else {
        A;
        cout << "A = " << A / 100 << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t14() {
    int oy;
    cout << "Foydalanuvchi tomonidan oyning raqami kiritilsa u qaysi \n"
            "faslga kirishini aniqlovchi dastur tuzing." <<
            endl;
    cin >> oy;
    if (oy > 0 && oy <= 3) {
        cout << "Bu fasl bahor!(Mart, Aprel , May)" << endl;
    } else if (oy >= 4 && oy <= 6) {
        cout << "Bu fasl yoz!(Iyun, Iyul, Avgust)" << endl;
    } else if (oy >= 7 && oy <= 9) {
        cout << "Bu fasl kuz!(Sentyabr, Oktyabr, Noyabr)" << endl;
    } else if (oy >= 10 && oy <= 12) {
        cout << "Bu fasl qish!(Dekabr, Yanvar, Fevral)" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t15() {
    int a, b, c;
    cout <<
            "3 ta a, b, c sonlar berilgan. Agar shu sonlardan ixtiyoriy\n "
            "biri ikkinchisidan 10 taga yoki undan ko’proqqa farq qilsa,\n "
            "ekranga true, aks holda false chiqaradigan dastur tuzing."
            << endl;
    cin >> a >> b >> c;
    if (abs(a - b) >= 10 || abs(b - c) >= 10 || abs(a - c) >= 10) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}

void t16() {
    int a, b, c;
    cout <<
            "3 ta a, b, c sonlari berilgan. Agar shu sonlar ichida faqat 2 tasi\n "
            "musbat bo’lsa, bu sonlarni yig’indisini aks holda ko’paytmasini\n"
            " ekranga chiqaruvchi dastur tuzing."
            << endl;
    cin >> a >> b >> c;
    if ((a > 0 && b > 0 && c < 0) ||
        (a < 0 && b > 0 && c > 0) ||
        (a > 0 && b < 0 && c > 0)) {
        cout << "Natija = " << a + b + c << endl;
    } else {
        cout << "Natija = " << a * b * c << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t17() {
    int a, b, c;
    cout <<
            "3 ta a, b, c sonlar berilgan.\n "
            "Shu 3 ta sonni ko’paytmasini ekranga chiqadigan dastur tuzing.\n "
            "Lekin agar sonlardan biri boshqasiga teng bo’lsa,\n "
            "shu sonlar ko’paytmaga ishtirok etmasin."
            << endl;
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "Barcha sonlar teng" << endl;
    } else if (a == b) {
        cout << "ko'paytma = " << c << endl;
    } else if (b == c) {
        cout << "ko'paytma = " << a << endl;
    } else if (a == c) {
        cout << "ko'paytma = " << b << endl;
    } else {
        cout << "ko'paytma = " << a * b * c << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t18() {
    int a, b, c;
    cout <<
            "3ta a, b, c sonlar berilgan. Agar ixtiyoriy 2ta sonni qo’shib,\n "
            "qolgan 3-songa teng bo’lsa, ekranga true, aks holda false chiqaring."
            << endl;
    cin >> a >> b >> c;
    if (a / b == c || b / a == c || b / c == a || c / b == a || a / c == b || c / a == b) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t19() {
    int a, b, c;
    cout <<
            "Berilgan 3 ta sondan bir xil bo’lmaganini ekranga chiqaradigan dastur tuzing.\n "
            "Agar barcha sonlar bir xil bo’lsa ‘=’ belgisi chiqsin."
            << endl;
    cin >> a >> b >> c;
    if (a != b || b != c) {
        cout << "Sonlar bir biriga teng emas!" << endl;
    } else if (a == b && b == c) {
        cout << "Sonlar bir biriga teng!(=)" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t20() {
    int a, b;
    cout <<
            "a va b butun sonlar berilgan. Agar o’zgaruvchilar o’zaro\n "
            "teng bo’lmasa, a va b o’zgaruvchilari ularning yig’indisini\n "
            "o’zlashtirsin, aks holda 0 ni o’zlashtirsin. a va b ning qiymatini ekranga chiqaring.x"
            << endl;
    cin >> a >> b;
    if (a != b) {
        int sum = a + b;
        a = sum;
        b = sum;
        cout << "A->" << a << endl;
        cout << "B->" << b << endl;
    } else {
        a = 0;
        b = 0;
        cout << "A->" << a << endl;
        cout << "B->" << b << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t21() {
    int a, b, c, d;
    cout <<
            "4 ta butun son berilgan. Berilgan sonlar orasida nechta musbat\n son borligini aniqlovchi programma tuzilsin."
            << endl;
    cin >> a >> b >> c >> d;

    int count = 0;
    if (a > 0) count++;
    if (b > 0) count++;
    if (c > 0) count++;
    if (d > 0) count++;

    if (count == 4) {
        cout << "Musbat sonlar : 4 ta" << endl;
    } else if (count == 3) {
        cout << "Musbat sonlar : 3 ta" << endl;
    } else if (count == 2) {
        cout << "Musbat sonlar : 2 ta" << endl;
    } else if (count == 1) {
        cout << "Musbat sonlar : 1 ta" << endl;
    } else {
        cout << "Musbat sonlar : 0 ta" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t22() {
    int a, b, c, d;
    cout <<
            "4 ta butun son berilgan. Berilgan sonlar orasida nechta musbat\n "
            "va manfiy son borligini aniqlovchi programma tuzilsin."
            << endl;
    cin >> a >> b >> c >> d;
    int count = 0;
    if (a > 0) count++;
    if (b > 0) count++;
    if (c > 0) count++;
    if (d > 0) count++;
    if (count == 4) {
        cout << "Musbat sonlar : 4 ta" << endl;
    } else if (count == 3) {
        cout << "Musbat sonlar : 3 ta" << endl;
    } else if (count == 2) {
        cout << "Musbat sonlar : 2 ta" << endl;
    } else if (count == 1) {
        cout << "Musbat sonlar : 1 ta" << endl;
    } else {
        cout << "Musbat sonlar : 0 ta" << endl;
    }
    int mcount = 0;
    if (a < 0) mcount++;
    if (b < 0) mcount++;
    if (c < 0) mcount++;
    if (d < 0) mcount++;
    if (mcount == 4) {
        cout << "Manfiy sonlar : 4 ta" << endl;
    } else if (mcount == 3) {
        cout << "Manfiy sonlar : 3 ta" << endl;
    } else if (mcount == 2) {
        cout << "Manfiy sonlar : 2 ta" << endl;
    } else if (mcount == 1) {
        cout << "Manfiy sonlar : 1 ta" << endl;
    } else {
        cout << "Manfiy sonlar : 0 ta" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t23() {
    int a, b, c, d;
    cout << "4 ta butun son berilgan. Berilgan sonlar orasida 3ga bo’lindaiganlar sonlar "
            "nechtaligini aniqlovchi programma tuzilsin." << endl;
    cin >> a >> b >> c >> d;

    int count = 0;
    if (a % 3 == 0) count++;
    if (b % 3 == 0) count++;
    if (c % 3 == 0) count++;
    if (d % 3 == 0) count++;

    if (count == 4) {
        cout << "3 ga bo'linadigan sonlar : 4 ta" << endl;
    } else if (count == 3) {
        cout << "3 ga bo'linadigan sonlar : 3 ta" << endl;
    } else if (count == 2) {
        cout << "3 ga bo'linadigan sonlar : 2 ta" << endl;
    } else if (count == 1) {
        cout << "3 ga bo'linadigan sonlar : 1 ta" << endl;
    } else {
        cout << "3 ga bo'linadigan sonlar : 0 ta" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t24() {
    int a, b, c, d, e;
    cout << "5 ta butun son berilgan. Berilgan sonlar orasida nechta "
            "juft va toq son borligini aniqlovchi programma tuzilsin." << endl;
    cin >> a >> b >> c >> d >> e;

    int count = 0;
    if (a % 2 == 0) count++;
    if (b % 2 == 0) count++;
    if (c % 2 == 0) count++;
    if (d % 2 == 0) count++;
    if (e % 2 == 0) count++;
    if (count == 5) {
        cout << "Juft sonlar : 5 ta" << endl;
    } else if (count == 4) {
        cout << "Juft sonlar : 4 ta" << endl;
    } else if (count == 3) {
        cout << "Juft sonlar : 3 ta" << endl;
    } else if (count == 2) {
        cout << "Juft sonlar : 2 ta" << endl;
    } else if (count == 1) {
        cout << "Juft sonlar : 1 ta" << endl;
    } else {
        cout << "Juft sonlar : 0 ta" << endl;
    }

    int pcount = 0;
    if (a % 2 != 0) pcount++;
    if (b % 2 != 0) pcount++;
    if (c % 2 != 0) pcount++;
    if (d % 2 != 0) pcount++;
    if (e % 2 != 0) pcount++;
    if (pcount == 5) {
        cout << "Toq sonlar : 5 ta" << endl;
    } else if (pcount == 4) {
        cout << "Toq sonlar : 4 ta" << endl;
    } else if (pcount == 3) {
        cout << "Toq sonlar : 3 ta" << endl;
    } else if (pcount == 2) {
        cout << "Toq sonlar : 2 ta" << endl;
    } else if (pcount == 1) {
        cout << "Toq sonlar : 1 ta" << endl;
    } else {
        cout << "Toq sonlar : 0 ta" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t25() {
    int a, b, c;
    cout << "Uchta son berilgan. Shu sonlarni kichigini aniqlovchi programma tuzilsin." << endl;
    cin >> a >> b >> c;
    int min = a;
    if (min > b) min = b;
    if (min > c) min = c;
    cout << "min = " << min << endl;
    cout << "__________________________________________________" << endl;
}

void t26() {
    int a, b, c;
    cout << "Uchta son berilgan. Shu sonlarni kattasini aniqlovchi programma tuzilsin." << endl;
    cin >> a >> b >> c;
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    cout << "max = " << max << endl;
    cout << "__________________________________________________" << endl;
}

void t27() {
    int a, b, c;
    cout << "Uchta son berilgan. Shu sonlarni o’rtachasini aniqlovchi programma tuzilsin." << endl;
    cin >> a >> b >> c;
    int min = a;
    if (min > b) min = b;
    if (b > c) min = c;
    int max = a;
    if (max < b) max = b;
    if (b < c) max = c;
    int sum = a + b + c;
    int middle = sum - max - min;
    cout << "o'rtacha son " << middle << endl;
    cout << "__________________________________________________" << endl;
}

void t28() {
    int a, b, c;
    cout <<
            "Uchta son berilgan. Shu sonlardan yig’indisi eng katta bo’ladigan\n"
            " ikkitasini ekranga chiqaruvchi dastur tuzilsin. Masalan: 3, 2, 6 → 3 va 6"
            << endl;
    cin >> a >> b >> c;
    int min = a;
    if (min > b) min = b;
    if (b > c) min = c;
    int max = a;
    if (max < b) max = b;
    if (b < c) max = c;
    int sum = a + b + c;
    int middle = sum - max - min;
    cout << "Kiritilgan sonlar ichidan eng katta ikkitasi bu: " << middle << " va " << max << endl;
    cout << "__________________________________________________" << endl;
}

void t29() {
    int a, b, c;
    cout <<
            "Uchta son berilgan. Shu sonlardan yig’indisi eng kichik\n"
            " bo’ladigan ikkitasini ekranga chiqaruvchi programma tuzilsin."
            << endl;
    cin >> a >> b >> c;
    int min = a;
    if (min > b) min = b;
    if (b > c) min = c;
    int max = a;
    if (max < b) max = b;
    if (b < c) max = c;
    int sum = a + b + c;
    int middle = sum - max - min;
    cout << "Kiritilgan sonlar ichidan eng kichik ikkitasi bu: " << min << " va " << middle << endl;
    cout << "__________________________________________________" << endl;
}

void t30() {
    int a, b, c;
    cout << "Uchta son berilgan. Shu sonlarni avval kichigini keyin\n"
            " kattasini ekranga chiqaruvchi programma tuzilsin."
            << endl;
    cin >> a >> b >> c;
    int min = a;
    if (min > b) min = b;
    if (b > c) min = c;
    int max = a;
    if (max < b) max = b;
    if (b < c) max = c;
    cout << "min = " << min << ", max = " << max << endl;
    cout << "__________________________________________________" << endl;
}

void t31() {
    int a, b, c, d, e;
    cout << "Beshta son berilgan. Shu sonlar orasidan kattasini toping." << endl;
    cin >> a >> b >> c >> d >> e;
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    if (max < d) max = d;
    if (max < e) max = e;
    cout << "Max = " << max << endl;
    cout << "__________________________________________________" << endl;
}

void t32() {
    int a, b;
    cout <<
            "0 dan katta 2 ta son berilgan. 21 dan katta bo’lmagan\n "
            "va 21 ga eng yaqin sonni ekranga chiqaring. Agar ikkala son ham 21\n "
            "dan katta bo’lsa, ekranga 0 ni chiqaradigan dastur tuzing.\n"
            " Masalan: 10 va 15 → 15;    5 va 25 → 5;    25 va 30 → 0"
            << endl;
    cin >> a >> b;
    if (a > 0 && b > 0) {
        if (a > 21 && b > 21) {
            cout << "You got: " << a * 0 << endl;
        } else if (a > 21) {
            cout << "You got: " << b << endl;
        } else if (b > 21) {
            cout << "You got: " << a << endl;
        } else {
            cout << "You got: " << max(a, b) << endl;
        }
    } else {
        cout << "sonlar 0 dan katta son bo'lishi kerak!" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t33() {
    int a;
    cout << "Berilgan uch xonali son juft bo’lsa raqamlari yigindisi\n"
            " aks holatda raqamlar ko’paytmasini aniqlovchi dastur tuzing." << endl;
    cin >> a;
    int birlar = a % 10;
    int onlar = a / 10 % 10;
    int yuzlar = a / 100 % 10;
    if (a > 99 && a < 1000) {
        if (a % 2 == 0) {
            cout << "Raqamlar yig'indisi : " << yuzlar + onlar + birlar << endl;
        } else if (a % 2 != 0) {
            cout << "Raqamlar ko'paytmasi : " << yuzlar * onlar * birlar << endl;
        }
    } else {
        cout << "Berilgan son 3-xonali son bo'lishi kerak!" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t34() {
    int a;
    cout << "Berilgan uch xonali sonning raqamlarining kattasini\n"
            " qaytaradigan dastur tuzing." << endl;
    cin >> a;
    if (a > 99 && a < 1000) {
        int birlar = a % 10;
        int onlar = a / 10 % 10;
        int yuzlar = a / 100 % 10;
        int max = birlar;
        if (max < onlar) max = onlar;
        if (max < yuzlar) max = yuzlar;
        cout << "Eng katta raqam : " << max << endl;
    } else {
        cout << "Berilgan son 3-xonali son bo'lishi kerak!" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t35() {
    int a;
    cout << "Berilgan uch xonali sonning raqamlarining kichkinasini\n qaytaradigan dastur tuzing." << endl;
    cin >> a;
    if (a > 99 && a < 1000) {
        int birlar = a % 10;
        int onlar = a / 10 % 10;
        int yuzlar = a / 100 % 10;
        int min = birlar;
        if (min > onlar) min = onlar;
        if (min > yuzlar) min = yuzlar;
        cout << "Eng kichik raqam : " << min << endl;
    } else {
        cout << "Berilgan son 3-xonali son bo'lishi kerak!" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t36() {
    int a;
    cout << "Berilgan uch xonali sonning raqamlarining kattasining kichkinasidan\n"
            " ayirilganini topuvchi dastur tuzing." << endl;
    cin >> a;
    if (a > 99 && a < 1000) {
        int birlar = a % 10;
        int onlar = a / 10 % 10;
        int yuzlar = a / 100 % 10;

        int max = birlar;
        if (max < onlar) max = onlar;
        if (max < yuzlar) max = yuzlar;

        int min = birlar;
        if (min > onlar) min = onlar;
        if (min > yuzlar) min = yuzlar;

        cout << "Eng katta raqam : " << max << endl;
        cout << "Eng kichik raqam : " << min << endl;
        cout << "Ularning ayirmasi: " << max - min << endl;
    } else {
        cout << "Berilgan son 3-xonali son bo'lishi kerak!" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t37() {
    int a;
    cout << "Berilgan son manfiy bulsa “berilgan son manfiy”\n"
            " agarda berilgan son musbat bo’lsa\n"
            " “berilgan son musbat ” aks holatda “berilgan son nolga teng” degan\n"
            " yozuvni ekranga chiqaruvchi dastur tuzing." << endl;
    cin >> a;
    if (a > 0) {
        cout << "berilgan son musbat" << endl;
    } else if (a < 0) {
        cout << "berilgan son manfiy" << endl;
    } else {
        cout << "berilgan son nolga teng" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t38() {
    int a;
    cout << "Berilgan sonning necha xonali ekanligini aniqlovchi dastur tuzing.\n"
            " Son [0-999] oralig’ida kiritiladi." << endl;
    cin >> a;
    if (a > 0 && a < 1000) {
        if (a >= 1 && a < 10) {
            cout << "1 xonali son" << endl;
        } else if (a >= 10 & a < 100) {
            cout << "2 xonali son" << endl;
        } else {
            cout << "3 xonali son" << endl;
        }
    } else {
        cout << "Siz [0-999] oraliqdagi son kiritishingiz lozim!" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t39() {
    int a, b;
    cout << "2 ta son berilgan . Agar ulardan faqat bittasi manfiy\n"
            " bo’lsa ularning ko’paytmasi agarda ikkalasi ham musbat\n"
            " bo’lsa kvatratlari yig’indisi aks holda ularning o’rta \n"
            "arifmetigi chiqsin." << endl;
    cin >> a >> b;
    if ((a < b && b > a) || (a > b && a < b)) {
        cout << "ko'paytmasi :" << a * b << endl;
    } else if (a > 0 && b > 0) {
        cout << "kvadratlar yig'indisi : " << (a * a + b * b) << endl;
    } else {
        cout << "o'rta arifmetik : " << (a + b) / 2 << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t40() {
    int oy;
    cout << "Foydalanuvchi tomonidan oyning raqami kiritilsa u qaysi \n"
            "faslga kirishini aniqlovchi dastur tuzing." <<
            endl;
    cin >> oy;
    if (oy > 0 && oy <= 3) {
        cout << "Bu fasl bahor!(Mart, Aprel , May)" << endl;
    } else if (oy >= 4 && oy <= 6) {
        cout << "Bu fasl yoz!(Iyun, Iyul, Avgust)" << endl;
    } else if (oy >= 7 && oy <= 9) {
        cout << "Bu fasl kuz!(Sentyabr, Oktyabr, Noyabr)" << endl;
    } else if (oy >= 10 && oy <= 12) {
        cout << "Bu fasl qish!(Dekabr, Yanvar, Fevral)" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t41() {
    int num;
    cout << "(0;99) oralig’idagi son berilgan uni so’zlarda ifodalang.\n"
            " (input: 71 output: yetmish bir)" << endl;
    cin >> num;
    if (num >= 0 && num < 100) {
        string birlar[] = {"", "bir", "ikki", "uch", "to'rt", "besh", "olti", "yetti", "sakkiz", "to'qqiz"};
        string onlar[] = {
            "o'n", "o'n bir", "o'n ikki", "o'n uch", "o'n to'rt", "o'n besh", "o'n olti", "o'n yetti", "o'n sakkiz",
            "o'n to'qqiz"
        };
        string onliklar[] = {
            "", "o'n", "yigirma", "o'ttiz", "qirq", "ellik", "oltmish", "yetmish", "sakson", "to'qson"
        };
        if (num < 10) {
            cout << "Siz kiritgan son bu: " << num << " -> " << birlar[num];
        } else if (num < 20) {
            cout << "Siz kiritgan son bu: " << num << " -> " << onlar[num - 10];
        } else {
            cout << "Natija -> " << onliklar[num / 10];
            if (num % 10 != 0) {
                cout << " " << birlar[num % 10];
            }
        }
        cout << endl;
    } else {
        cout << "Siz kiritgan son [0-99] oraliqda bo'lishi kerak" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t42() {
    int a;
    cout << "(0;999) oralig’idagi son berilgan uni so’zlarda\n"
            "ifodalang. (input: 716 output: yetti yuz o’n olti)" << endl;
    cin >> a;
    if (a >= 0 && a < 1000) {
        string birlar[] = {"", "bir", "ikki", "uch", "to'rt", "besh", "olti", "yetti", "sakkiz", "to'qqiz"};
        string onlar[] = {
            "o'n", "o'n bir", "o'n ikki", "o'n uch", "o'n to'rt", "o'n besh", "o'n olti", "o'n yetti", "o'n sakkiz",
            "o'n to'qqiz"
        };
        string onliklar[] = {
            "", "o'n", "yigirma", "o'ttiz", "qirq", "ellik", "oltmish", "yetmish", "sakson", "to'qson"
        };
        string yuzliklar[] = {
            "", "bir yuz", "ikki yuz", "uch yuz", "to'rt yuz", "besh yuz", "olti yuz", "yetti yuz", "sakkiz yuz",
            "to'qqiz yuz"
        };
        if (a < 10) {
            cout << "Siz kiritgan son bu: " << a << " -> " << birlar[a];
        } else if (a < 20) {
            cout << "Siz kiritgan son bu: " << a << " -> " << onlar[a - 10];
        } else if (a < 100) {
            cout << "Natija -> " << onliklar[a / 10];
            if (a % 10 != 0) {
                cout << " " << birlar[a % 10];
            }
        } else {
            string result = yuzliklar[a / 100];
            int remainder = a % 100;
            if (remainder != 0) {
                if (remainder < 10) {
                    result += " " + birlar[remainder];
                } else if (remainder < 20) {
                    result += " " + onlar[remainder - 10];
                } else {
                    result += " " + onliklar[remainder / 10];
                    if (remainder % 10 != 0) {
                        result = result + " " + birlar[remainder % 10];
                    }
                }
            }
            cout << "Natija -> " << result;
        }
        cout << endl;
    } else {
        cout << "Siz kiritgan son [0-999] oraliqda bo'lishi kerak" << endl;
    }
    cout << "__________________________________________________" << endl;
}

void t43() {
    int a;
    cout << "(0;999) oralig’idagi son berilgan. Uning necha xonali va toq\n"
            " yoki juft ekanligini aniqlang.(input: 124 output: uch xonali juft)" << endl;
    cin >> a;
    if (a >= 0 && a < 10) {
        cout << "Berilgan son : 1-xonali" << endl;
        if (a % 2 == 0) {
            cout << "Berilgan son : Juft son" << endl;
        } else if (a % 2 != 0) {
            cout << "Berilgan son : Toq son" << endl;
        }
    } else if (a >= 10 && a < 100) {
        cout << "Berilgan son : 2-xonali" << endl;
        if (a % 2 == 0) {
            cout << "Berilgan son : Juft son" << endl;
        } else if (a % 2 != 0) {
            cout << "Berilgan son : Toq son" << endl;
        }
    } else if (a >= 100 && a < 1000) {
        cout << "Berilgan son : 3-xonali" << endl;
        if (a % 2 == 0) {
            cout << "Berilgan son : Juft son" << endl;
        } else if (a % 2 != 0) {
            cout << "Berilgan son : Toq son" << endl;
        }
    }
    cout << "__________________________________________________" << endl;
}

void t44() {
    {
        int a, b, c;
        cout <<
                "Uchta son berilgan. Agar berilgan sonlar o’sish tartibida bo’lsa,\n "
                "sonlarni ikkilantiring, aks holda sonlarni ishorasi o’zgaritirilsin. Yangi sonlarni ekranga chiqaring"
                << endl;
        cin >> a >> b >> c;
        if (a < b && b < c) {
            cout << " Sizning sonlaringiz ikkilantirildi:\n" << 2 * a << " " << 2 * b << " " << 2 * c << endl;
        } else {
            cout << "Sizning natijangiz " << -a << " " << -b << " " << -c << endl;
        }
        cout << "__________________________________________________" << endl;
    }
}

void t45() {
    int a, b, c;
    cout <<
            "Uchta son berilgan. Shu sonlardan yig’indisi eng katta bo’ladigan\n"
            " ikkitasini ekranga chiqaruvchi dastur tuzilsin. Masalan: 3, 2, 6 → 3 va 6"
            << endl;
    cin >> a >> b >> c;
    int min = a;
    if (min > b) min = b;
    if (b > c) min = c;
    int max = a;
    if (max < b) max = b;
    if (b < c) max = c;
    int sum = a + b + c;
    int middle = sum - max - min;
    cout << "Kiritilgan sonlar ichidan eng katta ikkitasi bu: " << middle << " va " << max << endl;
    cout << "__________________________________________________" << endl;
}
