#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int largestCombination(vector<int> candidates) {
        int size=candidates.size();
        int max_freq=0;
        for(int i=0;i<24;i++){
            int freq=0;
            for(int s=0;s<candidates.size();s++){
                if((candidates[s] & (1<<i))>0){
                    freq=freq+1;
                }
            }
            max_freq=max(freq,max_freq);
        }
        return max_freq;
        
    }
int main(){
        vector<int> candidates;
    candidates.push_back(16);
    candidates.push_back(17);
    candidates.push_back(71);
    candidates.push_back(62);
    candidates.push_back(12);
    candidates.push_back(24);
    candidates.push_back(14);
    int max_freq=largestCombination(candidates);
    cout<<max_freq<<endl;
    return 0;
}