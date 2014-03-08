/*
    Copyright (C) 2014  David Wartenbe

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    
    
    
    Tic-tac-toe
    
    This is more of a learning experiance than and actual game.
    Enjoy!
*/

#include <iostream>
#include "AI.h"
#include "checkWin.h"

using namespace std;


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

bool catsEye()
{
     if (screenVar::t1 != 0 and screenVar::t2 != 0 and screenVar::t3 != 0 and screenVar::t4 != 0 and screenVar::t5 != 0 and screenVar::t6 != 0 and screenVar::t7 != 0 and screenVar::t8 != 0 and screenVar::t9 != 0)
     {
         return true;
     }else { return false; }     
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
    cout << "tic-tac-toe  Copyright (C) 2014 David Wartenbe\n";
    cout << "This program comes with ABSOLUTELY NO WARRANTY.\n";
    cout << "This is free software, and you are welcome to redistribute it\n";
    cout << "under certain conditions.\n";
    cout << "Game board:\n";
    printScreen();
    
    //Attept to add a 'choose who goes first' mechanic
    int whoGoesFirst;
    int rounds;//sets our game lood depending on who goes first
    cout << "Please choose who goes first(1 = You, 2 = Computer): ";
    cin >> whoGoesFirst;
    if (whoGoesFirst > 2 || whoGoesFirst < 1)
    {
        //user cant follow directions
        cout << "Error: input out of range, try again: \n";
        cin >> whoGoesFirst;
        while (whoGoesFirst != 1 && whoGoesFirst != 2)
        {
              cout << "Error: input out of range, try again: \n";
              cin >> whoGoesFirst;  
        }  
              
    }
        
    if (whoGoesFirst == 1) {
       rounds = 5;
       //return 0; 
    }
    else
    {                    
        if (!runAIProtect())
        {
           runAIAttack();
           cout << "Computer Attacked" << endl;
           printScreen();
        }else{
           cout << "Computer Protected" << endl;
           printScreen();
        }    
        rounds = 4;
    }
    
    //main game loop
    for (int i=0; i<rounds; i++)
    {
        
        cout << "Please enter a number 1-9: " << endl;
        cin >> input::userInput;
        checkInRange();
        printScreen();
        
        if (catsEye())
        {
            cout << "No one won the game..." << endl;
            cin.ignore(25, '\n');
            cout << "Please press the enter key...";
            cin.get();
            return 0;
         }
         
        //win?
        if (checkWin())
        {
            cout << "You have won the game!" << endl;
            cin.ignore(25, '\n');
            cout << "Please press the enter key...";
            cin.get();
            return 0;
        }
        
        
        //here we add a function to finsih the game if the requirments are met.
        if (runAIFinish())
        {
            if (checkWinComp())
            {
                cout << "The computer won, you lost." << endl;
                printScreen();
                cin.ignore(25, '\n');
                cout << "Please press the enter key...";
                cin.get();
                return 0;   
             }                       
        }
        else
        {
            if (!runAIProtect())
            {
                runAIAttack();
                cout << "Computer Attacked" << endl;
                printScreen();
            }else{
                cout << "Computer Protected" << endl;
                printScreen();
            }
        }   
        
        
        if (checkWinComp())
        {
            cout << "The computer won, you lost." << endl;
            cin.ignore(25, '\n');
            cout << "Please press the enter key...";
            cin.get();
            return 0;   
        }
    }
    
    return 0; 
}

