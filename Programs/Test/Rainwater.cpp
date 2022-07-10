#include<iostream>
#include<vector>
using namespace std;

//{3,0,1,4,0,3}
int Area(vector<int> ar)
{
    int l=0,r=l+1;
    int area_water;
    while(r<ar.size())
    {
        int final_area;
        if(ar[l]>=ar[r]) r++; // move the right pointer till a building with large height is found.
        else
        {
            int smaller_area=0;
            int total_area=min(ar[l],ar[r])*(r-l);
         for(int i=l+1;i<r;i++)
        {

            smaller_area +=ar[i];
        }
        final_area=total_area-smaller_area;
        l=r;
        r=l+1;
        area_water+=final_area;
        }
    }
    return area_water;

}
int main()
{
    vector<int> v{3,0,1,4,0,3};
    //vector<int> v{2,5,1,3,2,4};
    cout<<Area(v)<<endl;

    string a"vedprakash";
    string b=""
}