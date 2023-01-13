#include<iostream>
#include<string>
using namespace std;
class Tick{
	int b[9]{};
public:Tick(){};
	  void getIn(int a){int q;cout<<"Player "<<a%2+1<<"'s turn: ";cin>>q;if(q<1||q>9||b[q-1]!=0){cout<<"Input integer value from 1-9\n";this->getIn(a);}else{b[q-1]=a%2+1;}}
	  bool game(int a){
		  if(b[0]==b[1]&&b[1]==b[2]&&b[0]!=0){cout<<"Player "<<b[0]<<" won!";return true;}
		  if(b[3]==b[4]&&b[4]==b[5]&&b[3]!=0){cout<<"Player "<<b[3]<<" won!";return true;}
		  if(b[6]==b[7]&&b[7]==b[8]&&b[6]!=0){cout<<"Player "<<b[6]<<" won!";return true;}
		  if(b[0]==b[4]&&b[4]==b[8]&&b[0]!=0){cout<<"Player "<<b[0]<<" won!";return true;}
		  if(b[2]==b[4]&&b[4]==b[6]&&b[2]!=0){cout<<"Player "<<b[2]<<" won!";return true;}
		  if(b[0]==b[3]&&b[3]==b[6]&&b[0]!=0){cout<<"Player "<<b[0]<<" won!";return true;}
		  if(b[1]==b[4]&&b[4]==b[7]&&b[1]!=0){cout<<"Player "<<b[1]<<" won!";return true;}
		  if(b[2]==b[5]&&b[5]==b[8]&&b[2]!=0){cout<<"Player "<<b[2]<<" won!";return true;}
		  if(a==9){cout<<"Draw!";return true;}
		  else{return false;}
	  }
	  void board(){char c[9]{' ',' ',' ',' ',' ',' ',' ',' ',' '};for(int i=0;i<9;i++){if(b[i]==1){c[i]='O';}if(b[i]==2){c[i]='X';}}
	  for(int i=0;i<2;i++){int a=i*3;cout<<c[a]<<'|'<<c[a+1]<<'|'<<c[a+2]<<'\n'<<"-+-+-"<<'\n';}cout<<c[6]<<'|'<<c[7]<<'|'<<c[8]<<'\n';}
};	
int main(){Tick t;for(int i=0;!t.game(i);i++){t.getIn(i);t.board();}}
