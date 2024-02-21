#include <iostream>
#include "function.hpp"
#include <string>

using namespace std;

string* input(int &lnum){
    cout<<"Enter number of the line: ";
    cin>>lnum;
    string *text= new string [lnum];
    cin.ignore();
    for(int i=0; i<lnum; i++){
        cout<<"Enter line: ";
        getline(cin, text[i]);
    }
    return text;
}

string* balanc(string* text, int lnum){
    string line;
    string sep1 = "(";
    string sep2 = ")";
    for(int i=0; i<lnum; i++){
        line=text[i];
        if(line.find(sep1)!=string::npos){
            if(line.find(sep2)==string::npos || line.find(sep2)<line.find(sep1)){
                line.erase(line.find(sep1), 1);
                line.erase(line.find(sep2), 1);
                
            }
        }
        text[i]=line;
    }
    for(int i=0; i<lnum; i++){
        cout<<text[i]<<endl;
    }
    return text;
}

string* maxim_word(string* text, int lnum){
    string sep=" ";
    string sep1="(";
    string sep2=")";
    string temp, line, max="";
    size_t sep_size=sep.size();
    cout<<"Longest words: ";
    for(int i=0; i<lnum; i++){
        line=text[i];
        line = line.substr(line.find(sep1), line.find(sep2));
        while(true){
            temp = line.substr(0, line.find(sep));
            if(temp.size()!=0){
                if(temp.size()>max.size())max = temp;
            }
            if(temp.size()==line.size())break;
            else{
                line  = line.substr(temp.size() + sep_size);
            }
        }
        text[i]=max;
        cout<<max<<endl;
    }
    return text;
}

string* to_start_word(string* text, string* max, int lnum){
    string long_w;
    string line;
    string sep = "(";
    for(int i=0; i<lnum; i++){
        line = text[i];
        long_w = max[i];
        line.erase(line.find(long_w), long_w.size());
        line.insert(line.find(sep), long_w);
        text[i]=line;
                   
    }
    for(int i=0; i<lnum; i++){
        cout<<text[i]<<endl;
    }
    return text;
}
