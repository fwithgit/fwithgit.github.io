#include <iostream>

using namespace std;

int main(){

    int a;
    cin>>a;

    int left = 0;
    int right = a;

    int middle = left + (right-left)/2;

    for (int i = 0; i < a; i++)
    {
        middle = left + (right-left)/2;

        if (middle*middle>a)
        {
            right = middle - 1;
        }
        else if(middle*middle<a){
            left = middle + 1;
        }
        else if(middle*middle == a){
            break;
        }
        
    }

    cout<<middle;
    // return middle;
    
    
}