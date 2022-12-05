// Hw5 - Hokeemon
// Abdullah Alrawi
// 04/24/2022
//cisp 400





#include <iostream>
#include <cstdlib>
#include <functional>

 using namespace std;

 class Date 
{
  
friend ostream & operator<< (ostream & osObject, const Date & rec);
  
friend istream & operator>> (istream & isObject, Date & rec);

private:
int DateDay;
  
int DateMonth;
  
int DateYear;

public:
 
Date ();
  
Date (int D, int M, int Y)
  {
    
DateDay = D;
    
DateMonth = M;
    
DateYear = Y;

} 
};


  ostream & operator<< (ostream & osObject, const Date & rec)
{
  
osObject << rec.DateDay << " / " << rec.DateMonth << " / " << rec.
    DateYear << endl;
  
return osObject;

}



  istream & operator>> (istream & isObject, Date & rec)
{
  
cout << " enter the day: ";
  
isObject >> rec.DateDay;
  
cout << " enter the month: ";
  
isObject >> rec.DateMonth;
  
cout << " enter the year: ";
  
isObject >> rec.DateYear;
  
return isObject;

 
}


 

 
// Specification C2 - Creature class
// Specification B2 - Virtual Class Creature
  class Creature
{

public:
int CreatureBored = 0;
  
int CreatureHungry = 0;
  
string HokeName = "NEW Hokeeman";
  
void virtual HokeLIs () = 0;
  
void virtual HokePLy () = 0;
  
void virtual HokeFd () = 0;
  
void virtual ChangeHokeName () = 0;

};


 
 
// Specification B1 - Child Class
class Hoke:public Creature
{

public:
Hoke ();
  
Hoke (const Hoke & L);
  
void virtual HokeLIs ();
  
void virtual HokePLy ();
  
void virtual HokeFd ();
  
void virtual ChangeHokeName ();
  
    //Specification B3 - Overload Assignment Operator
  void operator= (Hoke L)
  {
    
CreatureBored = L.CreatureBored;
    
CreatureHungry = L.CreatureHungry;
  
}
Hoke operator+ (Hoke L);
  
friend ostream & operator<< (ostream & out, Hoke L);
  
void componentTest ();

 
};


 
Hoke::Hoke ()
{
  
CreatureBored = (rand () % 6);
  
CreatureHungry = (rand () % 6);

}
 

// Specification A2 - Copy Constructor
  Hoke::Hoke (const Hoke & L)
{
  
CreatureBored = L.CreatureBored;
  
CreatureHungry = L.CreatureHungry;
  
HokeName = L.HokeName;

}
 
void

Hoke::HokeLIs ()
{
  
cout << "Name:" << HokeName << endl;
    cout << endl;
  
cout << "Boredom: " << CreatureBored << endl;
    cout << endl;
  
cout << "Hunger: " << CreatureHungry << endl;
    cout << endl;

}
 
void

Hoke::HokePLy ()
{
  
int decCreatureBored = (rand () % 5) + 4;
  
CreatureBored = CreatureBored - decCreatureBored;
  
if (decCreatureBored > 6)
    
    {
      
        cout << HokeName << "is enjoying time with you" << endl;
        cout << endl;
    
}
  
  else
    
    {
      
        cout << HokeName << " is getting tired, please feed!" << endl;
        cout << endl;
    
}

}


 
void
Hoke::HokeFd ()
{
  
int decCreatureHungry = (rand () % 4) + 3;
  
CreatureHungry = CreatureHungry - decCreatureHungry;
  
if (decCreatureHungry > 4)
    
    {
      
cout << HokeName << " is being feed, Thank u!" << endl;
        cout << endl;
    
}
  
  else
    
    {
      
        cout << HokeName << " is being feed, Thank u!" << endl;
        cout << endl;
}


}


 
// Specification A1 - Critter Name
void
Hoke::ChangeHokeName ()
{
  
    cout << " please enter Hokeemon's Name:" << endl;
    cout << endl;
  
cin.ignore ();
  
getline (cin, HokeName);

 
}
 

//Specification B4 - Overload + Operator
  Hoke
 operator+ (Hoke L)
{
  
Hoke Store = Hoke ();
  
Store.CreatureBored = L.CreatureBored;
  
Store.CreatureHungry = L.CreatureHungry;
  
return Store;

}


 
// Specification C4 - Overload B+
  ostream & operator<< (ostream & out, Hoke L)
{
  
out << L.HokeName << " is " << L.
    CreatureBored << " bored, and " << L.CreatureHungry << " hungry." << endl;
    cout << endl;
  
return out;

}


 
void
Hoke::componentTest ()
{
  
if (CreatureHungry < 6 && CreatureHungry > -1)
    
    {
      
cout << "Hunger: test successfully" << endl;
        cout << endl;
}
  
  else
    
    {
      
cout << "Hunger: test failed" << endl;
        cout << endl;
    
}
  
if (CreatureBored < 6 && CreatureBored > -1)
    
    {
      
cout << "boredom: test successfully" << endl;
        cout << endl;
    
}
  
  else
    
    {
      
cout << "boredom: test failed" << endl;
        cout << endl;
    
}

}


 
 
// Specification A3 - Second Child Class
class SecHoke:public Creature
{

public:
SecHoke ();
  
void virtual HokeLIs ();
  
void HokePLy ();
  
void HokeFd ();
  
void ChangeHokeName ();
  
void componentTest ();

 
};


 
SecHoke::SecHoke ()
{
  
CreatureBored = (rand () % 6);
  
CreatureHungry = (rand () % 6);

}
 
void

SecHoke::HokeLIs ()
{
  
cout << "Name:" << HokeName << endl;
    cout << endl;
  
cout << "Boredom: " << CreatureBored << endl;
    cout << endl;
  
cout << "Hunger: " << CreatureHungry << endl;
    cout << endl;
}
 
void

SecHoke::HokePLy ()
{
  
int decCreatureBored = (rand () % 5) + 4;
  
CreatureBored = CreatureBored - decCreatureBored;
  
if (decCreatureBored > 6)
    
    {
      
cout << "Seceemon is enjoying time with you" << endl;
        cout << endl;
    
}
  
  else
    
    {
      
cout <<
    
" Seceemon is getting tired, please feed!";
        cout << endl;
}

 
}


 
void
SecHoke::HokeFd ()
{
  
int decCreatureHungry = (rand () % 4) + 3;
  
CreatureHungry = CreatureHungry - decCreatureHungry;
  
if (decCreatureHungry > 4)
    
    {
      
cout << "Seceemon is being feed, thnak u" << endl;
        cout << endl;
    
}
  
  else
    
    {
      
        cout << "Seceemon is being feed, thnak u" << endl;
        cout << endl;
    
}
}


 
void
SecHoke::ChangeHokeName ()
{
  
cout << " please enter Hokeemon's new Name:" << endl;
    cout << endl;
  
getline (cin, HokeName);
  
}
 
void

SecHoke::componentTest ()
{
  
    if (CreatureHungry < 6 && CreatureHungry > -1)
        
        {
          
    cout << "Hunger: test successfully" << endl;
            cout << endl;
        
    }
      
      else
        
        {
          
    cout << "Hunger: test failed" << endl;
            cout << endl;
    }
      
    if (CreatureBored < 6 && CreatureBored > -1)
        
        {
          
    cout << "boredom: test successfully" << endl;
            cout << endl;
        
    }
      
      else
        
        {
          
    cout << "boredom: test failed" << endl;
            cout << endl;
        
    
}

}




void passTime (Creature * F, int *sort);

int Dis (Creature * inven, int *sort);

void unitTest ();

void 
programGreeting () 
{
  
 
cout <<
    
"my greetings everyone, this program will let you have your own Hokeemon that you will need to take care of, enjoy!" 
    <<endl;
  
cout << endl;
  
cout << "Abdullah Alrawi" << endl;
  
cout << endl;
 
cout << "April 24, 2022" << endl;
}
 
int
main ()
{
  Date dt (11, 11, 11);
  
cout << dt;
  
cin >> dt;
  
cout << dt;

  programGreeting ();
  
unitTest ();
  
 
srand (time (NULL));
  
int *sort = new int (5);
  
Creature * Hokenm = new Hoke[10];
  
int HokeNum;
  
bool EndProg = false;
  
 
while (HokeNum != -2)
    
    {
      
HokeNum = Dis (Hokenm, sort);
      
if (HokeNum == -2)
    
    {
      
break;
    
}
      
char UserInput = ' ';
      
    // Specification A4 - Write a Lambda
    auto HokeNamed =
[](string HokeNames)
      {
    return HokeNames ==
"New hokeemon" ? "a hokeemon" : HokeNames;
      
};
      
string HokeName = HokeNamed (Hokenm[HokeNum].HokeName);
      
 
if (Hokenm[HokeNum].CreatureHungry <= 0)
    
    {
      
cout << "Hunger killed "<<Hokenm[HokeNum].
        HokeName << endl;
        cout << endl;
      
UserInput = 'q';
    
}
      
if (Hokenm[HokeNum].CreatureBored >= 20)
    
    {
      
cout << Hokenm[HokeNum].
        HokeName <<
" is in a state of boredem, please play with"
        << endl;
        cout << endl;
      
UserInput = 'q';
    
}
      
 
while (UserInput != 'q' && HokeNum != -2)
    
    {
      
        cout << "choose action:"<< endl;
        cout << endl;
        cout << "Enter L to Listen"<< endl;
        cout << endl;
        cout << "Enter P to Play"<< endl;
        cout << endl;
        cout << "Enter F to Feed"<< endl;
        cout << endl;
        cout << "Enter N to Name"<< endl;
        cout << endl;
        cout << "Enter Q to Quit"<< endl;
        cout << endl;
      
cin >> UserInput;
      
 
UserInput = tolower (UserInput);
    
      
 
if (UserInput == 'l')
        
        {
          
Hokenm[HokeNum].HokeLIs ();
        
}
      
      else if (UserInput == 'p')
        
        {
          
Hokenm[HokeNum].HokePLy ();
        
}
      
      else if (UserInput == 'f')
        
        {
          
Hokenm[HokeNum].HokeFd ();
        
}
      
      else if (UserInput == 'n')
        
        {
          
Hokenm[HokeNum].ChangeHokeName ();
        
}
      
      else if (UserInput == 'q')
        
        {
          
break;
        
}
      
        // Specification C3 - Validate Input
        else
        
        {
          
cout << "Invalid input" << endl;
            cout << endl;
        
}
      
passTime (Hokenm, sort);
    
}
    
}
  
delete sort;

 
}

// Specification C1 - PassTime()
void
passTime (Creature * F, int *sort)
{
  
for (int i = 0; i < *sort; i++)
    
    {
      
F[i].CreatureHungry = F[i].CreatureHungry + 1;
      
F[i].CreatureBored = F[i].CreatureBored + 1;

}
}
 
int

Dis (Creature * inven, int *sort)
{
  
cout << "Inventory:" << endl;
    cout << endl;
  
for (int i = 0; i < *sort; i++)
    
    {
      
cout << i + 1 << ": " << inven[i].HokeName << endl;
        cout << endl;
    
}
cout << "-1: Quit Program" << endl << endl;
    cout << endl;
 
cout << "Pick Creature ";
    cout << endl;
int UserInput;
  
cin >> UserInput;
  
 
 
while ((UserInput > 5) || (UserInput == 0) || (UserInput < -1))
    
    {
      
cout << "Invalid input" << endl;
        cout << endl;
cin >> UserInput;
    
}
  
 
return (UserInput - 1);

}


 
void
unitTest ()
{
  
 
Hoke testHoke = Hoke ();
  
SecHoke testSecHoke = SecHoke ();
  
 
cout << "Hokeemon Test: " << endl;
    cout << endl;
testHoke.componentTest ();
  
 
 
cout << "Seceemon Test: " << endl;
    cout << endl;
testSecHoke.componentTest ();

 
 
}
