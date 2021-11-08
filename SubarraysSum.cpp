#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


/*
 * Complete the 'findSum' function below.
 *
 * The function is expected to return a LONG_INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY numbers
 *  2. 2D_INTEGER_ARRAY queries
 */

vector<long> findSum(vector<int> numbers, vector<vector<int>> queries) {
    vector<long> ans;
    long sum=0;
    bool seen_zero=false;
    for(int j=0;j<queries.size();j++){
       // for(int k=0;k<3;k++){
            int left=queries[j][0];
           // cout<<"left: "<<left<<"\n";
            int right=queries[j][1];
           // cout<<"right: "<<right<<"\n";
            int value=queries[j][2];
          //  cout<<"value: "<<value<<"\n";
            while(left<=right){
                if(numbers[left-1]!=0){
                    sum+=numbers[left-1];
                  //  cout<<"sum: "<<sum<<"\n";
                }
                else if(numbers[left-1]==0 || seen_zero){
                    seen_zero=true;
                    sum+=numbers[left-1]+value;
                 //   cout<<"sum: "<<sum<<"\n";
                }
                left++;
            }
            ans.push_back(sum);
            sum=0;
      //  }
    }
    return ans;
}
int main()
