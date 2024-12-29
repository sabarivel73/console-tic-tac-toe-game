#include<bits/stdc++.h>
#include<ctime>
using namespace std;
void fun1(char* a)
{
    cout<<" "<<a[0]<<" | "<<a[1]<<" | "<<a[2]<<" "<<endl;
    cout<<"___|___|___"<<endl;
    cout<<" "<<a[3]<<" | "<<a[4]<<" | "<<a[5]<<" "<<endl;
    cout<<"___|___|___"<<endl;
    cout<<" "<<a[6]<<" | "<<a[7]<<" | "<<a[8]<<" "<<endl;
    cout<<"   |   |   "<<endl;
    cout<<endl;
}
void fun2(char* a,char b)
{
    int n;
    bool f = true;
    while(f)
    {
        cout<<"Enter the number in between 1-9 : "<<endl;
        cin>>n;
        n--;
        if(a[n]==' ')
        {
            a[n] = b;
            break;
        }
        if(n<=0 || n>=9)
        {
            cout<<"please enter valid input"<<endl;
        }
        else
        {
            cout<<"please enter valid place"<<endl;
        }
    }
}
void fun3(char* a,char c)
{
    int n;
    srand(time(NULL));
    while(true)
    {
      n = rand()%9;
      if(a[n]==' ')
      {
          a[n] = c;
          break;
      }
    }
}
bool fun4(char* a,char b,char c)
{
    if(a[0]!=' ' && a[0]==a[1] && a[1]==a[2])
    {
        a[0] == b ? cout<<"You Win Buddy"<<endl : cout<<"Good Try Buddy"<<endl;
    }
    else if(a[3]!=' ' && a[3]==a[4] && a[4]==a[5])
    {
        a[3] == b ? cout<<"You Win Buddy"<<endl : cout<<"Good Try Buddy"<<endl;
    }
    else if(a[6]!=' ' && a[6]==a[7] && a[7]==a[8])
    {
        a[6] == b ? cout<<"You Win Buddy"<<endl : cout<<"Good Try Buddy"<<endl;
    }
    else if(a[0]!=' ' && a[0]==a[3] && a[3]==a[6])
    {
        a[0] == b ? cout<<"You Win Buddy"<<endl : cout<<"Good Try Buddy"<<endl;
    }
    else if(a[1]!=' ' && a[1]==a[4] && a[4]==a[7])
    {
        a[1] == b ? cout<<"You Win Buddy"<<endl : cout<<"Good Try Buddy"<<endl;
    }
    else if(a[2]!=' ' && a[2]==a[5] && a[5]==a[8])
    {
        a[2] == b ? cout<<"You Win Buddy"<<endl : cout<<"Good Try Buddy"<<endl;
    }
    else if(a[0]!=' ' && a[0]==a[4] && a[4]==a[8])
    {
        a[0] == b ? cout<<"You Win Buddy"<<endl : cout<<"Good Try Buddy"<<endl;
    }
    else if(a[2]!=' ' && a[2]==a[4] && a[4]==a[6])
    {
        a[2] == b ? cout<<"You Win Buddy"<<endl : cout<<"Good Try Buddy"<<endl;
    }
    else
    {
        return false;
    }
    return true;
}
bool fun5(char* a)
{
    int i = 0;
    while(i<9)
    {
        if(a[i]==' ')
        {
            return false;
        }
        i++;
    }
    cout<<"Game was tie"<<endl;
    return true;
}
int main()
{
    char a[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char b = 'X';
    char c = 'O';
    bool d = true;
    fun1(a);
    while(d)
    {
        fun2(a,b);
        if(fun4(a,b,c))
        {
            d = false;
            break;
        }
        else if(fun5(a))
        {
            d = false;
            break;
        }
        fun3(a,c);
        fun1(a);
        if(fun4(a,b,c))
        {
            d = false;
            break;
        }
        else if(fun5(a))
        {
            d = false;
            break;
        }
    }
    return 0;
}
