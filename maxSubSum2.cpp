#include 
#include

using namespace std;

int maxSubSum(vector & a)
{
int maxSum = 0;
int i,j,k;

for(i=0; i<a.size(); i++){
for(j=i; j<a.size(); j++){
for(k=i;k<j;k++){

               thisSum += a[k];
            }
            if(thisSum > maxSum)
            {
              maxSum = thisSum;
            }                                     
    }
}
return maxSum;

}

int main(int argc, char *argv[])
{

system("PAUSE");
return EXIT_SUCCESS;
}
