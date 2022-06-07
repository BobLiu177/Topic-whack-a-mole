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
		int mousex = 0;//�ѹ���X�b����
		int mousey = 0;//�ѹ���Y�b����
		int bombx = 0;//���uX�y��
		int bomby = 0;//���uY�y��
		int playerx = 0;//���a�l�l��X�b����
		int playery = 0;//���a�l�l��Y�b����
		int hit = 0;//�����ѹ�������
		int miss = 0;//�����ѹ�������
		int hitbomb = 0;//���a�������u����
		int score = 0;//���a�o��
};
#endif