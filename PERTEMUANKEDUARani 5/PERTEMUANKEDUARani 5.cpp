// PERTEMUANKEDUARani 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int nilMtk, nilBahasa, nilFisika;
    string status;
    float rerata;

    cout << "Nilai Matematika : " << endl;
    cin >> nilMtk;
    cout << "Nilai Bahasa : " << endl;
    cin >> nilBahasa;
    cout << "Nilai Fisika : " << endl;
    cin >> nilFisika;

    rerata = (nilBahasa + nilMtk + nilFisika) / 3;

    if (nilMtk > 70 || rerata > 60) {
        status = "Lulus";
        if (nilFisika >= 90) {
            status = "Lulusan Terbaik";
        }
    }
    else {
        status = "Tidak Lulus";
    }
    cout << "Nilai Matematika : " << nilMtk << endl;
    cout << "Nilai Bahasa : " << nilBahasa << endl;
    cout << "Nilai Fisika : " << nilFisika << endl;
    cout << "Status kelulusan : " << status;
}
