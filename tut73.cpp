//map <data_type_of_key,   data_type_of_value>  variable_name;

#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    //map is aa associative  array
    map<string,int> markmap;
    markmap["ad"]=60;
    markmap["cm"]=70;
    markmap["cp"]=80;
    markmap.insert({{"rohan",70},{"swith",90}});
    map<string,int > :: iterator iter;
    for (iter = markmap.begin(); iter != markmap.end(); iter++)
    {
        cout<<(*iter).first<<""<<(*iter).second<<endl;
        /* code */
    }
    return 0;
}