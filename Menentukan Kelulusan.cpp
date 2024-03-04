#include <iostream>
using namespace std;

int main(){
    string status
    
    ;cout << "Masukan nilai Matematika";
    cin >> nMat;
    cout << "Masukan nilai Fisika = ";
    cin >> nFisika;

     rerata = (nFisika + nMat) / 2;

    if (nFisika > 60) {
        status = "Lulus jalur rerata";
    }
    else if (nMat > 70) {
        status = "Lulus jalur matematika"
    ;}
    else
    { 
        status = "Tidak Lulus";
    }

    cout << "Statusnya adalah" << status << endl;

    return 0;
    
}