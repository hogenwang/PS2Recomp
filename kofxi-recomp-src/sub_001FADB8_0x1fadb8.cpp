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

// Function: sub_001FADB8
// Address: 0x1fadb8 - 0x1fae40
void sub_001FADB8_0x1fadb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FADB8_0x1fadb8");
#endif

    switch (ctx->pc) {
        case 0x1fadf0u: goto label_1fadf0;
        case 0x1fadfcu: goto label_1fadfc;
        case 0x1fae14u: goto label_1fae14;
        default: break;
    }

    ctx->pc = 0x1fadb8u;

    // 0x1fadb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fadb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fadbc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1fadc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fadc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fadc4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fadc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fadc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fadc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fadcc: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1fadccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fadd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fadd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fadd4: 0x2452174c  addiu       $s2, $v0, 0x174C
    ctx->pc = 0x1fadd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5964));
    // 0x1fadd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fadd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1faddc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1faddcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fade0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fade4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fade4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fade8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1fade8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fadec: 0x0  nop
    ctx->pc = 0x1fadecu;
    // NOP
label_1fadf0:
    // 0x1fadf0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1fadf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1fadf4: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FADF4u;
    SET_GPR_U32(ctx, 31, 0x1FADFCu);
    ctx->pc = 0x1FADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FADF4u;
    // 0x1fadf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FADF4u, 0x1FADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FADFCu;
label_1fadfc:
    // 0x1fadfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fadfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fae00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAE04u;
    {
        const bool branch_taken_0x1fae04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE04u;
        // 0x1fae08: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae04) {
            ctx->pc = 0x1FAE14u;
            goto label_1fae14;
        }
    }
    ctx->pc = 0x1FAE0Cu;
    // 0x1fae0c: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FAE0Cu;
    SET_GPR_U32(ctx, 31, 0x1FAE14u);
    ctx->pc = 0x1FAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE40u, 0x1FAE0Cu, 0x1FAE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAE14u;
label_1fae14:
    // 0x1fae14: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1fae14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1fae18: 0x623fff5  bgezl       $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FAE18u;
    {
        const bool branch_taken_0x1fae18 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1fae18) {
            ctx->pc = 0x1FAE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAE18u;
            // 0x1fae1c: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FADF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fadf0;
        }
    }
    ctx->pc = 0x1FAE20u;
    // 0x1fae20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fae20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fae24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fae24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fae28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fae28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fae2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fae2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fae30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fae30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fae34: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fae34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fae38: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE38u;
        // 0x1fae3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAE40u;
}
