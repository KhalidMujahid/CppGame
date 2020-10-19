/*
* Author: Khalid Zikirullah
* Title: Question and Answer C++ Program
* Function Defination file 
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "game.h"


//maths function defination
void Game_Base_One::maths_board()
{
       std::cout << "\t\t\t\t SCORE:" << user_score << std::endl;
       srand(time(0));
       num = rand() % 2;
       std::cout << "\t" << maths[num] << " \n" << std::endl;
       std::cout << " > ";
       std::cin >> user_input;

}

void Game_Base_One::maths_board_result()
{

       if(user_input == maths_answer[num])
       {
           //SCORE increament
           user_score++;
           maths_board();
           maths_board_result();

       } else {

           if(user_score < 10)
           {
             num = rand() % 3;
             std::cout << "RESULT :" << bad_message[num] << ":"<< user_score << std::endl;
           } else {

                std::cout << "RESULT :"<< good_message[num] << ":" << user_score << std::endl;
        }
     }
 }
 
 
//english function defination 
void Game_Base_Two::english_board()
{
       std::cout << "\t\t\t\t SCORE:" << user_score << std::endl;
       srand(time(0));
       num = rand() % 2;
       std::cout << "\t" << english[num] << " \n" << std::endl;
       std::cout << " > ";
       std::cin >> user_input;
}

void Game_Base_Two::english_board_result()
{

       if(user_input == english_answer[num])
       {
           user_score++;
           english_board();
           english_board_result();

       } else {


           if(user_score < 10)
           {
             num = rand() % 3;
             std::cout << "RESULT :" << bad_message[num] << ":"<< user_score << std::endl;
           } else {

                std::cout << "RESULT :"<< good_message[num] << ":" << user_score << std::endl;
           }
     }
}


//coding function defination

void Game_Base_Three::coding_board()
{
       std::cout << "\t\t\t\t SCORE:" << user_score << std::endl;
       srand(time(0));
       num = rand() % 2;
       std::cout << "\t" << coding[num] << " \n" << std::endl;
       std::cout << " > ";
       std::cin >> user_input;

}


void Game_Base_Three::coding_board_result()
{

       if(user_input == coding_answer[num])
       {
           user_score++;
           coding_board();
           coding_board_result();

       } else {


           if(user_score < 10)
           {
             num = rand() % 3;
             std::cout << "RESULT :" << bad_message[num] << ":"<< user_score << std::endl;
           } else {

                std::cout << "RESULT :"<< good_message[num] << ":" << user_score << std::endl;
           }
     }
}

 
