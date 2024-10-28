#include <iostream>
using namespace std;

// Assignment - Creating blueprint for Player

void gameStory()
{    
        cout<<"\n---------------------------------------------\n";
        cout<<"     | Cecilia : The Elemental Knight |   ";
        cout<<"\n---------------------------------------------\n";
        cout<<"In a realm where thoughts intertwine like ancient vines, where memories shimmer like distant constellations, there exists a solitary figure — a guardian of the ethereal.\nHer name is Cecilia, the Elemental Knight!\nHer quest, you ask?\nTo understand herself, to bridge the gaps between memory and truth, and to illuminate the dark corners of her soul!\nWhat mysteries lie hidden in her memories?";       
        cout<<"\n---------------------------------------------\n";
        cout<<"";
        cout<<"\n---------------------------------------------\n";    
}

class Player
{
public:
int health;
int attack_power;

    Player()
    {
        health = 100;
        attack_power = 10;
    }
};

int main()
{
gameStory();
Player player;
}