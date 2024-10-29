#include <iostream>
#include <fstream>
#include <string>
#include<unordered_map>
#include<vector>

using namespace std;

unordered_map<string,bool>m;
vector<pair<string,string>>vec;
int main()
{
    ifstream inFile("input.txt");

    int no_problems, no_doctors;
    string name, speciality;
    
    inFile >> no_problems;

    for (int i = 0; i < no_problems; i++)
    {
        inFile >> name;
        inFile >> speciality;
        cout << name << ' ' << speciality << '\n';
        vec.push_back({speciality,name});
    }

    inFile >> no_doctors;

    for (int i = 0; i < no_doctors; i++)
    {
        inFile >> name;
        inFile >> speciality;
        cout << name << ' ' << speciality << '\n';
        m[speciality]=true; 
    }
    for(auto &it:vec)
    {
        if(m[it.first]) cout<<it.second<<" Acceptat\n";
        else cout<<it.second<<" Respins\n";
    }
    return 0;
}