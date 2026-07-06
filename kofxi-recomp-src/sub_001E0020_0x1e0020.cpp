#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0020
// Address: 0x1e0020 - 0x1e00e0
void sub_001E0020_0x1e0020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0020_0x1e0020");
#endif

    switch (ctx->pc) {
        case 0x1e0058u: goto label_1e0058;
        case 0x1e00a8u: goto label_1e00a8;
        default: break;
    }

    ctx->pc = 0x1e0020u;

    // 0x1e0020: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e0020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0024: 0x240f0011  addiu       $t7, $zero, 0x11
    ctx->pc = 0x1e0024u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e0028: 0x24ae0004  addiu       $t6, $a1, 0x4
    ctx->pc = 0x1e0028u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e002c: 0x24ad0008  addiu       $t5, $a1, 0x8
    ctx->pc = 0x1e002cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e0030: 0x24ac000c  addiu       $t4, $a1, 0xC
    ctx->pc = 0x1e0030u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1e0034: 0xaca000b4  sw          $zero, 0xB4($a1)
    ctx->pc = 0x1e0034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 0));
    // 0x1e0038: 0xaca000b8  sw          $zero, 0xB8($a1)
    ctx->pc = 0x1e0038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 0));
    // 0x1e003c: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x1e003cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0040: 0xaca000bc  sw          $zero, 0xBC($a1)
    ctx->pc = 0x1e0040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 188), GPR_U32(ctx, 0));
    // 0x1e0044: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x1e0044u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0048: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x1e0048u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e004c: 0x24a600d0  addiu       $a2, $a1, 0xD0
    ctx->pc = 0x1e004cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x1e0050: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e0050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0054: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1e0054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e0058:
    // 0x1e0058: 0x250200c0  addiu       $v0, $t0, 0xC0
    ctx->pc = 0x1e0058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x1e005c: 0x25080014  addiu       $t0, $t0, 0x14
    ctx->pc = 0x1e005cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x1e0060: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x1e0060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1e0064: 0x1621821  addu        $v1, $t3, $v0
    ctx->pc = 0x1e0064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1e0068: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1e0068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1e006c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1e006cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1e0070: 0xacc0fff0  sw          $zero, -0x10($a2)
    ctx->pc = 0x1e0070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 0));
    // 0x1e0074: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1e0074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1e0078: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e0078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e007c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1e007cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e0080: 0xaccf0000  sw          $t7, 0x0($a2)
    ctx->pc = 0x1e0080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 15));
    // 0x1e0084: 0x4e1fff4  bgez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E0084u;
    {
        const bool branch_taken_0x1e0084 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1E0088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0084u;
            // 0x1e0088: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0084) {
            ctx->pc = 0x1E0058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e0058;
        }
    }
    ctx->pc = 0x1E008Cu;
    // 0x1e008c: 0xaca00160  sw          $zero, 0x160($a1)
    ctx->pc = 0x1e008cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 352), GPR_U32(ctx, 0));
    // 0x1e0090: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x1e0090u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0094: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x1e0094u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0098: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x1e0098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e009c: 0x24a80010  addiu       $t0, $a1, 0x10
    ctx->pc = 0x1e009cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1e00a0: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x1e00a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x1e00a4: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x1e00a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1e00a8:
    // 0x1e00a8: 0x1661021  addu        $v0, $t3, $a2
    ctx->pc = 0x1e00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x1e00ac: 0x1461821  addu        $v1, $t2, $a2
    ctx->pc = 0x1e00acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1e00b0: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x1e00b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1e00b4: 0x1062821  addu        $a1, $t0, $a2
    ctx->pc = 0x1e00b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1e00b8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1e00b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1e00bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e00bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e00c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1e00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1e00c4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1e00c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1e00c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1e00c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e00cc: 0x4e1fff6  bgez        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E00CCu;
    {
        const bool branch_taken_0x1e00cc = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1E00D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00CCu;
            // 0x1e00d0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00cc) {
            ctx->pc = 0x1E00A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e00a8;
        }
    }
    ctx->pc = 0x1E00D4u;
    // 0x1e00d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E00D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E00DCu;
    // 0x1e00dc: 0x0  nop
    ctx->pc = 0x1e00dcu;
    // NOP
    ctx->pc = 0x1e00e0u;
}
