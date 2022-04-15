#include<iostream>
#include<string>
using namespace std;

string  encod(string enc){
     //string Arr;
    //cout<<"Enter the Word want encoding : "; getline(cin,enc);

    //char Arr[word.size()];
    for(int i=0;i<enc.size();i++){
            if(enc[i]==120){
                enc[i]=97;
                cout<<enc[i];
            }else if(enc[i]==121){
                enc[i]=98;
                cout<<enc[i];
            }else if(enc[i]==122){
                enc[i]=99;
                cout<<enc[i];
            }else if(enc[i]==32){
                cout<<" ";
            }
            else{
        enc[i]+=3;
        cout<<enc[i];
            }
    }


//cin.ignore();

}

string decode(string Arr){

  //cout<<"Enter the Word want decode : "; getline(cin,Arr);

for(int i=0;i<Arr.size();i++){
            if(Arr[i]==99){
                Arr[i]=122;
                cout<<Arr[i];
            }else if(Arr[i]==98){
                Arr[i]=121;
                cout<<Arr[i];
            }else if(Arr[i]==97){
                Arr[i]=120;
                cout<<Arr[i];
            }else if(Arr[i]==32){
                cout<<" ";
            }
            else{
        Arr[i]-=3;
        cout<<Arr[i];
            }



}
//cin.ignore();
}
int main()
{
    cout<<"1-Encoding\n";
    cout<<"2-Decoding\n";
    int choose;
    cin>>choose;
    string word;
    switch(choose){
    case 1:
         cin.ignore();
         cout<<"Enter the Word want encoding : "; getline(cin,word);
         encod(word);
         break;
    case 2:
        cin.ignore();
        cout<<"Enter the Word want decode : "; getline(cin,word);
        decode(word);
        break;
    default:
        cout<<"Wrong choose (-_-)";
        break;

    }



    return 0;
}
