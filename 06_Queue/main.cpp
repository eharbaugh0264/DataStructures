#include "QueueArray.hpp"
#include "QueueArray.cpp"


int main(void)
{

    QueueArray<int, 15> q;


    for (int i = 0; i < 15; i++)
    {
        q.enqueue(i);

    }

    q.print();
    // for (int i = 0; i < 24; i++)
    // {
    //     q.enqueue(i);
    //     if (i % 3 == 0)
    //     {
    //         q.print();
    //     }
    //     if (q.full())
    //     {
    //         while(!q.empty())
    //         {
    //             q.dequeue();
    //         }
    //     }
    // }

    std::cout << "=======" << std::endl << "Final = " << std::endl;
    q.print();

    

    return 0;
}