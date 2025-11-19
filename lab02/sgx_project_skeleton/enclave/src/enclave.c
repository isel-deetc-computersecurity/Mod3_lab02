#include "enclave_t.h"
#include "enclave.h"

void ecall_get_rand(int size, unsigned char* buf){

    sgx_read_rand(buf,size);

}