// This program calculates the number of soccer teams
// that a youth league may create from the number of 
// available players. Input validation is demonstrated 
// with while loops.

#include <iostream.h>

void main(void)
{
	int players, teamPlayers, numTeams, leftOver;

	// Get the number of players per team.
	cout << "How many players you wish per team?\n";
	cout << "(Enter a value in the range 9 - 15): ";
	cin >> teamPlayers;
	while (teamPlayers < 9 || teamPlayers > 15)		// Validate input.
	{
		cout << "You should have at least 9 but no\n";
		cout << "more than 15 per team.\n";
		cout << "How many players do you wish per team? ";
		cin >> teamPlayers;
	}
	
	// Get the number of players available.
	cout << "How many players are available? ";
	cin >> players;
	while (players <= 0)		// Validate input.
	{
		cout << "Please enter a positive number: ";
		cin >> players;
	}

	// Perform cacluculations.
	numTeams = players / teamPlayers;	
	leftOver = players % teamPlayers;
	cout << "There will be " << numTeams << " teams with ";
	cout << leftOver << " players left over.\n";
}
