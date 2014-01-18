/*
  David Wartenbe
  12/24/13
  Tic-Tac-Toe
  C++
  
  Game Board:
       t1 t2 t3
       t4 t5 t6
       t7 t8 t9
  0 = Open
  1 = Player
  2 = Computer
  
  VERSION_0.5 Beta
*/

#include <cstdlib>
#include <iostream>

using namespace std;

//create our table variables
namespace screenVar
{
   int t1, t2, t3, t4, t5, t6, t7, t8, t9;     
}

namespace input
{
     int userInput;
}

void setInput();
void checkInRange();

void printScreen()
{
    cout << screenVar::t1 << " " << screenVar::t2 << " " << screenVar::t3 << endl;
    cout << screenVar::t4 << " " << screenVar::t5 << " " << screenVar::t6 << endl;
    cout << screenVar::t7 << " " << screenVar::t8 << " " << screenVar::t9 << endl;
}

bool runAIProtect()
{
     //horizontal
     if (screenVar::t1 == 1 and screenVar::t2 == 1 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     else if (screenVar::t1 == 1 and screenVar::t3 == 1 and screenVar::t2 == 0) { screenVar::t2 = 2;
     return true; }
     else if (screenVar::t2 == 1 and screenVar::t3 == 1 and screenVar::t1 == 0) { screenVar::t1 = 2;
     return true; }
     
     else if (screenVar::t4 == 1 and screenVar::t5 == 1 and screenVar::t6 == 0) { screenVar::t6 = 2;
     return true; }
     else if (screenVar::t4 == 1 and screenVar::t6 == 1 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 1 and screenVar::t6 == 1 and screenVar::t4 == 0) { screenVar::t4 = 2;
     return true; }
     
     else if (screenVar::t7 == 1 and screenVar::t8 == 1 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t7 == 1 and screenVar::t9 == 1 and screenVar::t8 == 0) { screenVar::t8 = 2;
     return true; }
     else if (screenVar::t8 == 1 and screenVar::t9 == 1 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     
     //vertical
     else if (screenVar::t1 == 1 and screenVar::t4 == 1 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     else if (screenVar::t1 == 1 and screenVar::t7 == 1 and screenVar::t4 == 0) { screenVar::t4 = 2;
     return true; }
     else if (screenVar::t4 == 1 and screenVar::t7 == 1 and screenVar::t1 == 0) { screenVar::t1 = 2;
     return true; }
     
     else if (screenVar::t2 == 1 and screenVar::t5 == 1 and screenVar::t8 == 0) { screenVar::t8 = 2;
     return true; }
     else if (screenVar::t2 == 1 and screenVar::t8 == 1 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 1 and screenVar::t8 == 1 and screenVar::t2 == 0) { screenVar::t2 = 2;
     return true; }
     
     else if (screenVar::t3 == 1 and screenVar::t6 == 1 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t3 == 1 and screenVar::t9 == 1 and screenVar::t6 == 0) { screenVar::t6 = 2;
     return true; }
     else if (screenVar::t6 == 1 and screenVar::t9 == 1 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     
     //diagonal
     else if (screenVar::t1 == 1 and screenVar::t5 == 1 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t1 == 1 and screenVar::t9 == 1 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 1 and screenVar::t9 == 1 and screenVar::t1 == 0) { screenVar::t1 = 2;
     return true; }
     
     else if (screenVar::t3 == 1 and screenVar::t5 == 1 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     else if (screenVar::t3 == 1 and screenVar::t7 == 1 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 1 and screenVar::t7 == 1 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     else { return false; }
}

bool finish()
{
     //horizontal
     if (screenVar::t1 == 2 and screenVar::t2 == 2 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     else if (screenVar::t1 == 2 and screenVar::t3 == 2 and screenVar::t2 == 0) { screenVar::t2 = 2;
     return true; }
     else if (screenVar::t2 == 2 and screenVar::t3 == 2 and screenVar::t1 == 0) { screenVar::t1 = 2;
     return true; }
     
     else if (screenVar::t4 == 1 and screenVar::t5 == 1 and screenVar::t6 == 0) { screenVar::t6 = 2;
     return true; }
     else if (screenVar::t5 == 1 and screenVar::t6 == 1 and screenVar::t4 == 0) { screenVar::t4 = 2;
     return true; }
     else if (screenVar::t4 == 1 and screenVar::t6 == 1 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     
     else if (screenVar::t7 == 1 and screenVar::t8 == 2 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t7 == 1 and screenVar::t9 == 2 and screenVar::t8 == 0) { screenVar::t8 = 2;
     return true; }
     else if (screenVar::t8 == 1 and screenVar::t9 == 2 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     
     //vertical
     else if (screenVar::t1 == 2 and screenVar::t4 == 2 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     else if (screenVar::t1 == 2 and screenVar::t7 == 2 and screenVar::t4 == 0) { screenVar::t4 = 2;
     return true; }
     else if (screenVar::t4 == 2 and screenVar::t7 == 2 and screenVar::t1 == 0) { screenVar::t1 = 2;
     return true; }
     
     else if (screenVar::t2 == 2 and screenVar::t5 == 2 and screenVar::t8 == 0) { screenVar::t8 = 2;
     return true; }
     else if (screenVar::t2 == 2 and screenVar::t8 == 2 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 2 and screenVar::t8 == 2 and screenVar::t2 == 0) { screenVar::t2 = 2;
     return true; }
     
     else if (screenVar::t3 == 2 and screenVar::t6 == 2 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t3 == 2 and screenVar::t9 == 2 and screenVar::t6 == 0) { screenVar::t6 = 2;
     return true; }
     else if (screenVar::t6 == 2 and screenVar::t9 == 2 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     
     
     //diagonal
     else if (screenVar::t1 == 2 and screenVar::t5 == 2 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t1 == 2 and screenVar::t9 == 2 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 2 and screenVar::t9 == 2 and screenVar::t1 == 0) { screenVar::t1 = 2;
     return true; }
     
     else if (screenVar::t3 == 2 and screenVar::t5 == 2 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     else if (screenVar::t3 == 2 and screenVar::t7 == 2 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t7 == 2 and screenVar::t5 == 2 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     else { return false; }
}

void runAIAttack()
{
     if (!finish())
     {
           if (screenVar::t1 == 0) { screenVar::t1 = 2; }
           else if (screenVar::t3 == 0) { screenVar::t3 = 2; }
           else if (screenVar::t9 == 0) { screenVar::t9 = 2; }
           else if (screenVar::t7 == 0) { screenVar::t7 = 2; }
         
           //the win
           else if (screenVar::t2 == 0) { screenVar::t2 = 2; }
           else if (screenVar::t6 == 0) { screenVar::t6 = 2; }
           else if (screenVar::t8 == 0) { screenVar::t8 = 2; }
           else if (screenVar::t4 == 0) { screenVar::t4 = 2; }
           else if (screenVar::t5 == 0) { screenVar::t5 = 2; }
           else { cout << "We don goofed here" << endl; }        
     }
}

bool checkWin()
{
     //PLAYER
     //horizontal
     if (screenVar::t1 == 1 and screenVar::t2 == 1 and screenVar::t3 == 1) { return true; }
     if (screenVar::t4 == 1 and screenVar::t5 == 1 and screenVar::t6 == 1) { return true; }
     if (screenVar::t7 == 1 and screenVar::t8 == 2 and screenVar::t9 == 1) { return true; }
     
     //vertical
     if (screenVar::t1 == 1 and screenVar::t4 == 1 and screenVar::t7 == 1) { return true; }
     if (screenVar::t2 == 1 and screenVar::t5 == 1 and screenVar::t8 == 1) { return true; }
     if (screenVar::t3 == 1 and screenVar::t6 == 1 and screenVar::t9 == 1) { return true; }
     
     //diagonal
     if (screenVar::t1 == 1 and screenVar::t5 == 1 and screenVar::t9 == 1) { return true; }
     if (screenVar::t3 == 1 and screenVar::t5 == 1 and screenVar::t7 == 1) { return true; }
     else { return false; }
}

bool catsEye()
{
     if (screenVar::t1 != 0 and screenVar::t2 != 0 and screenVar::t3 != 0 and screenVar::t4 != 0 and screenVar::t5 != 0 and screenVar::t6 != 0 and screenVar::t7 != 0 and screenVar::t8 != 0 and screenVar::t9 != 0)
     {
         return true;
     }else { return false; }     
}

bool checkWinComp()
{
   //COMPUTER
     if (screenVar::t1 == 2 and screenVar::t2 == 2 and screenVar::t3 == 2) { return true; }
     if (screenVar::t4 == 2 and screenVar::t5 == 2 and screenVar::t6 == 2) { return true; }
     if (screenVar::t7 == 2 and screenVar::t8 == 2 and screenVar::t9 == 2) { return true; }
     
     //vertical
     if (screenVar::t1 == 2 and screenVar::t4 == 2 and screenVar::t7 == 2) { return true; }
     if (screenVar::t2 == 2 and screenVar::t5 == 2 and screenVar::t8 == 2) { return true; }
     if (screenVar::t3 == 2 and screenVar::t6 == 2 and screenVar::t9 == 2) { return true; }
     
     //diagonal
     if (screenVar::t1 == 2 and screenVar::t5 == 2 and screenVar::t9 == 2) { return true; }
     if (screenVar::t3 == 2 and screenVar::t5 == 2 and screenVar::t7 == 2) { return true; }
     else { return false; }      
}

void squareUnavailable()
{
     cout << "Square " << input::userInput << " is unavailable, try again:" << endl;
     cin >> input::userInput;
     checkInRange();
}

//if square is available ( = 0), set that square to 1 (user = 1, computer = 2)
void setInput()
{
     switch (input::userInput)
     {
            case 1:
                 if (screenVar::t1 == 0)
                 {
                     screenVar::t1 = 1;
                     cout << "Square " << input::userInput << " is now yours" << endl; 
                    break;
                 }else{
                       squareUnavailable();
                       break;
                 }
            case 2:
                 if (screenVar::t2 == 0)
                 {
                     screenVar::t2 = 1;
                     cout << "Square " << input::userInput << " is now yours" << endl; 
                     break; 
                 }else{
                       squareUnavailable();
                       break;
                 }
            case 3:
                 if (screenVar::t3 == 0)
                 {
                     screenVar::t3 = 1;
                     cout << "Square " << input::userInput << " is now yours" << endl; 
                     break;                         
                 }else{
                       squareUnavailable();
                       break;
                 }
            case 4:
                 if (screenVar::t4 == 0)
                 {
                     screenVar::t4 = 1;
                     cout << "Square " << input::userInput << " is now yours" << endl; 
                     break;                         
                 }else{
                       squareUnavailable();
                       break;
                 }
            case 5:
                 if (screenVar::t5 == 0)
                 {
                     screenVar::t5 = 1;
                     cout << "Square " << input::userInput << " is now yours" << endl; 
                     break;                         
                 }else{
                       squareUnavailable();
                       break;
                 }
            case 6:
                 if (screenVar::t6 == 0)
                 {
                     screenVar::t6 = 1;
                     cout << "Square " << input::userInput << " is now yours" << endl; 
                     break;                         
                 }else{
                       squareUnavailable();
                       break;
                 }
            case 7:
                 if (screenVar::t7 == 0)
                 {
                     screenVar::t7 = 1;
                     cout << "Square " << input::userInput << " is now yours" << endl; 
                     break;                         
                 }else{
                       squareUnavailable();
                       break;
                 }
            case 8:
                 if (screenVar::t8 == 0)
                 {
                     screenVar::t8 = 1;
                     cout << "Square " << input::userInput << " is now yours" << endl; 
                     break;                         
                 }else{
                       squareUnavailable();
                       break;
                 }
            case 9:
                 if (screenVar::t9 == 0)
                 {
                     screenVar::t9 = 1;
                     cout << "Square " << input::userInput << " is now yours" << endl; 
                     break;                         
                 }else{
                       squareUnavailable();
                       break;
                 }
            default:
                 return;           
     }
}

void checkInRange()
{
     if (input::userInput < 1 or input::userInput > 9)
     {
        //get input again
        cout << "Error: out of range, Re-Enter:" << endl;
        cin >> input::userInput;
        //user still cant follow directions
        while (input::userInput < 1 or input::userInput > 9)
        {
              cout << "Still Wrong, try again 1-9: " << endl;
              cin >> input::userInput;
        }
        setInput();
     }else{
           setInput();
     }
}


int main()
{
    cout << "Cpt. Dave's Tic Tac Toe" << endl;
    
    //debug? maybe not...
    for (int i=0; i<9; i++)
    {
        cout << "Please enter a number 1-9: " << endl;
        cin >> input::userInput;
        checkInRange();
        printScreen();
        
        if (catsEye())
        {
            cout << "No one won the game..." << endl;
            system("PAUSE");
            return 0;
         }
         
        //win?
        if (checkWin())
        {
            cout << "You have won the game!" << endl;
            system("PAUSE");
            return 0;
        }
        
        
        
        if (!runAIProtect())
        {
            runAIAttack();
            cout << "Computer Attacked" << endl;
            printScreen();
        }else{
            cout << "Computer Protected" << endl;
            printScreen();
        }
        
        if (checkWinComp())
        {
            cout << "The computer won, you lost." << endl;
            system("PAUSE");
            return 0;   
        }
    }
    
    return 0; 
    //system("PAUSE");
}
