#include<iostream>
#include<fstream>
#include<cstdlib>
#include"cls.h"
using namespace std;
int main(){

int K,Ra,Rb;
float S;
cls obj;

ifstream File_in("file.in", ios::in);
if(!File_in) {
cerr << "Failed opening" << endl;
exit(1);}

ofstream File_out("file.out", ios::out);
if(!File_out) {
cerr << "Failed opening" << endl;
exit(1);}


File_in>>K>>Ra>>Rb;	
obj.set_init(K,Ra,Rb);	//intialize K,Ra,Rb
File_out<< obj.get_score_a()<<" "<< obj.get_score_b()<<endl;	//print Ra,Rb

while(File_in>>S){
obj.set_score(S);
File_out<< obj.get_score_a()<<" "<< obj.get_score_b()<<endl;
}

return 0;

}



