 #include <iostream>
using namespace std;

// Function declarations
void getPrices(double& currentPrice, double& oneYearAgo, double& twoYearsAgo);
void calculateInflation(double currentPrice, double oneYearAgo, double twoYearsAgo, double& inflation1, double& inflation2);
void outputResults(double currentPrice, double oneYearAgo, double twoYearsAgo, double inflation1, double inflation2);

int main() {
    double currentPrice, oneYearAgo, twoYearsAgo;
    double inflation1, inflation2;

    // Get the prices
    getPrices(currentPrice, oneYearAgo, twoYearsAgo);
    
    // Calculate the inflation rates
    calculateInflation(currentPrice, oneYearAgo, twoYearsAgo, inflation1, inflation2);
    
    // Output the results
    outputResults(currentPrice, oneYearAgo, twoYearsAgo, inflation1, inflation2);

    return 0;
}

// Function to get input prices
void getPrices(double& currentPrice, double& oneYearAgo, double& twoYearsAgo) {
    cout << "Enter the current price of the item: ";
    cin >> currentPrice;
    cout << "Enter the price one year ago: ";
    cin >> oneYearAgo;
    cout << "Enter the price two years ago: ";
    cin >> twoYearsAgo;
}

// Function to calculate inflation rates
void calculateInflation(double currentPrice, double oneYearAgo, double twoYearsAgo, double& inflation1, double& inflation2) {
    inflation1 = (currentPrice - oneYearAgo) / oneYearAgo * 100;
    inflation2 = (oneYearAgo - twoYearsAgo) / twoYearsAgo * 100;
}

// Function to output the results
void outputResults(double currentPrice, double oneYearAgo, double twoYearsAgo, double inflation1, double inflation2) {
    cout << "Current Price: " << currentPrice << endl;
    cout << "Price One Year Ago: " << oneYearAgo << endl;
    cout << "Price Two Years Ago: " << twoYearsAgo << endl;
    cout << "Inflation for the past year: " << inflation1 << "%" << endl;
    cout << "Inflation for the year before last: " << inflation2 << "%" << endl;
    
    if (inflation1 > inflation2) {
        cout << "Inflation is increasing." << endl;
    } else if (inflation1 < inflation2) {
        cout << "Inflation is decreasing." << endl;
    } else {
        cout << "Inflation is constant." << endl;
    }
}
