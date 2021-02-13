#include<iostream>
using namespace std;

int main()
{
    int secretNum = 7;
    int guess = 0;
    int guessCount = 0;
    bool outofguesses = false;
    int guesslimit = 5;

    while(secretNum != guess &&  !outofguesses) {
        if (guessCount < guesslimit) {

            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        }
        else {
            outofguesses = true;
        }
    }
 
    if (outofguesses) {
        cout << "You lose because u suck ass bro";
    }
    else {
        cout << "You win git gud";
    }

}
