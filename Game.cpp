#include "Game.h"
Game::Game()
{

}
void Game::easygame()
{
	srand(time(0));
	cout << "請輸入你要打老鼠的次數:";
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
	cout << "最終成績:" << score << endl;
}
void Game::normalgame()
{
	srand(time(0));
	cout << "請輸入你要打老鼠的次數:";
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
	cout << "最終成績:" << score << endl;
}
void Game::displayfirst()
{
	for (int i = 1;i <= 3;i++)
	{
		for (int k = 1;k <= 3;k++)
		{
			if (i == mousex && k == mousey)//老鼠

				cout << "☆";

			else if (i == bombx && k == bomby)//炸彈

				cout << "□";
			else

				cout << "○";

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
			if (i == playerx && k == playery)//玩家

				cout << "●";

			else if (i == mousex && k == mousey)//老鼠

				cout << "☆";

			else if (i == bombx && k == bomby)//炸彈

				cout << "□";

			else

				cout << "○";

		}
		cout << endl;
	}
}
void Game::hammer()
{
	int a, b;
	do
	{
		cout << "請輸入錘子的坐標(1~3):";
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

		cout << "完美命中!!" << endl;

	else if (bombx == playerx && bomby == playery)

		cout << "完美命中炸彈!!，老鼠在" << mousex << "," << mousey << "位置" << endl;

	else

		cout << "擊空，老鼠在" << mousex << "," << mousey << "位置" << endl;

	cout << "擊中" << hit << "次," << "擊空" << miss << "次," << "擊中炸彈" << hitbomb << "次" << endl;
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
			cout << "數字不符，請重輸入\n";
			cout << "請輸入難度 簡單=1 普通=2:";
			cin >> i;
		}
	}
}
