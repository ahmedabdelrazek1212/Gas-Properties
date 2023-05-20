//This program is made to help us save time in solving thermodynamic problems 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Define the size of the gas array
const int gas_size = 16;

// Define a struct to hold the properties of each gas
struct GasProperties {
    string formula;
    double gasConstant;
    double specificHeatConstantPressure;
    double specificHeatConstantVolume;
};

// Look up the properties of a given gas
GasProperties getGasProperties(string gasName) {
    GasProperties gasProperties;

    // Define arrays to hold the gas properties
    string gasNames[gas_size] = { "air", "argon", "butane", "carbon dioxide", "carbon monoxide", "ethane", "ethylene", "helium", "hydrogen", "methane", "neon", "nitrogen", "octane", "oxygen", "propane", "steam" };
    string gasFormulas[gas_size];
    double gasConstants[gas_size];
    double specificHeatConstantsPressure[gas_size];
    double specificHeatConstantsVolume[gas_size];

    // Read the gas properties from files
    ifstream formula("formula.txt");
    for (int i = 0; i < gas_size; i++) {
        formula >> gasFormulas[i];
    }
    formula.close();

    ifstream gasconstant("gasconstant");
    for (int i = 0; i < gas_size; i++) {
        gasconstant >> gasConstants[i];
    }
    gasconstant.close();

    ifstream specificheatp("cp");
    for (int i = 0; i < gas_size; i++) {
        specificheatp >> specificHeatConstantsPressure[i];
    }
    specificheatp.close();

    ifstream specificheatv("cv.txt");
    for (int i = 0; i < gas_size; i++) {
        specificheatv >> specificHeatConstantsVolume[i];
    }
    specificheatv.close();

    // Look up the gas properties by name
    for (int i = 0; i < gas_size; i++) {
        if (gasNames[i] == gasName) {
            gasProperties.formula = gasFormulas[i];
            gasProperties.gasConstant = gasConstants[i];
            gasProperties.specificHeatConstantPressure = specificHeatConstantsPressure[i];
            gasProperties.specificHeatConstantVolume = specificHeatConstantsVolume[i];
            break;
        }
    }

    return gasProperties;
}

// Output the properties of a given gas
void outputGasProperties(string gasName, GasProperties gasProperties) {
    cout << "At 300 K " << endl;
    cout << "Gas constant(R) = " << gasProperties.gasConstant << endl;
    cout << "and the its formula is " << gasProperties.formula << endl;
    cout << "the specific heat at constant pressure = " << gasProperties.specificHeatConstantPressure << endl;
    cout << "the specific heat at constant volume = " << gasProperties.specificHeatConstantVolume << endl;
}

// Main function
int main() {
    // Prompt the user for input
    string gasName;
    cout << "Please enter the gas name: ";
    cin >> gasName;

    // Look up the gas properties
    GasProperties gasProperties = getGasProperties(gasName);

    // Output the gas properties if found, else output an error message
    if (gasProperties.formula.empty()) {
        cout << "Invalid gas name entered. Data not found." << endl;
    }
    else {
        outputGasProperties(gasName, gasProperties);
    }

    return 0;
}