//#include<stdio.h>
//int main()
//{
//    int n,i,j,key,k,l,m;
//    scanf("%d",&n);
//    int arr[n],arr1[n];
//    for(i=0;i<n;i++)
//        scanf("%d",&arr[i]);
//    for(i=0;i<n;i++)
//        scanf("%d",&arr1[i]);
//    i=0;
//    while(arr1[i]<=arr1[i+1])
//        i++;
//    j=i;
//    i++;
//    while(i<n)
//        if(arr[i]!=arr1[i])
//            break;
//        else
//            i++;
//    if(i>=n)
//    {
//        printf("Insertion Sort\n");
//        for(k=0;k<j+1;k++)
//            {
//                for(l=0;l<j+1-k;l++)
//                {
//                    if(arr1[l]>arr1[l+1])
//                    {
//                        key=arr1[l];
//                        arr1[l]=arr1[l+1];
//                        arr1[l+1]=key;
//                    }
//                }
//            }
//        for(i=0;i<n;i++)
//            if(i!=0)
//                printf(" %d",arr1[i]);
//            else
//                printf("%d",arr1[i]);
//    }
//    else
//    {
//        m=j+1;
//        while(arr1[m]<arr1[m+1]&&m<n-1)
//            m++;
//        j=m-j;
//        printf("Merge Sort\n");
//        if((m!=n-1))
//            j=j*2;
//        else
//            j=n;
//        for(i=0;i<n/j;i++)
//        {
//            for(k=i*j;k<i*j+j-1;k++)
//            {
//                for(l=i*j;l<i*j+j-1-k+i*j;l++)
//                {
//                    if(arr1[l]>arr1[l+1])
//                    {
//                        key=arr1[l];
//                        arr1[l]=arr1[l+1];
//                        arr1[l+1]=key;
//                    }
//                }
//            }
//        }
//        if(n/j==0)
//        {
//            for(k=0;k<n-1;k++)
//            {
//                for(l=0;l<n-1-k;l++)
//                {
//                    if(arr1[l]>arr1[l+1])
//                    {
//                        key=arr1[l];
//                        arr1[l]=arr1[l+1];
//                        arr1[l+1]=key;
//                    }
//                }
//            }
//        }
//        for(i=0;i<n;i++)
//           if(i!=0)
//                printf(" %d",arr1[i]);
//           else
//                printf("%d",arr1[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    char tmp;
//    scanf("%d %c",&n,&tmp);
//    for(i=0;i<(n+1)/2;i++){
//        for(j=0;j<n;j++)
//            if(i!=0&&j!=0&&j!=n-1&&i!=(1+n)/2-1)
//                printf(" ");
//            else
//                printf("%c",tmp);
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    long long g1,s1,k1,g2,s2,k2,m1,m2;
//    scanf("%lld.%lld.%lld",&g1,&s1,&k1);
//    scanf("%lld.%lld.%lld",&g2,&s2,&k2);
//    m1=((g1*17+s1)*29+k1);
//    m2=((g2*17+s2)*29+k2);
//    if(m1<=m2)
//        printf("%lld.%lld.%lld",(m2-m1)/29/17,(m2-m1)/29%17,(m2-m1)%29);
//    else
//        printf("-%lld.%lld.%lld",(m1-m2)/29/17,(m1-m2)/29%17,(m1-m2)%29);
//    return 0;
//}
