#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// 1

vector<int> parseInts(string str) 
{
    stringstream ss(str);   
    vector<int> result;
    char ch;
    int tmp;
    while(ss >> tmp)    
    {      
        result.push_back(tmp);
        ss >> ch;           
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

// input---> 23,13,93,45,67






// 2 counting words

// int wordCount(string str)
// {
// 	stringstream s(str);
// 	string word;

// 	int count = 0;
// 	while (s >> word)
// 	{
// 		count++;
// 	}
// 	return count;
// }

// int main()
// {
// 	string s;
// 	cout<<"Enter Sentence : ";
// 	cin>>s;

// 	// string x = "geeks for geeks geeks contribution skills"; 

// 	cout << "No of words: " << wordCount(x);
// 	return 0;
// }




// 3 counting chars

// int wordCount(string str)
// {
// 	stringstream s(str);
// 	char word;

// 	int count = 0;
// 	while (s >> word)
// 	{
// 		count++;
// 	}
// 	return count;
// }

// int main()
// {
// 	// string s;
// 	// cout<<"Enter Sentence : ";
// 	// cin>>s;

// 	string p = "geeks for geeks geeks contribution skills"; 

// 	cout << "No of words: " << wordCount(p);
// 	return 0;
// }



