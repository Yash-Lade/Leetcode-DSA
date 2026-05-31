class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        
        bool canDestroyed = false;
        sort(asteroids.begin(), asteroids.end());
        long long totalMass = mass;

        for(auto aestroid : asteroids)
        {
            if(aestroid <= totalMass)
            {
                totalMass += aestroid;
                canDestroyed = true;
            }
            else canDestroyed = false;
            
            if(!canDestroyed) return false;
        }
        
        return true;
    }
};