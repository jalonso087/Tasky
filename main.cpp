/******************************************************
	Tasky - A simple task manager
	Javier Alonso
	v0.01
	2/14/2024
*******************************************************/

#include <iostream>
#include <string>

class MainMenu
{
	~MainMenu() { std::cout << "Destructing..."; };

public:
	const std::string menu_text = std::string()
		+ "Main Menu\n"
		+ "1. Monday\n"
		+ "2. Tuesday\n"
		+ "3. Wednesday\n"
		+ "4. Thursday\n"
		+ "5. Friday\n"
		+ "6. Saturday\n"
		+ "7. Sunday\n"
		+ "0. Exit\n"
		+ "Selection: ";

	const std::string monday = std::string()
		+ "Task List\n"
		+ "1. Wash clothes\n"
		+ "2. Fold clothes\n"
		+ "3. Put away clothes\n"
		+ "4. Back\n"
		+ "Selection: ";

	const std::string tuesday = std::string()
		+ "Task List\n"
		+ "1. Face Mask\n"
		+ "2. Back\n"
		+ "Selection: ";

	const std::string wednesday = std::string()
		+ "Task List\n"
		+ "1. Back\n"
		+ "Selection: ";

	const std::string thursday = std::string()
		+ "Task List\n"
		+ "1. Face Mask\n"
		+ "2. Back\n"
		+ "Selection: ";

	const std::string friday = std::string()
		+ "Task List\n"
		+ "1. Meal Plan\n"
		+ "2. Grocery List\n"
		+ "3. Back\n"
		+ "Selection: ";

	const std::string saturday = std::string()
		+ "Task List\n"
		+ "1. Grocery Shopping\n"
		+ "2. Dust\n"
		+ "3. Clean bathroom\n"
		+ "4. Clean bathroom sinks\n"
		+ "5. Back\n"
		+ "Selection: ";

	const std::string sunday = std::string()
		+ "Task List\n"
		+ "1. Wash Oliver's clothes\n"
		+ "2. Fold Oliver's clothes\n"
		+ "3. Change sheets\n"
		+ "4. Eyebrows\n"
		+ "5. Shave legs\n"
		+ "6. Face mask\n"
		+ "7. Cut nails\n"
		+ "Selection: ";

	bool alive = true;

	int printText(void)
	{
		int selection;

		std::cout << menu_text;
		std::cin >> selection;
		
		return selection;
	}

	void task_list(int selection)
	{

		switch (selection)
		{
			case(1):
				std::cout << monday;
				break;
			case(2):
				std::cout << tuesday;
				break;
			case(3):
				std::cout << wednesday;
				break;
			case(4):
				std::cout << thursday;
				break;
			case(5):
				std::cout << friday;
				break;
			case(6):
				std::cout << saturday;
				break;
			case(7):
				std::cout << sunday;
				break;
			case(0):
			{
				alive == false;
				std::cout << "Goodbye." << std::endl;
				break;
			}
		}
	}

};

int main(void)
{
	MainMenu* menu = new MainMenu();
	while (menu->alive)
	{
	
		//menu->printText();
		int selection = menu->printText();
		menu->task_list(selection);
		std::cin >> selection;
		if (selection == 0)
		{
			menu->alive == false;
			return 0;
		}
	}
	return 0;
}