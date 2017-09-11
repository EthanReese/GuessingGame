#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
  //Create the test for if the user wants to play again
  bool test= true;
  while(test){
    //Seed the pseudorandom generator
    srand(time(NULL));
    //Pick a random int for the user to guess between 1 and 100
    int randInt= (rand()%101);
    //Check if the user has completed the game yet
    bool playing = true;
    int guessCount = 0;
    while(playing){
	guessCount++;
    	//Get an input from the user
    	cout << "Guess a number between 0 and 100"<<endl;
    	int guess;
    	cin << guess;
	//Check to make sure the guess is vaild, make sure the loop continues if it isn't
	if(guess>100 || guess<0){
		cout << "Your input was invalid";
		continue;
	}else{
		//If they guess correctly, then it should trigger the win condition
		if(guess == randInt){
			cout <<
		}
	}
    }

    test = false;
    
  }


  
  return 0;
}
