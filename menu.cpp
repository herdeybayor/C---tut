#include <iostream>
#include <string>
#include <vector>

int main()
{
	int choice;
	std::vector<std::string> menu = {"0. Quit", "1. Play Game", "2. Load Game", "3. Play Multiplayer", "4. Options", "5. Cheat"};

	do
	{
		for (int i = 0; i < menu.size(); i++)
		{
			std::cout << menu[i] << std::endl;
		}

		std::cin >> choice;

		switch (choice)
		{
		case 0:
			std::cout << "Quitting game..." << std::endl;
			break;
		case 1:
			std::cout << "Starting game..." << std::endl;
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
