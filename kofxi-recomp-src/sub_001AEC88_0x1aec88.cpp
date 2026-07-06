#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEC88
// Address: 0x1aec88 - 0x1aed38
void sub_001AEC88_0x1aec88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEC88_0x1aec88");
#endif

    ctx->pc = 0x1aec88u;

    // 0x1aec88: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aec88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1aec8c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1aec8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec90: 0x244c01c0  addiu       $t4, $v0, 0x1C0
    ctx->pc = 0x1aec90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x1aec94: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1aec94u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec98: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1aec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1aec9c: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x1aec9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1aeca0: 0x3c0b0037  lui         $t3, 0x37
    ctx->pc = 0x1aeca0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)55 << 16));
    // 0x1aeca4: 0x256b01a0  addiu       $t3, $t3, 0x1A0
    ctx->pc = 0x1aeca4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 416));
    // 0x1aeca8: 0x1695821  addu        $t3, $t3, $t1
    ctx->pc = 0x1aeca8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1aecac: 0x2465000f  addiu       $a1, $v1, 0xF
    ctx->pc = 0x1aecacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1aecb0: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1aecb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1aecb4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aecb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aecb8: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1aecb8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1aecbc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1aecbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1aecc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1aecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aecc4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1aecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aecc8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1aecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1aeccc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1aecccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1aecd0: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x1aecd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x1aecd4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1aecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1aecd8: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AECD8u;
    {
        const bool branch_taken_0x1aecd8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AECDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AECD8u;
            // 0x1aecdc: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecd8) {
            ctx->pc = 0x1AECF8u;
            goto label_1aecf8;
        }
    }
    ctx->pc = 0x1AECE0u;
    // 0x1aece0: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x1aece0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1aece4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aece4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aece8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1aecec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AECECu;
    {
        const bool branch_taken_0x1aecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AECECu;
            // 0x1aecf0: 0xa5620000  sh          $v0, 0x0($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecec) {
            ctx->pc = 0x1AED00u;
            goto label_1aed00;
        }
    }
    ctx->pc = 0x1AECF4u;
    // 0x1aecf4: 0x0  nop
    ctx->pc = 0x1aecf4u;
    // NOP
label_1aecf8:
    // 0x1aecf8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aecfc: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x1aecfcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1aed00:
    // 0x1aed00: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1aed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1aed04: 0x248401a0  addiu       $a0, $a0, 0x1A0
    ctx->pc = 0x1aed04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x1aed08: 0xa0aa0000  sb          $t2, 0x0($a1)
    ctx->pc = 0x1aed08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x1aed0c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1aed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1aed10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1aed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aed14: 0xa0ad0001  sb          $t5, 0x1($a1)
    ctx->pc = 0x1aed14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 13));
    // 0x1aed18: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x1aed18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x1aed1c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x1aed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x1aed20: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x1aed20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x1aed24: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1aed24u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x1aed28: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1aed28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aed2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AED2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AED30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED2Cu;
            // 0x1aed30: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AED34u;
    // 0x1aed34: 0x0  nop
    ctx->pc = 0x1aed34u;
    // NOP
    ctx->pc = 0x1aed38u;
}
