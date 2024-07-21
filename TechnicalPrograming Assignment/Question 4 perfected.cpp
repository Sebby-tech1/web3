#include <iostream>
using namespace std;

struct List{ //Structures (also called structs) are a way to group several related variables into one place
 int C[15];    //Each variable in the structure is known as a member of the structurer
 int size;
 int length;
};
void Display(struct List list) {//struct list of all variables Declared at The Top
 int i;
 printf("Elements are:\n");
 for (i = 0;i<list.length;i++)
  printf("%d ", list.C[i]);//This line is used to Print  items that usually consist of elements of multiple data types in the case the Array
 printf("\n\n");
}
void Duplicate(struct List list, int max){
 
 int H[max+1];
 
 
 for(int i = 0; i <= max; i++){
     H[i] = 0;
 }
 
 for(int i = 0; i < list.length; i++){
  H[list.C[i]]++;
 }
 
 printf("Duplicate Elements are: \n");
 for (int i = 0; i <= max; i++){
  if(H[i] > 1){
 
   printf("%d is appearing: %d times\n", i, H[i]);
    }
    else{
    	
   	
    	
	}
    

    
    
  	
   
   
 }
  	 printf("Invalid");
}
int main(){
 struct List list_1 = {{2, 3, 1, 2, 3},5,5};//{{numbers in The array}Size Of The Array}}
 
 Display(list_1);
 
 Duplicate(list_1, 16);
}