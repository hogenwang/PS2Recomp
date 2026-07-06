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

// Function: sub_00261970
// Address: 0x261970 - 0x2619d0
void sub_00261970_0x261970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261970_0x261970");
#endif

    switch (ctx->pc) {
        case 0x261980u: goto label_261980;
        case 0x261990u: goto label_261990;
        default: break;
    }

    ctx->pc = 0x261970u;

    // 0x261970: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x261970u;
    {
        const bool branch_taken_0x261970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x261974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261970u;
        // 0x261974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261970) {
            ctx->pc = 0x2619B8u;
            goto label_2619b8;
        }
    }
    ctx->pc = 0x261978u;
    // 0x261978: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x261978u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x26197c: 0x8ce2d770  lw          $v0, -0x2890($a3)
    ctx->pc = 0x26197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294956912)));
label_261980:
    // 0x261980: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x261980u;
    {
        const bool branch_taken_0x261980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261980u;
        // 0x261984: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261980) {
            ctx->pc = 0x2619C0u;
            goto label_2619c0;
        }
    }
    ctx->pc = 0x261988u;
    // 0x261988: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x261988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x26198c: 0x0  nop
    ctx->pc = 0x26198cu;
    // NOP
label_261990:
    // 0x261990: 0x50460006  beql        $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x261990u;
    {
        const bool branch_taken_0x261990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x261990) {
            ctx->pc = 0x261994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261990u;
            // 0x261994: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2619ACu;
            goto label_2619ac;
        }
    }
    ctx->pc = 0x261998u;
    // 0x261998: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x261998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26199c: 0x5460fffc  bnel        $v1, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x26199Cu;
    {
        const bool branch_taken_0x26199c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26199c) {
            ctx->pc = 0x2619A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26199Cu;
            // 0x2619a0: 0x8c62009c  lw          $v0, 0x9C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261990;
        }
    }
    ctx->pc = 0x2619A4u;
    // 0x2619a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2619A4u;
    {
        const bool branch_taken_0x2619a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2619A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619A4u;
        // 0x2619a8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619a4) {
            ctx->pc = 0x2619C4u;
            goto label_2619c4;
        }
    }
    ctx->pc = 0x2619ACu;
label_2619ac:
    // 0x2619ac: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x2619acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2619b0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2619B0u;
    {
        const bool branch_taken_0x2619b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2619B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619B0u;
        // 0x2619b4: 0x8ce2d770  lw          $v0, -0x2890($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294956912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619b0) {
            ctx->pc = 0x261980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261980;
        }
    }
    ctx->pc = 0x2619B8u;
label_2619b8:
    // 0x2619b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2619B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2619BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619B8u;
        // 0x2619bc: 0x2402ffe5  addiu       $v0, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2619B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2619C0u;
label_2619c0:
    // 0x2619c0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2619c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_2619c4:
    // 0x2619c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2619C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2619C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619C4u;
        // 0x2619c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2619C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2619CCu;
    // 0x2619cc: 0x0  nop
    ctx->pc = 0x2619ccu;
    // NOP
    if (ctx->pc == 0x2619ccu) { ctx->pc = 0x2619d0u; }
}
