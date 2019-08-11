#include<iostream>
using namespace std;
//取字符串第一个'_'之前的内容
string split_head(string A){
	int index;
	index=A.find("_");
	return A.substr(0,index);
}
int main(){
	int a,b,i,j,k; 
	cout<<"输入文件A个数，含下划线"<<endl; 
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
			if(split_head(A[i])!=B[j]){
				k++;
			}
			if(k==b){cout<<A[i]<<endl;}
		}
	}
	cout<<"---------------------------B比A多出来的文件---------------------------------"<<endl;
	for(int i=0;i<b;i++){
		int k=0;
		
		for(int j=0;j<a;j++){
			if(B[i]!=split_head(A[j])){
				k++;
			}
			if(k==a){cout<<B[i]<<endl;}
		}
	}
	int wait；
	cin>>wait;
}
