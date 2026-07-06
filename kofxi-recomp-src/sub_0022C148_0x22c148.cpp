#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C148
// Address: 0x22c148 - 0x22c198
void sub_0022C148_0x22c148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C148_0x22c148");
#endif

    switch (ctx->pc) {
        case 0x22c158u: goto label_22c158;
        default: break;
    }

    ctx->pc = 0x22c148u;

    // 0x22c148: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x22C148u;
    {
        const bool branch_taken_0x22c148 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C148u;
            // 0x22c14c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c148) {
            ctx->pc = 0x22C190u;
            goto label_22c190;
        }
    }
    ctx->pc = 0x22C150u;
    // 0x22c150: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x22c150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c154: 0x0  nop
    ctx->pc = 0x22c154u;
    // NOP
label_22c158:
    // 0x22c158: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x22c158u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22c15c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x22c15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x22c160: 0x106202b  sltu        $a0, $t0, $a2
    ctx->pc = 0x22c160u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x22c164: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x22c164u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c168: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x22c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22c16c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x22c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x22c170: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x22c170u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c174: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x22c174u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x22c178: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x22c178u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c17c: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x22c17cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x22c180: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x22c180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x22c184: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x22c184u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c188: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22C188u;
    {
        const bool branch_taken_0x22c188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C188u;
            // 0x22c18c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c188) {
            ctx->pc = 0x22C158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c158;
        }
    }
    ctx->pc = 0x22C190u;
label_22c190:
    // 0x22c190: 0x3e00008  jr          $ra
    ctx->pc = 0x22C190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C198u;
    ctx->pc = 0x22c198u;
}
