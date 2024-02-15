/******************************************************
	Tasky - A simple task manager
	Javier Alonso
	v0.01
	2/14/2024
*******************************************************/

#include <iostream>
#include <string>

/*
class Baseline
{
public:
	Baseline() {};
	~Baseline() {};
	void printText()
	{

		std::cout << menu_text << std::endl;

	}

	std::string menu_text;

};
*/


class MainMenu
{
private:
	std::string menu_text = std::string()
		+ "Main Menu\n"
		+ "1. Monday\n"
		+ "2. Tuesday\n"
		+ "3. Wednesday\n"
		+ "4. Thursday\n"
		+ "5. Friday\n"
		+ "6. Saturday\n"
		+ "7. Sunday\n"
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


public:
	MainMenu(void) {};
	~MainMenu(void) {};
	void printText(void)
	{
	
		std::cout << menu_text;
		std::cin >> selection;
	
	}

	int selection;

	void task_list(int selection)
	{

		switch (selection)
		{
			case(1):
			case(2):
			case(3):
			case(4):
			case(5):
			case(6):
			case(7):
		}
	}

};

int main(void)
{
	MainMenu* menu = new MainMenu();
	menu->printText();

	return 0;
}








/*
int main(void)
{

	bool alive = true;
	int action;

	//using struct to contain like variables
	//const because they shouldn't be altered
	struct
	{
		const std::string monday = "Monday";
		const std::string tuesday = "Tuesday";
		const std::string wednesday = "Wednesday";
		const std::string thursday = "Thursday";
		const std::string friday = "Friday";
		const std::string saturday = "Saturday";
		const std::string sunday = "Sunday";
		
	} days;

	while(alive)
	{
	
		std::cout << "What would you like to do?" << std::endl;

	
	}

	return 0;

}
*/