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

// Function: sub_001ED128
// Address: 0x1ed128 - 0x1ed1a0
void sub_001ED128_0x1ed128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED128_0x1ed128");
#endif

    switch (ctx->pc) {
        case 0x1ed158u: goto label_1ed158;
        case 0x1ed164u: goto label_1ed164;
        default: break;
    }

    ctx->pc = 0x1ed128u;

    // 0x1ed128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ed128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ed12c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ed12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ed130: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ed130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed134: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ed134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ed138: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ed138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed13c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1ed13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ed140: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ed140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ed144: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ed144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ed148: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1ED148u;
    {
        const bool branch_taken_0x1ed148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED148u;
        // 0x1ed14c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed148) {
            ctx->pc = 0x1ED184u;
            goto label_1ed184;
        }
    }
    ctx->pc = 0x1ED150u;
    // 0x1ed150: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x1ed150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1ed154: 0x0  nop
    ctx->pc = 0x1ed154u;
    // NOP
label_1ed158:
    // 0x1ed158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ed158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed15c: 0xc07fc42  jal         func_1FF108
    ctx->pc = 0x1ED15Cu;
    SET_GPR_U32(ctx, 31, 0x1ED164u);
    ctx->pc = 0x1ED160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED15Cu;
    // 0x1ed160: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF108u, 0x1ED15Cu, 0x1ED164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED164u;
label_1ed164:
    // 0x1ed164: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED164u;
    {
        const bool branch_taken_0x1ed164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED164u;
        // 0x1ed168: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed164) {
            ctx->pc = 0x1ED174u;
            goto label_1ed174;
        }
    }
    ctx->pc = 0x1ED16Cu;
    // 0x1ed16c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED16Cu;
    {
        const bool branch_taken_0x1ed16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED16Cu;
        // 0x1ed170: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed16c) {
            ctx->pc = 0x1ED188u;
            goto label_1ed188;
        }
    }
    ctx->pc = 0x1ED174u;
label_1ed174:
    // 0x1ed174: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ed174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ed178: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1ed178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ed17c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1ED17Cu;
    {
        const bool branch_taken_0x1ed17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED17Cu;
        // 0x1ed180: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed17c) {
            ctx->pc = 0x1ED158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed158;
        }
    }
    ctx->pc = 0x1ED184u;
label_1ed184:
    // 0x1ed184: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ed184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed188:
    // 0x1ed188: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ed188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed18c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ed18cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ed190: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ed190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed194: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ed194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed198: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED198u;
        // 0x1ed19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED1A0u;
}
