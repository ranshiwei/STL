#include <vector>
#include <iostream>
using namespace std;

int main()
{
	# if defined(_sgi) 
		cout<<"_sgi"<<endl;
	# endif
	
	# if defined(_GNUC_)
		cout<<"_GNUC_"<<endl;
		cout<<_GNUC_<<endl; 
	#endif 
} 
