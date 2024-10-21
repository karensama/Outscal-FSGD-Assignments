#include <iostream>
using namespace std;

int main()
{

    int playerHealth;
    bool isPlayerInRange, isPlayerAttacking, isPlayerDefending;

    cout<<"What is the current Player's health?"<<endl;
    cin>>playerHealth;
    cout<<"Is the player in range? (Type 1 for YES and 0 for NO)"<<endl;
    cin>>isPlayerInRange;
    cout<<"Is the player attacking? (Type 1 for YES and 0 for NO)"<<endl;
    cin>>isPlayerAttacking;
    cout<<"Is the player defending? (Type 1 for YES and 0 for NO)"<<endl;
    cin>>isPlayerDefending;

    if (isPlayerInRange == 1) 
    {
        if (isPlayerAttacking == 1) 
        {
            if (playerHealth < 20) 
            {
                cout << "The Player delivers a rage attack!" << endl;
            }
            else
            {
                cout << "The Player attacks!" << endl;
            }
        } 
        else 
        {
            if (isPlayerDefending == 1) 
            {
                cout << "The Enemy holds..." << endl;
            } 
            else if (playerHealth == 100 || playerHealth < 10) 
            {
                cout << "The Enemy uses a special ability attack!" << endl;
            } 
            else 
            {
                cout << "The Enemy attacks!" << endl;
            }
        }
    }
    
//Tried a different approach with ternaries; added the condition if player is attacking and player health >=20 the player attacks normally to both attempts.

   string attackPattern = (isPlayerAttacking == 1) ? ((playerHealth<20) ? "The Player delivers a rage attack!": "The player attacks!") : 
   ((isPlayerDefending==1) ? "The Enemy holds...":(playerHealth == 100 || playerHealth < 10) ? "The Enemy uses a special ability attack!":"The Enemy attacks!");
   cout<<attackPattern<<endl;
}