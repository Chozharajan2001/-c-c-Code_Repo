// To find the Peek element in a given array
#include<iostream>
using namespace std;

class PeekElement{
    public:
        static int peek(int arr[]){
            int n = sizeof(arr)/sizeof(arr[0]);
            if(n==1){
                return arr[0];
            }
             //return firt element if the element is greater than it's next neibhour element
            if(arr[0]>=arr[1]){
                return arr[0];
            }
             //return last element if the element is greatder than it's previous element
            if(arr[n-1]>=arr[n-2]){
                return arr[n-1];
            }
            //Traversing the array from the index 1 to n-1
            for(int i=1; i<=n-1; i++){
                if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
                    return arr[i];
                }
            }
            return 0;
        }
};
int main(){
    int arr[] = {10,20,15,69,90,80};
    cout<<"peek element:"<<PeekElement::peek(arr);
    return 0;
}
