class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        
        bool canDestroy = false;
        sort(asteroids.begin(), asteroids.end());
        long long totalMass = mass;

        for(auto aestroid : asteroids)
        {
            if(aestroid <= totalMass)
            {
                totalMass += aestroid;
                canDestroy = true;
            }
            else canDestroy = false;
            
            if(!canDestroy) return false;
        }
        return true;
    }
};