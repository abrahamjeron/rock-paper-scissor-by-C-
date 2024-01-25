#include<iostream>
#include<ctime>
using namespace std;
char get_user_choice(){
    char user;
    cout<<"Enter your choice as R P S format (R for Rock, P for paper, S for scissor): ";
    cin>>user;
    return user;
}
char get_computer_choice(){
    srand(static_cast<unsigned int>(time(0)));
    int random_number=rand()%3;

    switch (random_number)
    {
    case 0:
        return 'R';
        break;
    case 1:
        return 'P';
        break;
    case 2:
        return 'S';
        break;
    default:
        return 'R';
        break;
    }
}
void determine_winner(char user_choice,char comp_choice){
    cout<<"The computer choice is: "<<comp_choice<<endl;

    if (user_choice==comp_choice){
        cout<< "It's a tie !"<<endl;
    } else if ((user_choice=='R' && comp_choice=='S') || (user_choice=='P' && comp_choice=='R') || (user_choice=='S' && comp_choice=='P')){
        cout<<"YOU WON !"<<endl;
    } else {
        cout<<"YOU LOSE !"<<endl;
    }
}
int main(){
    char play_again;
    do{
    char user_choice=get_user_choice();
    char comp_choice=get_computer_choice();

    determine_winner(user_choice,comp_choice);
    cout<<"Do you wanna play again?(Y/N): ";
    cin>>play_again;
    } while (play_again=='Y' || play_again=='y');

 }