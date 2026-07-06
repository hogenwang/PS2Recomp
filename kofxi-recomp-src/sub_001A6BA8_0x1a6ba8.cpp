#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6BA8
// Address: 0x1a6ba8 - 0x1a6c18
void sub_001A6BA8_0x1a6ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6BA8_0x1a6ba8");
#endif

    switch (ctx->pc) {
        case 0x1a6bc8u: goto label_1a6bc8;
        default: break;
    }

    ctx->pc = 0x1a6ba8u;

    // 0x1a6ba8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a6bac: 0x2447e118  addiu       $a3, $v0, -0x1EE8
    ctx->pc = 0x1a6bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959384));
    // 0x1a6bb0: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x1a6bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1a6bb4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6BB4u;
    {
        const bool branch_taken_0x1a6bb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6bb4) {
            ctx->pc = 0x1A6BC8u;
            goto label_1a6bc8;
        }
    }
    ctx->pc = 0x1A6BBCu;
    // 0x1a6bbc: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a6bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BC0u;
            // 0x1a6bc4: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6BC8u;
label_1a6bc8:
    // 0x1a6bc8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1a6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1a6bcc: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1a6bccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a6bd0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1a6bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a6bd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a6bd8: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x1a6bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x1a6bdc: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x1a6bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x1a6be0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1a6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1a6be4: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x1a6be4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x1a6be8: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1a6be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1a6bec: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x1a6becu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x1a6bf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a6bf4: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1a6bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1a6bf8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1a6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1a6bfc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a6c00: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x1a6c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x1a6c04: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a6c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a6c08: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1a6c08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1a6c0c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a6c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a6c10: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C10u;
            // 0x1a6c14: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6C18u;
    ctx->pc = 0x1a6c18u;
}
