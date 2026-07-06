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

// Function: sub_00300A60
// Address: 0x300a60 - 0x300c04
void sub_00300A60_0x300a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300A60_0x300a60");
#endif

    switch (ctx->pc) {
        case 0x300a84u: goto label_300a84;
        case 0x300a94u: goto label_300a94;
        case 0x300ac0u: goto label_300ac0;
        case 0x300ad0u: goto label_300ad0;
        case 0x300af8u: goto label_300af8;
        case 0x300b08u: goto label_300b08;
        case 0x300b24u: goto label_300b24;
        case 0x300b34u: goto label_300b34;
        case 0x300b60u: goto label_300b60;
        case 0x300b70u: goto label_300b70;
        case 0x300b9cu: goto label_300b9c;
        case 0x300bc8u: goto label_300bc8;
        case 0x300bd4u: goto label_300bd4;
        case 0x300bd8u: goto label_300bd8;
        case 0x300becu: goto label_300bec;
        case 0x300bfcu: goto label_300bfc;
        default: break;
    }

    ctx->pc = 0x300a60u;

    // 0x300a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x300a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x300a64: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x300a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x300a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x300a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x300a6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a74: 0x24c63160  addiu       $a2, $a2, 0x3160
    ctx->pc = 0x300a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12640));
    // 0x300a78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x300a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a7c: 0xc047c82  jal         func_11F208
    ctx->pc = 0x300A7Cu;
    SET_GPR_U32(ctx, 31, 0x300A84u);
    ctx->pc = 0x300A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300A7Cu;
    // 0x300a80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F208u, 0x300A7Cu, 0x300A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A84u;
label_300a84:
    // 0x300a84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a8c: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x300A8Cu;
    SET_GPR_U32(ctx, 31, 0x300A94u);
    ctx->pc = 0x300A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300A8Cu;
    // 0x300a90: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x300A8Cu, 0x300A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A94u;
label_300a94:
    // 0x300a94: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x300a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x300a98: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300A98u;
    {
        const bool branch_taken_0x300a98 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x300a98) {
            ctx->pc = 0x300AA8u;
            goto label_300aa8;
        }
    }
    ctx->pc = 0x300AA0u;
    // 0x300aa0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x300AA0u;
    {
        const bool branch_taken_0x300aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AA0u;
        // 0x300aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300aa0) {
            ctx->pc = 0x300BA0u;
            goto label_300ba0;
        }
    }
    ctx->pc = 0x300AA8u;
label_300aa8:
    // 0x300aa8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x300aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x300aac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ab4: 0x24c63180  addiu       $a2, $a2, 0x3180
    ctx->pc = 0x300ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12672));
    // 0x300ab8: 0xc0479b6  jal         func_11E6D8
    ctx->pc = 0x300AB8u;
    SET_GPR_U32(ctx, 31, 0x300AC0u);
    ctx->pc = 0x300ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300AB8u;
    // 0x300abc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6D8u, 0x300AB8u, 0x300AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AC0u;
label_300ac0:
    // 0x300ac0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ac8: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x300AC8u;
    SET_GPR_U32(ctx, 31, 0x300AD0u);
    ctx->pc = 0x300ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300AC8u;
    // 0x300acc: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x300AC8u, 0x300AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AD0u;
label_300ad0:
    // 0x300ad0: 0x8fb0002c  lw          $s0, 0x2C($sp)
    ctx->pc = 0x300ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x300ad4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300AD4u;
    {
        const bool branch_taken_0x300ad4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x300ad4) {
            ctx->pc = 0x300AE4u;
            goto label_300ae4;
        }
    }
    ctx->pc = 0x300ADCu;
    // 0x300adc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x300ADCu;
    {
        const bool branch_taken_0x300adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300ADCu;
        // 0x300ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300adc) {
            ctx->pc = 0x300BA0u;
            goto label_300ba0;
        }
    }
    ctx->pc = 0x300AE4u;
label_300ae4:
    // 0x300ae4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x300ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x300ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300aec: 0x8c450c50  lw          $a1, 0xC50($v0)
    ctx->pc = 0x300aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
    // 0x300af0: 0xc047aa2  jal         func_11EA88
    ctx->pc = 0x300AF0u;
    SET_GPR_U32(ctx, 31, 0x300AF8u);
    ctx->pc = 0x300AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300AF0u;
    // 0x300af4: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA88u, 0x300AF0u, 0x300AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AF8u;
label_300af8:
    // 0x300af8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b00: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x300B00u;
    SET_GPR_U32(ctx, 31, 0x300B08u);
    ctx->pc = 0x300B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B00u;
    // 0x300b04: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x300B00u, 0x300B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B08u;
label_300b08:
    // 0x300b08: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x300b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x300b0c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300B0Cu;
    {
        const bool branch_taken_0x300b0c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x300b0c) {
            ctx->pc = 0x300B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300B0Cu;
            // 0x300b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300B1Cu;
            goto label_300b1c;
        }
    }
    ctx->pc = 0x300B14u;
    // 0x300b14: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x300B14u;
    {
        const bool branch_taken_0x300b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B14u;
        // 0x300b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b14) {
            ctx->pc = 0x300BA0u;
            goto label_300ba0;
        }
    }
    ctx->pc = 0x300B1Cu;
label_300b1c:
    // 0x300b1c: 0xc047a0e  jal         func_11E838
    ctx->pc = 0x300B1Cu;
    SET_GPR_U32(ctx, 31, 0x300B24u);
    ctx->pc = 0x11E838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E838u, 0x300B1Cu, 0x300B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B24u;
label_300b24:
    // 0x300b24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b2c: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x300B2Cu;
    SET_GPR_U32(ctx, 31, 0x300B34u);
    ctx->pc = 0x300B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B2Cu;
    // 0x300b30: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x300B2Cu, 0x300B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B34u;
label_300b34:
    // 0x300b34: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x300b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x300b38: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300B38u;
    {
        const bool branch_taken_0x300b38 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x300b38) {
            ctx->pc = 0x300B48u;
            goto label_300b48;
        }
    }
    ctx->pc = 0x300B40u;
    // 0x300b40: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x300B40u;
    {
        const bool branch_taken_0x300b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B40u;
        // 0x300b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b40) {
            ctx->pc = 0x300BA0u;
            goto label_300ba0;
        }
    }
    ctx->pc = 0x300B48u;
label_300b48:
    // 0x300b48: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x300b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x300b4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b54: 0x24c630d8  addiu       $a2, $a2, 0x30D8
    ctx->pc = 0x300b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12504));
    // 0x300b58: 0xc047c82  jal         func_11F208
    ctx->pc = 0x300B58u;
    SET_GPR_U32(ctx, 31, 0x300B60u);
    ctx->pc = 0x300B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B58u;
    // 0x300b5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F208u, 0x300B58u, 0x300B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B60u;
label_300b60:
    // 0x300b60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b68: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x300B68u;
    SET_GPR_U32(ctx, 31, 0x300B70u);
    ctx->pc = 0x300B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B68u;
    // 0x300b6c: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x300B68u, 0x300B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B70u;
label_300b70:
    // 0x300b70: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x300b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x300b74: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300B74u;
    {
        const bool branch_taken_0x300b74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x300b74) {
            ctx->pc = 0x300B84u;
            goto label_300b84;
        }
    }
    ctx->pc = 0x300B7Cu;
    // 0x300b7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x300B7Cu;
    {
        const bool branch_taken_0x300b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B7Cu;
        // 0x300b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b7c) {
            ctx->pc = 0x300BA0u;
            goto label_300ba0;
        }
    }
    ctx->pc = 0x300B84u;
label_300b84:
    // 0x300b84: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x300b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x300b88: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x300b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x300b8c: 0x8c440c50  lw          $a0, 0xC50($v0)
    ctx->pc = 0x300b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
    // 0x300b90: 0x24a59c20  addiu       $a1, $a1, -0x63E0
    ctx->pc = 0x300b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941728));
    // 0x300b94: 0xc09c732  jal         func_271CC8
    ctx->pc = 0x300B94u;
    SET_GPR_U32(ctx, 31, 0x300B9Cu);
    ctx->pc = 0x300B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B94u;
    // 0x300b98: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271CC8u, 0x300B94u, 0x300B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B9Cu;
label_300b9c:
    // 0x300b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300ba0:
    // 0x300ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x300ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x300BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BA8u;
        // 0x300bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300BB0u;
    // 0x300bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x300bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x300bb4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x300bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x300bb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x300bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x300bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x300bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x300bc0: 0xc069184  jal         func_1A4610
    ctx->pc = 0x300BC0u;
    SET_GPR_U32(ctx, 31, 0x300BC8u);
    ctx->pc = 0x300BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300BC0u;
    // 0x300bc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x300BC0u, 0x300BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300BC8u;
label_300bc8:
    // 0x300bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300bcc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x300bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x300bd0: 0xac439728  sw          $v1, -0x68D8($v0)
    ctx->pc = 0x300bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 3));
label_300bd4:
    // 0x300bd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300bd8:
    // 0x300bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300bdc: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x300bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x300be0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x300be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300be4: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x300BE4u;
    SET_GPR_U32(ctx, 31, 0x300BECu);
    ctx->pc = 0x300BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300BE4u;
    // 0x300be8: 0x27a80028  addiu       $t0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x300BE4u, 0x300BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300BECu;
label_300bec:
    // 0x300bec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300bf4: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x300BF4u;
    SET_GPR_U32(ctx, 31, 0x300BFCu);
    ctx->pc = 0x300BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300BF4u;
    // 0x300bf8: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x300BF4u, 0x300BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300BFCu;
label_300bfc:
    // 0x300bfc: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x300bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x300c00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x300c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    if (ctx->pc == 0x300c00u) { ctx->pc = 0x300c04u; }
}
