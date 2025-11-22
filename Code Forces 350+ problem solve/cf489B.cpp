///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Number of boys
    int numBoys;
    cin >> numBoys;

    // Skill levels of boys
    vector<int> boySkills(numBoys);

    for (int i = 0; i < numBoys; i++)
    {
        cin >> boySkills[i];
    }

    // Sort boys' skill levels
    sort(boySkills.begin(), boySkills.end());

    // Number of girls
    int numGirls;
    cin >> numGirls;

    // Skill levels of girls
    vector<int> girlSkills(numGirls);

    for (int i = 0; i < numGirls; i++)
    {
        cin >> girlSkills[i];
    }

    // Sort girls' skill levels
    sort(girlSkills.begin(), girlSkills.end());

    // To keep track of the number of pairs formed
    int pairCount = 0;

    // Use two pointers to find pairs
    for (int i = 0, j = 0; i < numBoys && j < numGirls;)
    {
        if (abs(boySkills[i] - girlSkills[j]) <= 1)
        {
            // If the boy and girl can be paired
            pairCount++;
            i++;
            j++;
        }
        else if (boySkills[i] < girlSkills[j])
        {
            // Move to the next boy if current boy's skill is less
            i++;
        }
        else
        {
            // Move to the next girl if current girl's skill is less
            j++;
        }
    }

    // Output the number of pairs formed
    cout << pairCount << endl;

    return 0;
}
