#include <iostream>
using namespace std;

int main()
{
    //Asignment 4: Conditional Statements

    int playerHealth;
    int enemyHealth;

    cout<<"What is the player's health?"<<endl;
    cin>>playerHealth;
    cout<<"What is the enemy's health?"<<endl;
    cin>>enemyHealth;



    // 1. Check different combinations of player health and enemy health using if-else statements:
    // 2. Create a chained if-else statement and check 
    //    1. whether the player health is full?
    //    2. whether the player's health in half?
    //    3. whether the player's health is zero(death condition)

    if(playerHealth == 100)
    {
        cout<<"Player health is full."<<endl;
    }
    else if(playerHealth == 50)
    {
        cout<<"Player health is half-full and half-empty."<<endl;
    }
    else if(playerHealth == 0)
    {
        cout<<"Player health is zero."<<endl;
    }

    // 3. If player health is greater than 0, check the enemy health whether it's full/half/zero.

    if(playerHealth > 0)
    {
        if(enemyHealth == 100)
        {
            cout<<"Enemy health is full."<<endl;
        }
        else if(enemyHealth == 50)
        {
            cout<<"Enemy health is half-full and half-empty."<<endl;
        }
        else if(enemyHealth == 0)
        {
            cout<<"Enemy health is zero."<<endl;
        }
    }

    // 4. If player health or enemy health is zero, then print the message game over and display player won or lost depending upon who died.
    // 5. If player and enemy health both are zero, print the message of the game over and display a draw statement.
    if(playerHealth == 0 || enemyHealth == 0)
    {
        if(enemyHealth == 0 && playerHealth > 0 ){cout<<"Game is over! Player Won!"<<endl;}
        else if(playerHealth == 0 && enemyHealth > 0 ){cout<<"Game is over! Player Lost!"<<endl;}
        else{cout<<"Game is over! \n--- DRAW ---"<<endl;}
    }

}