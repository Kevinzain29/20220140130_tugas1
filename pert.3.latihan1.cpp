#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a+b)/2;
}

string status(double rata){
    if (rata >= 60)
    return "lulus";
    else 
    return "gagal";
}

string status2 (double rata, double nil){
    if (rata >= 60 || nil >= 70)
    return "lulus";
    else 
    return "gagal";
}

int main(){
    double nilM,nilB;
    cout  << "masukkan nilai matematika =";
    cin >> nilM;
    cout << "masukkan nilai Bahasa Indonesia =";
    cin >> nilB;
    cout << "status kelulusan=" << status(rerata(nilM,nilB));
    cout << "\nstatus kelulusan ke 2 = " << status2(rerata(nilM,nilB),nilM);
    return 0;
}