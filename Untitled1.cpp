#include<iostream>
using namespace std;
int main(){
	int row1 , row2 , col1 , col2;
	cout<<"Enter the Row for Matrix 1 : ";
	cin>>row1;
	cout<<"Enter the column for Matrix 1 : ";
	cin>>col1;
	cout<<"Enter the Row for Matrix 2 : ";
	cin>>row2;
	cout<<"Enter the column for Matrix 2 : ";
	cin>>col2;
	int mat1[row1][col1];
	int mat2[row2][col2];
	
	if(col1==row2){
	cout<<"\n\nDATA FOR MATRIX 1\n\n";
	for(int a= 0; a<row1 ; a++){
		for(int b= 0; b<col1 ; b++){
			cout<<"Enter the Element for "<<a+1<<" and "<<b+1<<" : ";
			cin>>mat1[a][b];
		}
	}
	cout<<"\n\nDATA FOR MATRIX 2\n\n";
	for(int a= 0; a<row2 ; a++){
		for(int b= 0; b<col2 ; b++){
			cout<<"Enter the Element for "<<a+1<<" and "<<b+1<<" : ";
			cin>>mat2[a][b];
		}
	}
	
	for(int a= 0; a<row1 ; a++){
		for(int b= 0; b<col1 ; b++){
			cout<<mat1[a][b]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int a= 0; a<row2 ; a++){
		for(int b= 0; b<col2 ; b++){
			cout<<mat2[a][b]<<" ";
		}
		cout<<endl;
	}
	int mat3[row1][col2];
	for(int a =0; a<row1 ; a++){
		 	for(int b =0 ; b<col2 ; b++){
		 		mat3[a][b]  = 0;
				for(int c =0 ; c<col1 ; c++){
					mat3[a][b] = mat3[a][b] + (mat1[a][c]*mat2[c][b]);
			}
		}
	}
	
	cout<<endl;
	cout<<"The Multiplication of Mat1 and Mat2  is  : \n";
	for(int a= 0 ; a<row1 ; a++){
		for(int b=0 ; b<col2 ; b++){
			cout<<mat3[a][b]<<" ";
		}
			cout<<endl;
		}
	}else{
		cout<<"Multiplication is not Possible";
	}
return 0;

}

