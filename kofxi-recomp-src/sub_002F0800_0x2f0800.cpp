#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0800
// Address: 0x2f0800 - 0x2f0868
void sub_002F0800_0x2f0800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0800_0x2f0800");
#endif

    switch (ctx->pc) {
        case 0x2f083cu: goto label_2f083c;
        case 0x2f084cu: goto label_2f084c;
        default: break;
    }

    ctx->pc = 0x2f0800u;

    // 0x2f0800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0804: 0xa0850004  sb          $a1, 0x4($a0)
    ctx->pc = 0x2f0804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f0808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f080c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2f080cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f0810: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f0814: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f0814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0818: 0x24900004  addiu       $s0, $a0, 0x4
    ctx->pc = 0x2f0818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2f081c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f0820: 0xa2070001  sb          $a3, 0x1($s0)
    ctx->pc = 0x2f0820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f0824: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0824u;
    {
        const bool branch_taken_0x2f0824 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0824u;
        // 0x2f0828: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0824) {
            ctx->pc = 0x2F083Cu;
            goto label_2f083c;
        }
    }
    ctx->pc = 0x2F082Cu;
    // 0x2f082c: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F082Cu;
    {
        const bool branch_taken_0x2f082c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F082Cu;
        // 0x2f0830: 0x24840006  addiu       $a0, $a0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f082c) {
            ctx->pc = 0x2F083Cu;
            goto label_2f083c;
        }
    }
    ctx->pc = 0x2F0834u;
    // 0x2f0834: 0xc049c48  jal         func_127120
    ctx->pc = 0x2F0834u;
    SET_GPR_U32(ctx, 31, 0x2F083Cu);
    ctx->pc = 0x2F0838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0834u;
    // 0x2f0838: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F0834u, 0x2F083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F083Cu;
label_2f083c:
    // 0x2f083c: 0x92070001  lbu         $a3, 0x1($s0)
    ctx->pc = 0x2f083cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2f0840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f0840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0844: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f0844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f084c:
    // 0x2f084c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x2f084cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2f0850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0858: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f0858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f085c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2f085cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f0860: 0x80bc1de  j           func_2F0778
    ctx->pc = 0x2F0860u;
    ctx->pc = 0x2F0864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0860u;
    // 0x2f0864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0778u;
    sub_002F0778_0x2f0778(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0868u;
}
