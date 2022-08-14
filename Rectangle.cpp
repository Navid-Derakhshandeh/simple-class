#include <iostream>
#include <conio.h>
using namespace std;
 
    class N{
    	private:
    		int L,W,S;
    	public:
    		void D(){
    			cout<<"enter length of your rectangle:";
    			
    			cin>>L;
    			
    			cout<<"enter width of your rectangle:";
    			
    			cin>>W;
    			
    			S = L*W;
    			
    			cout<<S;
    			
			}
	};
	int main(){
		
		N ob;
		ob.D();
		return 0;
	}
