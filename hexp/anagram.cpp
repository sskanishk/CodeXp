
#include<iostream>
using namespace std;

int main()
{
	int n,t,i,val;
	cin >> n;
	for(t=0;t<n;t++)
	{
	char s1[10000],s2[10000];
	cin>>s1;
	cin >> s2;
	int l1,l2,i,j;

	l1 = strlen(s1); 
	l2 = strlen(s2);

	for(i=0;i<l1;i++)
	{
		for(j=0;j<l2;j++)
		{
			if(s1[i]==s2[j])
			{
				for(int k=i;k<l1;k++)
				{
					s1[k] = s1[k+1];
				} 
				--l1;

				for(int k=j;k<l2;k++)
				{
					s2[k] = s2[k+1];
				} 
				--l2;
			--i;
			}
		}
	}
	val = l1 + l2;
	cout << val;
	}
return 0;
}







// t = int(input())

// for i in range(t):
    
//     # x = []
//     x = list(input())
//     y = list(input())
    
//     z =[]
    
//     d1 = {}
//     d2 = {}
    
//     for i in (x):
//         if i not in d1:
//             d1[i] = 1
//         else:
//             d1[i] +=1
//     for j in y:
//         if j not  in d2:
//             d2[j] = 1
//         else:
//             d2[j] +=1
 
//     ans = 0
    
//     for k,v in d1.items():
//         if k not in d2:
//             ans += v
//             continue
//         if v != d2[k]:
//             diff = abs(v - d2[k])
//             ans += diff
            
//     for k,v in d2.items():
//         if k not in d1:
//             ans += v
//             continue
   
            
//     print(ans)
    
    
    
