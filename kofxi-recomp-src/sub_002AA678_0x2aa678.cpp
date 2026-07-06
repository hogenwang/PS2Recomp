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

// Function: sub_002AA678
// Address: 0x2aa678 - 0x2aa720
void sub_002AA678_0x2aa678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA678_0x2aa678");
#endif

    switch (ctx->pc) {
        case 0x2aa6b8u: goto label_2aa6b8;
        case 0x2aa6ccu: goto label_2aa6cc;
        default: break;
    }

    ctx->pc = 0x2aa678u;

    // 0x2aa678: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2aa678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2aa67c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2aa67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2aa680: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2aa680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2aa684: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2aa684u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa688: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aa688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aa68c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2aa68cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa690: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2aa690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2aa694: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa698: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2aa698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2aa69c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2aa69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2aa6a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aa6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aa6a4: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x2aa6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2aa6a8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2aa6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2aa6ac: 0x8e320044  lw          $s2, 0x44($s1)
    ctx->pc = 0x2aa6acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2aa6b0: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x2aa6b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2aa6b4: 0x0  nop
    ctx->pc = 0x2aa6b4u;
    // NOP
label_2aa6b8:
    // 0x2aa6b8: 0xae350018  sw          $s5, 0x18($s1)
    ctx->pc = 0x2aa6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
    // 0x2aa6bc: 0x2722821  addu        $a1, $s3, $s2
    ctx->pc = 0x2aa6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2aa6c0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2aa6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2aa6c4: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x2AA6C4u;
    SET_GPR_U32(ctx, 31, 0x2AA6CCu);
    ctx->pc = 0x2AA6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA6C4u;
    // 0x2aa6c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2852C0u, 0x2AA6C4u, 0x2AA6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA6CCu;
label_2aa6cc:
    // 0x2aa6cc: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA6CCu;
    {
        const bool branch_taken_0x2aa6cc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2aa6cc) {
            ctx->pc = 0x2AA6E0u;
            goto label_2aa6e0;
        }
    }
    ctx->pc = 0x2AA6D4u;
    // 0x2aa6d4: 0xae300040  sw          $s0, 0x40($s1)
    ctx->pc = 0x2aa6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 16));
    // 0x2aa6d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA6D8u;
    {
        const bool branch_taken_0x2aa6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA6D8u;
        // 0x2aa6dc: 0xae320044  sw          $s2, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6d8) {
            ctx->pc = 0x2AA6F8u;
            goto label_2aa6f8;
        }
    }
    ctx->pc = 0x2AA6E0u;
label_2aa6e0:
    // 0x2aa6e0: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA6E0u;
    {
        const bool branch_taken_0x2aa6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2AA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA6E0u;
        // 0x2aa6e4: 0xae340018  sw          $s4, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6e0) {
            ctx->pc = 0x2AA6F4u;
            goto label_2aa6f4;
        }
    }
    ctx->pc = 0x2AA6E8u;
    // 0x2aa6e8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2aa6e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2aa6ec: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x2AA6ECu;
    {
        const bool branch_taken_0x2aa6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA6ECu;
        // 0x2aa6f0: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6ec) {
            ctx->pc = 0x2AA6B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa6b8;
        }
    }
    ctx->pc = 0x2AA6F4u;
label_2aa6f4:
    // 0x2aa6f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2aa6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2aa6f8:
    // 0x2aa6f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2aa6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aa6fc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2aa6fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aa700: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2aa700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa704: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2aa704u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa708: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2aa708u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa70c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aa70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aa710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa714: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA714u;
        // 0x2aa718: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA71Cu;
    // 0x2aa71c: 0x0  nop
    ctx->pc = 0x2aa71cu;
    // NOP
    if (ctx->pc == 0x2aa71cu) { ctx->pc = 0x2aa720u; }
}
