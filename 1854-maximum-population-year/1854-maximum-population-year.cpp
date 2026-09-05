class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int maxPop=0;
        int yr=1950;
        for(int i=1950;i<=2050;i++){
            int pop=0;
            for(auto& person:logs){
                int birth=person[0];
                int death=person[1];
                if(birth<=i && i<death)
                pop++;
            }
            if(pop>maxPop){
                maxPop=pop;
                yr=i;
            }
        }
        return yr;
    }
};