#include<iostream>
using namespace std;
int a,b[3][3],c,d,i,j,w;
void t(){for(d=0;!d;)printf("Player %s move: ",c%2?"X":"O"),cin>>j,d=0<j&&j<10&&!b[--j/3][j%3];/*check for win O==1 X==2*/}
void p(){for(i=0;i<5;i++,cout<<'\n')for(j=0;j<5;j++)a=b[i/2][j/2],cout<<(i%2&&j%2?'+':i%2?'-':j%2?'|':a-1?a-2?' ':'X':'O');}
int main(){for(c=9;c--&&!w;b[j/3][j%3]=c%2+1,p())t();cout<<(w-2?w-1?"draw":"player O win":"player X win");}

/*
O|X|O
-+-+-
X|O|X
-+-+-
O|X|O


 | | 
-+-+-
 | | 
-+-+-
 | | 

1. 게임 끝날 때까지 입력받기
2. 입력은 1-9 숫자
3. 입력 틀리면 입력 다시 받기
4. 입력 받을때마다 보드 출력
5. 끝나면 결과 출력, 종료

추가기능 (win32)
1. 커서 올렸을 때 무늬 표시
2. 온라인, 오프라인 멀티
3. 컴터 대결
4. 무르기, 재시작 버튼 
5. 웹버젼
6. 승률 저장
7. 4x4, 5x5
*/