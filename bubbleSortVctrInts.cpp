#include <iostream>
#include <vector>
using namespace std;

/* Define your function here */
void SortVector(vector<int>& myVec){
   int tempVal;
   bool swap = true;
   while(swap){
      swap = false;
   for(unsigned int i=0; i< myVec.size()-1; ++i){
      if(myVec.at(i) > myVec.at(i+1)){
         tempVal = myVec.at(i);
         myVec.at(i) = myVec.at(i+1);
         myVec.at(i+1) = tempVal;
         swap = true;
         }
      }
   }
}

int main() {
   /* Type your code here */
   int numVals;
   
   cin >> numVals;
   vector<int> unsortedVector(numVals);
   for(int i=0; i< numVals; ++i){
      cin >> unsortedVector.at(i);
      }
   SortVector(unsortedVector);
   for(unsigned int i=0; i<unsortedVector.size(); ++i){
      cout << unsortedVector.at(i) << " ";
      }
   cout << endl;
   return 0;
}
