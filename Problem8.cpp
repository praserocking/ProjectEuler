#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<queue>
#include<cstring>
#include<string>
#include<cctype>
#define mn(a,b) a>b?b:a
#define loop(n,i) for(int i=0;i<n;i++)
#define mx(a,b) a>b?a:b
#define PI 3.14159
#define put printf
#define get scanf
#define all(a) a.begin(),a.end()
#define iter vector<int>::iterator
#define szf sizeof
#define setfiles freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
template <class type>type fact(type n){return n==1?1:fact(n-1)*n;}
template <class type>type gcd(type a,type b){return b==0?a:gcd(b,a%b);}
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
/*inline int fast_int()
{
int n=0;
int ch=getchar_unlocked();
while(ch<48)ch=getchar_unlocked();
while(ch >47)
n=(n<<3)+(n<<1)+ch-'0',ch=getchar_unlocked();
return n;
}*/
/* CODER: prassi */
/* B.Tech,IT.,SASTRA University,Tanjore. */
int fun(char a[])
{
  int b=atoi(a);
	int a1=1,t;
	cout<<"Digits:";
	while(b)
	{
		t=b%10;
		cout<<t<<" ";
		b/=10;
		a1*=t;
	}
	cout<<endl;
	return a1;
}
int main(){
char a[]="7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
char b[6];
b[5]='\0';
int big=0,ans,j,k;
for(int i=0;i<995;i++)
{
	for(j=i,k=0;j<i+5;j++,k++)
	b[k]=a[j];
	ans=fun(b);
	cout<<"ans:"<<ans<<"\n";
	big=(big>ans)?big:ans;
}
cout<<endl<<"Answer:"<<big;
return 0;}
