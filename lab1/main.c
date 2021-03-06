#include "SimpleComputer.h"

void print(int i, int n){
	for(; i < n; i++)
		printf("%d ", ram[i]);
}

int main(){
	uint16_t value;
	uint8_t command = 0x33;
	uint8_t operand = 0x59;
	char *fileSave = "memSave";
	char *fileLoad = fileSave;

	sc_memoryInit();
	printf("Mem init: ");
	print(0, 5);
	printf(" ... ");
	print(SIZE - 5, SIZE);
	printf("\n");

	sc_memorySet(0, 6);
	sc_memorySet(6, 0);
	printf("Mem set.Swap value Address: 0. Value: 6\n");
	printf("Array after swap value: "); print(0, 8);
	sc_memoryInit();
	print(0, 99);
	sc_memoryGet(0, &value);
	printf("\nValue after using memGet: %d\n", value);

	sc_memorySave(fileSave);
	printf("Mem has been save in file %s\n", fileSave);

	sc_memoryLoad(fileLoad);
	printf("Mem has been load from file %s\n", fileLoad);

	sc_regInit();
	printf("Reg init\n");

	sc_regSet(FLAG_M, 1);
	printf("Flag init 1\n");

	sc_regGet(FLAG_M, (uint8_t *)&value);
	printf("FLAG set value %d\n", value);

	sc_commandEncode(command, operand, &value);
	printf("Encode Command: 0x33 and Operand: 59 in value: %d\n", value);

	sc_commandDecode(value, &command, &operand);
	printf("Decode Comand: %x Operand: %x\n", command, operand);


	return 0;
}
