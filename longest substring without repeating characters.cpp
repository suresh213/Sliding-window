#include <bits/stdc++.h> 
using namespace std; 
int longsub(string str);

int main() 
{ 
    string str = "abcdcbbabckdeaacbc"; 
    int len = longsub(str); 
    cout << len; 
    return 0; 
} 

int longsub(string str) 
{ 
    int n = str.size(); 
    int res = 0; 
    bool visited[26]={0};
    for (int i = 0; i < n; i++) {  
        for (int j = i; j < n; j++) { 
            if (visited[str[j]-'a'] == 1) 
                {
                    break;	
				} 
            else { 
                res = max(res, j - i + 1); 
                visited[str[j]-'a'] = 1; 
            } 
        } 
        visited[str[i]-'a'] = 0; 
    }
    return res; 
} 
  
