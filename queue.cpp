#include<iostream>
#include<stdlib.h>
using namespace std;
#define SIZE 10     //size of array
class queue{
public:
    int array[SIZE];
    int f,r;    //indicates front & rear end of queue
    queue(){    //constructor to initialize f & r values
        f=0;
        r=-1;
    }
    void ins(int x){    // function to insert data
        r++;
        array[r]=x;     //element added to queue’s rear end
    }
    int del(){  // function to delete data from queue
        int x;
        x=array[f];
        f++;    //element removed from queue’s front
        return x;
    }
    int peek(){     // function to peek data from queue
        int x;
        x=array[f];     //element from queue’s front
        return x;
    }
    void show_queue(){   // function to see data in queue
        int i;
        cout<<"\n";
        for(i=f;i<=r;i++){
            cout<<array[i]<<"\t";
        }
    }
    int isqueueempty(){     // function to check if queue is empty
        if(f==(r+1))
            return 1;
        else
            return 0;
    }
    int isqueuefull(){      // function to check if queue is full
        if(r==SIZE-1)
            return 1;
        else
            return 0;
    }
};
int main(){
    int choice,ele;
    queue q1;
    while(1){
        cout<<"\nenter 1 for insert,2 for delete,3 for peek,4 for show,5 for exit:\n";
        cin>>choice;
        switch(choice){
        case 1:  //to insert data
            cout<<"enter the element to insert\n";
            cin>>ele;
            if(q1.isqueuefull()==0){
                q1.ins(ele);
            }
            else{
                cout<<"sorry queue is full\n";
            }
            break;
        case 2:  //to delete data
            if(q1.isqueueempty()==0){
                ele=q1.del();
                cout<<"element deleted is "<<ele<<"\n";
            }
            else{
                cout<<"sorry queue is empty\n";
            }
            break;
        case 3: //to peek data
            if(q1.isqueueempty()==0){
                ele=q1.peek();
                cout<<"element peeeked is "<<ele<<"\n";
            }
            else{
                cout<<"sorry queue is empty\n";
            }
            break;
        case 4: //to see contents of queue
            if(q1.isqueueempty()==0){
                q1.show_queue();
            }
            else{
                cout<<"sorry queue is empty\n";
            }
            break;
        case 5:
            exit(0);
        }
    }
return 0;
}

