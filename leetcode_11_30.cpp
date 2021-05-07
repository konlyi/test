#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{

    string S = "aab";
    int count = 0;
    int num[26] = {0};
    for(char ch :S)
    {
        num[ch-'a']++;
    }
    if(*max_element(num,num+26)>(S.size()+1)/2)
     return 0;
    int odd_num = 1,even_num = 0;
    string res = "";
    for(int i = 0;i<26;i++)
        {
            while(num[i]!=0&&even_num<S.size())
           {
            res[even_num] =i+'a';
            num[i]--;
            even_num += 2;
           }
           while(num[i]!=0&&odd_num<S.size())
           {
            res[odd_num] =i+'a';
            num[i]--;
            odd_num += 2;
           }

        }
    return 1;


}
