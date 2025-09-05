#include<bits/stdc++.h>
using namespace std;
class mystack
  {
    char data;
    mystack* next;

    mystack(char data): data(data), next(nullptr){}
    mystack(char data, mystack* next): data(data), next(next){}

    public:

    mystack* insert(mystack* top, char c)
      {
        if(top == nullptr)
          {
            mystack* newstack = new mystack(c);
            top = newstack;
            cout<<"added "<<c<<endl;
            return top;
          }
        mystack* newstack = new mystack(c, top);
        top = newstack;
            cout<<"added "<<c<<endl;
        return top;
      }

    char top(mystack* top)
      {
        if(top == nullptr) return 0;
        return top->data;
      }

    mystack* pop(mystack* top)
      {
        if(top == nullptr) cout<<"STACK UNDERFLOW"<<endl;
        mystack* temp = top;
        top = top->next;
        delete(temp);
        return top;
      }
    
    void display(mystack* top)
      {
        mystack* temp = top;
        while(temp != nullptr)
        {
           cout<<temp->data<<" ";
           temp = temp->next;
        }
      cout<<endl;
      }
  };

  bool checkParen(vector<char> c)
    {
      mystack* st = nullptr;
      for(int i = 0; i<c.size(); i++) 
        {
          if(c[i] == '(' || c[i] == '{' || c[i] == '[')
            st = st->insert(st, c[i]);
          else if (c[i] == ')' || c[i] == '}' || c[i] == ']')
            {
              if(st == nullptr) return false;
              char ch = st->top(st);
                if(
                  (c[i] == ')' && ch != '(') ||
                  (c[i] == '}' && ch != '{') ||
                  (c[i] == ']' && ch != '[') 
                  )
                      return false;

                  st = st->pop(st);
              }
            }
            
            return (st == nullptr);
        }

  int main()
    {
      mystack* top = NULL;
      vector<char> c = {'[','{','(',')','}',']'};
     if(checkParen(c)) cout<<"BALANCED PARENTHESES"<<endl;
     else cout<<"THE PARENTHESES NOT BALANCED"<<endl;

      return 0;

    }