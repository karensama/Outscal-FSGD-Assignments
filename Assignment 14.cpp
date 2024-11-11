#include <iostream>
#include <ctime>
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

void preCombatLore()
{
    cout<<"\nWithout her memories, Cecilia has lost the ability to use the 6 elements, but she still knows how to fight!\n";
}

class Player
{
private:

    int health = 100;

    int maxDamage = 30;
    int minDamage = 20;

    int maxHealing = 25;
    int minHealing = 15;

public:

    Player()
    {
        cout<<"\nHello! I'm Cecilia, I've been guarding the secrets of the universe, but it seems that my memory has been shattered and I've dropped some shards of it alongside the way, shall we get them together?"<<endl;
        cout<<"Here are some stats that may be useful on our journey:\n\n";
        cout<<"\n---------------------------------------------\n";
        cout<<"Cecilia's Health: "<<health;
        cout<<"\n---------------------------------------------\n";
        cout<<"Cecilia's Attack Range is between "<<minDamage<<"-"<<maxDamage<<".";
        cout<<"\n---------------------------------------------\n";
        cout<<"Cecilia's Healing Range is between "<<minHealing<<"-"<<maxHealing<<".";
        cout<<"\n---------------------------------------------\n\n";
    }

    int GetHealth()
    {
        return health;
    }

    void TakeDamage(int damage)
    {
            cout<<"Oh no! Cecilia has been attacked by Chaso!"<<endl;
            cout<<"He dealt "<<damage<<" damage to the elemental knight."<<endl;
            health = health - damage;

        if (health <= 0)
        {
            cout<<"Cecilia perished at Chaso's hands... Will her story end here?"<<endl;
            cout<<"\n---------------------------------------------\n";
            cout<<"                  GAME OVER                   ";
            cout<<"\n---------------------------------------------\n\n";
        }
     
        else
        {
            cout<<"Cecilia's health is now "<<health<<"."<<endl;
        }    
    }

    int GiveDamage()
    {
        srand(time(0));
        int randomDamage = (rand() % (maxDamage - minDamage + 1) + minDamage);
        cout<<"Cecilia has attacked and dealt "<<randomDamage<<" damage to Chaso!"<<endl;

        return randomDamage;
    }

    void Heal()
    {
        srand(time(0));
        int randomHeal = (rand() % (maxHealing - minHealing +1) + minHealing);
        health = health + randomHeal;
        cout<< "Cecilia drank a stellar potion and recovered "<<randomHeal<<" health points. Her current health is "<<health<<"."<<endl;
    }

};

class Enemy
{
    private:
    int health = 100;

    int maxDamage = 28;
    int minDamage = 21;


    public: 

    Enemy()
    {
        cout<<"\n.------------------------------------------------------------------------------------------------------------------------------------------------.\n|   Mysterious being:  Ha ha ha, we finally crossed ways again, Elemental Knight! I noticed you power is fading, this time you won't escape!     |\n|   Wait... what? You don't remember the great Chaso?!?!                                                                                         |\n|   Well, you will soon know the terror that awaits you and the entire universe, just wait.                                                      |\n'------------------------------------------------------------------------------------------------------------------------------------------------'"<<endl; 
    }

    int GetHealth()
    {
        return health;
    }

    void TakeDamage(int damage)
    {
        health = health - damage;

        if (health <= 0)
        {
            cout<<"\n.------------------------------------------------------------------------------------------------------------------------------------------------.\n|   Chaso:  This can't be happening... aAaaAAaAaAAAA!!                                                                                           |\n'------------------------------------------------------------------------------------------------------------------------------------------------'"<<endl;
            cout<<"\nChaso was defeated. Cecilia can now continue her journey to find her memories!\n\nThanks for playing the game!"<<endl;      
        }
        else
        {
            cout<<"Chaso's current health is "<<health<<endl;            
        }
    }

    int GiveDamage()
    {
        srand(time(0));
        int randomDamage = (rand() % (maxDamage - minDamage + 1) + minDamage);
        
        return randomDamage;
    }

};

void gameLoop(Player player , Enemy enemy)
{
    char playerChoice;
    do
    {
        cout<<"\n---------------------------------------------\n";
        cout<<"--  Press A to attack or H to heal  --";
        cout<<"\n---------------------------------------------\n";
        cin>>playerChoice;

        if(playerChoice == 'a' || playerChoice == 'A')
        {
            system("cls");
            enemy.TakeDamage(player.GiveDamage());

                if(enemy.GetHealth() > 0 )
                {
                    cout<<"It's the enemy's turn now!"<<endl;
                    player.TakeDamage(enemy.GiveDamage());
                }
        }
        else if (playerChoice == 'h' || playerChoice == 'H')
        {
            system("cls");
            player.Heal();

                if(enemy.GetHealth() > 0 )
                {
                    cout<<"It's the enemy's turn now!"<<endl;
                    player.TakeDamage(enemy.GiveDamage());
                }
        }
        else
        {
            cout<<"Invalid input, let's help Cecilia win this fight! Choose wisely..."<<endl;
        }
    }
    while(player.GetHealth() > 0 && enemy.GetHealth() > 0);
}

int main()
{
    gameStory();
    char userInput; 
    do
    {
        cout<<"Press S to start the game and any other key to exit!"<<endl;
        cout<<"---------------------------------------------\n";
        cin>>userInput; 
        if(userInput == 'S' || userInput == 's' )
        {
            system("cls");

            Player playerObj;

            cout<<"\n---------------------------------------------\n";
            cout<<"Press N to continue and any other key to exit!";
            cout<<"\n---------------------------------------------\n";
            cin>>userInput;
            if(userInput == 'N' || userInput == 'n' )
            {
                system("cls");

                cout<<"\nCecilia starts looking for the shards but before being able to find the first one, what she finds is a strange silhouette in the space road."<<endl;

                Enemy enemyObj;

                preCombatLore();
                gameLoop(playerObj,enemyObj);
            }
            else
            {
                cout<<"Thanks for playing the game!"<<endl;
            } 
        }
        else
        {
            cout<<"Thanks for playing the game!"<<endl;
        }

    } while (userInput == 'S' || userInput == 's' );
    
}