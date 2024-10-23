// Assessment - Rock , Paper and Scissors.

#include<iostream>
#include<stdlib.h> // srand()
#include<ctime> 

using namespace std;

int userScore = 0, computerScore = 0;

void gameResult() 
{
    if (userScore > computerScore) 
	{
        cout << "\nCongrats! You won the game\n\n";
    } 
	else if (computerScore > userScore) 
	{
        cout << "\nComputer won the game\n\n";
    } 
	else 
	{
        cout << "\nGame is a draw!\n\n";
    }
}

int getScore(int userChoose, int computerChoose) 
{
    if (userChoose == 1 && computerChoose == 3)
	{
        userScore += 1; // User got 1 point
        return 2;
    } 
	else if (userChoose == 2 && computerChoose == 1) 
	{
        userScore += 1;  // User got 1 point
        return 2;
    } 
	else if (userChoose == 3 && computerChoose == 2)
	{
        userScore += 1; // User got 1 point
        return 2;
    } 
	else if (computerChoose == 1 && userChoose == 3)
	{
        computerScore += 1; // Computer got 1 point
        return 1;
    } 
	else if (computerChoose == 2 && userChoose == 1)
	{
        computerScore += 1; // Computer got 1 point
        return 1;
    } 
	else if (computerChoose == 3 && userChoose == 2)
	{
        computerScore += 1; // Computer got 1 point
        return 1;
    } 
	else
	{	
        // When both choose the same option, both get 1 point
        userScore += 1;
        computerScore += 1;
        return 3;
    }
}

void playGame() 
{
    int userChoose, computerChoose, check;
    
    cout << "\n----------------------------\n";
    cout << "\n1) Rock .";
	cout << "\n2) Paper .";
	cout << "\n3) Scissors .";
    
    do 
	{
        cout << "\n\nSelect One Option: ";
        cin >>userChoose;
        
        if (userChoose < 1 || userChoose > 3) 
		{
            cout << "\nInvalid number, try again\n";
            break;
        }
        
    } while (userChoose < 1 || userChoose > 3);

    switch (userChoose)
	{
        case 1: cout << "\nYour choice: Rock\n"; 
				break;
        case 2: cout << "\nYour choice: Paper\n";
				break;
        case 3: cout << "\nYour choice: Scissors\n"; 
				break;
    }
    
	srand(time(0)); // Generate the number 
    computerChoose = (rand() % 3) + 1;  // Generating number randomly 1 to 3

	switch (computerChoose)
	{
        case 1: cout << "\nComputer choice: Rock\n"; 
				break;
        case 2: cout << "\nComputer choice: Paper\n";
				break;
        case 3: cout << "\nComputer choice: Scissors\n"; 
				break;
    }
    
    cout<<"\n------Before Result---------\n";
    cout << "\nYour score: " << userScore << "\nComputer score: " << computerScore << endl;

    check = getScore(userChoose, computerChoose);
    
    if (check == 2) 
	{
        cout << "\nYou got 1 point\n";
    } 
	else if (check == 1) 
	{
        cout << "\nComputer got 1 point\n";
    } 
	else
	{
        cout << "\nBoth got 1 point\n";
    }
    
	cout<<"\n------After Result----------\n";
    cout << "\nYour score: " << userScore << "\nComputer score: " << computerScore << endl;
}

int main() 
{
    int i = 1, Rounds;
    string Name;

    cout << "*--*--*--*--*--*--*--*--*--*\n";
    cout << "           Name             \n";
    cout << "*--*--*--*--*--*--*--*--*--*\n";
    cout << " \nEnter The Player's Name: ";
    cin >> Name;
    cout<<"\n";
    cout << "*--*--*--*--*--*--*--*--*--*\n";
    cout << "          Rounds            \n";
    cout << "*--*--*--*--*--*--*--*--*--*\n";
    cout << "\n" << Name << ", how many rounds do you want to play?: ";
    cin >> Rounds;
    cout<<"\n";
    cout << "*--*--*--*--*--*--*--*--*--*\n";
    cout << "          Game              \n";
    cout << "*--*--*--*--*--*--*--*--*--*\n";
    
    while(i <= Rounds) 
	{
        cout << "\n Round no: " << i << "/" << Rounds << "\n";
        playGame();
        i++;
    }
    
    gameResult();
}