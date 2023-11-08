/*
Authors:Ethan T and Daniel B
Date: 11/8/23
Description
States quiz.
*/
#include <iostream>

using namespace std;


string states(){
    string cap1[] = {"Alabama", "Alaska", "Arizona", "Arkansas","California",
            "Colorado","Connecticut","Delaware","Florida","Georgia","Hawaii",
            "Idaho","Illinois","Indiana","Iowa","Kansas","Kentucky",
            "Louisiana","Maine","Maryland","Massachusetts","Michigan",
            "Minnesota","Mississippi","Missouri","Montana","Nebraska",
            "Nevada","New Hampshire","New Jersey","New Mexico",
            "New York", "North Carolina","North Dakota","Ohio","Oklahoma",
            "Pennsylvania","Rhode Island","South Carolina","South Dakota",
            "Tennessee","Texas","Utah","Vermont","Virginia","Washington",
            "West Virginia","Wisconsin","Wyoming"}
}




int main(){
    int choice;
    cout << "Welcome to the US Geography Game!" << endl;
    cout << "Which mode would you like to play?" << endl;
    cout << "Capitols(1) or Cities(2)?" << endl;
    cin >> choice;

    if(choice == 1){
        cout << "You chose the Capitol Option!" << endl;
    }
    if(choice == 2){
        cout << "You chose the Cities Option!" << endl;
    }






return 0;
}
