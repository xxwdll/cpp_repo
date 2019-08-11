#include<iostream> 
#include <string>
using namespace std;
string split_head(string A){
	int index;
	index=A.find("_");
	return A.substr(0,index);
}
string split_tail(string A){
	int index;
	index=A.find(".v");
	return A.substr(index+2,12);
}
string compareDate(string A,string B){
	string str1=split_tail(A);
	string str2=split_tail(B);
	if(str1.compare(str2)<0){
		return A; 
	}
	else if(str1.compare(str2)>0) {
		return B; 
	}
}
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
	cout<<"---------------------------------------------"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"---------------------------------------------"<<endl;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if((split_head(A[i]))==(split_head(A[j]))&&i!=j){
				if(C[i]==0&&C[j]==0){
					string temp=compareDate(A[i],A[j]);
					if (temp.compare(A[i])==0){
						cout<<A[i]<<endl;
						C[i]=1;} 
					if (temp.compare(A[j])==0){
						cout<<A[j]<<endl; 
						C[j]=1;}
				}
			}
		}
	}
	system("pause") ;
}
