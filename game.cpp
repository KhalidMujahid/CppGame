/*
* Author: Khalid Zikirullah
* Title: Question and Answer C++ Program
* Main file 
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "game.h"

int main()
{
   long int s;
   time(&s);
  
   std::string time = ctime(&s);
   std::cout << "\t\t\t " << time << std::endl;
   if(time <= "12") std::cout << "\t\t\t Good morining.." << std::endl;
   else std::cout << "\t\t\t Good Day.." << std::endl; 
   
   //object
   Game_Base_One game_base_one;
   Game_Base_Two game_base_two;
   Game_Base_Three game_base_three;


   std::string input;

   std::cout << "Select Subject:" << std::endl;
   std::cout << "1 - Maths \n 2 - English \n 3 - coding" << std::endl;
   std::cout << " >";
   std::cin >> input;


   if(input == "1")
   {
      game_base_one.maths_board();
      game_base_one.maths_board_result();
   }
   else if(input == "2")
   {
      game_base_two.english_board();
      game_base_two.english_board_result();
   }
   else if(input == "3")
   {
      game_base_three.coding_board();
      game_base_three.coding_board_result();
   }
   else
   {
      std::cout << "Wrong selection " << std::endl;
   }


  return 0;

}









