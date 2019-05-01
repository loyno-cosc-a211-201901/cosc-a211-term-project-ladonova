/*The Quest of Three Rivers
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

string characterName;

void wait()
{
    cin.ignore(1);
}

void titleScreen() {
cout << "THE QUEST OF THREE RIVERS" << endl; //Title screen

cout << "Press Enter to continue" << endl;
wait();

cout << "You are on a quest to reach the Emerald Lake. " << endl;
wait();
cout << "You may choose between three starting points at the Northern roots of the three rivers: " << endl;
cout << "The Wandering Creek, The Reckless Brook, or The River Emerald. " << endl;
wait();
cout << "Each of the three starting points has a respective task/mission associated with it, all of which culminate in reaching the Emerald Lake. " << endl;
wait();
cout << "Enter your character's name: " << endl;

}
void help() {
  cout << "List of possible player options: " << endl;
  cout << "Enter N, E, S, or W to move towards one of the four cardinal directions." << endl;
  cout << "Enter I to check the contents of your inventory." << endl;
  cout << "Enter A to use your tool or weapon." << endl;
  cout << "Enter H to go to the Help menu." << endl;
  cout << "Enter $ to check your gold." << endl;
  cout << "Enter # to check your score." << endl;
  cout << "Enter Q to quit game." << endl;

}


void wanderingCreek()
 {
vector<string> inventory;
vector<string>::iterator myIterator;
vector<string>::const_iterator i;

bool atSpawn = true;
bool outsideTavern = false;
bool atTheBar = true;
bool atTable = false;
bool quitGame = false;
bool swordTaken = false;
bool invChecked = false;
bool inForest = false;
bool atCreek = false;
bool headingSouth = false;
bool deepForest = false;
bool southForest = false;
bool southCreek = false;
string firstDecision;
string secondDecision;
string thirdDecision;
string fourthDecision;
string fifthDecision;
string sixthDecision;
int goldAmount = 100;
int scoreCounter = 0;

cout << "You are in the Wanderer's Tavern." << endl;
wait();
cout << "The man behind the bar has just informed you of a cloaked individual wishing to do business with you." << endl;
wait();
cout << "The man is sitting near the eastern wall of the room." << endl;
cout << "Move East by entering 'E' if you would like to have a chat with him." << endl;
do{
cin >> firstDecision;
cout << firstDecision << endl;
if(firstDecision== "E"|| firstDecision== "e")
{
cout << "You have moved east and have sat down with the cloaked man." << endl;
atTable = true;
atSpawn = false;
atTheBar = false;
}
else if(firstDecision== "W"||firstDecision== "w") {
cout << "You are already at the bar." << endl;

}
else if(firstDecision== "N"||firstDecision== "n") {
cout << "There is a wall to the North."<< endl;

}
else if(firstDecision== "S"||firstDecision== "s"){
  cout << "You have moved south and have exited the tavern." << endl;
  atSpawn = false;
  atTheBar = false;
  outsideTavern = true;

}
else if(firstDecision== "I"||firstDecision=="i"){
cout << "Your inventory: " << endl;
	for(i = inventory.begin(); i != inventory.end(); ++i)
		cout << *i << endl;
}
else if(firstDecision== "H"||firstDecision=="h"){
  help();
}
else if(firstDecision== "A"||firstDecision== "a"){
  cout << "Nothing to attack." << endl;
}
else if(firstDecision== "#"){
  cout << "Your score is " << scoreCounter << "." << endl;
}
else if(firstDecision== "$"){
  cout << "You have " << goldAmount <<" gold." << endl;
}
else if(firstDecision== "Q" ||firstDecision== "q"){
  cout << "Thank you for playing " << characterName << "!"<< endl;
  quitGame = true;
  cout << "Your final score was " << scoreCounter << "." << endl;
  exit(0);
}
else{
  cout << "Not sure what you mean."<< endl;
  cout << "Enter 'H' to check the help menu for user commands." << endl;
}


}
while((atSpawn == true || atTheBar == true) && quitGame == false);//end while loop

do{
cout << endl;
cout << "The cloaked man tells you of a quest to deliver a prized sword to King Kodachrome of the Emerald Lake." << endl;
cout << "He believes your best bet will be to follow The Wandering Creek until you reach the lake." << endl;
cout << "Enter 'A' to take the sword." << endl;
cin >> secondDecision;

if(secondDecision== "E"|| secondDecision== "e")
{
cout << "You are already on the eastern side of the room." << endl;
}
else if(secondDecision== "W"||secondDecision== "w") {
cout << "You move back to the bar." << endl;
atTheBar = true;

}
else if(secondDecision== "N"||secondDecision== "n") {
cout << "There is a wall to the North."<< endl;

}
else if(secondDecision== "S"||secondDecision== "s"){
  cout << "You have moved south and have exited the tavern." << endl;
  atSpawn = false;
  atTheBar = false;
  outsideTavern = true;
  atTable = false;

}
else if(secondDecision== "I"||secondDecision=="i"){
cout << "Your inventory: " << endl;
	for(i = inventory.begin(); i != inventory.end(); ++i)
		cout << *i << endl;
}
else if(secondDecision== "H"||secondDecision=="h"){
  help();
}
else if(secondDecision== "A"||secondDecision== "a"){
  cout << "You have taken King Kodachrome's sword and added it to your inventory." << endl;
  scoreCounter += 10;
  inventory.insert(inventory.begin(), "Emerald Sword");
  swordTaken = true;
  atTable = false;

}
else if(secondDecision== "#"){
  cout << "Your score is " << scoreCounter <<"." << endl;
}
else if(secondDecision== "$"){
  cout << "You have "<< goldAmount<< " gold." << endl;
}
else if(secondDecision== "Q" ||secondDecision== "q"){
  cout << "Thank you for playing " << characterName << "!"<< endl;
  quitGame = true;
  cout << "Your final score was " << scoreCounter << "." << endl;
  exit(0);
}
else{
  cout << "Not sure what you mean."<< endl;
  cout << "Enter 'H' to check the help menu for user commands." << endl;
}
}
while((atTable == true && quitGame == false));

do{
  cout << endl;
  cout << "Enter 'I' to check your inventory." << endl;

  cin >> thirdDecision;

  if(thirdDecision== "E"|| thirdDecision== "e")
  {
  cout << "You have already talked to the cloaked man." << endl;
  }
  else if(thirdDecision== "W"||thirdDecision== "w") {
  cout << "You move back to the bar." << endl;
  atTheBar = true;

  }
  else if(thirdDecision== "N"||thirdDecision== "n") {
  cout << "There is a wall to the North."<< endl;

  }
  else if(thirdDecision== "S"||thirdDecision== "s"){
    cout << "You have move south and exit the tavern." << endl;
    atSpawn = false;
    atTheBar = false;
    outsideTavern = true;
    atTable = false;

  }
  else if(thirdDecision== "I"||thirdDecision=="i"){
  cout << "Your inventory: " << endl;
  	for(i = inventory.begin(); i != inventory.end(); ++i)
  		cout << *i << endl;
    invChecked = true;
  }
  else if(thirdDecision== "H"||thirdDecision=="h"){
    help();
  }
  else if(thirdDecision== "A"||thirdDecision== "a"){
    cout << "Nobody to attack." << endl;

  }
  else if(thirdDecision== "#"){
    cout << "Your score is " << scoreCounter <<"." << endl;
  }
  else if(thirdDecision== "$"){
    cout << "You have "<< goldAmount<< " gold." << endl;
  }
  else if(thirdDecision== "Q" ||thirdDecision== "q"){
    cout << "Thank you for playing " << characterName << "!"<< endl;
    quitGame = true;
    cout << "Your final score was " << scoreCounter << "." << endl;
    exit(0);
  }
  else{
    cout << "Not sure what you mean."<< endl;
    cout << "Enter 'H' to check the help menu for user commands." << endl;
  }
}
while(swordTaken == true && quitGame == false && invChecked == false);

do{
cout << endl;
cout << "You are outside of the tavern." << endl;
cin >> fourthDecision;

if(fourthDecision== "E"|| fourthDecision== "e")
{
cout << "You move east into the forest." << endl;
inForest = true;
outsideTavern = false;
invChecked = false;
}
else if(fourthDecision== "W"||fourthDecision== "w") {
cout << "You move west towards the Wandering Creek." << endl;
atCreek = true;
outsideTavern = false;
invChecked = false;

}
else if(fourthDecision== "N"||fourthDecision== "n") {
cout << "You go back inside the tavern."<< endl;
outsideTavern = false;
atTheBar = true;
invChecked = false;
inForest = false;
deepForest = false;

}
else if(fourthDecision== "S"||fourthDecision== "s"){
  cout << "You move south, walking away from the tavern." << endl;
  cout << "You can see the Wandering Creek to the West." << endl;
  headingSouth = true;
  outsideTavern = false;


}
else if(fourthDecision== "I"||fourthDecision=="i"){
cout << "Your inventory: " << endl;
  for(i = inventory.begin(); i != inventory.end(); ++i)
    cout << *i << endl;

}
else if(fourthDecision== "H"||fourthDecision=="h"){
  help();
}
else if(fourthDecision== "A"||fourthDecision== "a"){
  cout << "Nobody to attack." << endl;

}
else if(fourthDecision== "#"){
  cout << "Your score is " << scoreCounter <<"." << endl;
}
else if(fourthDecision== "$"){
  cout << "You have "<< goldAmount<< " gold." << endl;
}
else if(fourthDecision== "Q" ||fourthDecision== "q"){
  cout << "Thank you for playing " << characterName << "!"<< endl;
  quitGame = true;
  cout << "Your final score was " << scoreCounter << "." << endl;
  exit(0);
}
else{
  cout << "Not sure what you mean."<< endl;
  cout << "Enter 'H' to check the help menu for user commands." << endl;
}



}
while((invChecked == true || outsideTavern == true) && quitGame == false);

do{
  cout <<endl;
  cin >> fifthDecision;

  if(fifthDecision== "E"|| fifthDecision== "e")
  {
  cout << "You are deep in the forest and are beginning to hear strange noises." << endl;
  deepForest = true;
  }
  else if(fifthDecision== "W"||fifthDecision== "w") {
  cout << "You move west out of the forest." << endl;
  inForest = false;
  outsideTavern = true;

  }
  else if(fifthDecision== "N"||fifthDecision== "n") {
  cout << "The forest gets to thick to navigate to the north."<< endl;


  }
  else if(fifthDecision== "S"||fifthDecision== "s"){
    cout << "You are heading south through the forest." << endl;
    cout << "You come across an abandoned house." << endl;
    southForest = true;

  }
  else if(fifthDecision== "I"||fifthDecision=="i"){
  cout << "Your inventory: " << endl;
    for(i = inventory.begin(); i != inventory.end(); ++i)
      cout << *i << endl;

  }
  else if(fifthDecision== "H"||fifthDecision=="h"){
    help();
  }
  else if(fifthDecision== "A"||fifthDecision== "a"){
    cout << "Nobody to attack." << endl;

  }
  else if(fifthDecision== "#"){
    cout << "Your score is " << scoreCounter <<"." << endl;
  }
  else if(fifthDecision== "$"){
    cout << "You have "<< goldAmount<< " gold." << endl;
  }
  else if(fifthDecision== "Q" ||fourthDecision== "q"){
    cout << "Thank you for playing " << characterName << "!"<< endl;
    quitGame = true;
    cout << "Your final score was " << scoreCounter << "." << endl;
    exit(0);
  }
  else{
    cout << "Not sure what you mean."<< endl;
    cout << "Enter 'H' to check the help menu for user commands." << endl;
  }


}
while(inForest == true && quitGame == false);

do{
  cout << "You are at the shore of the Wandering Creek." << endl;
  cout << "In front there lies a dock and a ferryman." << endl;

  cin >> sixthDecision;

  if(sixthDecision== "E"|| sixthDecision== "e")
  {
  outsideTavern = true;
  }
  else if(sixthDecision== "W"||sixthDecision== "w") {
  cout << "The creek is to wide to swim across." << endl;

  }
  else if(sixthDecision== "N"||sixthDecision== "n") {
  cout << "The northern roots of The Wandering Creek are high in the mountains." << endl;
  }
  else if(sixthDecision== "S"||sixthDecision== "s"){
    cout << "You are heading south " << endl;
    cout << "You come across an abandoned house." << endl;
    southCreek = true;

  }
  else if(fifthDecision== "I"||fifthDecision=="i"){
  cout << "Your inventory: " << endl;
    for(i = inventory.begin(); i != inventory.end(); ++i)
      cout << *i << endl;

  }
  else if(fifthDecision== "H"||fifthDecision=="h"){
    help();
  }
  else if(fifthDecision== "A"||fifthDecision== "a"){
    cout << "Nobody to attack." << endl;

  }
  else if(fifthDecision== "#"){
    cout << "Your score is " << scoreCounter <<"." << endl;
  }
  else if(fifthDecision== "$"){
    cout << "You have "<< goldAmount<< " gold." << endl;
  }
  else if(fifthDecision== "Q" ||fourthDecision== "q"){
    cout << "Thank you for playing " << characterName << "!"<< endl;
    quitGame = true;
    cout << "Your final score was " << scoreCounter << "." << endl;
    exit(0);
  }
  else{
    cout << "Not sure what you mean."<< endl;
    cout << "Enter 'H' to check the help menu for user commands." << endl;
  }




}
while(atCreek == true && quitGame == false);
} //end of function


int main(){
char startChoice;
bool chooseAgain = true;
titleScreen();


  cin >> characterName;

  while(chooseAgain == true) {
  cout << endl;
  cout << "Choose starting point: " << endl;
  cout << "1. The Wandering Creek" << endl;
  cout << "2. The Reckless Brook" << endl;
  cout << "3. The River Emerald" << endl;
  cout << "4. Quit game" << endl;
  cin >> startChoice;

  switch(startChoice){
    case '1':
    chooseAgain = false;
    wanderingCreek();
    break;

    case '2':
    chooseAgain = false;
    cout << "Still in progress, coming soon!" << endl;
    break;

    case '3':
    chooseAgain = false;
    cout << "Still in progress, coming soon!" << endl;
    break;

    case '4':
    cout << "Quitting..." << endl;
    return(0);
    break;

    default:
    cout << "Invalid choice, try again." << endl;

    break;

  }

}




  return(0); }
