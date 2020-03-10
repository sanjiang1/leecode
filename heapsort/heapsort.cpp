#include <iostream>

using namespace std;

void paixv(int n,double ra[])
{
	int l,j,ir,i;
	double rra;

	l=(n >> 1) - 1;                 //调整次数l=4
	ir=n-1;                    	  //末节点	
	for (;;)
	 {
		if (l > 0)				  //如果不是最后一次调整
			rra=ra[--l];          //rra=最后一个非叶子节点的值
		else {
			rra=ra[ir];       
			ra[ir]=ra[0];     
			if (--ir == 0){
				ra[0]=rra;
				return;
			}
		}
		i=l;                      //最后一个非叶子节点i=l=3
		j=(l << 1) + 1;				  //j=6
		while (j <= ir)        
		{
			if (j < ir && ra[j] < ra[j+1]) ++j; 
			if (rra < ra[j])
			 {
				ra[i]=ra[j];
				j += (i=j);
			}
			else j=ir+1;	
		}
		ra[i]=rra;
	}
}


int main()
{
    double da[7] = {4, 10, 3, 5, 1, 2, 9};
    paixv(int(sizeof(da)/sizeof(double)), da);
	cout << "output:" << endl;
    for(int i = 0; i < int(sizeof(da)/sizeof(double)); i++)
        cout << da[i] << " ";
	cout << endl;
    return 0;
}
