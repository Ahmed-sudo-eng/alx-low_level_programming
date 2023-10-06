#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

int main(int argc, char *argv[])
{
	int fd;
	int i;
	char buf[1];
	int class;
	int data;
	int version;
	int osabi;
	int abiversion;

	if (argc != 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	/* Magic */
	printf("Magic:   ");
	for (i = 0; i < 16; i++)
	{
		read(fd, buf, 1);
		printf("%02x ", buf[0]);
		if (i == 4)
			class = buf[0];
		if (i == 5)
			data = buf[0];
		if (i == 6)
			version = buf[0];
		if (i == 7)
			osabi = buf[0];
		if (i == 8)
			abiversion = buf[0];
	}
	/* Class */
	printf("\nClass:                             ");
	if (class == ELFCLASS64)
		printf("ELF64");
	else if (class == ELFCLASS32)
		printf("ELF32");
	/* Data */
	printf("\nData:                              ");
	if (data == ELFDATA2LSB)
		printf("2's complement, little-endian");
	else if (data == ELFDATA2MSB)
		printf("2's complement, big-endian");
	/* Version */
	printf("\nVersion:                           %d (current)", version);
	/* OS/ABI */
	printf("\nOS/ABI:                            ");
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone (embedded)");
			break;
	}
	/* ABI Version */
	printf("\nABI Version:                       %d\n", abiversion);
	/* Type */
	printf("Type:                              ");
	read(fd, buf, 1);
	switch (buf[0])
	{
		case ET_REL:
			printf("A relocatable file");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (shared object file)");
			break;
		case ET_CORE:
			printf("A core file");
			break;
	}

	close(fd);
	return (0);
}
