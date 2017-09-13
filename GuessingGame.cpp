#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){
  //Create the test for if the user wants to play again
  bool test= true;
  srand(time(NULL));
  int randInt;
  while(test){
	  //Pick a random int for the user to guess between 1 and 100
    randInt = (rand()%101);
    //Check if the user has completed the game yet
    bool playing = true;
    int guessCount = 0;
    while(playing){
	guessCount++;
    	//Get an input from the user
	int guess;
    	cout << "Guess a number between 0 and 100: ";
    	cin >>  guess;
	//Check to make sure the guess is vaild, make sure the loop continues if it isn't
	if(guess>100 || guess<0){
		cout << "Your input was invalid";
		continue;
	}else{
		//If they guess correctly, then it should trigger the win condition
		if(guess == randInt){
			cout << "Congratulations! You have won the game." << endl;
			cout << "Would you like to play again? (y/n)";
			char c[1];
			cin >> c;
			//Check if they want to play again and respond appropriately
			if(tolower(c[0]) == 'y'){
				test = true;
				break;
			}
			else{
				test = false;
				playing = false;
				cout << "Thanks for playing!";
			}
		}
		//If the guess is too high tell the user that
		else if(guess > randInt){
			cout << "Your guess was too high" << endl;
		}
		//Otherwise the user's guess was too low
		else{
			cout << "Your guess was too low" << endl;
		}


	}
    }
  
  }


  
  return 0;
}
