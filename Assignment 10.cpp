#include <iostream>
using namespace std;

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
private:
int health = 100;

int maxDamage = 30;
int minDamage = 20;

int maxHealing = 15;
int minHealing = 8;

public:

void GetHealth()
{
    cout<<health;
}

Player()
{
    cout<<"\nHello! I'm Cecilia, I've been guarding the secrets of the universe, but it seems I've dropped some shards of my memories alongside the way, shall we get them together?"<<endl;
    cout<<"Here are some stats that may be useful on our journey"<<endl;
    cout<<"\nCecilia's Health: "<<health;
    cout<<"\n---------------------------------------------\n";
    cout<<"Cecilia's Attack Range is between "<<minDamage<<"-"<<maxDamage<<".";
    cout<<"\n---------------------------------------------\n";
    cout<<"Cecilia's Healing Range is between "<<minHealing<<"-"<<maxHealing<<".";
    cout<<"\n---------------------------------------------\n";
}

};

int main()
{
    gameStory();
    char userInput; 
    do
    {
        cout<<"Press S to start the game and any other key to exit!"<<endl;
        cin>>userInput; 
        if(userInput == 'S' || userInput == 's' )
        {
            Player playerObj;

            do
            {
                cout<<"\nPress N to continue or any other key to exit!"<<endl;
                cin>>userInput; 
                if(userInput == 'N' || userInput == 'n' )
                {
                    cout<<"Cecilia's been attacked! Her current health is ";
                    playerObj.GetHealth();
                            
                }
                else
                {
                    cout<<"Thanks for playing the game!"<<endl;
                }

            } while (userInput == 'N' || userInput == 'n' );

        }
        else
        {
            cout<<"Thanks for playing the game!"<<endl;
        }

    } while (userInput == 'S' || userInput == 's' );
    
    


}