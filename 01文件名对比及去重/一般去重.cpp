#include<iostream> 
#include <string>
using namespace std;

int main(){
	int size,i,j;
	cout<<"�������ļ�����"<<endl;
	cin>>size;
	string A[size];
	int C[size];
	cout<<"�����ļ���"<<endl;
	for(i=0;i<size;i++){
		cin>>A[i]; 
		C[i]=0; 
	} 

	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(C[i]==0&&C[j]==0){
				int a=A[i].compare(A[j]);
				if(a==0) C[j]=1;
			}
		}
	}

	cout<<"-------------------ȥ���б�--------------------------"<<endl;
	for(i=0;i<size;i++){
		if(C[i]==1){
			cout<<A[i]<<endl;
		}
	}
	system("pause") ;
}
