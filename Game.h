#ifndef Game_h
#define Game_h
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class Game
{
	public:
		Game();
		void normalgame();
		void displayfirst();
		void displaylater();
		void hammer();
		void scorehit();
		void print();
		void difficult(int);
		void easygame();
	private:
		int times = 0;
		int mousex = 0;//老鼠的X軸坐標
		int mousey = 0;//老鼠的Y軸坐標
		int bombx = 0;//炸彈X座標
		int bomby = 0;//炸彈Y座標
		int playerx = 0;//玩家槌子的X軸坐標
		int playery = 0;//玩家槌子的Y軸坐標
		int hit = 0;//擊中老鼠的次數
		int miss = 0;//擊錯老鼠的次數
		int hitbomb = 0;//玩家擊中炸彈次數
		int score = 0;//玩家得分
};
#endif