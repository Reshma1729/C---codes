///* C++ program to remove duplicate elements in an array */
#include<bits/stdc++.h>
using namespace std;

//int remove_duplicate_elements(int arr[], int n)
//{
//
//if (n==0 || n==1)
//return n;
//
//int temp[n];
//
//int j = 0;
//int i;
//for (i=0; i<n-1; i++){
//if (arr[i] != arr[i+1]){
//  temp[j++] = arr[i];}
//  temp[j++] = arr[n-1]; 
//
//for (i=0; i<j; i++){
//  arr[i] = temp[i];} }
//
//return j;
//}
//
//
//int main()
//{
//int n;
//cin >> n;
//int arr[n];
//int i;
//for(i = 0; i < n; i++)
//{
//cin >> arr[i];
//}
//
//n = remove_duplicate_elements(arr, n);
//
//
//for (i=0; i<n; i++)
//cout << arr[i] <<" ";
//
//return 0;
//}

#include <iostream>
using namespace std;  // non - repeating element
int non_repeating_elements(int arr[], int n)
{
int i,j;
int count = 1;
for(i = 0; i < n; i++)
    { for(j = 0; j < n; j++){
       if(arr[i] == arr[j] && i != j)
           break;}
        cout<<j<<"\t";
      if(j == n){
      cout << "\nNon-repeating element [" << count << "]" << " : " << arr[i] << endl;
       ++count;} 
   }
  return -1;
}
int main()
{
int n,i;
cout << "\nEnter the number of elements : ";
cin >> n;
int arr[n];
cout << "\nInput the array elements : ";
for(i = 0; i < n; i++)
{
cin >> arr[i];
}
non_repeating_elements(arr, n);
return 0;
}

//int removeDuplicates(int A[], int n)
//{
//    sort(A,A+n);
//    int i = 0, j = 0;
//    while (i < n)
//    {
//        A[j] = A[i];
//        while (A[i] == A[i+1])
//            i = i + 1;
//        i = i + 1;
//        j = j + 1;
//    }
//// Reducing the size of array A to now accomodate only initial j-1 elements. Here you are required to perform the resize operation any way you see fit according to the language you choose
//    A.resize(j-1); 
//    return A;
// }
// int main()
//{
//int n,i;
//cout << "\nEnter the number of elements : ";
//cin >> n;
//int arr[n];
//cout << "\nInput the array elements : ";
//for(i = 0; i < n; i++)
//{
//cin >> arr[i];
//}
//removeDuplicates(arr,n);
//return 0;
//}

