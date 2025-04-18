
#include <iostream>
using namespace std;

class Process {
public:
    string PName;
    int BT;  // Burst Time
    int WT;  // Waiting Time
    int AT;  // Arrival Time
    int TAT; // Turn Around Time
    int RT;  // Response Time
    int CT;  // Completion Time
};

int main() {
    int numProcess;
    cout << "Enter the number of processes: ";
    cin >> numProcess;

    Process p[numProcess];

    for (int x = 0; x < numProcess; x++) {
        cout << "Enter name of process " << x + 1 << ": ";
        cin >> p[x].PName;
        cout << "Enter Arrival Time for " << p[x].PName << ": ";
        cin >> p[x].AT;
        cout << "Enter Burst Time for " << p[x].PName << ": ";
        cin >> p[x].BT;
    }

    // Sort processes based on Arrival Time
    for (int i = 0; i < numProcess - 1; i++) {
        for (int j = i + 1; j < numProcess; j++) {
            if (p[j].AT < p[i].AT) {
                Process temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
    }

    int currentTime = 0;

    for (int x = 0; x < numProcess; x++) {
        if (currentTime < p[x].AT)
            currentTime = p[x].AT;

        p[x].RT = currentTime - p[x].AT;
        p[x].WT = currentTime - p[x].AT;
        p[x].CT = currentTime + p[x].BT;
        p[x].TAT = p[x].CT - p[x].AT;

        currentTime = p[x].CT;
    }



     cout<<"\n\n\t ********** FCFS algo ********** \n\n"<<" ";
       cout<<"\n\t P name"<<"\t AT"<<"\t BT";
       cout<<"\n\n\t\t\t\t\tTAT    WT   CT";
       for(int i=0;i<=numProcess-1;i++)
       {
              cout<<"\n\t----------------------------------------------------------";
              cout<<"\n\t "<<p[i].PName<<"\t "<<p[i].AT<<"\t "<<p[i].BT<<"\t\t "<<p[i].TAT<<"\t "<<p[i].WT<<"\t "<<p[i].CT;
       }
       return 0;

}
