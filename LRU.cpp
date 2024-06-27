#include<stdio.h>
#include<conio.h>

// Main function
int main()
{
    int i,j,k,l,m,n,p=15,c=0; // Variables declaration
    int a[20],b[20],q,min=50; // Arrays declaration
    printf("enter no. of reference string: "); // Prompt user to enter number of reference strings
    scanf("%d",&n); // Read number of reference strings
    printf("enter size of frame: "); // Prompt user to enter size of frame
    scanf("%d",&m); // Read size of frame
    printf("enter the elements of ref. string: \n"); // Prompt user to enter elements of reference string
    for(i=0; i<n; i++)
        scanf("%d",&a[i]); // Read elements of reference string
    for(j=0; j<m; j++)
        b[j]=-1; // Initialize all frame elements with -1

    // Loop Complexity: O(n*m)
    for(i=0; i<n; i++) // Loop through each reference string
    {
        // Loop Complexity: O(m)
        for(j=0; j<m; j++) // Loop through each frame
        {
            if(a[i]==b[j]) // Check if element already present in frame
                break; // If element found in frame, no page fault
            else
                continue; // Continue searching
        }
        if(j==m) // When the element a[i] is not found in the frame
        {
            // Loop Complexity: O(m)
            for(k=0; k<m; k++) // Loop through each frame
                if(b[k]==-1) // Check for empty slot in frame
                {
                    b[k]=a[i]; // Replace the initial value by the reference string value
                    break;
                }
            if(k==m) // When all frame slots are filled
            {
                min=50;
                // Loop Complexity: O(m*n)
                for(j=0; j<m; j++) // Loop through each frame
                {
                    l=i-1; // Initialize l to the previous reference string index
                    while(l>=0) // Loop through reference string from current index backwards
                    {
                        if(a[l]==b[j]) // Check if page in frame j is equal to page at reference string index l
                        {
                            if(l<min) // Check if this is the least recently used page
                            {
                                min=l; // Update minimum
                                p=j; // Store index of least recently used page
                            }
                            break;
                        }
                        l--; // Move to previous reference string index
                    }
                }
            }
            b[p]=a[i]; // Replace the least recently used page with the current reference string element
            c++; // Increment page fault count
        }
        printf("\n\n");
        for(k=0; k<m; k++)
            printf(" %d",b[k]); // Print the frame
    }
    printf("\n No of page fault is:%d",c); // Print total number of page faults
    getch(); // Wait for user input
}


//Loop Complexity: O(n * m), where n is the number of reference strings and m is the size of the frame.
