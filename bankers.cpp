#include <iostream>
using namespace std;
int main()
{
    int no_of_processes, no_of_resources, i, j, k;
    cout << "Enter the number of processes: ";
    cin >> no_of_processes;
    cout << "Enter the number of resources: ";
    cin >> no_of_resources;
    int allocate[no_of_processes][no_of_resources];
    cout << "Enter the allocation matrix: " << endl;
    for (i = 0; i < no_of_processes; i++) {
        for (j = 0; j < no_of_resources; j++) {
            cin >> allocate[i][j];
        }
    }
    int max[no_of_processes][no_of_resources];
    cout << "Enter the max matrix: " << endl;
    for (i = 0; i < no_of_processes; i++) {
        for (j = 0; j < no_of_resources; j++) {
            cin >> max[i][j];
        }
    }
    int available[no_of_resources];
    cout << "Enter the available resources: ";
    for (j = 0; j < no_of_resources; j++) {
        cin >> available[j];
    }
    int finish[no_of_processes];
    int safe_seq[no_of_processes], index = 0;
    int need[no_of_processes][no_of_resources];
    for (i = 0; i < no_of_processes; i++) {
        for (j = 0; j < no_of_resources; j++) {
            need[i][j] = max[i][j] - allocate[i][j];
        }
    }
    cout << "Need Matrix: " << endl;
    for (i = 0; i < no_of_processes; i++) {
        for (j = 0; j < no_of_resources; j++) {
            cout << need[i][j] << " ";
        }
        cout << endl;
    }
    int count = 0;
    while (count < no_of_processes) {
        bool found = false;
        for (i = 0; i < no_of_processes; i++) {
            if (finish[i] == 0) {
                int j;
                for (j = 0; j < no_of_resources; j++) {
                    if (need[i][j] > available[j]) {
                        break;
                    }
                }
                if (j == no_of_resources) {
                    for (k = 0; k < no_of_resources; k++) {
                        available[k] += allocate[i][k];
                    }
                    safe_seq[index++] = i;
                    finish[i] = 1;
                    found = true;
                }
            }
        }
        if (found == false) {
            cout << "The system is not in a safe state." << endl;
            return 0;
        }
        count++;
    }
    cout << "The system is in a safe state." << endl;
    cout << "The safe sequence is: ";
    for (i = 0; i < no_of_processes - 1; i++) {
        cout << "P" << safe_seq[i] << " -> ";
    }
    cout << "P" << safe_seq[no_of_processes - 1] << endl;
    return 0;
}