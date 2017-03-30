#include"cls.h"
#include<math.h>
using namespace std;

void cls::set_init(int k,int a,int b){
	K=k; Ra=a; Rb=b;}


void cls::set_score(float S){

float Ea,Eb;
int ra,rb;

ra=Ra;
rb=Rb;

Ea=(float)1/(1+pow(10,(float)(Rb-Ra)/400));
ra=Ra+K*(S-Ea)+0.5;  //+0.5 >> get rounded integer

Eb=(float)1/(1+pow(10,(float)(Ra-Rb)/400));
rb=Rb+K*((1-S)-Eb)+0.5;  //+0.5 >> get rounded integer

Ra=ra;
Rb=rb;
}



int cls::get_score_a(){
return Ra;
}

int cls::get_score_b(){
return Rb;
}
