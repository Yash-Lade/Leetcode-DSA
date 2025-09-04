class Solution {
public:
    int findClosest(int x, int y, int z) {
        int stepsX = abs(z-x);
        int stepsY = abs(z-y);

        if(stepsX < stepsY) return 1;
        else if(stepsY < stepsX) return 2;
        else return 0;
    }
};