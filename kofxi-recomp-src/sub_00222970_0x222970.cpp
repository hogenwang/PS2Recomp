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

// Function: sub_00222970
// Address: 0x222970 - 0x222ba0
void sub_00222970_0x222970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222970_0x222970");
#endif

    switch (ctx->pc) {
        case 0x2229acu: goto label_2229ac;
        case 0x2229bcu: goto label_2229bc;
        case 0x2229ccu: goto label_2229cc;
        case 0x2229e4u: goto label_2229e4;
        case 0x2229f0u: goto label_2229f0;
        case 0x2229f4u: goto label_2229f4;
        case 0x222a2cu: goto label_222a2c;
        case 0x222a3cu: goto label_222a3c;
        case 0x222a4cu: goto label_222a4c;
        case 0x222a80u: goto label_222a80;
        case 0x222a90u: goto label_222a90;
        case 0x222aa0u: goto label_222aa0;
        case 0x222ad4u: goto label_222ad4;
        case 0x222ae4u: goto label_222ae4;
        case 0x222af4u: goto label_222af4;
        case 0x222afcu: goto label_222afc;
        case 0x222b2cu: goto label_222b2c;
        case 0x222b3cu: goto label_222b3c;
        case 0x222b4cu: goto label_222b4c;
        case 0x222b54u: goto label_222b54;
        case 0x222b8cu: goto label_222b8c;
        default: break;
    }

    ctx->pc = 0x222970u;

    // 0x222970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x222970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x222974: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x222974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x222978: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x222978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x22297c: 0x24061009  addiu       $a2, $zero, 0x1009
    ctx->pc = 0x22297cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x222980: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x222980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x222984: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x222984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x222988: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x222988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22298c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x222990: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x222990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x222994: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x222994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222998: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x222998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x22299c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x22299cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2229a0: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x2229a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x2229a4: 0xc0977ce  jal         func_25DF38
    ctx->pc = 0x2229A4u;
    SET_GPR_U32(ctx, 31, 0x2229ACu);
    ctx->pc = 0x2229A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2229A4u;
    // 0x2229a8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DF38u, 0x2229A4u, 0x2229ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229ACu;
label_2229ac:
    // 0x2229ac: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2229ACu;
    {
        const bool branch_taken_0x2229ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2229B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229ACu;
        // 0x2229b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229ac) {
            ctx->pc = 0x222A0Cu;
            goto label_222a0c;
        }
    }
    ctx->pc = 0x2229B4u;
    // 0x2229b4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2229B4u;
    SET_GPR_U32(ctx, 31, 0x2229BCu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2229B4u, 0x2229BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229BCu;
label_2229bc:
    // 0x2229bc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2229bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2229c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2229c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2229c4: 0xc089144  jal         func_224510
    ctx->pc = 0x2229C4u;
    SET_GPR_U32(ctx, 31, 0x2229CCu);
    ctx->pc = 0x2229C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2229C4u;
    // 0x2229c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x2229C4u, 0x2229CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229CCu;
label_2229cc:
    // 0x2229cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2229ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2229d0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2229d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2229d4: 0x24842ef0  addiu       $a0, $a0, 0x2EF0
    ctx->pc = 0x2229d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12016));
    // 0x2229d8: 0x25082f00  addiu       $t0, $t0, 0x2F00
    ctx->pc = 0x2229d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12032));
    // 0x2229dc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2229dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2229e0: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x2229e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_2229e4:
    // 0x2229e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2229e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2229e8: 0xc089794  jal         func_225E50
    ctx->pc = 0x2229E8u;
    SET_GPR_U32(ctx, 31, 0x2229F0u);
    ctx->pc = 0x2229ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2229E8u;
    // 0x2229ec: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E50u, 0x2229E8u, 0x2229F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229F0u;
label_2229f0:
    // 0x2229f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2229f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2229f4:
    // 0x2229f4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2229f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2229f8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2229f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2229fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2229fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222a00: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x222a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x222a04: 0x3e00008  jr          $ra
    ctx->pc = 0x222A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A04u;
        // 0x222a08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222A0Cu;
label_222a0c:
    // 0x222a0c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x222a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x222a10: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x222a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x222a14: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x222a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x222a18: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x222a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x222a1c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x222a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a20: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x222a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x222a24: 0xc0977ce  jal         func_25DF38
    ctx->pc = 0x222A24u;
    SET_GPR_U32(ctx, 31, 0x222A2Cu);
    ctx->pc = 0x222A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A24u;
    // 0x222a28: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DF38u, 0x222A24u, 0x222A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A2Cu;
label_222a2c:
    // 0x222a2c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x222A2Cu;
    {
        const bool branch_taken_0x222a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A2Cu;
        // 0x222a30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a2c) {
            ctx->pc = 0x222A68u;
            goto label_222a68;
        }
    }
    ctx->pc = 0x222A34u;
    // 0x222a34: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222A34u;
    SET_GPR_U32(ctx, 31, 0x222A3Cu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222A34u, 0x222A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A3Cu;
label_222a3c:
    // 0x222a3c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x222a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222a40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a44: 0xc089144  jal         func_224510
    ctx->pc = 0x222A44u;
    SET_GPR_U32(ctx, 31, 0x222A4Cu);
    ctx->pc = 0x222A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A44u;
    // 0x222a48: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222A44u, 0x222A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A4Cu;
label_222a4c:
    // 0x222a4c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222a50: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x222a50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x222a54: 0x24842ef0  addiu       $a0, $a0, 0x2EF0
    ctx->pc = 0x222a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12016));
    // 0x222a58: 0x25082f20  addiu       $t0, $t0, 0x2F20
    ctx->pc = 0x222a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12064));
    // 0x222a5c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x222a5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a60: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x222A60u;
    {
        const bool branch_taken_0x222a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A60u;
        // 0x222a64: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a60) {
            ctx->pc = 0x2229E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2229e4;
        }
    }
    ctx->pc = 0x222A68u;
label_222a68:
    // 0x222a68: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x222a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x222a6c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x222a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x222a70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x222a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222a74: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x222a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x222a78: 0xc0977ce  jal         func_25DF38
    ctx->pc = 0x222A78u;
    SET_GPR_U32(ctx, 31, 0x222A80u);
    ctx->pc = 0x222A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A78u;
    // 0x222a7c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DF38u, 0x222A78u, 0x222A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A80u;
label_222a80:
    // 0x222a80: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x222A80u;
    {
        const bool branch_taken_0x222a80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x222A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A80u;
        // 0x222a84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a80) {
            ctx->pc = 0x222ABCu;
            goto label_222abc;
        }
    }
    ctx->pc = 0x222A88u;
    // 0x222a88: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222A88u;
    SET_GPR_U32(ctx, 31, 0x222A90u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222A88u, 0x222A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A90u;
label_222a90:
    // 0x222a90: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x222a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a98: 0xc089144  jal         func_224510
    ctx->pc = 0x222A98u;
    SET_GPR_U32(ctx, 31, 0x222AA0u);
    ctx->pc = 0x222A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A98u;
    // 0x222a9c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222A98u, 0x222AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AA0u;
label_222aa0:
    // 0x222aa0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222aa4: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x222aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x222aa8: 0x24842ef0  addiu       $a0, $a0, 0x2EF0
    ctx->pc = 0x222aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12016));
    // 0x222aac: 0x25082f48  addiu       $t0, $t0, 0x2F48
    ctx->pc = 0x222aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12104));
    // 0x222ab0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x222ab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ab4: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x222AB4u;
    {
        const bool branch_taken_0x222ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222AB4u;
        // 0x222ab8: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ab4) {
            ctx->pc = 0x2229E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2229e4;
        }
    }
    ctx->pc = 0x222ABCu;
label_222abc:
    // 0x222abc: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x222abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x222ac0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x222ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x222ac4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x222ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x222ac8: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x222ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x222acc: 0xc0977ce  jal         func_25DF38
    ctx->pc = 0x222ACCu;
    SET_GPR_U32(ctx, 31, 0x222AD4u);
    ctx->pc = 0x222AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222ACCu;
    // 0x222ad0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DF38u, 0x222ACCu, 0x222AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AD4u;
label_222ad4:
    // 0x222ad4: 0x4430010  bgezl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x222AD4u;
    {
        const bool branch_taken_0x222ad4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x222ad4) {
            ctx->pc = 0x222AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222AD4u;
            // 0x222ad8: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222B18u;
            goto label_222b18;
        }
    }
    ctx->pc = 0x222ADCu;
    // 0x222adc: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222ADCu;
    SET_GPR_U32(ctx, 31, 0x222AE4u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222ADCu, 0x222AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AE4u;
label_222ae4:
    // 0x222ae4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x222ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222ae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222aec: 0xc089144  jal         func_224510
    ctx->pc = 0x222AECu;
    SET_GPR_U32(ctx, 31, 0x222AF4u);
    ctx->pc = 0x222AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222AECu;
    // 0x222af0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222AECu, 0x222AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AF4u;
label_222af4:
    // 0x222af4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222AF4u;
    SET_GPR_U32(ctx, 31, 0x222AFCu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222AF4u, 0x222AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AFCu;
label_222afc:
    // 0x222afc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222b00: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x222b00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222b04: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x222b04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x222b08: 0x24842ef0  addiu       $a0, $a0, 0x2EF0
    ctx->pc = 0x222b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12016));
    // 0x222b0c: 0x25082f70  addiu       $t0, $t0, 0x2F70
    ctx->pc = 0x222b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12144));
    // 0x222b10: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
    ctx->pc = 0x222B10u;
    {
        const bool branch_taken_0x222b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B10u;
        // 0x222b14: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b10) {
            ctx->pc = 0x2229E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2229e4;
        }
    }
    ctx->pc = 0x222B18u;
label_222b18:
    // 0x222b18: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x222b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x222b1c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x222b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x222b20: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x222b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x222b24: 0xc0977ce  jal         func_25DF38
    ctx->pc = 0x222B24u;
    SET_GPR_U32(ctx, 31, 0x222B2Cu);
    ctx->pc = 0x222B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B24u;
    // 0x222b28: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DF38u, 0x222B24u, 0x222B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B2Cu;
label_222b2c:
    // 0x222b2c: 0x441ffb1  bgez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x222B2Cu;
    {
        const bool branch_taken_0x222b2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x222B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B2Cu;
        // 0x222b30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b2c) {
            ctx->pc = 0x2229F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2229f4;
        }
    }
    ctx->pc = 0x222B34u;
    // 0x222b34: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222B34u;
    SET_GPR_U32(ctx, 31, 0x222B3Cu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222B34u, 0x222B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B3Cu;
label_222b3c:
    // 0x222b3c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x222b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222b40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b44: 0xc089144  jal         func_224510
    ctx->pc = 0x222B44u;
    SET_GPR_U32(ctx, 31, 0x222B4Cu);
    ctx->pc = 0x222B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B44u;
    // 0x222b48: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222B44u, 0x222B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B4Cu;
label_222b4c:
    // 0x222b4c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222B4Cu;
    SET_GPR_U32(ctx, 31, 0x222B54u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222B4Cu, 0x222B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B54u;
label_222b54:
    // 0x222b54: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222b58: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x222b58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222b5c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x222b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x222b60: 0x24842ef0  addiu       $a0, $a0, 0x2EF0
    ctx->pc = 0x222b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12016));
    // 0x222b64: 0x25082f98  addiu       $t0, $t0, 0x2F98
    ctx->pc = 0x222b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12184));
    // 0x222b68: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x222B68u;
    {
        const bool branch_taken_0x222b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B68u;
        // 0x222b6c: 0x2405006d  addiu       $a1, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b68) {
            ctx->pc = 0x2229E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2229e4;
        }
    }
    ctx->pc = 0x222B70u;
    // 0x222b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222b78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222B78u;
    {
        const bool branch_taken_0x222b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B78u;
        // 0x222b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b78) {
            ctx->pc = 0x222B90u;
            goto label_222b90;
        }
    }
    ctx->pc = 0x222B80u;
    // 0x222b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b84: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x222B84u;
    SET_GPR_U32(ctx, 31, 0x222B8Cu);
    ctx->pc = 0x222B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B84u;
    // 0x222b88: 0x24061078  addiu       $a2, $zero, 0x1078 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x222B84u, 0x222B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B8Cu;
label_222b8c:
    // 0x222b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222b90:
    // 0x222b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222b94: 0x3e00008  jr          $ra
    ctx->pc = 0x222B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B94u;
        // 0x222b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222B9Cu;
    // 0x222b9c: 0x0  nop
    ctx->pc = 0x222b9cu;
    // NOP
}
