// A program to demonstrate a 2D array
#include <iostream>

using namespace std;

int main(){
    // Initializing the 2D array with 2 rows and 3 columns
    int marks[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    // Outer loop for the rows
    for(int i = 0; i < 2; i++){
        // Inner loop for the columns
        for(int j = 0; j < 3; j++){
            cout<< marks[i][j]<<"\t";// Displaying the members
        }
        cout<<endl;
    }
    return 0;
}
// End of the program
