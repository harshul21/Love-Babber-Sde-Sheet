//Problem Link:- https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1
//Time Complexity:- O(N)
class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        //priority_queue<pair<int,string>vector<pair<int,string>>,greater<int,string>> pq;
        vector<pair<int,string>> v;
        for(auto it:mp)
        {
           /*pq.push_push(make_pair(it.second,it.first));
           if(pq.size()>2)
           {
               pq.pop();
           }*/
           v.push_back(make_pair(it.second,it.first));
        }
        sort(v.begin(),v.end());
        if(v.size()==1)
        {
            return v[0].second;
        }
        return v[1].second;
        
    }
};
