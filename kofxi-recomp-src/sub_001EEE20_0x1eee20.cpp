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

// Function: sub_001EEE20
// Address: 0x1eee20 - 0x1eeeb0
void sub_001EEE20_0x1eee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEE20_0x1eee20");
#endif

    switch (ctx->pc) {
        case 0x1eee5cu: goto label_1eee5c;
        case 0x1eee74u: goto label_1eee74;
        case 0x1eee8cu: goto label_1eee8c;
        default: break;
    }

    ctx->pc = 0x1eee20u;

    // 0x1eee20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eee24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eee28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eee2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eee2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eee30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eee30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1eee34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1eee34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eee38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1eee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1eee3c: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x1eee3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eee40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eee40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eee44: 0x26301fcc  addiu       $s0, $s1, 0x1FCC
    ctx->pc = 0x1eee44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8140));
    // 0x1eee48: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1eee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1eee4c: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEE4Cu;
    {
        const bool branch_taken_0x1eee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1EEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE4Cu;
        // 0x1eee50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee4c) {
            ctx->pc = 0x1EEE60u;
            goto label_1eee60;
        }
    }
    ctx->pc = 0x1EEE54u;
    // 0x1eee54: 0xc07ad76  jal         func_1EB5D8
    ctx->pc = 0x1EEE54u;
    SET_GPR_U32(ctx, 31, 0x1EEE5Cu);
    ctx->pc = 0x1EB5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB5D8u, 0x1EEE54u, 0x1EEE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE5Cu;
label_1eee5c:
    // 0x1eee5c: 0x30520001  andi        $s2, $v0, 0x1
    ctx->pc = 0x1eee5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1eee60:
    // 0x1eee60: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1eee60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eee64: 0x50b30005  beql        $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEE64u;
    {
        const bool branch_taken_0x1eee64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x1eee64) {
            ctx->pc = 0x1EEE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEE64u;
            // 0x1eee68: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEE7Cu;
            goto label_1eee7c;
        }
    }
    ctx->pc = 0x1EEE6Cu;
    // 0x1eee6c: 0xc07ad76  jal         func_1EB5D8
    ctx->pc = 0x1EEE6Cu;
    SET_GPR_U32(ctx, 31, 0x1EEE74u);
    ctx->pc = 0x1EEE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE6Cu;
    // 0x1eee70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB5D8u, 0x1EEE6Cu, 0x1EEE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE74u;
label_1eee74:
    // 0x1eee74: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x1eee74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1eee78: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1eee78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1eee7c:
    // 0x1eee7c: 0x10b30005  beq         $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEE7Cu;
    {
        const bool branch_taken_0x1eee7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x1EEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE7Cu;
        // 0x1eee80: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee7c) {
            ctx->pc = 0x1EEE94u;
            goto label_1eee94;
        }
    }
    ctx->pc = 0x1EEE84u;
    // 0x1eee84: 0xc07ad76  jal         func_1EB5D8
    ctx->pc = 0x1EEE84u;
    SET_GPR_U32(ctx, 31, 0x1EEE8Cu);
    ctx->pc = 0x1EEE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE84u;
    // 0x1eee88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB5D8u, 0x1EEE84u, 0x1EEE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE8Cu;
label_1eee8c:
    // 0x1eee8c: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x1eee8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1eee90: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1eee90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eee94:
    // 0x1eee94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eee94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eee98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eee98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eee9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eee9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eeea0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eeea0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eeea4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eeea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eeea8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEA8u;
        // 0x1eeeac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEEB0u;
}
