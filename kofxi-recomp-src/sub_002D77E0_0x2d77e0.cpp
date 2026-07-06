#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D77E0
// Address: 0x2d77e0 - 0x2d7858
void sub_002D77E0_0x2d77e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D77E0_0x2d77e0");
#endif

    switch (ctx->pc) {
        case 0x2d77f0u: goto label_2d77f0;
        case 0x2d77f8u: goto label_2d77f8;
        case 0x2d7808u: goto label_2d7808;
        case 0x2d7830u: goto label_2d7830;
        default: break;
    }

    ctx->pc = 0x2d77e0u;

    // 0x2d77e0: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D77E0u;
    {
        const bool branch_taken_0x2d77e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d77e0) {
            ctx->pc = 0x2D77E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D77E0u;
            // 0x2d77e4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D77F8u;
            goto label_2d77f8;
        }
    }
    ctx->pc = 0x2D77E8u;
    // 0x2d77e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D77E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D77ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D77E8u;
            // 0x2d77ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D77F0u;
label_2d77f0:
    // 0x2d77f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D77F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D77F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D77F0u;
            // 0x2d77f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D77F8u;
label_2d77f8:
    // 0x2d77f8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2d77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d77fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d77fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7800: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7800u;
    {
        const bool branch_taken_0x2d7800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7800u;
            // 0x2d7804: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7800) {
            ctx->pc = 0x2D7824u;
            goto label_2d7824;
        }
    }
    ctx->pc = 0x2D7808u;
label_2d7808:
    // 0x2d7808: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d780c: 0x1045fff8  beq         $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D780Cu;
    {
        const bool branch_taken_0x2d780c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2d780c) {
            ctx->pc = 0x2D77F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d77f0;
        }
    }
    ctx->pc = 0x2D7814u;
    // 0x2d7814: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d7814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7818: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d7818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d781c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D781Cu;
    {
        const bool branch_taken_0x2d781c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D781Cu;
            // 0x2d7820: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d781c) {
            ctx->pc = 0x2D7808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d7808;
        }
    }
    ctx->pc = 0x2D7824u;
label_2d7824:
    // 0x2d7824: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7824u;
            // 0x2d7828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D782Cu;
    // 0x2d782c: 0x0  nop
    ctx->pc = 0x2d782cu;
    // NOP
label_2d7830:
    // 0x2d7830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d7834: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d7834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d783c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2d783cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7844: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d7844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d784c: 0x80b5d40  j           func_2D7500
    ctx->pc = 0x2D784Cu;
    ctx->pc = 0x2D7850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D784Cu;
            // 0x2d7850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7500u;
    {
        auto targetFn = runtime->lookupFunction(0x2D7500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D7854u;
    // 0x2d7854: 0x0  nop
    ctx->pc = 0x2d7854u;
    // NOP
    ctx->pc = 0x2d7858u;
}
