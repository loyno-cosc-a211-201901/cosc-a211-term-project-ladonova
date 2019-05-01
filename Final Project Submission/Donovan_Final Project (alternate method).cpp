#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int x = 0;
int y = 0;
int scoreCounter = 0;

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

void move(bool north, bool south, bool east, bool west){
  char direction;
  cout << "Which direction do you want to move?" << endl;
  cout << endl;
  if(north== true)
  cout << " N " << endl;
  if(west== true)
  cout << "W ";
  if(east== true)
  cout << "E" << endl;
  if(south == true)
  cout << " S " << endl;
  cout << endl;
  cin >> direction;
  if(direction== 'N'||direction=='n')
  y++;
  if(direction=='W'||direction=='w')
  x--;
  if(direction=='S'||direction=='s')
  y--;
  if(direction=='E'||direction=='e')
  x++;


}

void wanderingCreek(){

  vector<string> inventory;
  vector<string>::iterator myIterator;
  vector<string>::const_iterator i;

bool gameRunning = true;
bool north = true;
bool south = true;
bool east = true;
bool west = true;
bool invChecked = false;
char userDecision1;

cout << "You are in the Wanderer's Tavern." << endl;
wait();
cout << "The man behind the bar has just informed you of a cloaked individual wishing to do business with you." << endl;
wait();
cout << "The man is sitting near the eastern wall of the room." << endl;
cout << "Move East by entering 'E' if you would like to have a chat with him." << endl;

do{
  if(x==0 && y==0)
  {
    move(north = false, south = true, east = true, west = true);
  }
  else if(x==1 && y==0)
  {
    cout << "You have moved east and have sat down with the cloaked man." << endl;
    cout << "The cloaked man tells you of a quest to deliver a prized sword to King Kodachrome of the Emerald Lake." << endl;
    cout << "He believes your best bet will be to follow The Wandering Creek until you reach the lake." << endl;
    cout << "Enter 'A' to accept the sword from him." << endl;
    cin >> userDecision1;
    do{
    if(userDecision1 == 'A'||userDecision1 == 'a'){
    scoreCounter += 10;
    inventory.insert(inventory.begin(), "Emerald Sword");
    cout << "Your inventory: " << endl;
      for(i = inventory.begin(); i != inventory.end(); ++i)
        cout << *i << endl;
    cout << "Your score: " << scoreCounter << endl;
    invChecked = true;
  }
  else
  cout << "Please enter A to take the sword." << endl;
}
while(invChecked == false);
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==0 && y==1)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==0 && y==2)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==0 && y==-1)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==0 && y==-2)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==0 && y==-3)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==0 && y==-4)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==0 && y==-5)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==0 && y==-6)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==1 && y==-1)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==2 && y==-1)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==3 && y==-1)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==-1 && y==-1)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==-2 && y==-1)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==-2 && y==-2)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==-2 && y==-3)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==-2 && y==-4)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==-2 && y==-5)
  {
    move(north = true, south = true, east = true, west = true);
  }
  else if(x==-2 && y==-6)
  {
    move(north = true, south = true, east = true, west = true);
  }
}
while(gameRunning == true);
}

int main(){
string characterName;
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
