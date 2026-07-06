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

// Function: sub_00221BE8
// Address: 0x221be8 - 0x221df8
void sub_00221BE8_0x221be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221BE8_0x221be8");
#endif

    switch (ctx->pc) {
        case 0x221c24u: goto label_221c24;
        case 0x221c34u: goto label_221c34;
        case 0x221c44u: goto label_221c44;
        case 0x221c5cu: goto label_221c5c;
        case 0x221c68u: goto label_221c68;
        case 0x221c6cu: goto label_221c6c;
        case 0x221ca4u: goto label_221ca4;
        case 0x221cb4u: goto label_221cb4;
        case 0x221cc4u: goto label_221cc4;
        case 0x221cf8u: goto label_221cf8;
        case 0x221d08u: goto label_221d08;
        case 0x221d18u: goto label_221d18;
        case 0x221d20u: goto label_221d20;
        case 0x221d50u: goto label_221d50;
        case 0x221d60u: goto label_221d60;
        case 0x221d70u: goto label_221d70;
        case 0x221d78u: goto label_221d78;
        case 0x221dd0u: goto label_221dd0;
        case 0x221de0u: goto label_221de0;
        default: break;
    }

    ctx->pc = 0x221be8u;

    // 0x221be8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x221be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x221bec: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x221becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x221bf0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x221bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x221bf4: 0x24061009  addiu       $a2, $zero, 0x1009
    ctx->pc = 0x221bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x221bf8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x221bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x221bfc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x221bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x221c00: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x221c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221c04: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x221c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x221c08: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x221c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x221c0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x221c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c10: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x221c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x221c14: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x221c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x221c18: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x221c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x221c1c: 0xc0977ce  jal         func_25DF38
    ctx->pc = 0x221C1Cu;
    SET_GPR_U32(ctx, 31, 0x221C24u);
    ctx->pc = 0x221C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C1Cu;
    // 0x221c20: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DF38u, 0x221C1Cu, 0x221C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C24u;
label_221c24:
    // 0x221c24: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x221C24u;
    {
        const bool branch_taken_0x221c24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x221C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C24u;
        // 0x221c28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c24) {
            ctx->pc = 0x221C84u;
            goto label_221c84;
        }
    }
    ctx->pc = 0x221C2Cu;
    // 0x221c2c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x221C2Cu;
    SET_GPR_U32(ctx, 31, 0x221C34u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x221C2Cu, 0x221C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C34u;
label_221c34:
    // 0x221c34: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x221c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221c38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c3c: 0xc089144  jal         func_224510
    ctx->pc = 0x221C3Cu;
    SET_GPR_U32(ctx, 31, 0x221C44u);
    ctx->pc = 0x221C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C3Cu;
    // 0x221c40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x221C3Cu, 0x221C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C44u;
label_221c44:
    // 0x221c44: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221c48: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221c48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221c4c: 0x24842be0  addiu       $a0, $a0, 0x2BE0
    ctx->pc = 0x221c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11232));
    // 0x221c50: 0x25082bf0  addiu       $t0, $t0, 0x2BF0
    ctx->pc = 0x221c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11248));
    // 0x221c54: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x221c54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c58: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x221c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_221c5c:
    // 0x221c5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x221c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221c60: 0xc089794  jal         func_225E50
    ctx->pc = 0x221C60u;
    SET_GPR_U32(ctx, 31, 0x221C68u);
    ctx->pc = 0x221C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C60u;
    // 0x221c64: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E50u, 0x221C60u, 0x221C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C68u;
label_221c68:
    // 0x221c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x221c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221c6c:
    // 0x221c6c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x221c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221c70: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x221c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x221c74: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x221c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221c78: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x221c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x221c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x221C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C7Cu;
        // 0x221c80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221C84u;
label_221c84:
    // 0x221c84: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x221c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x221c88: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x221c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x221c8c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x221c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x221c90: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x221c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x221c94: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x221c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c98: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x221c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x221c9c: 0xc0977ce  jal         func_25DF38
    ctx->pc = 0x221C9Cu;
    SET_GPR_U32(ctx, 31, 0x221CA4u);
    ctx->pc = 0x221CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C9Cu;
    // 0x221ca0: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DF38u, 0x221C9Cu, 0x221CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CA4u;
label_221ca4:
    // 0x221ca4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x221CA4u;
    {
        const bool branch_taken_0x221ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CA4u;
        // 0x221ca8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ca4) {
            ctx->pc = 0x221CE0u;
            goto label_221ce0;
        }
    }
    ctx->pc = 0x221CACu;
    // 0x221cac: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x221CACu;
    SET_GPR_U32(ctx, 31, 0x221CB4u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x221CACu, 0x221CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CB4u;
label_221cb4:
    // 0x221cb4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x221cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221cbc: 0xc089144  jal         func_224510
    ctx->pc = 0x221CBCu;
    SET_GPR_U32(ctx, 31, 0x221CC4u);
    ctx->pc = 0x221CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CBCu;
    // 0x221cc0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x221CBCu, 0x221CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CC4u;
label_221cc4:
    // 0x221cc4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221cc8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221ccc: 0x24842be0  addiu       $a0, $a0, 0x2BE0
    ctx->pc = 0x221cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11232));
    // 0x221cd0: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x221cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
    // 0x221cd4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x221cd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221cd8: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x221CD8u;
    {
        const bool branch_taken_0x221cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CD8u;
        // 0x221cdc: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221cd8) {
            ctx->pc = 0x221C5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221c5c;
        }
    }
    ctx->pc = 0x221CE0u;
label_221ce0:
    // 0x221ce0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x221ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x221ce4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x221ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x221ce8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x221ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x221cec: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x221cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x221cf0: 0xc0977ce  jal         func_25DF38
    ctx->pc = 0x221CF0u;
    SET_GPR_U32(ctx, 31, 0x221CF8u);
    ctx->pc = 0x221CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CF0u;
    // 0x221cf4: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DF38u, 0x221CF0u, 0x221CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CF8u;
label_221cf8:
    // 0x221cf8: 0x4430010  bgezl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x221CF8u;
    {
        const bool branch_taken_0x221cf8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x221cf8) {
            ctx->pc = 0x221CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221CF8u;
            // 0x221cfc: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221D3Cu;
            goto label_221d3c;
        }
    }
    ctx->pc = 0x221D00u;
    // 0x221d00: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x221D00u;
    SET_GPR_U32(ctx, 31, 0x221D08u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x221D00u, 0x221D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D08u;
label_221d08:
    // 0x221d08: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x221d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221d0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d10: 0xc089144  jal         func_224510
    ctx->pc = 0x221D10u;
    SET_GPR_U32(ctx, 31, 0x221D18u);
    ctx->pc = 0x221D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D10u;
    // 0x221d14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x221D10u, 0x221D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D18u;
label_221d18:
    // 0x221d18: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x221D18u;
    SET_GPR_U32(ctx, 31, 0x221D20u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x221D18u, 0x221D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D20u;
label_221d20:
    // 0x221d20: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221d24: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x221d24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221d28: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221d28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221d2c: 0x24842be0  addiu       $a0, $a0, 0x2BE0
    ctx->pc = 0x221d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11232));
    // 0x221d30: 0x25082c38  addiu       $t0, $t0, 0x2C38
    ctx->pc = 0x221d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11320));
    // 0x221d34: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x221D34u;
    {
        const bool branch_taken_0x221d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D34u;
        // 0x221d38: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d34) {
            ctx->pc = 0x221C5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221c5c;
        }
    }
    ctx->pc = 0x221D3Cu;
label_221d3c:
    // 0x221d3c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x221d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x221d40: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x221d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x221d44: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x221d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x221d48: 0xc0977ce  jal         func_25DF38
    ctx->pc = 0x221D48u;
    SET_GPR_U32(ctx, 31, 0x221D50u);
    ctx->pc = 0x221D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D48u;
    // 0x221d4c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DF38u, 0x221D48u, 0x221D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D50u;
label_221d50:
    // 0x221d50: 0x441ffc6  bgez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x221D50u;
    {
        const bool branch_taken_0x221d50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x221D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D50u;
        // 0x221d54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d50) {
            ctx->pc = 0x221C6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221c6c;
        }
    }
    ctx->pc = 0x221D58u;
    // 0x221d58: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x221D58u;
    SET_GPR_U32(ctx, 31, 0x221D60u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x221D58u, 0x221D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D60u;
label_221d60:
    // 0x221d60: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x221d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221d64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d68: 0xc089144  jal         func_224510
    ctx->pc = 0x221D68u;
    SET_GPR_U32(ctx, 31, 0x221D70u);
    ctx->pc = 0x221D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D68u;
    // 0x221d6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x221D68u, 0x221D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D70u;
label_221d70:
    // 0x221d70: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x221D70u;
    SET_GPR_U32(ctx, 31, 0x221D78u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x221D70u, 0x221D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D78u;
label_221d78:
    // 0x221d78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221d7c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x221d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221d80: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221d80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221d84: 0x24842be0  addiu       $a0, $a0, 0x2BE0
    ctx->pc = 0x221d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11232));
    // 0x221d88: 0x25082c60  addiu       $t0, $t0, 0x2C60
    ctx->pc = 0x221d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11360));
    // 0x221d8c: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x221D8Cu;
    {
        const bool branch_taken_0x221d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D8Cu;
        // 0x221d90: 0x24050067  addiu       $a1, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d8c) {
            ctx->pc = 0x221C5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221c5c;
        }
    }
    ctx->pc = 0x221D94u;
    // 0x221d94: 0x0  nop
    ctx->pc = 0x221d94u;
    // NOP
    // 0x221d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221d9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x221d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221da0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221da4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x221da4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221da8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x221da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x221dac: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x221DACu;
    {
        const bool branch_taken_0x221dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x221DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DACu;
        // 0x221db0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dac) {
            ctx->pc = 0x221DE4u;
            goto label_221de4;
        }
    }
    ctx->pc = 0x221DB4u;
    // 0x221db4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x221db4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x221db8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221dbc: 0x24e72c88  addiu       $a3, $a3, 0x2C88
    ctx->pc = 0x221dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11400));
    // 0x221dc0: 0x24842ca0  addiu       $a0, $a0, 0x2CA0
    ctx->pc = 0x221dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11424));
    // 0x221dc4: 0x2405007a  addiu       $a1, $zero, 0x7A
    ctx->pc = 0x221dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x221dc8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x221DC8u;
    SET_GPR_U32(ctx, 31, 0x221DD0u);
    ctx->pc = 0x221DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DC8u;
    // 0x221dcc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x221DC8u, 0x221DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DD0u;
label_221dd0:
    // 0x221dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x221dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dd8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x221DD8u;
    SET_GPR_U32(ctx, 31, 0x221DE0u);
    ctx->pc = 0x221DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DD8u;
    // 0x221ddc: 0x24061078  addiu       $a2, $zero, 0x1078 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x221DD8u, 0x221DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DE0u;
label_221de0:
    // 0x221de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221de4:
    // 0x221de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221de8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x221de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221dec: 0x3e00008  jr          $ra
    ctx->pc = 0x221DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DECu;
        // 0x221df0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221DF4u;
    // 0x221df4: 0x0  nop
    ctx->pc = 0x221df4u;
    // NOP
}
