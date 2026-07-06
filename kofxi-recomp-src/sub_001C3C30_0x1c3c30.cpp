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

// Function: sub_001C3C30
// Address: 0x1c3c30 - 0x1c3d10
void sub_001C3C30_0x1c3c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3C30_0x1c3c30");
#endif

    switch (ctx->pc) {
        case 0x1c3c58u: goto label_1c3c58;
        case 0x1c3c7cu: goto label_1c3c7c;
        case 0x1c3c90u: goto label_1c3c90;
        case 0x1c3cb4u: goto label_1c3cb4;
        case 0x1c3cf4u: goto label_1c3cf4;
        default: break;
    }

    ctx->pc = 0x1c3c30u;

    // 0x1c3c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3c34: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c3c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c3c38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c3c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c3c40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c3c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c3c44: 0x24849fd0  addiu       $a0, $a0, -0x6030
    ctx->pc = 0x1c3c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942672));
    // 0x1c3c48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c3c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c3c50: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1C3C50u;
    SET_GPR_U32(ctx, 31, 0x1C3C58u);
    ctx->pc = 0x1C3C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C50u;
    // 0x1c3c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x1C3C50u, 0x1C3C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C58u;
label_1c3c58:
    // 0x1c3c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c5c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C3C5Cu;
    {
        const bool branch_taken_0x1c3c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C5Cu;
        // 0x1c3c60: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c5c) {
            ctx->pc = 0x1C3C88u;
            goto label_1c3c88;
        }
    }
    ctx->pc = 0x1C3C64u;
    // 0x1c3c64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3c68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c3c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c3c6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1c3c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1c3c70: 0x24849fd8  addiu       $a0, $a0, -0x6028
    ctx->pc = 0x1c3c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942680));
    // 0x1c3c74: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C3C74u;
    SET_GPR_U32(ctx, 31, 0x1C3C7Cu);
    ctx->pc = 0x1C3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C74u;
    // 0x1c3c78: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C3C74u, 0x1C3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C7Cu;
label_1c3c7c:
    // 0x1c3c7c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1C3C7Cu;
    {
        const bool branch_taken_0x1c3c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C7Cu;
        // 0x1c3c80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c7c) {
            ctx->pc = 0x1C3CF8u;
            goto label_1c3cf8;
        }
    }
    ctx->pc = 0x1C3C84u;
    // 0x1c3c84: 0x0  nop
    ctx->pc = 0x1c3c84u;
    // NOP
label_1c3c88:
    // 0x1c3c88: 0xc070ecc  jal         func_1C3B30
    ctx->pc = 0x1C3C88u;
    SET_GPR_U32(ctx, 31, 0x1C3C90u);
    ctx->pc = 0x1C3B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3B30u, 0x1C3C88u, 0x1C3C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C90u;
label_1c3c90:
    // 0x1c3c90: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c3c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c3c94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3c98: 0x2463e990  addiu       $v1, $v1, -0x1670
    ctx->pc = 0x1c3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961552));
    // 0x1c3c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c3ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ca4: 0x1447000a  bne         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1C3CA4u;
    {
        const bool branch_taken_0x1c3ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1C3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CA4u;
        // 0x1c3ca8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ca4) {
            ctx->pc = 0x1C3CD0u;
            goto label_1c3cd0;
        }
    }
    ctx->pc = 0x1C3CACu;
    // 0x1c3cac: 0xc070edc  jal         func_1C3B70
    ctx->pc = 0x1C3CACu;
    SET_GPR_U32(ctx, 31, 0x1C3CB4u);
    ctx->pc = 0x1C3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3B70u, 0x1C3CACu, 0x1C3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3CB4u;
label_1c3cb4:
    // 0x1c3cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3cb8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1c3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c3cbc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1c3cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3cc0: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1c3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1c3cc4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1c3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1c3cc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C3CC8u;
    {
        const bool branch_taken_0x1c3cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CC8u;
        // 0x1c3ccc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3cc8) {
            ctx->pc = 0x1C3CF8u;
            goto label_1c3cf8;
        }
    }
    ctx->pc = 0x1C3CD0u;
label_1c3cd0:
    // 0x1c3cd0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c3cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c3cd4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c3cd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3cdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3CDCu;
    {
        const bool branch_taken_0x1c3cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CDCu;
        // 0x1c3ce0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3cdc) {
            ctx->pc = 0x1C3CF4u;
            goto label_1c3cf4;
        }
    }
    ctx->pc = 0x1C3CE4u;
    // 0x1c3ce4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x1c3ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c3ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3cec: 0xc070e90  jal         func_1C3A40
    ctx->pc = 0x1C3CECu;
    SET_GPR_U32(ctx, 31, 0x1C3CF4u);
    ctx->pc = 0x1C3CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3CECu;
    // 0x1c3cf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3A40u, 0x1C3CECu, 0x1C3CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3CF4u;
label_1c3cf4:
    // 0x1c3cf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3cf8:
    // 0x1c3cf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c3cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3cfc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c3cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c3d00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c3d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3d04: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D04u;
        // 0x1c3d08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3D0Cu;
    // 0x1c3d0c: 0x0  nop
    ctx->pc = 0x1c3d0cu;
    // NOP
}
