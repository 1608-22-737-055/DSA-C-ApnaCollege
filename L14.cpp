#include<iostream>
#include<vector>


using namespace std;

int main(){
    
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int capacity =0;
/*
    for (int i = 0; i < height.size(); i++)
    {
        for(int j=i+1 ; height.size() ; j++){
            int h = min(height[i], height[j]);
            int w = j-i ;
            capacity = max(capacity, h*w);

        }
    }
    cout<< "Max capacity is : " << capacity << endl;
 */   
    // Optimized approach
                int water = 0;
                int n = height.size();
                int lp = 0;
                int rp = n-1;
        
                while (lp<rp){
                    int w=rp-lp;
                    int h=min(height[lp] , height[rp]);
        
                    water = max(water, h*w);
                    
                    height[lp]<height[rp] ? lp++ : rp-- ;
                }
                cout << water << endl;
             
          


    return 0;
}



