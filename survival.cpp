#include <cstdlib> 
#include <climits>
#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
using namespace std;

class Creature
{
    public:
    Creature();
    Creature(string name, vector<string> traits, int power);
    Creature(string newName);
    Creature(string name, int power);
    string reName(string newName);
    int newPower(int newPower);
    string getName();
    int getPower();
    
    
    private:
    string name;
    vector <string> traits;
    int power;
};

void battle(int power1, int power2, string name, string dinoName);

void partForm(int& partNumber);

void deadBanner();








int main()
{
    int choice;
    int power1;
    int power2;
    string line;
    ifstream fin;
    ofstream fout;
    string name;
    vector <string> traits;
    int partNumber = 1;
    string environment;
    
    
    cout << "Welcome to the trials of Survival!!!" << endl << endl;
    Creature dino;
    cout << "Please Name your Dinosaur: ";
    cin >> name;
    name = dino.reName(name);
    cout << "your dinosaurs new name is " << name << "." << endl;
    cout << "Lets start the adventure shall we!"; 
    partForm(partNumber);
    cout << "Please choose your starting environment....." << endl << endl <<
    "The Desert, or The Forest(type Desert or Forest): ";
    cin >> environment;
    cout << endl << endl << endl;
    
    if( environment == "Desert")
    {
        fin.open("Desert.txt");
        if( fin.fail())
        {
            cout << "error, could not open desert.txt";
            return -1;
        }
        while(getline(fin, line))
        {
        if(line.substr(0,1) == "{")
        {
            line = dino.getName();
        }
        cout << line << endl;
        }
        fin.close();
        fin.clear();
        cin >> choice;
        if (choice == 1)
        {
            traits.push_back("O Shaped Blood Cells.");
            cout << "your " << dino.getName() << " Trecks through the Desert for ";
            cout << "miles and finally finds a watering hole and a Jungle";
            cout << " full of food and water!" << endl << endl;
            cout << "congrats! You beat the Desert.";
            
            partForm(partNumber);
            
            fin.open("Jungle.txt");
            if( fin.fail())
            {
                cout << "error, could not open jungle.txt";
                return -1;
            }
            while(getline(fin, line))
            {
            if(line.substr(0,1) == "{")
            {
                line = dino.getName();
            }
            cout << line << endl;
            }
            fin.close();
            fin.clear();
            Creature tyrannosaurus("Tyrannosaurus", 50);
            cin >> choice;
            
            if ( choice == 1)
            {
                cout << " The Tyrannosaurus eats you crunching you to a pulp."
                << endl << "But the poison kills the Tyrannosaurus as well!"
                << endl << " But there is no way your coming back from "
                << "being pulp.";
                deadBanner();
            }
            
            if ( choice == 2)
            {
                power1 = dino.newPower(5); 
                power2 = tyrannosaurus.getPower();
                battle(power1, power2, "Tyrannosaurus", dino.getName());
            }
            
            if ( choice == 3)
            {
                cout << "The glowing from your skin makes it even easier to find you.";
                cout << " " << dino.getName() << " is tourn to peices.";
                deadBanner();
            }
            
            if ( choice == 4)
            {
                traits.push_back("Translucent Skin");
                cout << " Luckily for " << dino.getName() << ", Tyrannosaurus's have terrible eye sight;"
                     << " and your skin allows you to blend more with your surroundings "
                     << "making it alot harder for the Tyrannosaurus to see your dino."
                     << " This allows " << dino.getName() << " to escape the Tyrannosaurus undetected!!!";
                cout << endl << endl << " Congrats on escaping the Jungle!";
          
            partForm(partNumber);
            
            fin.open("Mountains.txt");
            if( fin.fail())
            {
                cout << "error, could not open Mountains.txt";
                return -1;
            }
            while(getline(fin, line))
            {
            if(line.substr(0,1) == "{")
            {
                line = dino.getName();
            }
            cout << line << endl;
            }
            fin.close();
            fin.clear();
            cin >> choice;
            
            if ( choice == 1)
            {
                cout << "You may be poisonous, but thats not going to help" << dino.getName() << " battle the cold.";
                deadBanner();
            }
            
            if ( choice == 2)
            {
                cout << " You may be stronger, but thats not enough to save" << dino.getName() << " you from this gruelling climate.";
                deadBanner();
                
            }
            
            if ( choice == 3)
            {
                cout << "Good job! Your dino is glowing red now. That did nothing to save it from the cold.";
                deadBanner();
            }
            
            if ( choice == 4)
            {
                cout << dino.getName() << " is more than capable to survive this harsh freezing climate and descends through the mountains to finally reach the warm and windy grass plains!";
                
            }
            }
            
            
          
        }
    }
        
                
                
            
                
                
            
            
            
        
            
            
        
    
        if ( choice == 2)
        {
            cout << " though your " << dino.getName() << " had stronger bones,"
            << " it died from Dehydration, and did not make it"
            << " to the next watering hole." << endl;
            deadBanner();
        }
    
        if ( choice == 3)
        {
            cout << "Though " << dino.getName() 
                 << " may be able to find their way in the Dark, "
                 << " it died from Dehydration, and did not make it"
                 << " to the next watering hole.";
            deadBanner();
        }
    
        if( choice == 4)
        {
            cout << "Though " << dino.getName() << " has great camouflage,"
                 << " it died from Dehydration, and did not make it"
                 << " to the next watering hole.";
            deadBanner();
        }
    }
    
    if( environment == "Forest")
    {
        fin.open("Forest.txt");
        if( fin.fail())
        {
            cout << "error, could not open Forest.txt";
            return -1;
        }
        while(getline(fin, line))
        {
        if(line.substr(0,1) == "{")
        {
            line = dino.getName();
        }
        cout << line << endl;
        }
        fin.close();
        fin.clear();
        cin >> choice;
        Creature snake("Snake", 4);
        
        if( choice == 1)
        {
            cout << dino.getName() << "is now very efficient with water in its body"
            << " but, that doesn't help in a fight";
            battle(power1, power2, "Snake", dino.getName());
        }
        
        if (choice == 3)
        {
            cout << " Your dino, " << dino.getName() << " now glows red, that just angers the snake and makes it want to kill " << dino.getName() << " even more now.";
            battle(power1, power2, "Snake", dino.getName());
        }
        
        if (choice == 4)
        {
            cout << " you trully thought making " << dino.getName() << " fat was going to save you from a snake...";
            battle(power1, power2, "Snake", dino.getName());
        }
            
            
    
        if( choice == 2)
        {
            power1 = dino.newPower(5); 
            power2 = snake.getPower();
            battle(power1, power2, "Snake", dino.getName());
            cout << endl << " You eat the dead snake and sleep for the night.";
            cout << endl << " Congrats! You beat the Forest.";
            
            partForm(partNumber);
            
            fin.open("Swamp.txt");
        if( fin.fail())
        {
            cout << "error, could not open Swamp.txt";
            return -1;
        }
        while(getline(fin, line))
        {
        if(line.substr(0,1) == "{")
        {
            line = dino.getName();
        }
        cout << line << endl;
        }
        fin.close();
        fin.clear();
        cin >> choice;
        
        
        if (choice == 1)
        {
            cout << " yes, " << dino.getName() << " can go without water for days"
            << " but, " << dino.getName() << " contracted milaria from a masquito and died a terrible death.";
            deadBanner();   
        }
        
        if (choice == 3)
        {
            cout << dino.getName() << " is now glowing red, this attracts all sort of insects to your Dino and it contracts multiple diseases from misquitos and dies a terrible death.";
            deadBanner();
        }
        
        if (choice == 4)
        {
            cout << Dino.getName() << " is almost perfectly blends in with its environment. It slips by all the insects. But, when it stops to drink from the muddy waters, it contracts Botulism and dies.";
            deadBanner();
        }
        
        if (choice == 2)
        {
            cout << dino.getName() << " has now a boosted immune system, allowing it to travel through the swamp with no fatal complications!";
            cout << " you safely exit the swamp and reach the ocean.";
             
            partForm(partNumber); 
             
             fin.open("Ocean.txt");
        if( fin.fail())
        {
            cout << "error, could not open Ocean.txt";
            return -1;
        }
        while(getline(fin, line))
        {
        if(line.substr(0,1) == "{")
        {
            line = dino.getName();
        }
        cout << line << endl;
        }
        fin.close();
        fin.clear();
        cin >> choice;
        
        if (choice == 1)
        {
            cout << " This trait did nothing to help " << dino.getName() << " to cross the Ocean and due to exhaustion it drowned,";
            deadBanner();
        }
        
        if (choice == 3)
        {
            cout << " Now that " << dino.getName() << " is glowing red, it attracts ocean predators and it gets eaten by a Megalodon.";
            deadBanner();
        }
        
        if (choice == 4)
        {
            cout << " This trait did nothing to help " << dino.getName() << " to cross the Ocean and due to exhaustion it drowned,";
            deadBanner();    
        }
        
        if (choice == 2)
        {
            cout << " Now that " << dino.getName(); << " has a very powerful tail it can swim with now, it crosses the Ocean and finally reaches the great Plains.";   
        }
    }  
    }
    }
    
    partForm(partNumber);
    
    fin.open("Plains.txt");
        if( fin.fail())
        {
            cout << "error, could not open Plains.txt";
            return -1;
        }
        while(getline(fin, line))
        {
        if(line.substr(0,1) == "{")
        {
            line = dino.getName();
        }
        cout << line << endl;
        }
        fin.close();
        fin.clear();
        cin >> choice;
        
        if ( choice == 1)
        {
            cout << " This trait did not impress the possible mate." << dino.getName() << " died from old age"
            << " and did not produce any offspring to pass on its genes.";
            deadBanner();
            
        }
        
        if ( choice == 2)
        {
            cout << " This trait did not impress the possible mate." << dino.getName() << " died from old age"
            << " and did not produce any offspring to pass on its genes.";
            deadBanner();
        }
        
        if ( choice == 3)
        {
            cout << dino.getName() << " produces an irresistable red glow that instantly attracts the mate!" << endl << endl;
            cout << dino.getName() << " through the the struggles it faced," << dino.getname()  "was able to produce offspring, and pass on its traits for generations to come.";
            cout << endl << endl; << endl;
            cout << " YOU WON THE GAME OF SURVIVAL !!!!!! ";
        }
        
        if ( choice == 4)
        {
            cout << " This trait did not impress the possible mate." << dino.getName() << " died from old age,"
            << " and did not produce any offspring to pass on its genes.";
            deadBanner();
        }
            
            
            
            
    
    
        
return 0;
}

Creature::Creature()
{
    name = "Creature";
    power = 0;
}

Creature::Creature(string newName, int newPower)
{
    name = newName;
    power = newPower;
}

string Creature::reName(string newName)
{
    name = newName;
    return name;
    
}

Creature::Creature(string newName)
{
    
    name = newName;
    
}

int Creature::newPower(int newPower)
{
    power = newPower;
    return power;
}



/*void Creature::newPower(int power)
{
    int sum = 0
    sum = power + sum;
*/
    

string Creature::getName()
{
    return name;
}

int Creature::getPower()
{
    return power;
}
    

void partForm(int& partNumber)
{
   cout << endl << endl << endl;
    for (int i = 1; i < 5; i++)
    {
        cout << "- ";
    }
    
    cout << "PART " << partNumber;
    
    for (int i = 1; i < 5; i++)
    {
        cout << " -";
    }
    partNumber++;
    cout << endl;
}

void battle(int power1, int power2, string name, string dinoName)
{
    
   
    if (power1 > power2)
    {
        cout << endl << dinoName << "has defeated the " << name;
    }
    
    if (power2 > power1)
    {
        cout << endl << "The " << name << " was too strong and " << dinoName;
        cout << " has died." << endl;
        
     deadBanner();
    }      
}

void deadBanner()
{
    cout << endl << endl << "You Died.";
}
    
    


    
    
    
    