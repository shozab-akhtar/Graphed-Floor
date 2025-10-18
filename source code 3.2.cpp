#include <iostream>//for input output
#include <cstdlib>//for rand
#include <ctime>//for time
#include <unistd.h>//for sleep
#include <conio.h> //for getch
#include <windows.h>//for Sleep
using namespace std;
int x, y, rNo1, rNo2, Level_No;
char movement;
void New_level(){
	Level_No++;
	rNo1 = rand() %  11 - 5;
	rNo2 = rand() %  11 - 5;
	cout<<"MOVE TO ("<<rNo1<<", "<<rNo2<<")\n\n";
	x=0, y=0;	
}

int main(){
	//lore.
	cout<<"Where am I?\n";
	sleep(1);
	cout<<"A havenly voice commands you to move forward.\n";
	sleep(2);
	cout<<"Press W to move forward on Y-axis\n";
	movement=_getch();
	if(movement == 'w' || movement == 'W')
	{
		cout<<"You moved Forward.\n";
	}else{
		cout<<"Falling astroids Hit you and You Died.\n";
		return 0;
	}
	sleep(1);
	cout<<"You notice Cartician plane as flooring.\n";
	sleep(1);
	cout<<"BANGG\n";
	Sleep(500);
	cout<<"BANGG\n";
	Sleep(500);
	cout<<"BANGG\n";
	Sleep(500);
	cout<<"You found Asteroids every where but where you stand.\n";
	sleep(1);
	cout<<"you move to center which is marked as (0, 0).\n";
	sleep(1);
	cout<<"You see more comming your way.\n";
	sleep(1);
	cout<<"Better move to where there are none.\n";
	sleep(2);
	//Mechanics.
	x=0, y=0, Level_No=1;
		srand (time(0));
		if(x==0 || y==0){
	rNo1 = rand() %  11 - 5;
	rNo2 = rand() %  11 - 5;
}
	cout<<"\nMOVE TO ("<<rNo1<<", "<<rNo2<<")\n\n";
	for(;;){
	if(x==rNo1 && y==rNo2){
		cout<<"\nCONGRATLATIONS ON COMPLETING LEVEL:"<<Level_No<<"\n\n";
		New_level();
		
	}
		cout<<"Enter Your move: ";
		movement= _getch();
		switch (movement){
			case 'w': case 'W': 
			if(y<=4){
			y++;
		}else{
			break;
		}
			break;
			case 's': case 'S':
		    if(y>=-4){
			y--;
		}else{
			break;
		} 
			break;
			case 'd': case 'D':
			if(x<=4){
			x++;
		}else{
			break;
		} 
			
			break;
			case 'a': case 'A': 
			if(x>=-4){
			x--;
		}else{
			break;
		}
			break;
			default:
				return 0;
			break;
		}
		cout<<"("<<x<<", "<<y<<")\n";
		
	}
	return 0;
}
