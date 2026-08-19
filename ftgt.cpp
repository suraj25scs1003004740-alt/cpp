#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    // User inputs the dimensions
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (int j = 1; j <= cols; j++) {
            // Check if current position is on the border
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                // Print a space for the hollow interior
                cout << " ";
            }
        }
        // Move to the next line after finishing a row
        cout << endl;
    }

    return 0;
}
