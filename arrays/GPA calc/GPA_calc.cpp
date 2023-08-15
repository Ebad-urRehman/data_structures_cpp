#include <iostream>
#include <string.h>
using namespace std;

//Storing marks functions
int get_arr_size()
{
    int size;
    cout<<"How many marks you want to enter : \n";
    cin>>size;
    return size;
}

void get_marks(float arr_marks[],int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr_marks[i];
    }
}

void get_total_marks(float arr_total_marks[],int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr_total_marks[i];
    }
}

//Display functions
void display_marks(float arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    } 
    cout<<endl; 
}
void display_grades(char arr_grades[], char arr_status[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr_grades[i];
        cout<<arr_status[i]<<",";
    }  
    cout<<endl;
}

void display_gpa(float arr_gpa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr_gpa[i]<<",";
    } 
    cout<<endl;
}

//Calculating results functionss
void find_avg(float arr_marks[], float arr_total_marks[],float arr_avg_marks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr_avg_marks[i]=static_cast<float>(arr_marks[i]/arr_total_marks[i])*100;
    }
}

void find_grades(float arr_avg_marks[],int n,char arr_grades[], char arr_status[])
{
    for (int i = 0; i < n; i++)
    {
        if(arr_avg_marks[i]>=80 && arr_avg_marks[i]<=100)
        {
            arr_grades[i]='A';
            if(arr_avg_marks[i]>=90)
            {
                arr_status[i]='+';
            }
            else if(arr_avg_marks[i]>=85 && arr_avg_marks[i]<90)
            {
                arr_status[i]=' ';
            }
            else if(arr_avg_marks[i]>=80 && arr_avg_marks[i]<85)
            {
                arr_status[i]='-';
            }
        }
        else if(arr_avg_marks[i]>=70 && arr_avg_marks[i]<=79)
        {
            arr_grades[i]='B';
            if(arr_avg_marks[i]>=75)
            {
                arr_status[i]='+';
            }
            else if(arr_avg_marks[i]>=71 && arr_avg_marks[i]<74)
            {
                arr_status[i]=' ';
            }
            else if(arr_avg_marks[i]>=70)
            {
                arr_status[i]='-';
            }
        }
        else if(arr_avg_marks[i]>=60 && arr_avg_marks[i]<=69)
        {
            arr_grades[i]='C';
            if(arr_avg_marks[i]>=65)
            {
                arr_status[i]='+';
            }
            else if(arr_avg_marks[i]>=61 && arr_avg_marks[i]<64)
            {
                arr_status[i]=' ';
            }
            else if(arr_avg_marks[i]==60)
            {
                arr_status[i]='-';
            }
        }
        else if(arr_avg_marks[i]>=50 && arr_avg_marks[i]<=59)
        {
            arr_grades[i]='D';
            if(arr_avg_marks[i]>=55)
            {
                arr_status[i]='+';
            }
            else if(arr_avg_marks[i]>=51 && arr_avg_marks[i]<54)
            {
                arr_status[i]=' ';
            }
            else if(arr_avg_marks[i]==50)
            {
                arr_status[i]='-';
            }
        }
        else if(arr_avg_marks>=0 && arr_avg_marks[i]<=49)
        {
            arr_grades[i]='F';
        }
    } 
}

void find_gpa(float arr_avg_marks[], float gpa[], int n)
{
    float gpa_final;// for storing the gpa after the point
    float full_gpa;
    for(int i = 0; i < n; i++)
    {
       if(arr_avg_marks[i]>=70 && arr_avg_marks[i]<=79)
        {
            gpa_final=int(arr_avg_marks[i])%10;
            full_gpa=3+(gpa_final/10);
            gpa[i]=full_gpa;
        }
        else if(arr_avg_marks[i]>=60 && arr_avg_marks[i]<=69)
        {
            gpa_final=int(arr_avg_marks[i])%10;
            full_gpa=2+(gpa_final/10);
            gpa[i]=full_gpa;
        }
        else if(int(arr_avg_marks[i])>=50 && arr_avg_marks[i]<=59)
        {
            gpa_final=int(arr_avg_marks[i])%10;
            full_gpa=1+(gpa_final/10);
            gpa[i]=full_gpa;
        }
        else if(arr_avg_marks[i]>=0 && arr_avg_marks[i]<=49)
        {
            gpa_final=int(arr_avg_marks[i])%10;
            full_gpa=3+(gpa_final/10);
            gpa[i]=full_gpa;
        }
        else if(arr_avg_marks[i]>=80 && arr_avg_marks[i]<=100)
        {
            gpa[i]=4;
        }

    }
}


int main()
{
    //Declarations
    cout<<"You want to calculate the CGPA of --- semesters : \n";
    cout<<"Write 1 in case of finding Semester GPA(SGPA) : \n";
    //x for total semesters
    int x;
    //single semester or multiple semester
    cin>>x;
    int n = get_arr_size();
    //for couting user semesters
    int sem = 1;
    float arr_marks[n];
    float arr_total_marks[n];
    float arr_avg_marks[n];
    float arr_gpa[n];
    char arr_grades[n];
    char arr_status[n];


    while(sem!=x)
    {
        //telling semester no
        cout<<"Enter semester "<<sem<<" marks : \n";
        
        //Entering obtained marks
        cout<<"Enter Obtained Marks of every subject : \n";
        get_marks(arr_marks,n);
        cout<<"Your total obtained marks are : \n";
        display_marks(arr_marks,n);

        //Entering total marks
        cout<<"Enter Total Marks of every subject : \n";
        get_total_marks(arr_total_marks,n);
        cout<<"The total marks of all subjects are : \n";
        display_marks(arr_total_marks,n);

        //Finding average marks
        cout<<"Finding avg marks (marks out of 100)\n";
        find_avg(arr_marks, arr_total_marks, arr_avg_marks, n);
        cout<<"your Average is : \n";
        display_marks(arr_avg_marks, n);

        //Finding grades
        cout<<"Your Grades are : \n";
        find_grades(arr_avg_marks, n, arr_grades,arr_status);
        display_grades(arr_grades, arr_status, n);

        //Finding Gpa
        cout<<"Your GPA is : \n";
        find_gpa(arr_avg_marks, arr_gpa, n);
        display_gpa(arr_gpa, n);
        sem++;
    }
}