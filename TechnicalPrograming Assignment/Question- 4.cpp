#include <iostream>
using namespace std;

void getMinMax(int A[], int N){
	
	for(int i = 0; i < N; i++){
	for(int j=i+1; j<N; j++){
		
	
		if(A[i] == A[j]){
			
				printf("%d\n", A[j]);
				
				
			
		}
		else if(A[j] != A[i] ){
			
			
			
			
			
		}
		}
}

cout<<"-1"<<endl;


}

int main(){
	
	int N = 5;
	int A[] = {2,3, 1, 2, 3};
	int length = sizeof(A)/sizeof(A[0]); 
	
	getMinMax(A,N);
	
	return 0;
	
	
}
 