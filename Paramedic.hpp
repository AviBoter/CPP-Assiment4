#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"
#include <iostream>

using namespace std;
class Paramedic: public Solider{

Paramedic(int PID):(Hp(100),Dp(50),cur_Hp(100),PlayerID(PID)){}
void specialAttack(std::vector<std::vector<Soldier*>> &Board, std::pair<int, int> location) override{
     int myID=Board[location.first][location.second].getPID();
     int u=0,d=location.first,l=location.second,r=location.second;
     if(location.first>0)
     u=location.first-1;
     if(location.first<Board.size())
     d=Board[0].size()+1;
     if(location.second>0)
     l=location.second-1;
     if(location.second<Board.size())
     r=location.second+1;

     for(i=u;i<=d+2;i++){
          for(j=l;j<=r;j++){
           if(Board[i][j].getPID()!=nullptr && Board[i][j].getPID()==myID){
             Board[i][j].cur_Hp= Board[i][j].Hp; 
           }
          }
     }
}
} 