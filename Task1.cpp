//Task 1
//NUMBER GUESSING GAME
#include<iostream>
#include<random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 100); // number generated in range 1-100.

    bool again=1;
    cout<<"Welcome to the game user..."<<endl;
    while(again){
        int rno=distrib(gen);
        int num=-1;
        while(num!=rno){
            cout<<"\nGuess the number: ";
            cin>>num;
            if(num==rno)
            cout<<"You guessed it right,the number is "<<num<<endl;
            else if(num>rno)
            cout<<"It's too high, guess again."<<endl;
            else
            cout<<"It's too low, guess again"<<endl;
        }
        cout<<"\nWant to play again ?(press \"1\" for yes/\"0\" for no): ";
        cin>>again;
        if(again==0){
            cout<<"\nThanks for playing, come again (^-^)";
        }   
    }
    return 0;
}