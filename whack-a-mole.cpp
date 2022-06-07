#include <iostream>
#include "Game.h"
using namespace std;
int main()
{
	int difficult;
	cout << "○○○\n○○○\n○○○\n";
	cout << "遊戲說明:☆是老鼠，□是炸彈，打到老鼠加5分，打到炸彈會扣3分，擊空則分數不變\n";
	cout << "請輸入難度 簡單=1 普通=2:";
	cin >> difficult;
	Game player;
	player.difficult(difficult);
}