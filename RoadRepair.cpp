#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'getMinCost' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY crew_id
 *  2. INTEGER_ARRAY job_id
 */

long getMinCost(vector<int> crew_id, vector<int> job_id) {
    long ans=0;
    sort(crew_id.begin(),crew_id.end());
    sort(job_id.begin(),job_id.end());
    for(int i=0;i<crew_id.size();i++){
        ans+=abs(crew_id[i]-job_id[i]);
    }
    return ans;
}
int main()
