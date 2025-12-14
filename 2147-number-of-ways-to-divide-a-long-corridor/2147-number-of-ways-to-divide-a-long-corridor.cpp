class Solution {
public:
    int numberOfWays(string corridor) {
        const int MOD = 1000000007;
        long long ans = 1;
        int seatCount = 0;
        int plantBetween = 0;
        bool ready = false;

        for (char c : corridor) {
            if (c == 'S') {
                seatCount++;
                if (seatCount == 2) {
                    ready = true;
                } 
                else if (seatCount > 2 && seatCount % 2 == 1) {
                    ans = (ans * (plantBetween + 1)) % MOD;
                    plantBetween = 0;
                }
            } else if (ready && seatCount % 2 == 0) {
                plantBetween++;
            }
        }

        return seatCount % 2 == 0 && seatCount > 0 ? ans : 0;
    }
};
