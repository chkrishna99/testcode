#include<iostream>
//#include<thread>
#include<pthread.h>
#include<unistd.h>
using namespace std;
void* even(void*arg)
{
    int val=*((int*)arg);
    for(int i=0;i<=val;i++)
    {a
        if(i%2==0)
        cout<<i<<" ";
        sleep(1);
    }
    return NULL;
}
void* odd(void *arg)
{
    int val=*((int*)arg);
    for(int i=0;i<=val;i++)
    {
        if(i%2!=0)
        cout<<i<<" ";
    }
    return NULL;
}
int main()
{
    pthread_t eid,oid;
    int input;
    cin>>input;
    pthread_create(&eid,NULL, even, &input);
    pthread_create(&oid,NULL, odd, &input);
    pthread_join(eid,NULL);
    pthread_join(oid,NULL);

    return 0;
}
