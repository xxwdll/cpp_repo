#include<iostream> 
#include <string>
using namespace std;

int main(){
	int size,i,j;
	cout<<"请输入文件个数"<<endl;
	cin>>size;
	string A[size];
	int C[size];
	cout<<"输入文件名"<<endl;
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

	cout<<"-------------------去重列表--------------------------"<<endl;
	for(i=0;i<size;i++){
		if(C[i]==1){
			cout<<A[i]<<endl;
		}
	}
	system("pause") ;
}
