#include <iostream>
using namespace std;

void shooting(){cout<<"Player is shooting"<<endl;}
void healing(){cout<<"Player is healing"<<endl;}
void attacking(){cout<<"Player is attacking"<<endl;}

int main()
{
        for(int bullet = 10 ; bullet > 0 ; bullet--)
    {
        shooting();
    }

    int potion = 5;
    while(potion > 0)
    {
        potion--;
        healing();
    }

    int stamina = 7;
    do
    {
        stamina--;
        attacking();
    } while (stamina > 0);
}