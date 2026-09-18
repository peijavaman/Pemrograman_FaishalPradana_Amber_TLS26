#include <iostream>
using namespace std;

void hapus_astronaut(int astronaut[], int &jumlah, int idx) {
    for (int i = idx; i < jumlah - 1; i++) {
        astronaut[i] = astronaut[i + 1]; 
    } jumlah--;
} //fungsi menggeser astronot ketika ada yang dieliminasi 

int main() {

    cout<<"###Problem 1 - The Last Astronaut###"<<"\n";
    cout<<"#####Faishal Pradana_Amber#####"<<"\n";

    int n, k;
    int astronaut[100]; //atur batas maksimal (fleksibel)

    cout << "Jumlah astronaut = ";
    cin >> n;

    cout << "Nilai K = ";
    cin >> k;

    if (n <= 0 || n > 100 || k < 2) {
        cout << "Tidak valid";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        astronaut[i] = i + 1;
    }

    int jumlah = n;
    int index = 0;
    cout << "Urutan astronot yg dieliminasi : "<<"\n";

    while (jumlah > 1) {
        index = (index + k - 1) % jumlah;
        int dihapus = astronaut[index];
        cout << dihapus << " ";
        if (dihapus % 2 == 0) {
            k = k + 2;
        } else {
            k = k - 1;
        }
        if (k < 2) {
            k = 2;
        }

        hapus_astronaut(astronaut, jumlah, index);

        if (index == jumlah) {
            index = 0;
        }
    }

    cout << "Astronaut terakhir : " <<"\n"<< astronaut[0];

    return 0;
}