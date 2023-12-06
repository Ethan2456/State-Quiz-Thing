/*
Authors:Ethan T and Daniel B
Date: 11/8/23
Description
States quiz.
functions
------------
void choices()
bool checkanswer()
*/
#include <iostream>
#include <time.h>
using namespace std;

void choices(){
    cout << "Would you like to play again?" << endl;
    cout << endl << "Choices:" << endl;
    cout << "1)Capital Option" << endl;
    cout << "2)State option" << endl;
    cout << "0)Quit game" << endl;
    cout << "Your Option: ";
}

bool checkanswer(string ans, string rans){
    if(ans == rans){
        return true;
    }
    else{
    return false;
    }
}



int main(){
    string states[] = {"Alabama", "Alaska", "Arizona", "Arkansas","California",
                "Colorado","Connecticut","Delaware","Florida","Georgia","Hawaii",
                "Idaho","Illinois","Indiana","Iowa","Kansas","Kentucky",
                "Louisiana","Maine","Maryland","Massachusetts","Michigan",
                "Minnesota","Mississippi","Missouri","Montana","Nebraska",
                "Nevada","New Hampshire","New Jersey","New Mexico",
                "New York", "North Carolina","North Dakota","Ohio","Oklahoma",
                "Oregon","Pennsylvania","Rhode Island","South Carolina",
                "South Dakota","Tennessee","Texas","Utah","Vermont","Virginia",
                "Washington","West Virginia","Wisconsin","Wyoming"};

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
    cout << "Your Option: ";
    cin >> choice;
    int score = 0;


    while(choice != 0){
           if(choice == 1){
             string answer;
             int range = 50;
             srand(time(NULL));
             int rand_num = rand();
             rand_num = rand_num % range;
             string rand_state = states[rand_num];
             cout << "You chose the Capital Option!" << endl;
             cout << "Your question is!" << endl;
             cout << "What is the capital of " << rand_state << "? (CASE SENSITIVE)" << endl;
             cin.ignore();
             getline(cin, answer);
             string capitols = caps[rand_num];
             int t_f = checkanswer(answer,capitols);
             if(t_f == 0){
                 cout << endl << "You are wrong!" << endl;
                 cout << "The answer is " << capitols << "." << endl;
                score = score - 1;
             }
             else{
                 cout << endl << "You are correct!" << endl;
                 score = score + 1;
             }
             cout << endl << "Your score is: " << to_string(score) << "." << endl;
             choices();
             cin >> choice;
          }
          if(choice == 2){
            string answer;
            int range = 50;
            srand(time(NULL));
            int rand_num = rand();
            rand_num = rand_num % range;
            string rand_caps = caps[rand_num];
            cout << "You chose the state option" << endl;
            cout << "Your question is!" << endl;
            cout << "Which state is  " << rand_caps << " located in? (CASE SENSITIVE)" << endl;
            cin.ignore();
            getline(cin, answer);
            string state = states[rand_num];

            int t_f = checkanswer(answer,state);
            if(t_f == 0){
                cout << endl << "You are wrong!" << endl;
                cout << "The answer is " << states << "." << endl;
                score = score - 1;
            }
            else{
                cout << endl << "You are correct!" << endl;
                score = score + 1;
            }
            cout << endl << "Your score is: " << to_string(score) << "." << endl;
            choices();
            cin >> choice;
            }
    }
    cout << "Your total score was " << to_string(score) << "." << endl;





return 0;
}
