void printf(const char* str)
{
    unsigned short* VideoMemory= (unsigned short*)0xb8000;
    for(int i=0; str[i]!='\0'; ++i){
        //VideoMemory[i]=(VideoMemory[i] & 0xFF00) | str[i];
        VideoMemory[i] = (0x0F << 8) | (unsigned char)str[i];
    }
}

extern "C" void kernelMain(void* multiboot_structure, unsigned int magicnumber)
{
    printf("Hello World ------- http://www.algorithman.de");
    while(1);
}