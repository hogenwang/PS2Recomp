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

// Function: sub_002F10F0
// Address: 0x2f10f0 - 0x2f1150
void sub_002F10F0_0x2f10f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F10F0_0x2f10f0");
#endif

    switch (ctx->pc) {
        case 0x2f1124u: goto label_2f1124;
        case 0x2f1128u: goto label_2f1128;
        case 0x2f113cu: goto label_2f113c;
        default: break;
    }

    ctx->pc = 0x2f10f0u;

    // 0x2f10f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f10f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f10f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f10f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f10f8: 0x5480000e  bnel        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2F10F8u;
    {
        const bool branch_taken_0x2f10f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f10f8) {
            ctx->pc = 0x2F10FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F10F8u;
            // 0x2f10fc: 0x90850001  lbu         $a1, 0x1($a0) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1134u;
            goto label_2f1134;
        }
    }
    ctx->pc = 0x2F1100u;
    // 0x2f1100: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f1100u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f1104: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f1104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f1108: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f1108u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2f110c: 0x24841870  addiu       $a0, $a0, 0x1870
    ctx->pc = 0x2f110cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6256));
    // 0x2f1110: 0x25081888  addiu       $t0, $t0, 0x1888
    ctx->pc = 0x2f1110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6280));
    // 0x2f1114: 0x24050ee9  addiu       $a1, $zero, 0xEE9
    ctx->pc = 0x2f1114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3817));
    // 0x2f1118: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f1118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f111c: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2F111Cu;
    SET_GPR_U32(ctx, 31, 0x2F1124u);
    ctx->pc = 0x2F1120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F111Cu;
    // 0x2f1120: 0x34e763bd  ori         $a3, $a3, 0x63BD (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F111Cu, 0x2F1124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1124u;
label_2f1124:
    // 0x2f1124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1128:
    // 0x2f1128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f1128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f112c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F112Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F112Cu;
        // 0x2f1130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F112Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1134u;
label_2f1134:
    // 0x2f1134: 0xc0bc19e  jal         func_2F0678
    ctx->pc = 0x2F1134u;
    SET_GPR_U32(ctx, 31, 0x2F113Cu);
    ctx->pc = 0x2F1138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1134u;
    // 0x2f1138: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0678u, 0x2F1134u, 0x2F113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F113Cu;
label_2f113c:
    // 0x2f113c: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x2f113cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f1140: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2f1140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1144: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F1144u;
    {
        const bool branch_taken_0x2f1144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1144u;
        // 0x2f1148: 0xa04f0003  sb          $t7, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1144) {
            ctx->pc = 0x2F1128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1128;
        }
    }
    ctx->pc = 0x2F114Cu;
    // 0x2f114c: 0x0  nop
    ctx->pc = 0x2f114cu;
    // NOP
}
