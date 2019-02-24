#include<iostream>
using namespace std;
class XYZ
{
            public:
                float bs,da,hra,GS,TAX;
           XYZ(float a, float b, float c)
            {
               bs=a;
               da=b;
               hra=c;
               process();
            }
            void process()
            {
                GS=bs+da+hra;
                TAX=GS*0.1;
            }
            float return_GS()
            {
                return GS;
            }
            float return_TAX()
            {
                return TAX;
            }
};
    int main()
    {
        float x,y,z;
        cin>>x>>y>>z;
        XYZ o(x,y,z);
        cout<<o.return_GS()<<endl;
        cout<<o.return_TAX()<<endl;
        return 0;
    }