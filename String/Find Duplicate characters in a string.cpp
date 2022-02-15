//Problem Link:- https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
//Time Complexity:- O(N)
vector<char> duplicates(string str){
	unordered_map<char,int> mp;
	for(int i=0;i<str.length();i++){
		mp[str[i]]++;
	}
	vector<char> vec;
	for(auto it:mp){
		if(it.second>1){
			vec.push_back(it.first);
		}
	}
	return vec;
}
