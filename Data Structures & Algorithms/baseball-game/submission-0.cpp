class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int score=record[record.size()-1]+record[record.size()-2];
                record.push_back(score);
            }
            else if(operations[i]=="D"){
                int score=2*record.back();
                record.push_back(score);
            }
            else if(operations[i]=="C"){
                record.pop_back();
            }
         else{
            record.push_back(stoi(operations[i]));
         }
        }
        int total=0;
        for(int i=0;i<record.size();i++){
            total += record[i];
        }
        return total;
    }
};