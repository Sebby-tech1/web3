#include <iostream> 
using namespace std;

void getMinMax(int A[], int N){
	int max = A[0], min = A[0];                   //NO EXPLANATION NEEDED 
	for(int i = 1; i < N; i++){
		
		if(max < A[i])
		max = A[i];
		if(min > A[i])
		min = A[i];
	}
	
	
	cout<<" Min = "<<min<<endl;                     //NO EXPLANATION NEEDED
	cout<<" Max = "<<max;
	
}

int main(){
	
	
	int A[] = {3, 2, 1, 56, 10000, 167};
	int N = 6;
	
	getMinMax(A,N);
	
	return 0;
	
	
}