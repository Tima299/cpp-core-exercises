/* written by Temur Eshboyev
22/09/2024, 17:32:32*/
#include <iostream>
using namespace std;

void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10(), t11();

int main() {
    int task;
    char continueChoice;

    do {
        cout << "Select a task (1-11, to exit 0)" << endl;
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
    cout << "Task-1" << endl;
    cout << "___________________________________________________" << endl;

    string a;
    int b;
    string c;
    cout << "___________________________________________________" << endl;

    cout << "Ismingizni kiriting " << endl;
    cin >> a;
    cout << "Yoshingizni kiriting " << endl;
    cin >> b;
    cout << "Dasturlash tilingizni kiriting " << endl;
    cin >> c;
    cout << "___________________________________________________" << endl;

    cout << "Mening ismim " << a << "." << endl;
    cout << "Men " << b << " yoshdaman." << endl;
    cout << "Men " << c << " dasturlash tilida kod yozaman." << endl;
    cout << "___________________________________________________" << endl;
    cout << "___________________________________________________" << endl;
}

void t2() {
    cout << "Task-2" << endl;
    cout << "___________________________________________________" << endl;

    string name1;
    string name2;
    string name3;
    string name4;
    int maktab;
    cout << "1-ismni kiriting" << endl;
    cin >> name1;
    cout << "2-ismni kriting" << endl;
    cin >> name2;
    cout << "3-ismni kriting" << endl;
    cin >> name3;
    cout << "4-ismni kriting" << endl;
    cin >> name4;
    cout << "Bolalar nechanchi maktabda o'qishadi?" << endl;
    cin >> maktab;
    cout << "Bu bolaning ismi " << name1 << "." << endl;
    cout << "3 ta do'stlarining ismlari " << name2 << " ," << name3 << " va " << name4 << "." << endl;
    cout << "Ular birga " << maktab << "-maktabda o'qishadi." << endl;
    cout << "___________________________________________________" << endl;
}

void t3() {
    cout << "Task-3" << endl;
    cout << "___________________________________________________" << endl;

    string meva;
    double kilo;
    string rang;
    cout << "mevani kiriting:" << endl;
    cin >> meva;
    cout << "salmog'ini kiriting:" << endl;
    cin >> kilo;
    cout << "rangini kiriting:" << endl;
    cin >> rang;
    cout << "Stol ustida yashikda " << meva << "lar bor." << endl;
    cout << "Yashikning og'irligi " << kilo << " kilogram." << endl;
    cout << "Ularning hammasi " << rang << " rangda." << endl;
    cout << "___________________________________________________" << endl;
}

void t4() {
    cout << "Task-4" << endl;
    cout << "___________________________________________________" << endl;

    string xonaniShakli;
    int eni;
    double boyi;

    cout << "Xonani shaklini kiriting" << endl;
    cin >> xonaniShakli;
    cout << "Xonani enini kiriting" << endl;
    cin >> eni;
    cout << "Xonani bo'yini kiriting" << endl;
    cin >> boyi;
    cout << "Xona" << xonaniShakli << " shaklida." << endl;
    cout << "Xonaning eni " << eni << " metr, bo'yi " << boyi << " metr." << endl;
    double Yuzi = boyi * eni;
    cout << "___________________________________________________" << endl;
    cout << "Xonaning yuzasi " << Yuzi << " metr kvadrat." << endl;
    cout << "___________________________________________________" << endl;
}

void t5() {
    cout << "Task-5" << endl;
    cout << "___________________________________________________" << endl;

    string fan1;
    string fan2;
    string fan3;
    string darsBoshlanishVaqti;

    cout << "1-fanni kiriting: " << endl;
    cin >> fan1;
    cout << "2-fanni kiriting: " << endl;
    cin >> fan2;
    cout << "3-fanni kiriting: " << endl;
    cin >> fan3;
    cout << "Dars boshlanish vaqtini kiriting: " << endl;
    cin >> darsBoshlanishVaqti;
    cout << "Ertaga dars jadvaliga 3ta dars qo'yilgan va " << fan1 << "," << fan2 << " hamda " << fan3 <<
            "darslari bo'lib o'tadi." << endl;
    cout << "Dars soat " << darsBoshlanishVaqti << " da boshlanadi." << endl;
    cout << "___________________________________________________" << endl;
}

void t6() {
    cout << "Task-6" << endl;
    cout << "___________________________________________________" << endl;

    double nodirniJamiPuli;
    double dostiniJamiPuli;
    double nodirBerganQarzi;

    cout << "Nodirni qancha puli bo'lsin?" << endl;
    cin >> nodirniJamiPuli;
    cout << "Do'stini qancha puli bo'lsin?" << endl;
    cin >> dostiniJamiPuli;
    cout << "Do'sti qarz so'rayabdi, Nodir qancha pul bersin?" << endl;
    cin >> nodirBerganQarzi;
    double nodirniQolganPuli = nodirniJamiPuli - nodirBerganQarzi;
    double dostiniQolganPuli = dostiniJamiPuli + nodirBerganQarzi;
    cout << "Nodirda " << nodirniJamiPuli << " so'm, do'stida esa " << dostiniJamiPuli << " so'm puli bor edi." << endl;
    cout << " Nodir do'stiga " << nodirBerganQarzi << " so'm qarz berdi." << endl;
    cout << "Natijada Nodirda " << nodirniQolganPuli << " so'm, do'stida " << dostiniQolganPuli << " so'm pul bo'ldi" <<
            endl;

    cout << "___________________________________________________" << endl;
}

void t7() {
    cout << "Task-7" << endl;
    cout << "___________________________________________________" << endl;

    int farzand1Yoshi;
    int farzand2Yoshi;
    int farzand3Yoshi;

    cout << "Katta farzand necha yosh bo'lsin?" << endl;
    cin >> farzand1Yoshi;
    cout << "O'rtancha farzand necha yosh bo'lsin?" << endl;
    cin >> farzand2Yoshi;
    cout << "Kichik farzand necha yosh bo'lsin?" << endl;
    cin >> farzand3Yoshi;
    cout << "Jahongirning 3ta o'g'li bor. Ulardan kattasi " << farzand1Yoshi << " yoshda, ";
    cout << "o'rtanchasi " << farzand2Yoshi << " yosh, kichigi " << farzand3Yoshi << " yoshda. ";
    int YoshlarYigindisi = farzand1Yoshi + farzand2Yoshi + farzand3Yoshi;
    cout << "Ularning jami yoshlari yig'indisi " << YoshlarYigindisi << " yoshga teng." << endl;
    cout << "___________________________________________________" << endl;
}

void t8() {
    cout << "Task-8" << endl;
    cout << "___________________________________________________" << endl;
    string qandayMeva;
    string shakliQanday;
    int nechaKishiga;
    cout << "Qanday mevali tortni xohlaysiz?" << endl;
    cin >> qandayMeva;
    cout << "Tortni shakli qanday?" << endl;
    cin >> shakliQanday;
    cout << "Tort necha kishiga yetsin?" << endl;
    cin >> nechaKishiga;
    cout << "Mana bu tort " << qandayMeva << "li va u " << shakliQanday << " shaklida." << endl;
    cout << "U " << nechaKishiga << " kishiga yetadi." << endl;
    cout << "___________________________________________________" << endl;
}

void t9() {
    cout << "Task-9" << endl;
    cout << "___________________________________________________" << endl;
    string qandayObHavo;
    double harorat;
    string qandayKiyimda;
    cout << "Ko'chada qanday Ob-Havo?" << endl;
    cin >> qandayObHavo;
    cout << "Ko'chada harorat necha darajada?" << endl;
    cin >> harorat;
    cout << "Anvar qanday kiyim kiyib chiqqani ma'qul?" << endl;
    cin >> qandayKiyimda;
    cout << "Bugun havo " << qandayObHavo << "li, harorat " << harorat << " daraja." << endl;
    cout << "Anvar ko'chaga qora " << qandayKiyimda << "da chiqdi." << endl;
    cout << "___________________________________________________" << endl;
}

void t10() {
    cout << "Task-10" << endl;
    cout << "___________________________________________________" << endl;
    string ism;
    int nechanchiSinf;
    char qandayHarfliSinf;
    int nechta_fandan_5_oldi;
    int necha_baho;
    cout << "O'quvchini ismi nima bo'lsin?" << endl;
    cin >> ism;
    cout << "Bola nechanchi sinfda o'qiydi?" << endl;
    cin >> nechanchiSinf;
    cout << "O'quvchi qaysi harf bilan belgilangan sinfda o'qiydi?" << endl;
    cin >> qandayHarfliSinf;
    cout << "O'quvchi nechta fandan baho olsin?" << endl;
    cin >> nechta_fandan_5_oldi;
    cout << "Nechi baho olsin?" << endl;
    cin >> necha_baho;
    cout << ism << " maktabda " << nechanchiSinf << "-" << qandayHarfliSinf << " sinfda o'qiydi." << endl;
    cout << "U bugun " << nechta_fandan_5_oldi << " ta fandan " << necha_baho << " baho oldi." << endl;
    cout << "___________________________________________________" << endl;
}

void t11() {
    cout << "Task-11" << endl;
    cout << "___________________________________________________" << endl;
    string meva;
    int kechagiNarx;
    int nechaFoizga;
    cout << "Qaysi mevani narxi oshsin?" << endl;
    cin >> meva;
    cout << "Kechagi narxi qancha edi?" << endl;
    cin >> kechagiNarx;
    cout << "Narxi necha foizga oshdi?" << endl;
    cin >> nechaFoizga;
    int oshganNarxi = kechagiNarx + (kechagiNarx * nechaFoizga / 100);

    cout << "Do'konda " << meva << "lar sotilyapti. Ular kecha " << kechagiNarx << " so'm edi." << endl;
    cout << "Bugun ularni narxi " << nechaFoizga << " %ga oshirildi va " << oshganNarxi << " so'm bo'ldi." << endl;
    cout << "___________________________________________________" << endl;
}
