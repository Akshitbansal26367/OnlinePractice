class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int totaltime = arrivalTime + delayedTime;
        int time;

        if (totaltime < 24)
            return totaltime;

        else if (totaltime == 24)
            return 0;

        else {
            time = totaltime % 24;
            return time;
        }
    }
};
