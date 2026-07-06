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

// Function: sub_002B70D0
// Address: 0x2b70d0 - 0x2b7178
void sub_002B70D0_0x2b70d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B70D0_0x2b70d0");
#endif

    switch (ctx->pc) {
        case 0x2b70e0u: goto label_2b70e0;
        case 0x2b7100u: goto label_2b7100;
        case 0x2b7110u: goto label_2b7110;
        case 0x2b7120u: goto label_2b7120;
        case 0x2b712cu: goto label_2b712c;
        case 0x2b7138u: goto label_2b7138;
        case 0x2b7144u: goto label_2b7144;
        case 0x2b715cu: goto label_2b715c;
        case 0x2b7168u: goto label_2b7168;
        default: break;
    }

    ctx->pc = 0x2b70d0u;

    // 0x2b70d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b70d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b70d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b70d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b70d8: 0xc047284  jal         func_11CA10
    ctx->pc = 0x2B70D8u;
    SET_GPR_U32(ctx, 31, 0x2B70E0u);
    ctx->pc = 0x2B70DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B70D8u;
    // 0x2b70dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CA10u, 0x2B70D8u, 0x2B70E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B70E0u;
label_2b70e0:
    // 0x2b70e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B70E0u;
    {
        const bool branch_taken_0x2b70e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70E0u;
        // 0x2b70e4: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70e0) {
            ctx->pc = 0x2B70F0u;
            goto label_2b70f0;
        }
    }
    ctx->pc = 0x2B70E8u;
    // 0x2b70e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B70E8u;
    {
        const bool branch_taken_0x2b70e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b70e8) {
            ctx->pc = 0x2B70F8u;
            goto label_2b70f8;
        }
    }
    ctx->pc = 0x2B70F0u;
label_2b70f0:
    // 0x2b70f0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B70F0u;
    {
        const bool branch_taken_0x2b70f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B70F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70F0u;
        // 0x2b70f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70f0) {
            ctx->pc = 0x2B7168u;
            goto label_2b7168;
        }
    }
    ctx->pc = 0x2B70F8u;
label_2b70f8:
    // 0x2b70f8: 0xc0adc5e  jal         func_2B7178
    ctx->pc = 0x2B70F8u;
    SET_GPR_U32(ctx, 31, 0x2B7100u);
    ctx->pc = 0x2B70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B70F8u;
    // 0x2b70fc: 0x37a40007  ori         $a0, $sp, 0x7 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7178u, 0x2B70F8u, 0x2B7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7100u;
label_2b7100:
    // 0x2b7100: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x2b7100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x2b7104: 0x37a40006  ori         $a0, $sp, 0x6
    ctx->pc = 0x2b7104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)6);
    // 0x2b7108: 0xc0adc5e  jal         func_2B7178
    ctx->pc = 0x2B7108u;
    SET_GPR_U32(ctx, 31, 0x2B7110u);
    ctx->pc = 0x2B710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7108u;
    // 0x2b710c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7178u, 0x2B7108u, 0x2B7110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7110u;
label_2b7110:
    // 0x2b7110: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b7110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b7114: 0x37a40005  ori         $a0, $sp, 0x5
    ctx->pc = 0x2b7114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)5);
    // 0x2b7118: 0xc0adc5e  jal         func_2B7178
    ctx->pc = 0x2B7118u;
    SET_GPR_U32(ctx, 31, 0x2B7120u);
    ctx->pc = 0x2B711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7118u;
    // 0x2b711c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7178u, 0x2B7118u, 0x2B7120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7120u;
label_2b7120:
    // 0x2b7120: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2b7120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2b7124: 0xc0adc5e  jal         func_2B7178
    ctx->pc = 0x2B7124u;
    SET_GPR_U32(ctx, 31, 0x2B712Cu);
    ctx->pc = 0x2B7128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7124u;
    // 0x2b7128: 0x37a40003  ori         $a0, $sp, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7178u, 0x2B7124u, 0x2B712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B712Cu;
label_2b712c:
    // 0x2b712c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2b712cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2b7130: 0xc0adc5e  jal         func_2B7178
    ctx->pc = 0x2B7130u;
    SET_GPR_U32(ctx, 31, 0x2B7138u);
    ctx->pc = 0x2B7134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7130u;
    // 0x2b7134: 0x37a40002  ori         $a0, $sp, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7178u, 0x2B7130u, 0x2B7138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7138u;
label_2b7138:
    // 0x2b7138: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2b7138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2b713c: 0xc0adc5e  jal         func_2B7178
    ctx->pc = 0x2B713Cu;
    SET_GPR_U32(ctx, 31, 0x2B7144u);
    ctx->pc = 0x2B7140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B713Cu;
    // 0x2b7140: 0x37a40001  ori         $a0, $sp, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7178u, 0x2B713Cu, 0x2B7144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7144u;
label_2b7144:
    // 0x2b7144: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2b7144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b7148: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b7148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b714c: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x2b714cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2b7150: 0x2484076c  addiu       $a0, $a0, 0x76C
    ctx->pc = 0x2b7150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1900));
    // 0x2b7154: 0xc0adc66  jal         func_2B7198
    ctx->pc = 0x2B7154u;
    SET_GPR_U32(ctx, 31, 0x2B715Cu);
    ctx->pc = 0x2B7158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7154u;
    // 0x2b7158: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7198u, 0x2B7154u, 0x2B715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B715Cu;
label_2b715c:
    // 0x2b715c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2b715cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2b7160: 0xc0adc82  jal         func_2B7208
    ctx->pc = 0x2B7160u;
    SET_GPR_U32(ctx, 31, 0x2B7168u);
    ctx->pc = 0x2B7164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7160u;
    // 0x2b7164: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7208u, 0x2B7160u, 0x2B7168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7168u;
label_2b7168:
    // 0x2b7168: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b7168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b716c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B716Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B716Cu;
        // 0x2b7170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B716Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7174u;
    // 0x2b7174: 0x0  nop
    ctx->pc = 0x2b7174u;
    // NOP
}
