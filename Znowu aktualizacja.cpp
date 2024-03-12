#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long convertToBytes(long long size, string unit) {
    if (unit == "B") return size;
    else if (unit == "KB") return size * 1024;
    else if (unit == "MB") return size * 1024 * 1024;
    else if (unit == "GB") return size * 1024 * 1024 * 1024;
    return 0;
}

long long convertToBits(long long speed, string unit) {
    if (unit == "b") return speed;
    else if (unit == "Kb") return speed * 1024;
    else if (unit == "Mb") return speed * 1024 * 1024;
    return 0;
}

void calculateDownloadTime(long long size, string sizeUnit, long long speed, string speedUnit) {
    long long sizeInBytes = convertToBytes(size, sizeUnit) * 8;
    long long speedInBits = convertToBits(speed, speedUnit);

    long long time = floor(sizeInBytes / speedInBits);

    if (time < 1) {
        cout << "w mgnieniu oka" << endl;
        return;
    }

    const int minut = 60; //s
    const int godziny = 3600; //s
    const int dni = 86400; //s
    const int rok = 31536000; //s
    int liczba_dni, liczba_godzin, liczba_minut, liczba_sekund;
    int reszta1, reszta2, reszta3;

    liczba_dni = time / dni;

    if (liczba_dni != 0) {
        cout << "dni: " << liczba_dni << endl;
    }

    reszta1 = time % dni;

    liczba_godzin = reszta1 / godziny;
    
    if (liczba_godzin != 0) {
        cout << "godziny: " << liczba_godzin << endl;
    }

    reszta2 = reszta1 % godziny;

    liczba_minut = reszta2 / minut;
    if (liczba_minut != 0) {
        cout << "minuty: " << liczba_minut << endl;
    }

    reszta3 = reszta2 % minut;

    liczba_sekund = reszta3;
    if (liczba_sekund != 0) {
        cout << "sekundy: " << liczba_sekund << endl;
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long size, speed;
        string sizeUnit, speedUnit;

        cin >> size >> sizeUnit >> speed >> speedUnit;

        calculateDownloadTime(size, sizeUnit, speed, speedUnit);
        cout << endl;
    }

    return 0;
}