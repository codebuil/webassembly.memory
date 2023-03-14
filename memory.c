unsigned char memory[1024]; // Emulação de memória RAM de 1KB

unsigned char read_memory(unsigned int address) {
    return memory[address & 1023];
}
unsigned char write_memory(unsigned int address,unsigned char value) {
    memory[address & 1023]=value;
    return value;
}