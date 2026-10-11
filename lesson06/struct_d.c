#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

// Γράψε εδώ τον ορισμό του struct port:
struct port
{
    uint32_t DIR;
    uint32_t DIRCLR;
    uint32_t DIRSET;
    uint32_t DIRTGL;
    uint32_t OUT;
    uint32_t OUTLCLR;
    uint32_t OUTSET;
    uint32_t OUTTGL;
};
// τους 8 registers του πίνακα, με τη σωστή σειρά, όλοι uint32_t

int main(void)
{
    uint32_t fake_mem[8] = {0};   // η "μνήμη" της θύρας A
    struct port *PORTA = (struct port *)fake_mem;

    // 1. Έλεγχος: τα offsets πρέπει να ταιριάζουν με το datasheet
    printf("OUT    @ 0x%02zx\n", offsetof(struct port, OUT));
    printf("OUTTGL @ 0x%02zx\n", offsetof(struct port, OUTTGL));

    // 2. Γράψε εδώ ΜΙΑ γραμμή: SET στο bit 17 του OUT, μέσω του PORTA
    PORTA->OUT |=(1<<17);

    // 3. Ποια θέση της "μνήμης" άλλαξε;
    for (int i = 0; i < 8; i++)
    {
        printf("fake_mem[%d] = 0x%08x\n", i, fake_mem[i]);
    }
    return 0;
}