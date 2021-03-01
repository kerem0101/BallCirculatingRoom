#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
	
	int n=3;
	for(int i=0;i<n;i++){
	
	int bounce=0,t[3];
	double theta[3];
	double dx=0,dy=0;
	double dist=0.0;
	double rx=0.0,ry=0.0;
	double kx=0.00001,ky=0.00001,k=0.00001;
	
	theta[0]=20*((M_PI/180)), theta[1]=30*((M_PI/180)), theta[2]=40*((M_PI/180));

	t[0]=20, t[1]=30, t[2]=40;

	while(1){
		
		rx=rx+kx;
		ry=ry+ky;
		dx=rx*cos(theta[i]);
		dy=ry*sin(theta[i]);
		dist=dist+k;
		
		if(dx>=10){
			cout<<fixed<<setprecision(4)<<bounce+1<<".bounce "<<"x:"<<dx<<"  y:"<<dy<<" --->> "<<90-t[i]<<" degree angles when it hits a wall"<<endl;
			kx=(-1)*kx;
			bounce++;
		}
		else if(dy>=10){
			cout<<fixed<<setprecision(4)<<bounce+1<<".bounce "<<"x:"<<dx<<"  y:"<<dy<<" --->> "<<t[i]<<" degree angles when it hits a wall"<<endl;
			ky=(-1)*ky;
			bounce++;
		}
		else if(dx<=-10){
			cout<<fixed<<setprecision(4)<<bounce+1<<".bounce "<<"x:"<<dx<<"  y:"<<dy<<" --->> "<<90-t[i]<<" degree angles when it hits a wall"<<endl;
			kx=(-1)*kx;
			bounce++;

		}
		else if(dy<=-10){
			cout<<fixed<<setprecision(4)<<bounce+1<<".bounce "<<"x:"<<dx<<"  y:"<<dy<<" --->> "<<t[i]<<" degree angles when it hits a wall"<<endl;
			ky=(-1)*ky;
			bounce++;
		}
		if(bounce==25){
			cout<<fixed<<setprecision(4)<<"\ndistance it travels for "<<i+2<<"0 degree theta: "<<dist<<"\n"<<endl;
			break;
		}
	}
	
	}
	
}