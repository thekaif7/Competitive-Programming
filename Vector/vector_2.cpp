#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v{1,2,3};

    v.push_back(16); // push_back increase the capacity

    v.pop_back(); // remove the last element

    //Insert element in middle

    v.insert(v.begin()+2,12); // first arg is index after that index  it will add value , second arg is value

    //insert multiple element 
    
    v.insert(v.begin()+2,4,100); // args -> 1st - index , 2nd -> no.of element , 3rd-> range of value/one value 

    // remove any index element
    v.erase(v.begin()); 
    // remove range of index
    v.erase(v.begin()+1,v.begin()+4); //remove 2 to 4; v.begin() considered as 1 index ,last index is excluded


    for(auto i:v){
        cout<<i<<" ";

    }

    // clear all element

    v.clear();

    // check if vector is empty or not

    if(v.empty()){
        cout<<"Vector is empty"<<endl;
    }

    v.push_back(16);
    v.push_back(20);
    v.push_back(24);

    // print front most element;
    cout<<v.front()<<endl;

    // print last most element
    cout<<v.back()<<endl;
    

    // use vector as array by initializing first
    //Best practise to initialize vector

    cout<<"Size of Vector"<<endl;

    int n;
    cin>>n;

    vector<int> arr(n,0);
    

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i:arr){
        cout<<i<<" ";
    }







}