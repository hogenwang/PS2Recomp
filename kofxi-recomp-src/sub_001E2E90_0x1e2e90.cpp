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

// Function: sub_001E2E90
// Address: 0x1e2e90 - 0x1e32b0
void sub_001E2E90_0x1e2e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2E90_0x1e2e90");
#endif

    switch (ctx->pc) {
        case 0x1e2ec8u: goto label_1e2ec8;
        case 0x1e2f0cu: goto label_1e2f0c;
        case 0x1e2f1cu: goto label_1e2f1c;
        case 0x1e2f28u: goto label_1e2f28;
        case 0x1e2fdcu: goto label_1e2fdc;
        case 0x1e3010u: goto label_1e3010;
        case 0x1e301cu: goto label_1e301c;
        case 0x1e3054u: goto label_1e3054;
        case 0x1e306cu: goto label_1e306c;
        case 0x1e308cu: goto label_1e308c;
        case 0x1e3098u: goto label_1e3098;
        case 0x1e30a4u: goto label_1e30a4;
        case 0x1e30fcu: goto label_1e30fc;
        case 0x1e3164u: goto label_1e3164;
        case 0x1e317cu: goto label_1e317c;
        default: break;
    }

    ctx->pc = 0x1e2e90u;

    // 0x1e2e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e2e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2e98: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e2e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2e9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e2e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e2ea0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e2ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ea4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e2ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e2ea8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e2ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2eac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e2eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e2eb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e2eb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2eb4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e2eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e2eb8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e2eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e2ebc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1e2ec0: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E2EC0u;
    SET_GPR_U32(ctx, 31, 0x1E2EC8u);
    ctx->pc = 0x1E2EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2EC0u;
    // 0x1e2ec4: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E2EC0u, 0x1E2EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2EC8u;
label_1e2ec8:
    // 0x1e2ec8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e2ecc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1e2eccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ed0: 0x12900009  beq         $s4, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2ED0u;
    {
        const bool branch_taken_0x1e2ed0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2ED0u;
        // 0x1e2ed4: 0x2484d830  addiu       $a0, $a0, -0x27D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ed0) {
            ctx->pc = 0x1E2EF8u;
            goto label_1e2ef8;
        }
    }
    ctx->pc = 0x1E2ED8u;
    // 0x1e2ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e2ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2ee4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e2ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e2ee8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e2ee8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2eec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e2eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e2ef0: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E2EF0u;
    ctx->pc = 0x1E2EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2EF0u;
    // 0x1e2ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E2EF8u;
label_1e2ef8:
    // 0x1e2ef8: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x1e2ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1e2efc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E2EFCu;
    {
        const bool branch_taken_0x1e2efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EFCu;
        // 0x1e2f00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2efc) {
            ctx->pc = 0x1E2F3Cu;
            goto label_1e2f3c;
        }
    }
    ctx->pc = 0x1E2F04u;
    // 0x1e2f04: 0xc07ef28  jal         func_1FBCA0
    ctx->pc = 0x1E2F04u;
    SET_GPR_U32(ctx, 31, 0x1E2F0Cu);
    ctx->pc = 0x1E2F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F04u;
    // 0x1e2f08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBCA0u, 0x1E2F04u, 0x1E2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F0Cu;
label_1e2f0c:
    // 0x1e2f0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2F0Cu;
    {
        const bool branch_taken_0x1e2f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F0Cu;
        // 0x1e2f10: 0x2404fecb  addiu       $a0, $zero, -0x135 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966987));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f0c) {
            ctx->pc = 0x1E2F28u;
            goto label_1e2f28;
        }
    }
    ctx->pc = 0x1E2F14u;
    // 0x1e2f14: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1E2F14u;
    SET_GPR_U32(ctx, 31, 0x1E2F1Cu);
    ctx->pc = 0x1E0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0CA0u, 0x1E2F14u, 0x1E2F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F1Cu;
label_1e2f1c:
    // 0x1e2f1c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e2f20: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E2F20u;
    SET_GPR_U32(ctx, 31, 0x1E2F28u);
    ctx->pc = 0x1E2F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F20u;
    // 0x1e2f24: 0x2484d860  addiu       $a0, $a0, -0x27A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E2F20u, 0x1E2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F28u;
label_1e2f28:
    // 0x1e2f28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e2f2c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2F2Cu;
    {
        const bool branch_taken_0x1e2f2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F2Cu;
        // 0x1e2f30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f2c) {
            ctx->pc = 0x1E2F40u;
            goto label_1e2f40;
        }
    }
    ctx->pc = 0x1E2F34u;
    // 0x1e2f34: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e2f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1e2f38: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x1e2f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_1e2f3c:
    // 0x1e2f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2f40:
    // 0x1e2f40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2f44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e2f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2f48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e2f48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e2f4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e2f4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2f50: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e2f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e2f54: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F54u;
        // 0x1e2f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2F5Cu;
    // 0x1e2f5c: 0x0  nop
    ctx->pc = 0x1e2f5cu;
    // NOP
    // 0x1e2f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2f64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e2f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2f6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f70: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2F70u;
    {
        const bool branch_taken_0x1e2f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F70u;
        // 0x1e2f74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f70) {
            ctx->pc = 0x1E2F7Cu;
            goto label_1e2f7c;
        }
    }
    ctx->pc = 0x1E2F78u;
    // 0x1e2f78: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1e2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1e2f7c:
    // 0x1e2f7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2f80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f84: 0x807bf88  j           func_1EFE20
    ctx->pc = 0x1E2F84u;
    ctx->pc = 0x1E2F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F84u;
    // 0x1e2f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE20u, 0x1E2F84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E2F8Cu;
    // 0x1e2f8c: 0x0  nop
    ctx->pc = 0x1e2f8cu;
    // NOP
    // 0x1e2f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2f94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e2f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2f9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2fa0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2FA0u;
    {
        const bool branch_taken_0x1e2fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FA0u;
        // 0x1e2fa4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fa0) {
            ctx->pc = 0x1E2FACu;
            goto label_1e2fac;
        }
    }
    ctx->pc = 0x1E2FA8u;
    // 0x1e2fa8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1e2fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1e2fac:
    // 0x1e2fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2fb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2fb4: 0x807bf88  j           func_1EFE20
    ctx->pc = 0x1E2FB4u;
    ctx->pc = 0x1E2FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2FB4u;
    // 0x1e2fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE20u, 0x1E2FB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E2FBCu;
    // 0x1e2fbc: 0x0  nop
    ctx->pc = 0x1e2fbcu;
    // NOP
    // 0x1e2fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e2fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2fc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2fcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e2fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e2fd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2fd4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E2FD4u;
    SET_GPR_U32(ctx, 31, 0x1E2FDCu);
    ctx->pc = 0x1E2FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2FD4u;
    // 0x1e2fd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E2FD4u, 0x1E2FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2FDCu;
label_1e2fdc:
    // 0x1e2fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2fe4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2FE4u;
    {
        const bool branch_taken_0x1e2fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FE4u;
        // 0x1e2fe8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fe4) {
            ctx->pc = 0x1E3008u;
            goto label_1e3008;
        }
    }
    ctx->pc = 0x1E2FECu;
    // 0x1e2fec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e2ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2ff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2ff8: 0x2484d888  addiu       $a0, $a0, -0x2778
    ctx->pc = 0x1e2ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957192));
    // 0x1e2ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3000: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E3000u;
    ctx->pc = 0x1E3004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3000u;
    // 0x1e3004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3008u;
label_1e3008:
    // 0x1e3008: 0xc07877c  jal         func_1E1DF0
    ctx->pc = 0x1E3008u;
    SET_GPR_U32(ctx, 31, 0x1E3010u);
    ctx->pc = 0x1E1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1DF0u, 0x1E3008u, 0x1E3010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3010u;
label_1e3010:
    // 0x1e3010: 0x26040488  addiu       $a0, $s0, 0x488
    ctx->pc = 0x1e3010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
    // 0x1e3014: 0xc079902  jal         func_1E6408
    ctx->pc = 0x1E3014u;
    SET_GPR_U32(ctx, 31, 0x1E301Cu);
    ctx->pc = 0x1E3018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3014u;
    // 0x1e3018: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6408u, 0x1E3014u, 0x1E301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E301Cu;
label_1e301c:
    // 0x1e301c: 0x260404a8  addiu       $a0, $s0, 0x4A8
    ctx->pc = 0x1e301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1192));
    // 0x1e3020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3024: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e3024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e302c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e302cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3030: 0x8079902  j           func_1E6408
    ctx->pc = 0x1E3030u;
    ctx->pc = 0x1E3034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3030u;
    // 0x1e3034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6408u;
    sub_001E6408_0x1e6408(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3038u;
    // 0x1e3038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e303c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e303cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e3040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e3040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3044: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e3044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e3048: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e3048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e304c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E304Cu;
    SET_GPR_U32(ctx, 31, 0x1E3054u);
    ctx->pc = 0x1E3050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E304Cu;
    // 0x1e3050: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E304Cu, 0x1E3054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3054u;
label_1e3054:
    // 0x1e3054: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e3054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e3058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e3058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e305c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E305Cu;
    {
        const bool branch_taken_0x1e305c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E3060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E305Cu;
        // 0x1e3060: 0x2484d8b8  addiu       $a0, $a0, -0x2748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e305c) {
            ctx->pc = 0x1E3078u;
            goto label_1e3078;
        }
    }
    ctx->pc = 0x1E3064u;
    // 0x1e3064: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E3064u;
    SET_GPR_U32(ctx, 31, 0x1E306Cu);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E3064u, 0x1E306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E306Cu;
label_1e306c:
    // 0x1e306c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E306Cu;
    {
        const bool branch_taken_0x1e306c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E306Cu;
        // 0x1e3070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e306c) {
            ctx->pc = 0x1E30C0u;
            goto label_1e30c0;
        }
    }
    ctx->pc = 0x1E3074u;
    // 0x1e3074: 0x0  nop
    ctx->pc = 0x1e3074u;
    // NOP
label_1e3078:
    // 0x1e3078: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x1e3078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1e307c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E307Cu;
    {
        const bool branch_taken_0x1e307c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E307Cu;
        // 0x1e3080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e307c) {
            ctx->pc = 0x1E30C0u;
            goto label_1e30c0;
        }
    }
    ctx->pc = 0x1E3084u;
    // 0x1e3084: 0xc078782  jal         func_1E1E08
    ctx->pc = 0x1E3084u;
    SET_GPR_U32(ctx, 31, 0x1E308Cu);
    ctx->pc = 0x1E3088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3084u;
    // 0x1e3088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1E08u, 0x1E3084u, 0x1E308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E308Cu;
label_1e308c:
    // 0x1e308c: 0x26440488  addiu       $a0, $s2, 0x488
    ctx->pc = 0x1e308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1160));
    // 0x1e3090: 0xc07991a  jal         func_1E6468
    ctx->pc = 0x1E3090u;
    SET_GPR_U32(ctx, 31, 0x1E3098u);
    ctx->pc = 0x1E3094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3090u;
    // 0x1e3094: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6468u, 0x1E3090u, 0x1E3098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3098u;
label_1e3098:
    // 0x1e3098: 0x264404a8  addiu       $a0, $s2, 0x4A8
    ctx->pc = 0x1e3098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1192));
    // 0x1e309c: 0xc07991a  jal         func_1E6468
    ctx->pc = 0x1E309Cu;
    SET_GPR_U32(ctx, 31, 0x1E30A4u);
    ctx->pc = 0x1E30A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E309Cu;
    // 0x1e30a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6468u, 0x1E309Cu, 0x1E30A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30A4u;
label_1e30a4:
    // 0x1e30a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e30a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30a8: 0x12300004  beq         $s1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E30A8u;
    {
        const bool branch_taken_0x1e30a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30A8u;
        // 0x1e30ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30a8) {
            ctx->pc = 0x1E30BCu;
            goto label_1e30bc;
        }
    }
    ctx->pc = 0x1E30B0u;
    // 0x1e30b0: 0x70800a  movz        $s0, $v1, $s0
    ctx->pc = 0x1e30b0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1e30b4: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E30B4u;
    {
        const bool branch_taken_0x1e30b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30B4u;
        // 0x1e30b8: 0x202100a  movz        $v0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30b4) {
            ctx->pc = 0x1E30C0u;
            goto label_1e30c0;
        }
    }
    ctx->pc = 0x1E30BCu;
label_1e30bc:
    // 0x1e30bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e30bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e30c0:
    // 0x1e30c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e30c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e30c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e30c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e30c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e30c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e30cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e30ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e30d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E30D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30D0u;
        // 0x1e30d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E30D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E30D8u;
    // 0x1e30d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e30d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e30dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e30dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e30e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e30e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e30e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e30e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e30e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e30ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e30f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e30f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e30f4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E30F4u;
    SET_GPR_U32(ctx, 31, 0x1E30FCu);
    ctx->pc = 0x1E30F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30F4u;
    // 0x1e30f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E30F4u, 0x1E30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30FCu;
label_1e30fc:
    // 0x1e30fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e30fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3104: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3108: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E3108u;
    {
        const bool branch_taken_0x1e3108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3108u;
        // 0x1e310c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3108) {
            ctx->pc = 0x1E3130u;
            goto label_1e3130;
        }
    }
    ctx->pc = 0x1E3110u;
    // 0x1e3110: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e3110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e3114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e3118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e311c: 0x2484d8e8  addiu       $a0, $a0, -0x2718
    ctx->pc = 0x1e311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957288));
    // 0x1e3120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e3120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3124: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e3124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e3128: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E3128u;
    ctx->pc = 0x1E312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3128u;
    // 0x1e312c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3130u;
label_1e3130:
    // 0x1e3130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e3134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3138: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e3138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e313c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e313cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e3140: 0x8078788  j           func_1E1E20
    ctx->pc = 0x1E3140u;
    ctx->pc = 0x1E3144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3140u;
    // 0x1e3144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1E20u, 0x1E3140u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E3148u;
    // 0x1e3148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e314c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e3154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e3158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e315c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E315Cu;
    SET_GPR_U32(ctx, 31, 0x1E3164u);
    ctx->pc = 0x1E3160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E315Cu;
    // 0x1e3160: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E315Cu, 0x1E3164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3164u;
label_1e3164:
    // 0x1e3164: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e3164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e3168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e3168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e316c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E316Cu;
    {
        const bool branch_taken_0x1e316c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E3170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E316Cu;
        // 0x1e3170: 0x2484d918  addiu       $a0, $a0, -0x26E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e316c) {
            ctx->pc = 0x1E3188u;
            goto label_1e3188;
        }
    }
    ctx->pc = 0x1E3174u;
    // 0x1e3174: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E3174u;
    SET_GPR_U32(ctx, 31, 0x1E317Cu);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E3174u, 0x1E317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E317Cu;
label_1e317c:
    // 0x1e317c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E317Cu;
    {
        const bool branch_taken_0x1e317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E317Cu;
        // 0x1e3180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e317c) {
            ctx->pc = 0x1E31B0u;
            goto label_1e31b0;
        }
    }
    ctx->pc = 0x1E3184u;
    // 0x1e3184: 0x0  nop
    ctx->pc = 0x1e3184u;
    // NOP
label_1e3188:
    // 0x1e3188: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1e3188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e318c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E318Cu;
    {
        const bool branch_taken_0x1e318c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E318Cu;
        // 0x1e3190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e318c) {
            ctx->pc = 0x1E31B0u;
            goto label_1e31b0;
        }
    }
    ctx->pc = 0x1E3194u;
    // 0x1e3194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e319c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e319cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e31a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e31a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e31a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e31a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e31a8: 0x807878e  j           func_1E1E38
    ctx->pc = 0x1E31A8u;
    ctx->pc = 0x1E31ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E31A8u;
    // 0x1e31ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1E38u, 0x1E31A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E31B0u;
label_1e31b0:
    // 0x1e31b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e31b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e31b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e31b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e31b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e31b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e31bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E31BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31BCu;
        // 0x1e31c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E31BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E31C4u;
    // 0x1e31c4: 0x0  nop
    ctx->pc = 0x1e31c4u;
    // NOP
    // 0x1e31c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e31c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e31cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e31ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e31d0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e31d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e31d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e31d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e31d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e31d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e31dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E31DCu;
    {
        const bool branch_taken_0x1e31dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31DCu;
        // 0x1e31e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31dc) {
            ctx->pc = 0x1E31E8u;
            goto label_1e31e8;
        }
    }
    ctx->pc = 0x1E31E4u;
    // 0x1e31e4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x1e31e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e31e8:
    // 0x1e31e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e31ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E31ECu;
    {
        const bool branch_taken_0x1e31ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31ECu;
        // 0x1e31f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31ec) {
            ctx->pc = 0x1E3200u;
            goto label_1e3200;
        }
    }
    ctx->pc = 0x1E31F4u;
    // 0x1e31f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e31f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e31f8: 0x807bf88  j           func_1EFE20
    ctx->pc = 0x1E31F8u;
    ctx->pc = 0x1E31FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E31F8u;
    // 0x1e31fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE20u, 0x1E31F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E3200u;
label_1e3200:
    // 0x1e3200: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e3200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e3204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e3204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3208: 0x807bf88  j           func_1EFE20
    ctx->pc = 0x1E3208u;
    ctx->pc = 0x1E320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3208u;
    // 0x1e320c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE20u, 0x1E3208u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E3210u;
    // 0x1e3210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e321c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E321Cu;
    {
        const bool branch_taken_0x1e321c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E321Cu;
        // 0x1e3220: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e321c) {
            ctx->pc = 0x1E3238u;
            goto label_1e3238;
        }
    }
    ctx->pc = 0x1E3224u;
    // 0x1e3224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3228: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1e3228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1e322c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e322cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3230: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E3230u;
    ctx->pc = 0x1E3234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3230u;
    // 0x1e3234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3238u;
label_1e3238:
    // 0x1e3238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e323c: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1e323cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1e3240: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e3240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3244: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E3244u;
    ctx->pc = 0x1E3248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3244u;
    // 0x1e3248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E324Cu;
    // 0x1e324c: 0x0  nop
    ctx->pc = 0x1e324cu;
    // NOP
    // 0x1e3250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3254: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3254u;
    {
        const bool branch_taken_0x1e3254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3254u;
        // 0x1e3258: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3254) {
            ctx->pc = 0x1E3270u;
            goto label_1e3270;
        }
    }
    ctx->pc = 0x1E325Cu;
    // 0x1e325c: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e3260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3264: 0x807ec06  j           func_1FB018
    ctx->pc = 0x1E3264u;
    ctx->pc = 0x1E3268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3264u;
    // 0x1e3268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB018u, 0x1E3264u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E326Cu;
    // 0x1e326c: 0x0  nop
    ctx->pc = 0x1e326cu;
    // NOP
label_1e3270:
    // 0x1e3270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3274: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3274u;
        // 0x1e3278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E327Cu;
    // 0x1e327c: 0x0  nop
    ctx->pc = 0x1e327cu;
    // NOP
    // 0x1e3280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3284: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3284u;
    {
        const bool branch_taken_0x1e3284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3284u;
        // 0x1e3288: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3284) {
            ctx->pc = 0x1E32A0u;
            goto label_1e32a0;
        }
    }
    ctx->pc = 0x1E328Cu;
    // 0x1e328c: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e328cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e3290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3294: 0x807ec0a  j           func_1FB028
    ctx->pc = 0x1E3294u;
    ctx->pc = 0x1E3298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3294u;
    // 0x1e3298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB028u, 0x1E3294u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E329Cu;
    // 0x1e329c: 0x0  nop
    ctx->pc = 0x1e329cu;
    // NOP
label_1e32a0:
    // 0x1e32a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e32a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e32a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E32A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32A4u;
        // 0x1e32a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E32ACu;
    // 0x1e32ac: 0x0  nop
    ctx->pc = 0x1e32acu;
    // NOP
}
