
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    double celsius, fahrenheit;

    //Prompt the user to enter a Celsius degree
    cout << "Enter a degree in Celsius: ";
    cin >> celsius;
    
    // Convert Celsius to Fahrenheit
    fahrenheit = (9.0 /5) * celsius + 32;
    
    //Display the result
    cout << celsius << "Celsius is "<< fahrenheit << "Fahrenheit" << endl;
    return 0; 
}

