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

// Function: sub_001B1EB8
// Address: 0x1b1eb8 - 0x1b1fe0
void sub_001B1EB8_0x1b1eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1EB8_0x1b1eb8");
#endif

    switch (ctx->pc) {
        case 0x1b1efcu: goto label_1b1efc;
        case 0x1b1f04u: goto label_1b1f04;
        case 0x1b1f0cu: goto label_1b1f0c;
        case 0x1b1f14u: goto label_1b1f14;
        case 0x1b1f1cu: goto label_1b1f1c;
        case 0x1b1f24u: goto label_1b1f24;
        case 0x1b1f30u: goto label_1b1f30;
        case 0x1b1f40u: goto label_1b1f40;
        case 0x1b1f50u: goto label_1b1f50;
        case 0x1b1f58u: goto label_1b1f58;
        case 0x1b1f60u: goto label_1b1f60;
        case 0x1b1f68u: goto label_1b1f68;
        case 0x1b1f70u: goto label_1b1f70;
        case 0x1b1f78u: goto label_1b1f78;
        case 0x1b1f80u: goto label_1b1f80;
        case 0x1b1f88u: goto label_1b1f88;
        case 0x1b1f90u: goto label_1b1f90;
        case 0x1b1fa0u: goto label_1b1fa0;
        case 0x1b1fb4u: goto label_1b1fb4;
        case 0x1b1fbcu: goto label_1b1fbc;
        default: break;
    }

    ctx->pc = 0x1b1eb8u;

    // 0x1b1eb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1ebc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b1ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b1ec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1ec4: 0x24632348  addiu       $v1, $v1, 0x2348
    ctx->pc = 0x1b1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9032));
    // 0x1b1ec8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1ecc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b1eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b1ed0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b1ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b1ed4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b1ed8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b1edc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B1EDCu;
    {
        const bool branch_taken_0x1b1edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EDCu;
        // 0x1b1ee0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1edc) {
            ctx->pc = 0x1B1FC8u;
            goto label_1b1fc8;
        }
    }
    ctx->pc = 0x1B1EE4u;
    // 0x1b1ee4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1b1ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1b1ee8: 0x3c12003e  lui         $s2, 0x3E
    ctx->pc = 0x1b1ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
    // 0x1b1eec: 0x2610d07c  addiu       $s0, $s0, -0x2F84
    ctx->pc = 0x1b1eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955132));
    // 0x1b1ef0: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1b1ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b1ef4: 0xc06e392  jal         func_1B8E48
    ctx->pc = 0x1B1EF4u;
    SET_GPR_U32(ctx, 31, 0x1B1EFCu);
    ctx->pc = 0x1B8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8E48u, 0x1B1EF4u, 0x1B1EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EFCu;
label_1b1efc:
    // 0x1b1efc: 0xc06d2be  jal         func_1B4AF8
    ctx->pc = 0x1B1EFCu;
    SET_GPR_U32(ctx, 31, 0x1B1F04u);
    ctx->pc = 0x1B4AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4AF8u, 0x1B1EFCu, 0x1B1F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F04u;
label_1b1f04:
    // 0x1b1f04: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x1B1F04u;
    SET_GPR_U32(ctx, 31, 0x1B1F0Cu);
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x1B1F04u, 0x1B1F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F0Cu;
label_1b1f0c:
    // 0x1b1f0c: 0xc06d970  jal         func_1B65C0
    ctx->pc = 0x1B1F0Cu;
    SET_GPR_U32(ctx, 31, 0x1B1F14u);
    ctx->pc = 0x1B65C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B65C0u, 0x1B1F0Cu, 0x1B1F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F14u;
label_1b1f14:
    // 0x1b1f14: 0xc071b10  jal         func_1C6C40
    ctx->pc = 0x1B1F14u;
    SET_GPR_U32(ctx, 31, 0x1B1F1Cu);
    ctx->pc = 0x1C6C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6C40u, 0x1B1F14u, 0x1B1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F1Cu;
label_1b1f1c:
    // 0x1b1f1c: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1B1F1Cu;
    SET_GPR_U32(ctx, 31, 0x1B1F24u);
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1B1F1Cu, 0x1B1F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F24u;
label_1b1f24:
    // 0x1b1f24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b1f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1f28: 0xc07383c  jal         func_1CE0F0
    ctx->pc = 0x1B1F28u;
    SET_GPR_U32(ctx, 31, 0x1B1F30u);
    ctx->pc = 0x1B1F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F28u;
    // 0x1b1f2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE0F0u, 0x1B1F28u, 0x1B1F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F30u;
label_1b1f30:
    // 0x1b1f30: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1f34: 0x8c45235c  lw          $a1, 0x235C($v0)
    ctx->pc = 0x1b1f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9052)));
    // 0x1b1f38: 0xc07383c  jal         func_1CE0F0
    ctx->pc = 0x1B1F38u;
    SET_GPR_U32(ctx, 31, 0x1B1F40u);
    ctx->pc = 0x1B1F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F38u;
    // 0x1b1f3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE0F0u, 0x1B1F38u, 0x1B1F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F40u;
label_1b1f40:
    // 0x1b1f40: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1f44: 0x8c452350  lw          $a1, 0x2350($v0)
    ctx->pc = 0x1b1f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9040)));
    // 0x1b1f48: 0xc07383c  jal         func_1CE0F0
    ctx->pc = 0x1B1F48u;
    SET_GPR_U32(ctx, 31, 0x1B1F50u);
    ctx->pc = 0x1B1F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F48u;
    // 0x1b1f4c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE0F0u, 0x1B1F48u, 0x1B1F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F50u;
label_1b1f50:
    // 0x1b1f50: 0xc0739e2  jal         func_1CE788
    ctx->pc = 0x1B1F50u;
    SET_GPR_U32(ctx, 31, 0x1B1F58u);
    ctx->pc = 0x1CE788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE788u, 0x1B1F50u, 0x1B1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F58u;
label_1b1f58:
    // 0x1b1f58: 0xc06d3b0  jal         func_1B4EC0
    ctx->pc = 0x1B1F58u;
    SET_GPR_U32(ctx, 31, 0x1B1F60u);
    ctx->pc = 0x1B4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4EC0u, 0x1B1F58u, 0x1B1F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F60u;
label_1b1f60:
    // 0x1b1f60: 0xc06b9f2  jal         func_1AE7C8
    ctx->pc = 0x1B1F60u;
    SET_GPR_U32(ctx, 31, 0x1B1F68u);
    ctx->pc = 0x1AE7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE7C8u, 0x1B1F60u, 0x1B1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F68u;
label_1b1f68:
    // 0x1b1f68: 0xc072a46  jal         func_1CA918
    ctx->pc = 0x1B1F68u;
    SET_GPR_U32(ctx, 31, 0x1B1F70u);
    ctx->pc = 0x1CA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA918u, 0x1B1F68u, 0x1B1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F70u;
label_1b1f70:
    // 0x1b1f70: 0xc072ccc  jal         func_1CB330
    ctx->pc = 0x1B1F70u;
    SET_GPR_U32(ctx, 31, 0x1B1F78u);
    ctx->pc = 0x1CB330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB330u, 0x1B1F70u, 0x1B1F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F78u;
label_1b1f78:
    // 0x1b1f78: 0xc073038  jal         func_1CC0E0
    ctx->pc = 0x1B1F78u;
    SET_GPR_U32(ctx, 31, 0x1B1F80u);
    ctx->pc = 0x1CC0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC0E0u, 0x1B1F78u, 0x1B1F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F80u;
label_1b1f80:
    // 0x1b1f80: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1B1F80u;
    SET_GPR_U32(ctx, 31, 0x1B1F88u);
    ctx->pc = 0x1AD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD250u, 0x1B1F80u, 0x1B1F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F88u;
label_1b1f88:
    // 0x1b1f88: 0xc06b482  jal         func_1AD208
    ctx->pc = 0x1B1F88u;
    SET_GPR_U32(ctx, 31, 0x1B1F90u);
    ctx->pc = 0x1AD208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD208u, 0x1B1F88u, 0x1B1F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F90u;
label_1b1f90:
    // 0x1b1f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1f94: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b1f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b1f98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b1f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b1f9c: 0x24702368  addiu       $s0, $v1, 0x2368
    ctx->pc = 0x1b1f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 9064));
label_1b1fa0:
    // 0x1b1fa0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b1fa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1fa4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1FA4u;
    {
        const bool branch_taken_0x1b1fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1fa4) {
            ctx->pc = 0x1B1FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1FA4u;
            // 0x1b1fa8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1FC0u;
            goto label_1b1fc0;
        }
    }
    ctx->pc = 0x1B1FACu;
    // 0x1b1fac: 0xc073748  jal         func_1CDD20
    ctx->pc = 0x1B1FACu;
    SET_GPR_U32(ctx, 31, 0x1B1FB4u);
    ctx->pc = 0x1B1FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FACu;
    // 0x1b1fb0: 0x26447bc0  addiu       $a0, $s2, 0x7BC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD20u, 0x1B1FACu, 0x1B1FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FB4u;
label_1b1fb4:
    // 0x1b1fb4: 0xc06e310  jal         func_1B8C40
    ctx->pc = 0x1B1FB4u;
    SET_GPR_U32(ctx, 31, 0x1B1FBCu);
    ctx->pc = 0x1B1FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FB4u;
    // 0x1b1fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8C40u, 0x1B1FB4u, 0x1B1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FBCu;
label_1b1fbc:
    // 0x1b1fbc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b1fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1b1fc0:
    // 0x1b1fc0: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B1FC0u;
    {
        const bool branch_taken_0x1b1fc0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FC0u;
        // 0x1b1fc4: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fc0) {
            ctx->pc = 0x1B1FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1fa0;
        }
    }
    ctx->pc = 0x1B1FC8u;
label_1b1fc8:
    // 0x1b1fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1fcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1fd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b1fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1fd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b1fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b1fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FD8u;
        // 0x1b1fdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1FE0u;
}
