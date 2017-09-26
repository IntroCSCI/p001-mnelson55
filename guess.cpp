//Author: Kekoa Nelson
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () 
{
    int random;
    int guess;
    int guessminusrand;
    int randminusguess;

    srand (time (NULL));
    random = rand() % 15 + 1;
   
    cout<< "Guess a number between 1 and 15:"<< guess<< endl;
    cin>>  guess;

    if (random == guess) { 
    cout<< "You are correeeect!"; }  
    else if (random > guess) {
    randminusguess = random - guess;
    cout<< "That s incorrect, you are off by: " << randminusguess<< endl; }  
    else if (guess > random) {
    guessminusrand = guess - random;
    cout<< "That is incorrect, you are off by: " <<guessminusrand<< endl; }
   

    return 0;
} 


