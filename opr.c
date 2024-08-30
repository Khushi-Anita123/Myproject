#include<stdio.h> 
int main() 
{ 
int bt[20], wt[20], tat[20], i, n; 
float wtavg, tatavg; 
 
printf("\nEnter the number of processes -- "); 
scanf("%d", &n); 
for(i=0;i<n;i++) 
{ 
printf("\nEnter Burst Time for Process %d -- ", i); 
scanf("%d", &bt[i]); 
} 
wt[0] = wtavg = 0; 
tat[0] = tatavg = bt[0]; 
for(i=1;i<n;i++) 
{ 
wt[i] = wt[i-1] +bt[i-1]; 
tat[i] = tat[i-1] +bt[i]; 
wtavg = wtavg + wt[i]; 
tatavg = tatavg + tat[i]; 
} 
printf("\t PROCESS \tBURSTTIME \t WAITINGTIME\t TURNAROUND TIME\n");
for(i=0;i<n;i++) 
printf("\n\t P%d \t\t %d \t\t\t %d \t\t\t\t\t %d", i, bt[i], wt[i], tat[i]); 
printf("\nAverage Waiting Time -- %f", wtavg/n); 
printf("\nAverage Turnaround Time -- %f", tatavg/n);}



// #include<stdio.h> 
// int main() 
// { 
// int p[20], bt[20], wt[20], tat[20],pt[20], i, k, n, temp; 
// float wtavg, tatavg; 

// printf("\nEnter the number of processes -- "); 
// scanf("%d", &n); 
// for(i=0;i<n;i++) 
// { 
// p[i]=i; 
// printf("Enter Burst Time for Process %d -- ", i); 
// scanf("%d", &bt[i]); 
// printf("Enter priority for Process "); 
// scanf("%d", &pt[i]); 
// } 
// for(i=0;i<n;i++) 
// for(k=i+1;k<n;k++) 
// if(pt[i]>pt[k]) 
// { 
// temp=bt[i]; 
// bt[i]=bt[k]; 
// bt[k]=temp; 
// temp=p[i]; 
// p[i]=p[k]; 
// p[k]=temp; 
// temp=pt[i]; 
// pt[i]=pt[k]; 
// pt[k]=temp; 
// } 
// wt[0] = wtavg = 0; 
// tat[0] = tatavg = bt[0]; 
// for(i=1;i<n;i++) 
// { 
// wt[i] = wt[i-1] +bt[i-1]; 
// tat[i] = tat[i-1] +bt[i]; 
// wtavg = wtavg + wt[i]; 
// tatavg = tatavg + tat[i]; 
// } 
// printf("\n\t PROCESS \tBURST TIME \t WAITING TIME\t TURNAROUND TIME\t PRIORITY"); for(i=0;i<n;i++)
// printf("\n\t P%d \t\t %d \t\t\t %d \t\t %d\t\t%d", p[i], bt[i], wt[i], tat[i] ,pt[i]); 
// printf("\nAverage Waiting Time -- %f", wtavg/n); 
// printf("\nAverage Turnaround Time -- %f", tatavg/n);
// }




// #include <stdio.h>
// #include <string.h>
 
// int main()
// {
 
//     // Declare the file pointer
//     FILE* filePointer;
 
//     // Get the data to be written in file
//     char dataToBeWritten[50] = "GeeksforGeeks-A Computer "
//                                "Science Portal for Geeks";
 
//     // Open the existing file GfgTest.c using fopen()
//     // in write mode using "w" attribute
//     filePointer = fopen("GfgTest.c", "w");
 
//     // Check if this filePointer is null
//     // which maybe if the file does not exist
//     if (filePointer == NULL) {
//         printf("GfgTest.c file failed to open.");
//     }
//     else {
 
//         printf("The file is now opened.\n");
 
//         // Write the dataToBeWritten into the file
//         if (strlen(dataToBeWritten) > 0) {
 
//             // writing in the file using fputs()
//             fputs(dataToBeWritten, filePointer);
//             fputs("\n", filePointer);
//         }
 
//         // Closing the file using fclose()
//         fclose(filePointer);
 
//         printf("Data successfully written in file "
//                "GfgTest.c\n");
//         printf("The file is now closed.");
//     }
   
//     return 0;
// }
// // Online C compiler to run C program online



// #include<stdio.h> 
// int main() 
// { 
// int p[20], bt[20], wt[20], tat[20], i, k, n, temp; 
// float wtavg, tatavg; 

// printf("\nEnter the number of processes -- "); 
// scanf("%d", &n); 
// for(i=0;i<n;i++) 
// { 
// p[i]=i; 
// printf("Enter Burst Time for Process %d -- ", i); 
// scanf("%d", &bt[i]); 
// } 
// for(i=0;i<n;i++) 
// for(k=i+1;k<n;k++) 
// if(bt[i]>bt[k]) 
// { 
// temp=bt[i]; 
// bt[i]=bt[k]; 
// bt[k]=temp; 
// temp=p[i]; 
// p[i]=p[k]; 
// p[k]=temp; 
// } 
// wt[0] = wtavg = 0; 
// tat[0] = tatavg = bt[0]; 
// for(i=1;i<n;i++) 
// { 
// wt[i] = wt[i-1] +bt[i-1]; 
// tat[i] = tat[i-1] +bt[i]; 
// wtavg = wtavg + wt[i]; 
// tatavg = tatavg + tat[i]; 
// } 
// printf("\n\t PROCESS \tBURST TIME \t WAITING TIME\t TURNAROUND TIME\n"); for(i=0;i<n;i++)

// printf("\n\t P%d \t\t %d \t\t\t %d \t\t\t\t %d", p[i], bt[i], wt[i], tat[i]); 
// printf("\nAverage Waiting Time -- %f", wtavg/n); 
// printf("\nAverage Turnaround Time -- %f", tatavg/n);
// }
