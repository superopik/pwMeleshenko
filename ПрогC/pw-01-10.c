#include <stdio.h>
int ping()
{
    printf("PING");
}
int pong()
{
    printf("PONG");
}
int handshake()
{
    ping();
    printf("-");
    pong();
    printf("-");
    ping();
}
int main(void)
{
    const int NODE_ID=1;
    int packet_size = NODE_ID * 4;
    int total_transfer = packet_size * 3;
    handshake();
    printf(":%d\n", packet_size);
    handshake();
    printf(":%d\n", total_transfer);
    printf("SESSION:CLOSED\n");
    return 0;
}