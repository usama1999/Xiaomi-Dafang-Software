#include<stdio.h>


#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>
int main(int argc, char *argv[]) {

    key_t key1;
    key1 = ftok("/usr/include", 'x');
    int shm_id;
    shm_id = shmget( key1, 0, 0);
    struct shmid_ds buf;
    shmctl(shm_id, IPC_STAT, &buf);
    int memlen = buf.shm_segsz;

    void* shared_mem;
    shared_mem = shmat( shm_id, NULL, 0);
    fwrite(shared_mem, memlen, 1, stdout);
    shmdt(shared_mem);

    return 0;
}
