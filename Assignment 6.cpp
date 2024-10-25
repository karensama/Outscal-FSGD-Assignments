#include <iostream>
using namespace std;

//Assignment 6 - Creating Player Behaviour!

int playerHealth = 100;
int playerAttack = 25;
int playerDefense = 25;
int playerHealing = 10; 

void TakeDamage(int damageToInflict){
    playerHealth = playerHealth - damageToInflict;
}
void Heal(int healthToRecover){
    playerHealth = playerHealth + healthToRecover;
}

void DamageMultiplier(float multiplier){
    playerAttack = playerAttack * multiplier;
}

main(){
    cout<<"Current player health: "<<playerHealth<<endl;
    cout<<"Current player attack: "<<playerAttack<<endl;
    cout<<"Current player defense: "<<playerDefense<<endl;
    cout<<"Current player healing power: "<<playerHealing<<endl;
    TakeDamage(40);
    cout<<"The player has taken damage! Current player health is: "<<playerHealth<<endl;
    Heal(playerHealing);
    cout<<"The player used a potion! Current player health is: "<<playerHealth<<endl;
    DamageMultiplier(1.5);
    cout<<"The player leveled up and became stronger! Current player attack is: "<<playerAttack<<endl;

}