# FCFS (First-Come, First-Served) Scheduling Algorithm

This project implements the **First-Come, First-Served (FCFS)** CPU scheduling algorithm in C++.  
The program calculates and displays the following for each process:
- Turnaround Time (TAT)
- Waiting Time (WT)
- Completion Time (CT)
- Response Time (RT)

---

## 📖 How It Works

1. The user inputs:
   - Number of processes
   - Process name
   - Arrival Time (AT)
   - Burst Time (BT)

2. The program:
   - Sorts processes based on **Arrival Time**.
   - Calculates:
     - **Response Time (RT)** = `Current Time - Arrival Time`
     - **Waiting Time (WT)** = `Current Time - Arrival Time`
     - **Completion Time (CT)** = `Current Time + Burst Time`
     - **Turnaround Time (TAT)** = `CT - AT`

3. The results are displayed in a tabular format.





