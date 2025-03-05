// A program to demonstrate a 3D array
#include <iostream>

using namespace std;

int main(){
    // Initializing the 3D array with 2 arrays, 2 rows and 3 columns
    int marks[2][2][3] = {{
        {10, 20, 30},
        {40, 50, 60}
    },{
        {70, 80, 90},
        {100, 110, 120}
    }};
    
    // Outer loop for the array
    for(int i = 0; i < 2; i++){
        // Inner loop for the rows
        for(int j = 0; j < 2; j++){
            // Inner loop for the columns
            for(int k = 0; k < 3; k++){
                cout<< marks[i][j][k]<<"\t";// Displaying the members
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
// End of the program