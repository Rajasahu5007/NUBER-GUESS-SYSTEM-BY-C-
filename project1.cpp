//this is project to make nuber guess system. 

#include<iostream>
#include<cstdlib>
using namespace std;

void provideFeedback(int  userguess,int codeguess){//here codeguess means random no..
    if(userguess<codeguess){
        cout<<"too low! try again."<<endl;

    }
    else if(userguess>codeguess){
        cout<<"too high! try again."<<endl;
    }
    else if(userguess==codeguess){
        cout<<"conguratulations! you guessed correct number"<<endl;

    }
    
    
}
void guessNumber(){
    srand(1);
    int codeguess=rand()%100+1;
    int userguess;
    cout<<"I'm thinking of can a number between 1 and 100.can you guess what it is?"<<endl;

do{
cout<<"enter the your guess ";
cin>>userguess;
if(cin.fail()){
    cin.clear();
    cin.ignore(1000000,'\n');
    cout<<"please enter the valid number you guess "<<endl;
    continue;
}

    provideFeedback(userguess,codeguess);
} while(userguess!=codeguess);

}
int main(){
    guessNumber();
    return 0;
}

