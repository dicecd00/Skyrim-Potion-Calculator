#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

class ingredient {
  public:
  string name;

  string effect_1;
  int effect_1_mag;
  int effect_1_dur;
  int effect_1_cost;
  double effect_1_valuemod;
  
  string effect_2;
  int effect_2_mag;
  int effect_2_dur;
  int effect_2_cost;
  double effect_2_valuemod;
  
  string effect_3;
  int effect_3_mag;
  int effect_3_dur;
  int effect_3_cost;
  double effect_3_valuemod;
  
  string effect_4;
  int effect_4_mag;
  int effect_4_dur;
  int effect_4_cost;
  double effect_4_valuemod;
};

ingredient ingred_1;
ingredient ingred_2;

class potion {
  public:
  string pEffect_1;
  int pEffect_1_mag;
  int pEffect_1_dur;
  
  string pEffect_2;
  int pEffect_2_mag;
  int pEffect_2_dur;

  string pEffect_3;
  int pEffect_3_mag;
  int pEffect_3_dur;

  string pEffect_4;
  int pEffect_4_mag;
  int pEffect_4_dur;

  double pValue;
};

void readCSVFile(const string& fileName) {
    ifstream file(fileName);

    if (!file.is_open()) {
        cerr << "Failed to open the file: " << fileName << endl;
        return;
    }

    string line;

     if (getline(file, line)) {}

    getline(file, ingred_1.name, ',');
    getline(file, ingred_1.effect_1, ',');
    string nullstring;
    getline(file, nullstring, ','); ingred_1.effect_1_mag = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_1.effect_1_dur = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_1.effect_1_cost = stoi(nullstring);
    
    getline(file, ingred_1.effect_2, ',');
    getline(file, nullstring, ','); ingred_1.effect_2_mag = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_1.effect_2_dur = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_1.effect_2_cost = stoi(nullstring);

    getline(file, ingred_1.effect_3, ',');
    getline(file, nullstring, ','); ingred_1.effect_3_mag = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_1.effect_3_dur = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_1.effect_3_cost = stoi(nullstring);

    getline(file, ingred_1.effect_4, ',');
    getline(file, nullstring, ','); ingred_1.effect_4_mag = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_1.effect_4_dur = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring); ingred_1.effect_4_cost = stoi(nullstring);

    //second ingredient
    getline(file, ingred_2.name, ',');
    getline(file, ingred_2.effect_1, ',');
    getline(file, nullstring, ','); ingred_2.effect_1_mag = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_2.effect_1_dur = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_2.effect_1_cost = stoi(nullstring);
    getline(file, ingred_2.effect_2, ',');
    getline(file, nullstring, ','); ingred_2.effect_2_mag = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_2.effect_2_dur = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_2.effect_2_cost = stoi(nullstring);

    getline(file, ingred_2.effect_3, ',');
    getline(file, nullstring, ','); ingred_2.effect_3_mag = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_2.effect_3_dur = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_2.effect_3_cost = stoi(nullstring);

    getline(file, ingred_2.effect_4, ',');
    getline(file, nullstring, ','); ingred_2.effect_4_mag = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_2.effect_4_dur = stoi(nullstring);
    nullstring = "";
    getline(file, nullstring, ','); ingred_2.effect_4_cost = stoi(nullstring);
    

}


//object declarations for use in combinePotions and main
ingredient nullIngredient;
potion potionToCombine;

/*function that takes 2 ingredients as parameters and an optional third to determine if the ingredients can be combined to form a potion and
if so, outputs the resulting potion and its associated potion data */
potion combinePotions(ingredient i1, ingredient i2, ingredient i3 = nullIngredient)
{
    
    
    
    //compare ingredient effects to determine any common effects
    if (i1.effect_1 == i2.effect_1 || i1.effect_1 == i2.effect_2 || i1.effect_1 == i2.effect_3 || i1.effect_1 == i2.effect_4
     || i1.effect_1 == i3.effect_1 || i1.effect_1 == i3.effect_2 || i1.effect_1 == i3.effect_3 || i1.effect_1 == i3.effect_4) {
        potionToCombine.pEffect_1 = i1.effect_1;
    }    
    
    //combination logic pt2
    if (i1.effect_2 == i2.effect_1 || i1.effect_2 == i2.effect_2 || i1.effect_2 == i2.effect_3 || i1.effect_2 == i2.effect_4
     || i1.effect_2 == i3.effect_1 || i1.effect_2 == i3.effect_2 || i1.effect_2 == i3.effect_3 || i1.effect_2 == i3.effect_4) {
        
        //if the ingredients already have one effect in common, assigns the second potion effect to the ingredient in common
        if (potionToCombine.pEffect_1 != i1.effect_1) {
            potionToCombine.pEffect_1 = i1.effect_2;
        }
        else {
        potionToCombine.pEffect_2 = i1.effect_2;
        }
    }
    
    //combination logic pt3
    if (i1.effect_3 == i2.effect_1 || i1.effect_3 == i2.effect_2 || i1.effect_3 == i2.effect_3 || i1.effect_3 == i2.effect_4
     || i1.effect_3 == i3.effect_1 || i1.effect_3 == i3.effect_2 || i1.effect_3 == i3.effect_3 || i1.effect_3 == i3.effect_4) {
        
        //if the ingredients already have one/two effect(s) in common, assigns the second/third potion effect to the ingredient in common
        //could replace OR statements with comparisons to nullIngredient
        if (potionToCombine.pEffect_1 == nullIngredient.effect_1) {
            potionToCombine.pEffect_1 = i1.effect_3;
        }
        else if (potionToCombine.pEffect_2 == nullIngredient.effect_1) {
        potionToCombine.pEffect_2 = i1.effect_3;
        }
        else {
            potionToCombine.pEffect_3 = i1.effect_3;
        }
    }
    
    //combination logic pt4
    if (i1.effect_4 == i2.effect_1 || i1.effect_4 == i2.effect_2 || i1.effect_4 == i2.effect_3 || i1.effect_4 == i2.effect_4
     || i1.effect_4 == i3.effect_1 || i1.effect_4 == i3.effect_2 || i1.effect_4 == i3.effect_3 || i1.effect_4 == i3.effect_4) {
        
        //if the ingredients already have one/two/three effect(s) in common, assigns the second/third/fourth potion effect to the ingredient in common
        if (potionToCombine.pEffect_1 == nullIngredient.effect_1) {
            potionToCombine.pEffect_1 = i1.effect_4;
        }
        else if (potionToCombine.pEffect_2 == nullIngredient.effect_1) {
        potionToCombine.pEffect_2 = i1.effect_4;
        }
        else if (potionToCombine.pEffect_3 == nullIngredient.effect_1){
            potionToCombine.pEffect_3 = i1.effect_4;
        }
        else {
            potionToCombine.pEffect_4 = i1.effect_4;
        }
    }
    
    //combination logic for exclusively ingredient 2 and 3
    if (i2.effect_1 == i3.effect_1 || i2.effect_1 == i3.effect_2 || i2.effect_1 == i3.effect_3 || i2.effect_1 == i3.effect_4) { 
    
        //if the ingredients already have one/two/three effect(s) in common, assigns the second/third/fourth potion effect to the ingredient in common
        if (potionToCombine.pEffect_1 == nullIngredient.effect_1) {
            potionToCombine.pEffect_1 = i2.effect_1;
        }
        else if (potionToCombine.pEffect_2 == nullIngredient.effect_1) {
            potionToCombine.pEffect_2 = i2.effect_1;
        }
        else if (potionToCombine.pEffect_3 == nullIngredient.effect_1){
            potionToCombine.pEffect_3 = i2.effect_1;
        }
        else {
            potionToCombine.pEffect_4 = i2.effect_1;
        }
    }
    
    if (i2.effect_2 == i3.effect_1 || i2.effect_2 == i3.effect_2 || i2.effect_2 == i3.effect_3 || i2.effect_2 == i3.effect_4) { 
        
        //if the ingredients already have one/two/three effect(s) in common, assigns the second/third/fourth potion effect to the ingredient in common
        if (potionToCombine.pEffect_1 == nullIngredient.effect_1) {
            potionToCombine.pEffect_1 = i2.effect_2;
        }
        else if (potionToCombine.pEffect_2 == nullIngredient.effect_1) {
            potionToCombine.pEffect_2 = i2.effect_2;
        }
        else if (potionToCombine.pEffect_3 == nullIngredient.effect_1){
            potionToCombine.pEffect_3 = i2.effect_2;
        }
        else {
            potionToCombine.pEffect_4 = i2.effect_2;
        }
    }
    
    if (i2.effect_3 == i3.effect_1 || i2.effect_3 == i3.effect_2 || i2.effect_3 == i3.effect_3 || i2.effect_3 == i3.effect_4) { 
        
        //if the ingredients already have one/two/three effect(s) in common, assigns the second/third/fourth potion effect to the ingredient in common
        if (potionToCombine.pEffect_1 == nullIngredient.effect_1) {
            potionToCombine.pEffect_1 = i2.effect_3;
        }
        else if (potionToCombine.pEffect_2 == nullIngredient.effect_1) {
            potionToCombine.pEffect_2 = i2.effect_3;
        }
        else if (potionToCombine.pEffect_3 == nullIngredient.effect_1){
            potionToCombine.pEffect_3 = i2.effect_3;
        }
        else {
            potionToCombine.pEffect_4 = i2.effect_3;
        }
    }
    
    if (i2.effect_4 == i3.effect_1 || i2.effect_4 == i3.effect_2 || i2.effect_4 == i3.effect_3 || i2.effect_4 == i3.effect_4) { 
    
        //if the ingredients already have one/two/three effect(s) in common, assigns the second/third/fourth potion effect to the ingredient in common
        if (potionToCombine.pEffect_1 == nullIngredient.effect_1) {
            potionToCombine.pEffect_1 = i2.effect_4;
        }
        else if (potionToCombine.pEffect_2 == nullIngredient.effect_1) {
            potionToCombine.pEffect_2 = i2.effect_4;
        }
        else if (potionToCombine.pEffect_3 == nullIngredient.effect_1){
            potionToCombine.pEffect_3 = i2.effect_4;
        }
        else {
            potionToCombine.pEffect_4 = i2.effect_4;
        }
    }
    
    if (potionToCombine.pEffect_1 == nullIngredient.effect_1) {
        cout << "Potion creation unsuccessful." << endl;
    }
    else {
        cout << endl << "Resulting potion:" << endl;
        cout << potionToCombine.pEffect_1 << " + " << potionToCombine.pEffect_2 << " + " << potionToCombine.pEffect_3 << " + " << potionToCombine.pEffect_4 << endl;
    }
    return potionToCombine;
}




int main() 
{
    string fileName = "alchemy.csv"; // Replace with your file path
    cout << "Reading data from " << fileName << ":\n";
    readCSVFile(fileName);
    cout << "Ingredient 1: " << ingred_1.name << endl;
    cout << "Effect Name       | Magnitude | Duration | Value Modifier" << endl;
    cout << "=========================================================" << endl;
    cout << left;
    cout << setw(20) << ingred_1.effect_1 << " | " << setw(10) << ingred_1.effect_1_mag << "| " << setw(8) << ingred_1.effect_1_dur;
    cout << " | " << ingred_1.effect_1_cost << endl;
    cout << setw(20) << ingred_1.effect_2 << " | " << setw(10) << ingred_1.effect_2_mag << "| " << setw(8) << ingred_1.effect_2_dur;
    cout << " | " << ingred_1.effect_2_cost << endl;
    cout << setw(20) << ingred_1.effect_3 << " | " << setw(10) << ingred_1.effect_3_mag << "| " << setw(8) << ingred_1.effect_3_dur;
    cout << " | " << ingred_1.effect_3_cost << endl;
    cout << setw(20) << ingred_1.effect_4 << " | " << setw(10) << ingred_1.effect_4_mag << "| " << setw(8) << ingred_1.effect_4_dur;
    cout << " | " << ingred_1.effect_4_cost;
    cout << endl << endl;
    
    


    cout << "Ingredient 2: " << ingred_2.name << endl;
    cout << "Effect Name       | Magnitude | Duration | Value Modifier" << endl;
    cout << "=========================================================" << endl;
    cout << left;
    cout << setw(20) << ingred_2.effect_1 << " | " << setw(10) << ingred_2.effect_1_mag << "| " << setw(8) << ingred_2.effect_1_dur;
    cout << " | " << ingred_2.effect_1_cost << endl;
    cout << setw(20) << ingred_2.effect_2 << " | " << setw(10) << ingred_2.effect_2_mag << "| " << setw(8) << ingred_2.effect_2_dur;
    cout << " | " << ingred_2.effect_2_cost << endl;
    cout << setw(20) << ingred_2.effect_3 << " | " << setw(10) << ingred_2.effect_3_mag << "| " << setw(8) << ingred_2.effect_3_dur;
    cout << " | " << ingred_2.effect_3_cost << endl;
    cout << setw(20) << ingred_2.effect_4 << " | " << setw(10) << ingred_2.effect_4_mag << "| " << setw(8) << ingred_2.effect_4_dur;
    cout << " | " << ingred_2.effect_4_cost << endl;
    
    combinePotions(ingred_1, ingred_2);




    return 0;
}