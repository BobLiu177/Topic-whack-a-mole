#include "Game.h"
Game::Game()
{

}
void Game::easygame()
{
	srand(time(0));
	cout << "叫块璶ゴρ公Ω计:";
	cin >> times;
	for (int i = 1;i <= times;i++)
	{
		mousex = rand() % 3 + 1;
		mousey = rand() % 3 + 1;
		displayfirst();
		hammer();
		scorehit();
		displaylater();
		print();
	}
	cout << "程沧Θ罿:" << score << endl;
}
void Game::normalgame()
{
	srand(time(0));
	cout << "叫块璶ゴρ公Ω计:";
	cin >> times;
	for (int i = 1;i <= times;i++)
	{
		bombx = rand() % 3 + 1;
		bomby = rand() % 3 + 1;
		mousex = rand() % 3 + 1;
		mousey = rand() % 3 + 1;
		displayfirst();
		hammer();
		scorehit();
		displaylater();
		print();
	}
	cout << "程沧Θ罿:" << score << endl;
}
void Game::displayfirst()
{
	for (int i = 1;i <= 3;i++)
	{
		for (int k = 1;k <= 3;k++)
		{
			if (i == mousex && k == mousey)//ρ公

				cout << "「";

			else if (i == bombx && k == bomby)//紆

				cout << "〖";
			else

				cout << "〕";

		}
		cout << endl;
	}
}
void Game::displaylater()
{
	for (int i = 1;i <= 3;i++)
	{
		for (int k = 1;k <= 3;k++)
		{
			if (i == playerx && k == playery)//產

				cout << "〈";

			else if (i == mousex && k == mousey)//ρ公

				cout << "「";

			else if (i == bombx && k == bomby)//紆

				cout << "〖";

			else

				cout << "〕";

		}
		cout << endl;
	}
}
void Game::hammer()
{
	int a, b;
	do
	{
		cout << "叫块凌Г夹(1~3):";
		cin >> a >> b;
		playerx = a;
		playery = b;
	} while (playerx < 1 || playerx >3 || playery < 1 || playery >3);
}
void Game::scorehit()
{
	if (mousex == playerx && mousey == playery)
	{
		hit++;
		score += 5;
	}
	else if (bombx == playerx && bomby == playery)
	{
		hitbomb++;
		score -= 3;
	}
	else
		miss++;
}
void Game::print()
{
	if (mousex == playerx && mousey == playery)

		cout << "Ч㏑い!!" << endl;

	else if (bombx == playerx && bomby == playery)

		cout << "Ч㏑い紆!!ρ公" << mousex << "," << mousey << "竚" << endl;

	else

		cout << "阑ρ公" << mousex << "," << mousey << "竚" << endl;

	cout << "阑い" << hit << "Ω," << "阑" << miss << "Ω," << "阑い紆" << hitbomb << "Ω" << endl;
}
void Game::difficult(int i)
{
	int count = 1;
	while (count != 0)
	{
		if (i == 1)
		{
			easygame();
			break;
		}
		else if (i == 2)
		{
			normalgame();
			break;
		}
		else
		{
			cout << "计ぃ才叫块\n";
			cout << "叫块螟 虏虫=1 炊硄=2:";
			cin >> i;
		}
	}
}
