#include<iostream>
using namespace std;
int main(){
	int a,b,i,j,k; 
	cout<<"�����ļ�A����"<<endl; 
	cin>>a;
	string *A=new string[a];
	cout<<"�����ļ���"<<endl;
	for(i=0;i<a;i++){
		cin>>A[i]; 
	} 
	cout<<"����Ҫ�ȶԵ��ļ�B����"<<endl; 
	cin>>b;
	string *B=new string[b];
	cout<<"����Ҫ�ȶԵ��ļ���"<<endl;
	for(i=0;i<b;i++){
		cin>>B[i];
	} 
	cout<<"---------------------------A��B��������ļ�---------------------------------"<<endl;
	for(int i=0;i<a;i++){
		int k=0;
		
		for(int j=0;j<b;j++){
			if(A[i]!=B[j]){
				k++;
			}
			if(k==b){cout<<A[i]<<endl;}
		}
	}
	cout<<"---------------------------B��A��������ļ�---------------------------------"<<endl;
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
