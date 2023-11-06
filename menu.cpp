#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

void print_array(std::vector<std::string>);
void play_game();

int main()
{
	srand(time(NULL));
	int choice;
	std::vector<std::string> menu = {"0. Quit", "1. Play Game", "2. Load Game", "3. Play Multiplayer", "4. Options", "5. Cheat"};

	do
	{
		print_array(menu);

		std::cin >> choice;

		switch (choice)
		{
		case 0:
			std::cout << "Quitting game..." << std::endl;
			break;
		case 1:
			play_game();
			break;
		case 2:
			std::cout << "Loading game..." << std::endl;
			break;
		case 3:
			std::cout << "Starting multiplayer..." << std::endl;
			break;
		case 4:
			std::cout << "Opening options..." << std::endl;
			break;
		case 5:
			std::cout << "Cheating..." << std::endl;
			break;
		default:
			std::cout << "Error: Unknown input" << std::endl;
			break;
		}
	} while (choice != 0);

	return (0);
}

void print_array(std::vector<std::string> array)
{
	for (int i = 0; i < array.size(); i++)
	{
		std::cout << array[i] << std::endl;
	}
}

void play_game()
{
	int random = rand() % 251;
	std::vector<int> guesses;

	// std::cout << random << std::endl;

	while (true)
	{
		int guess;
		std::cout << "Guess a number: ";
		std::cin >> guess;

		guesses.push_back(guess);

		if (guess == random)
		{
			std::cout << "You win!" << std::endl;
			break;
		}
		else if (guess < random)
		{
			std::cout << "Too low" << std::endl;
		}
		else
		{
			std::cout << "Too high" << std::endl;
		}
	}

	std::cout << "You guessed: " << guesses.size() << " times" << std::endl;

	for (int i = 0; i < guesses.size(); i++)
	{
		std::cout << guesses[i] << "\t";
	}
	std::cout << std::endl;
}
