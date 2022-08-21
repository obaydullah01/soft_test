#include<bits/stdc++.h>

using namespace std;

int space_coutnt( string ss)
{
    int counter = 0;
    for(int i = 0; i< ss.size() - 1; i++){
        if(ss[i] == ' ') counter ++;
    }
    return counter;
}

int find_operator(char ch)
{
    int operetor_int = ch;
    return operetor_int;
}

int main()
{
    string s;
    getline(cin, s);
    int op  = find_operator(s[s.length() - 1]);
    s.erase(s.length() - 1,1);
    if((space_coutnt(s) % 2) != 0){
        stringstream ss(s);
        string word;
        vector<int>number;
        while(ss >> word){
            int temp = stoi(word);
            number.push_back(temp);
        }

        if(op == 37){
            for(int j = 0; j < number.size(); j += 2){
                cout<<number[j] % number[j+1]<< " ";
            }
        }
        else if(op == 42){
            for(int j = 0; j < number.size(); j += 2){
                cout<<number[j] * number[j+1]<< " ";
            }

        }
        else if(op == 43){
            for(int j = 0; j < number.size(); j += 2){
                cout<<number[j] + number[j+1]<< " ";
            }

        }
        else if(op == 45){
            for(int j = 0; j < number.size(); j += 2){
                cout<<number[j] - number[j+1]<< " ";
            }

        }
        else if(op == 47){
            for(int j = 0; j < number.size(); j += 2){
                cout<<number[j] / number[j+1]<< " ";
            }

        }
        else cout<<"Invalid Input: Invalid operator !!";

    }

    else cout<<"Invalid Input: Pair doesn't match!!  ";

    return 0;
}
