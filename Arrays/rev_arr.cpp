//Reverse the array
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x = 0;
    int y = n-1;
    while(x<y){
        int p = a[x];
        a[x]=a[y];
        a[y] = p;
        x++;
        y--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}