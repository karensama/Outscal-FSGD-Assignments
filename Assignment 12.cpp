#include <ctime>
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

    int GetHealth()
    {
        return health;
    }

    void TakeDamage(int damage)
    {
        if (health > 0)
        {
            cout<<"Oh no! Cecilia has been attacked!"<<endl;
            cout<<"Enemy dealt "<<damage<<" damage."<<endl;
            health = health - damage;
            cout<<"Cecilia's current health is "<<health<<endl; 
        }
        else
        {
            cout<<"Cecilia perished at the enemies hands... Will her story end here?"<<endl;
        }
    }

    int GiveDamage()
    {
        srand(time(0));
        int randomDamage = (rand() % (maxDamage - minDamage + 1) + minDamage);

        return randomDamage;
    }

    void Heal()
    {
        srand(time(0));
        int randomHeal = (rand() % (maxHealing - minHealing +1) + minHealing);
        health = health + randomHeal;
        cout<< "Cecilia healed "<<randomHeal<<" HP. Her current health is "<<health<<"."<<endl;
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
            
        }
        else
        {
            cout<<"Thanks for playing the game!"<<endl;
        }

    } while (userInput == 'S' || userInput == 's' );
    
    


}