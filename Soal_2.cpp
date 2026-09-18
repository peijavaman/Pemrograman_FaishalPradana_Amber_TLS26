#include <iostream>
using namespace std;

int nilai_huruf(char huruf) {
    return huruf - 'A' + 1;
}

char huruf_baru(int nilai) {
    return 'A' + nilai - 1;
}

int main() {
    cout<<"###Problem 2 - Alien-In-The-Middle###"<<"\n";
    cout<<"#####Faishal Pradana_Amber#####"<<"\n";
    char pesan[100];
    char hasil[100];

    cout << "Masukkan pesan (Kapital lebih baik): ";
    cin >> pesan;

    int i = 0;

    while (pesan[i] != '\0') {

        if (i == 0) {
            hasil[i] = pesan[i];
        } else {
            int a = nilai_huruf(pesan[i]);
            int b = nilai_huruf(pesan[i - 1]);

            int nilai = (a + b) % 26;

            if (nilai == 0) {
                nilai = 26;
            }

            hasil[i] = huruf_baru(nilai);
        }

        i++;
    }

    hasil[i] = '\0';

    cout << "Hasil pesan : " << hasil;

    return 0;
}