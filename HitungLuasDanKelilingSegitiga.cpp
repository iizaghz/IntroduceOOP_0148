#include <iostream>
using namespace std;

class segitiga {
public:
    int alas, tinggi;
    int sa, sb, sc;

    void inputLuas() {
        cout << "Masukkan alas segitiga (1-50): ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga (1-50): ";
        cin >> tinggi;
    
        if (alas < 1 || alas > 50) {
            cout << "Input Alas tidak valid. Silahkan masukkan bilangan antara 1-50."<< endl;
        } else {
            if ((tinggi < 1 ))
            {
                cout << "Input Tinggi tidak valid. Silahkan masukkan bilangan antara 1-50"<< endl;
            }

            if (tinggi > 50)
            {
                cout << "Input Tinggi tidak valid. Silahkan masukkan bilangan antara 1-50"<< endl;
            }
            
            
            if (alas % 2 != 0) {
                cout << "Alas yang dimasukan adalah bilangan ganjil, luas tidak dapar dihitung."<< endl;

            } else {

            if (tinggi % 2 != 0)
            {
                cout << "Tinggi yang dimasukan adalah bilangan ganjil, luas tidak dapar dihitung."<< endl;
            }
                outputLuas();
                cout << endl;
            }
        }
    }

    void inputKeliling() {
        cout << "Masukkan sisi A: ";
        cin >> sa;
        cout << "Masukkan sisi B: ";
        cin >> sb;
        cout << "Masukkan sisi C: ";
        cin >> sc;

        if (sa < 1 || sa > 50 || sb < 1 || sb > 50 || sc < 1 || sc > 50) {
            cout << "Input tidak valid. Nilai sisi harus antara 1 sampai 50.\n";
        } else {
            if (sa % 2 != 0 || sb % 2 != 0 || sc % 2 != 0) {
                cout << "Input tidak valid. Semua sisi harus bilangan genap.\n";
            } else {
                outputKeliling();
                cout << endl;
            }
        }
        
    }


private:
    float hitungLuas(int a, int t) {
        return 0.5 * a * t;
    }

    float hitungKeliling(int a, int b, int c) {
        return a + b + c;
    }

public:
    void outputLuas() {
    cout << "Luas segitiga: " << hitungLuas(alas, tinggi) << endl;
}

    void outputKeliling() {
    cout << "Keliling segitiga: " << hitungKeliling(sa, sb, sc) << endl;
}
};

int main() {
    segitiga iza;
    int pilihan;

    do {
        cout << "======= MENU SEGITIGA ======="<< endl;
        cout << "1. Hitung Luas Segitiga" << endl;
        cout << "2. Hitung Keliling Segitiga" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukan Pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                iza.inputLuas();
                break;
            case 2:
                iza.inputKeliling();
                break;
            case 3:
                cout << endl;
                cout << "Program telah berhenti" << endl;
                break;
            default:
                cout << "!!! Silahkan Pilih antara 1 - 3 !!!" << endl;
                cout << endl;
                break;
        }
    } while (pilihan != 3);

    return 0;
}
