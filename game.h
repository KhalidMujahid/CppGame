/*
* Author: Khalid Zikirullah
* Title: Question and Answer C++ Program
* function prototype file 
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

//Maths function prototype
class Game_Base_One
{
protected:
  std::string maths[2] = {"2+2 = ?","5+5 = ? "};
  std::string maths_answer[2] = {"4","10"};

  std::string english[2] = {"Is this spelling correct BUS??"," Spell the word Apple "};
  std::string english_answer[2] = {"yes","apple"};

  std::string coding[2] = {"Is Html is programming language","is CSS is programming language "};
  std::string coding_answer[2] = {"yes","yes"};

  std::string good_message[3] = {"Bravo","Aweasome","Great"};
  std::string bad_message[3] = {"Try again","Not to bad","Oppos"};

  std::string user_input;
  int user_score = 0;
  std::string users;
  int num;

public:
   void maths_board();

   void maths_board_result();

};

//English function prototype

class Game_Base_Two :public Game_Base_One
{
public:
  void english_board();

   void english_board_result();
   
};

//Coding function prototype
class Game_Base_Three :public Game_Base_One
{
public:
  void coding_board();

   void coding_board_result();
};















