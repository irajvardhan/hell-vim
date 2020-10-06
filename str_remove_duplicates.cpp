// CPP program to remove duplicate character 
// from character array and print in sorted 
// order 
#include <iostream> 
using namespace std; 
  
char *removeDuplicate(char str[], int n) 
{ 
   // Used as index in the modified string 
   int index = 0;    
   // Traverse through all characters 
   for (int i=0; i<n; i++) { 
     // Check if str[i] is present before it   
     int j;   
     for (j=0; j<i; j++)  
        if (str[i] == str[j]) 
           break; 
       
     // If not present, then add it to 
     // result. 
     if (j == i) 
        str[index++] = str[i]; 
   } 
   str[index] = '\0'; 
   return str; 
} 
  
// Driver code 
int main() 
{ 
   char str[]= "aabc"; 
   //int n = sizeof(str) / sizeof(str[0]); 
   //cout<<"Size of input: "<<n<<endl;
   
   int n = strlen(str);
   cout<<"Orig string: "<<str<<endl;
   cout<<"W/o duplicates: "<<removeDuplicate(str, n)<<endl; 
   return 0; 
} 
