#include<bits/stdc++.h>
int pole(int ldx, int ldy, int rgx, int rgy)
{
  return (rgx-ldx)*(rgy-ldy);
}
using namespace std;
int main()
{
  int aldx,aldy,argx,argy;
  int bldx,bldy,brgx,brgy;
  int p;
  scanf("%d%d%d%d",&aldx,&aldy,&argx,&argy);
  scanf("%d%d%d%d",&bldx,&bldy,&brgx,&brgy);
  p = pole(aldx,aldy,argx,argy) + pole(bldx,bldy,brgx,brgy);
  if (aldx<bldx)
    aldx=bldx; else
  if (aldx>brgx)
    aldx=brgx;
  if (argx<bldx)
    argx=bldx; else
  if (argx>brgx)
    argx=brgx;
  if (aldy<bldy)
    aldy=bldy; else
  if (aldy>brgy)
    aldy=brgy;
  if (argy<bldy)
    argy=bldy; else
  if (argy>brgy)
    argy=brgy;
  p-=pole(aldx,aldy,argx,argy);
  printf("%d\n",p);
  return 0;
}