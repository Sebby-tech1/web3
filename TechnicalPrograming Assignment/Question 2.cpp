#include <iostream>
using namespace std;


void solve(int d){// D is each integer value That will be inputed 
    if(d < 0 && d > 9){// The Value Entered For Confirmation In Words Must Not surpase 9
        printf("Beyond range of 0 - 9");
    }else if(d == 0){
        printf("Zero");
    }else if(d == 1){
        printf("One");
    }else if(d == 2){
        printf("Two");
    }else if(d == 3){
        printf("Three");
    }else if(d == 4){
        printf("Four");
    }else if(d == 5){
        printf("Five");
    }else if(d == 6){
        printf("Six");
    }else if(d == 7){
        printf("Seven");
    }else if(d == 8){
        printf("Eight");
    }else if(d == 9){
        printf("Nine");
    }
}
int main(){
    int a ,b ;
    
    cout<<" Enter First Number "<<endl;
    cin>>a;
                                           //Two Values Must Be Entered Into the System As Asked
     cout<<" Enter First Number "<<endl;
    cin>>b;
    
    
    for(int i = a; i <= b; i++){ //The Values Entered Are Looped/Executed for a Spercific Number of times
    	
    	
    	
    	if(i % 2 ==0 ){
    		
    		cout<<i<<" Even. "<<endl;
    		}
    		else{
    		cout<<i<<" Odd. "<<endl;	
    	}
    	
    	
        solve(i);
        printf("\n");
    }
    
    return 0;
}