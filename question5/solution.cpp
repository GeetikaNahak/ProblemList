#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> result;
    
    for (int num : nums2) {
        if (set1.find(num) != set1.end()) {
            result.insert(num);
        }
    }
    
    return vector<int>(result.begin(), result.end()); 
}

int main() {
    int n1, n2;
    cin>>n1>>n2;
    vector<int>nums1(n1),nums2(n2);
    for(int i=0;i<n1;i++){
        cin>>nums1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>nums2[i];
    }
    vector<int>res;
    res=intersection(nums1,nums2);
    sort(res.begin(),res.end());
    if(res.size()==0)cout<<"empty"<<endl;
    else{
      for(int i=0;i<res.size();i++){
          cout<<res[i]<<" ";
      }
    }
    cout<<endl;
    return 0;
}
