class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        int vindex=0;
        int hindex=0;
        int hp=1;
        int vp=1;
        int cost=0;
        sort(horizontalCut.begin(),horizontalCut.end(),greater<int>());
        sort(verticalCut.begin(),verticalCut.end(),greater<int>());
        while(vindex<verticalCut.size() && hindex<horizontalCut.size()){
            if(horizontalCut[hindex]>=verticalCut[vindex]){
                cost+=horizontalCut[hindex]*vp;
                hp++;
                hindex++;
            }
            else{
                cost+=verticalCut[vindex]*hp;
                vp++;
                vindex++;
            }
        }
        while(hindex<horizontalCut.size()){
            cost+=horizontalCut[hindex]*vp;
            hp++;
            hindex++;
        }
        while(vindex<verticalCut.size()){
            cost+=verticalCut[vindex]*hp;
            vp++;
            vindex++;
        }
        return cost;
    }
};