#include "elf.h"
#include <stdio.h>
int main(int argc, char  *argv[])
{
	FILE  *fp;
	int fd = 0;
	Elf64_Ehdr  ehdr;
	if ((fp=fopen(argv[1],"r"))==NULL)
	{
		perror("open");
		return -1;	
	}
	else
	{
		printf("%s\n",argv[1] );
		fd=fread(&ehdr,1,sizeof(Elf64_Ehdr),fp);
		if (fd==sizeof(Elf64_Ehdr))
		{
	             	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
			   ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
		                ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
		   	   ehdr.e_ident[EI_MAG3] != ELFMAG3) {
			perror("the file is not a valid ELF file");
			return -1;
		}
		
	   	printf("offset of section header :%p\n",&ehdr.e_shoff);
		}
	}
		return 0;

}