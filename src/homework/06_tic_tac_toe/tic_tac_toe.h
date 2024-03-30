//h
#include<iostream>
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe 
{
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    void display_board() const;
    


private:
    std::string player;
    void clear_board();
    std::vector<std::string> pegs{9, " "};//create 9 nelements with the value of " ", {}initializes the vlaues of the string/vector
    void set_next_player();
    bool check_board_full();


};




#endif //TIC_TAC_TOE_H
