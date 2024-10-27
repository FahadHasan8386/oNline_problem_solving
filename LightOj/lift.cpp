#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 1 ; i <= t ;i++)
    {
        int yourFloor, liftFloor;
        cin >> yourFloor >> liftFloor;

        int travelTimetoYou = abs (yourFloor - liftFloor) * 4;

        int doorTime = 2*3;

        int entryTime = 5;

        int travelTimeToGround = yourFloor * 4;

        int exitDoorTime = 3;

        int  exitTime = 5;

        int totalTime = travelTimetoYou + doorTime + entryTime + travelTimeToGround + exitDoorTime + exitTime;

        cout << "Case " << i << ": " << totalTime << endl;
    }
}
