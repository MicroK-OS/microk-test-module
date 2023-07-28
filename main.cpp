#include <stdint.h>
#include <stddef.h>

#include <cdefs.h>
#include <mkmi.h>
#include <mkmi_log.h>

extern "C" uint32_t VendorID = 0xCAFEBABE; 
extern "C" uint32_t ProductID = 0x7E37C0DE;

extern "C" size_t OnInit() {
	MKMI_Printf("Test module says hello!\r\n");

	return 0;
}

extern "C" size_t OnExit() {
	return 0;
}
