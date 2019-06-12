#ifndef PLAYER_HPP
 #define PLAYER_HPP

	class Player
	{
		private:
            int playerX;
            int playerY;
            char playerSym;
			int _kills;

		public:
            Player();
            ~Player();
            Player(const Player &player);
			Player &operator=(Player const &rhs);
            void setY(int y);
            void setX(int x);
            int getX();
            int getY();
            void drawPlayer();
			void drawKills();
			void setKills(int kills);
			int getKills();
	};
 #endif
