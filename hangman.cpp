#include<iostream>
#include<ctime>
using namespace std;

int tries = 3;
string message = "You have 3 chances!";

void hang_man(char);
int checkGuess(char, string, string&);

int main(){
    char letter;
    string month;
    string months[] = {
        "january",
        "february",
        "march",
        "april",
        "may",
        "june",
        "july",
        "august",
        "september",
        "october",
        "november",
        "december",
    };

    srand(time(NULL));
    int month_number = rand()% 12;
    month = months[month_number];

    string hide_month(month.length(), 'X');

    system("cls");

    while(tries != 0)
    {
        hang_man('n');
        cout << "\t\t\t\tLife: " << tries << endl;
        cout << hide_month << endl;
        cout << "\t\t\t\tGuess a letter:";
        cin >> letter;

        system("cls");

        if(checkGuess(letter, month, hide_month) == 0){
            message = "Incorrect Letter!";
            tries--;
    }
    else{
        message = "Nice! Correct Guess";
    }

    if(hide_month == month){
        message = "You are free!";
        hang_man('f');
        cout << "\t\t\t\tLife: " << tries << endl;
        cout << "\t\t\t\tThe month is: " << month << endl;
        break;
    }
    }

    if(tries == 0){
        message = "You're Hanged!";
        hang_man('h');
        cout << "\t\t\t\tLife: " << tries << endl;
        cout << "\t\t\t\tThe month is: " << month << endl;
    }

    return 0;
}
int checkGuess(char Guess, string real_month, string &hide_month){
    int matches = 0;
    int len = real_month.length();
    for(int i = 0; i < len; i++){
        if(Guess == hide_month[i]){
            return 0;
        }
        if(Guess == real_month[i]){
            hide_month[i] = Guess;
            matches++;
        }
    }
    return matches;
}

void hang_man(char state){
    string head_string = "|";
    if(state == 'f'){
        head_string = " ";
    }
    cout << "\t\t\t\t__________________" << endl;
    cout << "\t\t\t\t         "<< head_string <<"      |"  << endl;
    cout << "\t\t\t\t         O      |"  << endl;
    cout << "\t\t\t\t        / \\     |" << "\t    " << message << endl;
    cout << "\t\t\t\t         |      |" << "\t    /" << endl;
    cout << "\t\t\t\t        / \\     |          O  " << endl;
    cout << "\t\t\t\t     =========  |         / \\" << endl;
    cout << "\t\t\t\t     |       |  |          |" << endl;
    cout << "\t\t\t\t     |       |  |         / \\" << endl; 
    cout << "\t\t\t\t======================================" << endl;
}