#include "Game.h"
Game::Game()
{

}
void Game::easygame()
{
	srand(time(0));
	cout << "�п�J�A�n���ѹ�������:";
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
	cout << "�̲צ��Z:" << score << endl;
}
void Game::normalgame()
{
	srand(time(0));
	cout << "�п�J�A�n���ѹ�������:";
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
	cout << "�̲צ��Z:" << score << endl;
}
void Game::displayfirst()
{
	for (int i = 1;i <= 3;i++)
	{
		for (int k = 1;k <= 3;k++)
		{
			if (i == mousex && k == mousey)//�ѹ�

				cout << "��";

			else if (i == bombx && k == bomby)//���u

				cout << "��";
			else

				cout << "��";

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
			if (i == playerx && k == playery)//���a

				cout << "��";

			else if (i == mousex && k == mousey)//�ѹ�

				cout << "��";

			else if (i == bombx && k == bomby)//���u

				cout << "��";

			else

				cout << "��";

		}
		cout << endl;
	}
}
void Game::hammer()
{
	int a, b;
	do
	{
		cout << "�п�J��l������(1~3):";
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

		cout << "�����R��!!" << endl;

	else if (bombx == playerx && bomby == playery)

		cout << "�����R�����u!!�A�ѹ��b" << mousex << "," << mousey << "��m" << endl;

	else

		cout << "���šA�ѹ��b" << mousex << "," << mousey << "��m" << endl;

	cout << "����" << hit << "��," << "����" << miss << "��," << "�������u" << hitbomb << "��" << endl;
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
			cout << "�Ʀr���šA�Э���J\n";
			cout << "�п�J���� ²��=1 ���q=2:";
			cin >> i;
		}
	}
}
