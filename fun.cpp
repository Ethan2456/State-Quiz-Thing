/*
Authors:Ethan T and Daniel B
Date: 11/8/23
Description
States quiz.
*/
#include <iostream>
#include <time.h>
using namespace std;

int main(){
    string states[] = {"Alabama", "Alaska", "Arizona", "Arkansas","California",
                "Colorado","Connecticut","Delaware","Florida","Georgia","Hawaii",
                "Idaho","Illinois","Indiana","Iowa","Kansas","Kentucky",
                "Louisiana","Maine","Maryland","Massachusetts","Michigan",
                "Minnesota","Mississippi","Missouri","Montana","Nebraska",
                "Nevada","New Hampshire","New Jersey","New Mexico",
                "New York", "North Carolina","North Dakota","Ohio","Oklahoma",
                "Pennsylvania","Rhode Island","South Carolina","South Dakota",
                "Tennessee","Texas","Utah","Vermont","Virginia","Washington",
                "West Virginia","Wisconsin","Wyoming"};

    string caps[] = {"Montgomery","Juneau","Phoenix","Little Rock",
                "Sacramento","Denver","Hartford","Dover","Tallahassee",
                "Atlanta","Honolulu","Boise","Springfield","Indianapolis",
                "Des Moines","Topeka","Frankfort","Baton Rouge","Augusta",
                "Annapolis","Boston","Lansing","Saint Paul","Jackson",
                "Jefferson City","Helena","Lincoln","Carson City","Concord",
                "Trenton","Santa Fe","Albany","Raleigh","Bismark","Columbus",
                "Oklahoma City","Salem","Harrisburg","Providence","Columbia",
                "Pierre","Nashville","Austin","Salt Lake City","Montpelier",
                "Richmond","Olympia","Charleston","Madison","Cheyenne"};

    int choice;
    cout << "Welcome to the US Geography Game!" << endl;
    cout << "Which mode would you like to play?" << endl;
    cout << "Capitols(1) or Cities(2)?" << endl;
    cout << "0) to quit." << endl;
    cin >> choice;


    if(choice == 1){
        while(choice != 0){
            int range = 50;
            srand(time(NULL));
            int rand_num = rand();
            rand_num = rand_num % range;
            string rand_state = states[rand_num];
            cout << "You chose the Capitol Option!" << endl;
            cout << "Your question is!" << endl;
            cout << "What is " << rand_state << "?" << endl;
            cout << "Do you want to play again?" << endl;
            cin >> choice;
        }
    }
    else if(choice == 2){
        cout << "You chose the Cities Option!" << endl;
    }






return 0;
}
