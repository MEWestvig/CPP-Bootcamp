#ifndef ENEMY_HPP
 #define ENEMY_HPP
	class Enemy
	{
		private:
			int _xpos;
			int _ypos;
			bool dead;

		public:
			Enemy(void);
			~Enemy(void);
			Enemy(Enemy const &src);
			Enemy &operator=(Enemy const &rhs);
			Enemy(int N);
			void moveEnemy();
			void drawEnemy();
			void setAlive();
			void setY(int y);
			void setX(int x);
			int getX();
            int getY();
	};
#endif
