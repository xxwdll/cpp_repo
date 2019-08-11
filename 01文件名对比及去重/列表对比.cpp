#include<iostream>
using namespace std;
int main(){
	int a,b,i,j,k; 
	cout<<"输入文件A个数"<<endl; 
	cin>>a;
	string *A=new string[a];
	cout<<"输入文件名"<<endl;
	for(i=0;i<a;i++){
		cin>>A[i]; 
	} 
	cout<<"输入要比对的文件B个数"<<endl; 
	cin>>b;
	string *B=new string[b];
	cout<<"输入要比对的文件名"<<endl;
	for(i=0;i<b;i++){
		cin>>B[i];
	} 
	cout<<"---------------------------A比B多出来的文件---------------------------------"<<endl;
	for(int i=0;i<a;i++){
		int k=0;
		
		for(int j=0;j<b;j++){
			if(A[i]!=B[j]){
				k++;
			}
			if(k==b){cout<<A[i]<<endl;}
		}
	}
	cout<<"---------------------------B比A多出来的文件---------------------------------"<<endl;
	for(int i=0;i<b;i++){
		int k=0;
		
		for(int j=0;j<a;j++){
			if(B[i]!=A[j]){
				k++;
			}
			if(k==a){cout<<B[i]<<endl;}
		}
	}
	system("pause") ;
}
