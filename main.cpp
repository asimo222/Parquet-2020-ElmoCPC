#include <iostream>

using namespace std;

int main()
{

        int yelloB,blackB;
        int width, height;
        cin>>yelloB>>blackB;
        for(int i=1;i<=yelloB;i++) {
            for (int j=1;j<=yelloB;j++) {
                if ((((i-2)+(j-2))*2)+4==yelloB&& (i-2)*(j-2) == blackB) {
                        width = i;
                        height = j;
                    break;
                }
            }
        }
        if(width>height){
        cout<<width<<" "<<height;
          }
        else{
        cout<<height<<" "<<width;
          }
    return 0;
}
