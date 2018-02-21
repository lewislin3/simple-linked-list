#include <iostream>
using namespace std;

class node{
private:
    int data;
    int type;
    node *next;
public:
    void setdata(int a){
        data=a;
    }
    void setnext(node* a){
        next=a;
    }
    void settype(int a){
        type=a;
    }
    int getdata(){
        return data;
    }
    int gettype(){
        return type;
    }
    node* getnext(){
        return next;
    }
};

int main() {
    
    node end;
    node* start=nullptr;
    node* now=nullptr;
    node* newnode=nullptr;
    node* run;
    int exist=0;
    int func;
    int input;
    end.settype(1);
    
    while(1){
        
        cout<<"0 to add node 1 to list node"<<endl;
        cin>>func;
        
        if(func == 0){
            if(exist==0){
                cout<<"set input"<<endl;
                cin>>input;
                now=new node;
                now->settype(0);
                now->setdata(input);
                now->setnext(&end);
                start=now;
                exist++;
            }
            else{
                cout<<"set input"<<endl;
                cin>>input;
                newnode=new node;
                now->setnext(newnode);
                newnode->settype(0);
                newnode->setdata(input);
                newnode->setnext(&end);
                now=newnode;
            }
        }
        
        if(func == 1){
            run=start;
            while(run->gettype()==0){
                cout<<run->getdata()<<endl;
                run=run->getnext();
            }
        }
        
    }
    return 0;
}
