#include <iostream>
using namespace std;

void ToDigits(int n, string arr[])
{
 
    // base case
    if (n ==0 ) {
    	return;
    
    }
    
 
    // storing the last digit of the number and updating
    // number
    int digit = n % 10;
    n = n / 10;
 
    // recursive call
    ToDigits(n, arr);
 
    // printing the digits form the string array storing name
    // of the given index
    cout << arr[digit] << " ";
    
  
}
 
int main()
{
 
    string arr[10]
        = { "zero", "one", "two",   "three", "four",
            "five", "six", "seven", "eight", "nine" };
    int n;
    cout<<"Enter Number"<<endl;  //it can be changed to take user input
    cin>>n;
    

    
    if( n > 9){
    	
    	
    	cout<<" The Number Entered is Greater Than 9 "<<endl;
    	
    	
    	
    	
    	
	}
	else{
		
		
		cout<<" The Number Entered in words is: "<<endl;
		
		
		
	}
	
    
    
 
    ToDigits(n, arr);
 
    return 0;
}