#include<iostream>
using namespace std;
class Solution{
    public:
    void printSquare(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Solution obj;
    int n;
    cout<<"enter an N value"<<endl;
    cin>>n;
    obj.printSquare(n);
    return 0;

}
