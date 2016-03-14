#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <string>
using namespace std;
/*class Median {
public:
    vector<int> getMaxMedian(vector<int> A, int n, int Q, vector<int> l, vector<int> r, vector<int> k) {
        // write code here
        sort(A.begin(),A.end());
        int i = 0;
        int curl,curr,curk;
        while(Q--)
        {
            curl = l.at(i);
            curr = r.at(i);
            curk = k.at(i);
            
        }
    }
};*/
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};


class A {
    public:
    ~A() {
        cout << "~A()";
    }
};
class B{
    public:
    virtual ~B() {
    cout << "~B()";
}
};
class C: public A, public B {
    public:
    ~C() {
        cout << "~C()";
    }
};
int r,x,y,x2,y2;
double getLen(int x,int y,int x2,int y2)
{
    double length;
    length = sqrt(pow(abs(x-x2),2.0)+pow(abs(y-y2),2.0));;
    return length;
}
int a[4] = {1,3,5,9};
void Permutation(int A[], int m, int n)
{
    if(m == n)
    {
          //直接输出，因为前n-1个数已经确定，递归到只有1个数。
        for(int i=0;i<n;i++)
           cout<<A[i]<<" ";
        cout<<endl;
        return;
     }
    else
    {
        for(int i=m;i<n;i++)   //进入for循环，对应第一步
        {
            swap(A[m],A[i]);  //交换，对应第二步
            Permutation(A,m+1,n);  //递归调用，对应三至五步
            swap(A[m],A[i]);  //交换，对应第六步
        }
    }
 }
bool comp(string &str1,string &str2){
    string s1 = str1 + str2;
    string s2 = str2 + str1;
    return s1 < s2;

}
class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        string result;
        if(numbers.empty())
            return result;
        vector<string> strs;
        for(vector<int> ::const_iterator iter = numbers.cbegin();iter != numbers.end();++iter){
            strs.push_back(to_string(*iter));
        }
        sort(strs.begin(),strs.end(),[](string &str1,string &str2){return (str1+str2)<(str2+str1);});
        for(vector<string>::const_iterator iter = strs.cbegin();iter != strs.end();++iter){
            result += *iter;
        }
        return result;
    }

};
int main()
{

    Solution s;
    vector<int> v ={3,32,321};
    string result = s.PrintMinNumber(v);
    cout << result;
    return 0;
}
