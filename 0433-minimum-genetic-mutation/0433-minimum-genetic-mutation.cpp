class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set<string> valid(bank.begin(),bank.end());
        unordered_set<string> visited;
        queue<pair<string,int>> q;
        q.push({startGene,0});
        visited.insert(startGene);
        string chars="ACGT";
        while(!q.empty()){
            auto[gene,steps]=q.front();
            q.pop();
            if(gene==endGene)
            return steps;
            for(int i=0;i<gene.size();i++){
                char org=gene[i];
                for(char c:chars){
                    if(c==org)
                    continue;
                    gene[i]=c;
                    if(valid.count(gene) && !visited.count(gene)){
                        visited.insert(gene);
                        q.push({gene,steps+1});
                    }
                }
                gene[i]=org;
            }
        }
        return -1;
    }
};