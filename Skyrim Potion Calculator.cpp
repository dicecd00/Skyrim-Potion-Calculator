#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class ingredient {
  public:
  string effect_1;
  int effect_1_mag;
  int effect_1_dur;
  int effect_1_cost;
  double effect_1_valuemod;
  
  string effect_2;
  int effect_2_mag;
  int effect_2_dur;
  int effect_2_cost;
  
  string effect_3;
  int effect_3_mag;
  int effect_3_dur;
  int effect_3_cost;
  
  string effect_4;
  int effect_4_mag;
  int effect_4_dur;
  int effect_4_cost;
};

int main() 
{
    ingredient ingred_1;
    ingredient ingred_2;

    cout << "Enter 4 effects by effect name, magnitude, duration and cost." << endl << endl;
    cout << "Ingredient 1" << endl << "=========================================================" << endl;
    getline (cin,ingred_1.effect_1); cin >> ingred_1.effect_1_mag >> ingred_1.effect_1_dur >> ingred_1.effect_1_cost;
    cin.ignore();
    getline (cin,ingred_1.effect_2); cin >> ingred_1.effect_2_mag >> ingred_1.effect_2_dur >> ingred_1.effect_2_cost;
    cin.ignore();
    getline (cin,ingred_1.effect_3); cin >> ingred_1.effect_3_mag >> ingred_1.effect_3_dur >> ingred_1.effect_3_cost;
    cin.ignore();
    getline (cin,ingred_1.effect_4); cin >> ingred_1.effect_4_mag >> ingred_1.effect_4_dur >> ingred_1.effect_4_cost;

    cout << "Effect Name       | Magnitude | Duration | Value Modifier" << endl;
    cout << "=========================================================" << endl;
    cout << left;
    cout << setw(17) << ingred_1.effect_1 << " | " << setw(10) << ingred_1.effect_1_mag << "| " << setw(8) << ingred_1.effect_1_dur;
    cout << " | " << ingred_1.effect_1_cost << endl;
    cout << setw(17) << ingred_1.effect_2 << " | " << setw(10) << ingred_1.effect_2_mag << "| " << setw(8) << ingred_1.effect_2_dur;
    cout << " | " << ingred_1.effect_2_cost << endl;
    cout << setw(17) << ingred_1.effect_3 << " | " << setw(10) << ingred_1.effect_3_mag << "| " << setw(8) << ingred_1.effect_3_dur;
    cout << " | " << ingred_1.effect_3_cost << endl;
    cout << setw(17) << ingred_1.effect_4 << " | " << setw(10) << ingred_1.effect_4_mag << "| " << setw(8) << ingred_1.effect_4_dur;
    cout << " | " << ingred_1.effect_4_cost;
    cout << endl << endl;
    
    /* Restore Health
10
1
1
Restore Magicka
10
1
1
Restore Stamina
10
1
1
Paralyze
1
10
1
Damage Health
10
1
1
Damage Magicka
10
1
1
Slow
1
10
1
Paralyze
1
10
1*/
    
    cout << "Enter 4 effects by effect name, magnitude, duration and value modifier." << endl << endl;
    cout << "Ingredient 2" << endl << "=========================================================" << endl;
    cin.ignore();
    getline (cin,ingred_2.effect_1); cin >> ingred_2.effect_1_mag >> ingred_2.effect_1_dur >> ingred_2.effect_1_cost;
    cin.ignore();
    getline (cin,ingred_2.effect_2); cin >> ingred_2.effect_2_mag >> ingred_2.effect_2_dur >> ingred_2.effect_2_cost;
    cin.ignore();
    getline (cin,ingred_2.effect_3); cin >> ingred_2.effect_3_mag >> ingred_2.effect_3_dur >> ingred_2.effect_3_cost;
    cin.ignore();
    getline (cin,ingred_2.effect_4); cin >> ingred_2.effect_4_mag >> ingred_2.effect_4_dur >> ingred_2.effect_4_cost;

    cout << "Effect Name       | Magnitude | Duration | Value Modifier" << endl;
    cout << "=========================================================" << endl;
    cout << left;
    cout << setw(17) << ingred_2.effect_1 << " | " << setw(10) << ingred_2.effect_1_mag << "| " << setw(8) << ingred_2.effect_1_dur;
    cout << " | " << ingred_2.effect_1_cost << endl;
    cout << setw(17) << ingred_2.effect_2 << " | " << setw(10) << ingred_2.effect_2_mag << "| " << setw(8) << ingred_2.effect_2_dur;
    cout << " | " << ingred_2.effect_2_cost << endl;
    cout << setw(17) << ingred_2.effect_3 << " | " << setw(10) << ingred_2.effect_3_mag << "| " << setw(8) << ingred_2.effect_3_dur;
    cout << " | " << ingred_2.effect_3_cost << endl;
    cout << setw(17) << ingred_2.effect_4 << " | " << setw(10) << ingred_2.effect_4_mag << "| " << setw(8) << ingred_2.effect_4_dur;
    cout << " | " << ingred_2.effect_4_cost;
    
    
// code block for potion combination logic
    
    
    
    return 0;
}