#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    const int gas_size = 16;
    string gasname;
    string gansname[gas_size] = { "air", "argon", "butane", "carbon dioxide", "carbon monoxide", "ethane", "ethylene", "helium", "hydrogen", "methane", "neon", "nitrogen", "octane", "oxygen", "propane", "steam" };


    ifstream formula("formula.txt");
    string fur[gas_size];
    int f = 0;
    while (formula >> fur[f] && f < gas_size) {
        f++;
    }
    formula.close();

    ifstream gasconstant("gasconstant");
    double R[gas_size];
    int r = 0;
    while (gasconstant >> R[r] && r < gas_size) {
        r++;
    }
    gasconstant.close();

    ifstream specificheatp("cp");
    double P[gas_size];
    int p = 0;
    while (specificheatp >> P[p] && p < gas_size) {
        p++;
    }
    specificheatp.close();

    ifstream specificheatv("cv.txt");
    double V[gas_size];
    int v = 0;
    while (specificheatv >> V[v] && v < gas_size) {
        v++;
    }
    specificheatv.close();


    cout << "please enter the gas name : ";
    cin >> gasname;

    if (gasname == "air") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[0] << endl << "the specific heat at constant pressure = " << P[0] << endl << "the specific heat at constant volume = " << V[0] << endl;
    }
    else if (gasname == "argon") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[1] << endl << "and the its formula is " << fur[1] << endl << "the specific heat at constant pressure = " << P[1] << endl << "the specific heat at constant volume = " << V[1] << endl;
        ;
    }
    else if (gasname == "butane") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[2] << endl << "and the its formula is " << fur[2] << endl << "the specific heat at constant pressure = " << P[2] << endl << "the specific heat at constant volume = " << V[2] << endl;
    }
    else if (gasname == "carbon dioxide") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[3] << endl << "and the its formula is " << fur[3] << endl << "the specific heat at constant pressure = " << P[3] << endl << "the specific heat at constant volume = " << V[3] << endl;
    }
    else if (gasname == "carbon monoxide") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[4] << endl << "and the its formula is " << fur[4] << endl << "the specific heat at constant pressure = " << P[4] << endl << "the specific heat at constant volume = " << V[4] << endl;
    }
    else  if (gasname == "ethane") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[5] << endl << "and the its formula is " << fur[5] << endl << "the specific heat at constant pressure = " << P[5] << endl << "the specific heat at constant volume = " << V[5] << endl;
    }
    else if (gasname == "ethylene") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[6] << endl << "and the its formula is " << fur[6] << endl << "the specific heat at constant pressure = " << P[6] << endl << "the specific heat at constant volume = " << V[6] << endl;
    }
    else if (gasname == "helium") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[7] << endl << "and the its formula is " << fur[7] << endl << "the specific heat at constant pressure = " << P[7] << endl << "the specific heat at constant volume = " << V[7] << endl;
    }
    else if (gasname == "hydrogen") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[8] << endl << "and the its formula is " << fur[8] << endl << "the specific heat at constant pressure = " << P[8] << endl << "the specific heat at constant volume = " << V[8] << endl;
    }
    else if (gasname == "methane") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[9] << endl << "and the its formula is " << fur[9] << endl << "the specific heat at constant pressure = " << P[9] << endl << "the specific heat at constant volume = " << V[9] << endl;
    }
    else if (gasname == "neon") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[10] << endl << "and the its formula is " << fur[10] << endl << "the specific heat at constant pressure = " << P[10] << endl << "the specific heat at constant volume = " << V[10] << endl;
    }
    else if (gasname == "nitrogen") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[11] << endl << "and the its formula is " << fur[11] << endl << "the specific heat at constant pressure = " << P[11] << endl << "the specific heat at constant volume = " << V[11] << endl;
    }
    else if (gasname == "octane") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[12] << endl << "and the its formula is " << fur[12] << endl << "the specific heat at constant pressure = " << P[12] << endl << "the specific heat at constant volume = " << V[12] << endl;
    }
    else if (gasname == "oxygen") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[13] << endl << "and the its formula is " << fur[13] << endl << "the specific heat at constant pressure = " << P[13] << endl << "the specific heat at constant volume = " << V[13] << endl;
    }
    else if (gasname == "propane") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[14] << endl << "and the its formula is " << fur[14] << endl << "the specific heat at constant pressure = " << P[14] << endl << "the specific heat at constant volume = " << V[14] << endl;
    }
    else if (gasname == "steam") {
        cout << "At 300 K " << endl << "Gas constant(R) = " << R[15] << endl << "and the its formula is " << fur[15] << endl << "the specific heat at constant pressure = " << P[15] << endl << "the specific heat at constant volume = " << V[15] << endl;
    }
    else { cout << "Invalid gas name entered.Data not found" << endl; }

    return 0;
}