# include <bits/stdc++.h>
using namespace std;
template<class T>
class Stack{
private:
    T *arr;
    T cap ;
    T top;
public:
    Stack(T c)
    {
        cap = c;
        arr = new T[cap];
        top = -1;
    }
    void push(int x){
       top++;
       arr[top] = x;

    };
    T peek();
    T pop();
    T Size();
    bool isEmpty();
};
template<class T>
T Stack<T>::peek()
{
   return arr[top];

}
template<class T>
T Stack<T>::pop()
{   int res = arr[top];
    top--;
    return res;
}
template<class T>
T Stack<T>::Size()
{
   return top+1;
}
template<class T>
bool Stack<T>::isEmpty()
{
    if(top == -1){
        return true;
    }
    else{
        return false;
    }

}

int main()
{   Stack<int> s(3);
    s.push(2);
    s.push(4);
    s.push(5);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.Size()<<endl;
    return 0;

}
