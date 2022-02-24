//Problem Link:- https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#
//Time complexity:-n*log(n)
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool cmp(pair<int,int> a,pair<int,int> b){
        return (b.second>a.second);
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        int count=1;
        vector<pair<int,int>> v;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            pair<int,int> p(start[i],end[i]);
            v.push_back(p);
        }
        sort(v.begin(),v.end(),cmp);
        int j=v[0].second;
        
        for(int i=1;i<n;i++){
            if(v[i].first>j){
                j=v[i].second;
                count++;
            }
        }
        return count;
    }
};
