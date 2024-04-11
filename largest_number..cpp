#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> &s) {
    while (!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> st;
    //number = 7,584,254,185
    st.push(7);
    st.push(5);
    st.push(8);
    st.push(4);
    st.push(2);
    st.push(5);
    st.push(4);
    st.push(1);
    st.push(8);
    st.push(5);
    cout<<"Multiplying 7,584,254,185 by 3: "<<endl;
    stack<int> r=mul(st);
    cout<<"= ";
    printStack(r);

};