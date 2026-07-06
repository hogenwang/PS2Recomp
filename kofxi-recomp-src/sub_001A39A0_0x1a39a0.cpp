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

// Function: sub_001A39A0
// Address: 0x1a39a0 - 0x1a3d10
void sub_001A39A0_0x1a39a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A39A0_0x1a39a0");
#endif

    switch (ctx->pc) {
        case 0x1a39c0u: goto label_1a39c0;
        case 0x1a39d4u: goto label_1a39d4;
        case 0x1a39f4u: goto label_1a39f4;
        case 0x1a3a18u: goto label_1a3a18;
        case 0x1a3a34u: goto label_1a3a34;
        case 0x1a3a5cu: goto label_1a3a5c;
        case 0x1a3a70u: goto label_1a3a70;
        case 0x1a3a98u: goto label_1a3a98;
        case 0x1a3ab8u: goto label_1a3ab8;
        case 0x1a3afcu: goto label_1a3afc;
        case 0x1a3b18u: goto label_1a3b18;
        case 0x1a3b38u: goto label_1a3b38;
        case 0x1a3b48u: goto label_1a3b48;
        case 0x1a3b60u: goto label_1a3b60;
        case 0x1a3b74u: goto label_1a3b74;
        case 0x1a3b98u: goto label_1a3b98;
        case 0x1a3bacu: goto label_1a3bac;
        case 0x1a3bc0u: goto label_1a3bc0;
        case 0x1a3bd0u: goto label_1a3bd0;
        case 0x1a3bf0u: goto label_1a3bf0;
        case 0x1a3bf8u: goto label_1a3bf8;
        case 0x1a3c1cu: goto label_1a3c1c;
        case 0x1a3c50u: goto label_1a3c50;
        case 0x1a3c58u: goto label_1a3c58;
        case 0x1a3c80u: goto label_1a3c80;
        case 0x1a3c88u: goto label_1a3c88;
        case 0x1a3c94u: goto label_1a3c94;
        case 0x1a3c98u: goto label_1a3c98;
        case 0x1a3cb8u: goto label_1a3cb8;
        case 0x1a3cc8u: goto label_1a3cc8;
        case 0x1a3cd0u: goto label_1a3cd0;
        default: break;
    }

    ctx->pc = 0x1a39a0u;

    // 0x1a39a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a39a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a39a4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a39a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a39a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a39a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a39ac: 0x2484f520  addiu       $a0, $a0, -0xAE0
    ctx->pc = 0x1a39acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964512));
    // 0x1a39b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a39b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a39b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a39b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a39b8: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1A39B8u;
    SET_GPR_U32(ctx, 31, 0x1A39C0u);
    ctx->pc = 0x1A39BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A39B8u;
    // 0x1a39bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1A39B8u, 0x1A39C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A39C0u;
label_1a39c0:
    // 0x1a39c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a39c4: 0x80426be0  lb          $v0, 0x6BE0($v0)
    ctx->pc = 0x1a39c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 27616)));
    // 0x1a39c8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1A39C8u;
    {
        const bool branch_taken_0x1a39c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39C8u;
        // 0x1a39cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39c8) {
            ctx->pc = 0x1A3AF0u;
            goto label_1a3af0;
        }
    }
    ctx->pc = 0x1A39D0u;
    // 0x1a39d0: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1a39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1a39d4:
    // 0x1a39d4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a39d8: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x1a39d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a39dc: 0x244269e0  addiu       $v0, $v0, 0x69E0
    ctx->pc = 0x1a39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27104));
    // 0x1a39e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a39e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a39e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a39e8: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1a39e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a39ec: 0xc045714  jal         func_115C50
    ctx->pc = 0x1A39ECu;
    SET_GPR_U32(ctx, 31, 0x1A39F4u);
    ctx->pc = 0x1A39F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A39ECu;
    // 0x1a39f0: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C50u, 0x1A39ECu, 0x1A39F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A39F4u;
label_1a39f4:
    // 0x1a39f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a39f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a39f8: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A39F8u;
    {
        const bool branch_taken_0x1a39f8 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1a39f8) {
            ctx->pc = 0x1A3A20u;
            goto label_1a3a20;
        }
    }
    ctx->pc = 0x1A3A00u;
    // 0x1a3a00: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a3a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a3a04: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3a08: 0x244269e0  addiu       $v0, $v0, 0x69E0
    ctx->pc = 0x1a3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27104));
    // 0x1a3a0c: 0x2484f540  addiu       $a0, $a0, -0xAC0
    ctx->pc = 0x1a3a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964544));
    // 0x1a3a10: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1A3A10u;
    SET_GPR_U32(ctx, 31, 0x1A3A18u);
    ctx->pc = 0x1A3A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A10u;
    // 0x1a3a14: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1A3A10u, 0x1A3A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A18u;
label_1a3a18:
    // 0x1a3a18: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1A3A18u;
    {
        const bool branch_taken_0x1a3a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A18u;
        // 0x1a3a1c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a18) {
            ctx->pc = 0x1A3AC0u;
            goto label_1a3ac0;
        }
    }
    ctx->pc = 0x1A3A20u;
label_1a3a20:
    // 0x1a3a20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a2c: 0xc04566e  jal         func_1159B8
    ctx->pc = 0x1A3A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A3A34u);
    ctx->pc = 0x1A3A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A2Cu;
    // 0x1a3a30: 0x27a7004c  addiu       $a3, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159B8u, 0x1A3A2Cu, 0x1A3A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A34u;
label_1a3a34:
    // 0x1a3a34: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A3A34u;
    {
        const bool branch_taken_0x1a3a34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a3a34) {
            ctx->pc = 0x1A3A68u;
            goto label_1a3a68;
        }
    }
    ctx->pc = 0x1A3A3Cu;
    // 0x1a3a3c: 0x641000a  bgez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1A3A3Cu;
    {
        const bool branch_taken_0x1a3a3c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1a3a3c) {
            ctx->pc = 0x1A3A68u;
            goto label_1a3a68;
        }
    }
    ctx->pc = 0x1A3A44u;
    // 0x1a3a44: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a3a48: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3a4c: 0x244269e0  addiu       $v0, $v0, 0x69E0
    ctx->pc = 0x1a3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27104));
    // 0x1a3a50: 0x2484f560  addiu       $a0, $a0, -0xAA0
    ctx->pc = 0x1a3a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964576));
    // 0x1a3a54: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1A3A54u;
    SET_GPR_U32(ctx, 31, 0x1A3A5Cu);
    ctx->pc = 0x1A3A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A54u;
    // 0x1a3a58: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1A3A54u, 0x1A3A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A5Cu;
label_1a3a5c:
    // 0x1a3a5c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A3A5Cu;
    {
        const bool branch_taken_0x1a3a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A5Cu;
        // 0x1a3a60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a5c) {
            ctx->pc = 0x1A3AC0u;
            goto label_1a3ac0;
        }
    }
    ctx->pc = 0x1A3A64u;
    // 0x1a3a64: 0x0  nop
    ctx->pc = 0x1a3a64u;
    // NOP
label_1a3a68:
    // 0x1a3a68: 0xc0456f0  jal         func_115BC0
    ctx->pc = 0x1A3A68u;
    SET_GPR_U32(ctx, 31, 0x1A3A70u);
    ctx->pc = 0x1A3A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A68u;
    // 0x1a3a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115BC0u, 0x1A3A68u, 0x1A3A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A70u;
label_1a3a70:
    // 0x1a3a70: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A3A70u;
    {
        const bool branch_taken_0x1a3a70 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a3a70) {
            ctx->pc = 0x1A3AA0u;
            goto label_1a3aa0;
        }
    }
    ctx->pc = 0x1A3A78u;
    // 0x1a3a78: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A3A78u;
    {
        const bool branch_taken_0x1a3a78 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1a3a78) {
            ctx->pc = 0x1A3AA0u;
            goto label_1a3aa0;
        }
    }
    ctx->pc = 0x1A3A80u;
    // 0x1a3a80: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a3a84: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3a88: 0x244269e0  addiu       $v0, $v0, 0x69E0
    ctx->pc = 0x1a3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27104));
    // 0x1a3a8c: 0x2484f580  addiu       $a0, $a0, -0xA80
    ctx->pc = 0x1a3a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964608));
    // 0x1a3a90: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1A3A90u;
    SET_GPR_U32(ctx, 31, 0x1A3A98u);
    ctx->pc = 0x1A3A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A90u;
    // 0x1a3a94: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1A3A90u, 0x1A3A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A98u;
label_1a3a98:
    // 0x1a3a98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A3A98u;
    {
        const bool branch_taken_0x1a3a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A98u;
        // 0x1a3a9c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a98) {
            ctx->pc = 0x1A3AC0u;
            goto label_1a3ac0;
        }
    }
    ctx->pc = 0x1A3AA0u;
label_1a3aa0:
    // 0x1a3aa0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a3aa4: 0x244269e0  addiu       $v0, $v0, 0x69E0
    ctx->pc = 0x1a3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27104));
    // 0x1a3aa8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3aac: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x1a3aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a3ab0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1A3AB0u;
    SET_GPR_U32(ctx, 31, 0x1A3AB8u);
    ctx->pc = 0x1A3AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AB0u;
    // 0x1a3ab4: 0x2484f5a0  addiu       $a0, $a0, -0xA60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1A3AB0u, 0x1A3AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3AB8u;
label_1a3ab8:
    // 0x1a3ab8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a3ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a3abc: 0x0  nop
    ctx->pc = 0x1a3abcu;
    // NOP
label_1a3ac0:
    // 0x1a3ac0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1a3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1a3ac4: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x1a3ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a3ac8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3acc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a3accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a3ad0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3ad4: 0x24426be0  addiu       $v0, $v0, 0x6BE0
    ctx->pc = 0x1a3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27616));
    // 0x1a3ad8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3ae0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1a3ae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3ae4: 0x5440ffbb  bnel        $v0, $zero, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1A3AE4u;
    {
        const bool branch_taken_0x1a3ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3ae4) {
            ctx->pc = 0x1A3AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3AE4u;
            // 0x1a3ae8: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A39D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a39d4;
        }
    }
    ctx->pc = 0x1A3AECu;
    // 0x1a3aec: 0x0  nop
    ctx->pc = 0x1a3aecu;
    // NOP
label_1a3af0:
    // 0x1a3af0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3af4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1A3AF4u;
    SET_GPR_U32(ctx, 31, 0x1A3AFCu);
    ctx->pc = 0x1A3AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AF4u;
    // 0x1a3af8: 0x2484f5b0  addiu       $a0, $a0, -0xA50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1A3AF4u, 0x1A3AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3AFCu;
label_1a3afc:
    // 0x1a3afc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a3b00: 0x80426be0  lb          $v0, 0x6BE0($v0)
    ctx->pc = 0x1a3b00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 27616)));
    // 0x1a3b04: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1A3B04u;
    {
        const bool branch_taken_0x1a3b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3b04) {
            ctx->pc = 0x1A3BF0u;
            goto label_1a3bf0;
        }
    }
    ctx->pc = 0x1A3B0Cu;
    // 0x1a3b0c: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x1a3b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x1a3b10: 0x26316be0  addiu       $s1, $s1, 0x6BE0
    ctx->pc = 0x1a3b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27616));
    // 0x1a3b14: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a3b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b18:
    // 0x1a3b18: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1a3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1a3b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3b20: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A3B20u;
    {
        const bool branch_taken_0x1a3b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3b20) {
            ctx->pc = 0x1A3B50u;
            goto label_1a3b50;
        }
    }
    ctx->pc = 0x1A3B28u;
    // 0x1a3b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b30: 0xc0457fa  jal         func_115FE8
    ctx->pc = 0x1A3B30u;
    SET_GPR_U32(ctx, 31, 0x1A3B38u);
    ctx->pc = 0x1A3B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B30u;
    // 0x1a3b34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FE8u, 0x1A3B30u, 0x1A3B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B38u;
label_1a3b38:
    // 0x1a3b38: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A3B38u;
    {
        const bool branch_taken_0x1a3b38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a3b38) {
            ctx->pc = 0x1A3BE0u;
            goto label_1a3be0;
        }
    }
    ctx->pc = 0x1A3B40u;
    // 0x1a3b40: 0xc068f44  jal         func_1A3D10
    ctx->pc = 0x1A3B40u;
    SET_GPR_U32(ctx, 31, 0x1A3B48u);
    ctx->pc = 0x1A3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3D10u, 0x1A3B40u, 0x1A3B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B48u;
label_1a3b48:
    // 0x1a3b48: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A3B48u;
    {
        const bool branch_taken_0x1a3b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3b48) {
            ctx->pc = 0x1A3BE0u;
            goto label_1a3be0;
        }
    }
    ctx->pc = 0x1A3B50u;
label_1a3b50:
    // 0x1a3b50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a3b54: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A3B54u;
    {
        const bool branch_taken_0x1a3b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3b54) {
            ctx->pc = 0x1A3B88u;
            goto label_1a3b88;
        }
    }
    ctx->pc = 0x1A3B5Cu;
    // 0x1a3b5c: 0x0  nop
    ctx->pc = 0x1a3b5cu;
    // NOP
label_1a3b60:
    // 0x1a3b60: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x1a3b60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x1a3b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b68: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x1a3b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a3b6c: 0xc0457fa  jal         func_115FE8
    ctx->pc = 0x1A3B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A3B74u);
    ctx->pc = 0x1A3B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B6Cu;
    // 0x1a3b70: 0x24c6f480  addiu       $a2, $a2, -0xB80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FE8u, 0x1A3B6Cu, 0x1A3B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B74u;
label_1a3b74:
    // 0x1a3b74: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A3B74u;
    {
        const bool branch_taken_0x1a3b74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a3b74) {
            ctx->pc = 0x1A3B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3b60;
        }
    }
    ctx->pc = 0x1A3B7Cu;
    // 0x1a3b7c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A3B7Cu;
    {
        const bool branch_taken_0x1a3b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3b7c) {
            ctx->pc = 0x1A3BE0u;
            goto label_1a3be0;
        }
    }
    ctx->pc = 0x1A3B84u;
    // 0x1a3b84: 0x0  nop
    ctx->pc = 0x1a3b84u;
    // NOP
label_1a3b88:
    // 0x1a3b88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3b8c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A3B8Cu;
    {
        const bool branch_taken_0x1a3b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3b8c) {
            ctx->pc = 0x1A3BC0u;
            goto label_1a3bc0;
        }
    }
    ctx->pc = 0x1A3B94u;
    // 0x1a3b94: 0x0  nop
    ctx->pc = 0x1a3b94u;
    // NOP
label_1a3b98:
    // 0x1a3b98: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x1a3b98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x1a3b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ba0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1a3ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1a3ba4: 0xc0457fa  jal         func_115FE8
    ctx->pc = 0x1A3BA4u;
    SET_GPR_U32(ctx, 31, 0x1A3BACu);
    ctx->pc = 0x1A3BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BA4u;
    // 0x1a3ba8: 0x24c6f4e0  addiu       $a2, $a2, -0xB20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FE8u, 0x1A3BA4u, 0x1A3BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BACu;
label_1a3bac:
    // 0x1a3bac: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A3BACu;
    {
        const bool branch_taken_0x1a3bac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a3bac) {
            ctx->pc = 0x1A3B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3b98;
        }
    }
    ctx->pc = 0x1A3BB4u;
    // 0x1a3bb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A3BB4u;
    {
        const bool branch_taken_0x1a3bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3bb4) {
            ctx->pc = 0x1A3BE0u;
            goto label_1a3be0;
        }
    }
    ctx->pc = 0x1A3BBCu;
    // 0x1a3bbc: 0x0  nop
    ctx->pc = 0x1a3bbcu;
    // NOP
label_1a3bc0:
    // 0x1a3bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bc8: 0xc0457fa  jal         func_115FE8
    ctx->pc = 0x1A3BC8u;
    SET_GPR_U32(ctx, 31, 0x1A3BD0u);
    ctx->pc = 0x1A3BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BC8u;
    // 0x1a3bcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FE8u, 0x1A3BC8u, 0x1A3BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BD0u;
label_1a3bd0:
    // 0x1a3bd0: 0x0  nop
    ctx->pc = 0x1a3bd0u;
    // NOP
    // 0x1a3bd4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A3BD4u;
    {
        const bool branch_taken_0x1a3bd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a3bd4) {
            ctx->pc = 0x1A3BC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3bc0;
        }
    }
    ctx->pc = 0x1A3BDCu;
    // 0x1a3bdc: 0x0  nop
    ctx->pc = 0x1a3bdcu;
    // NOP
label_1a3be0:
    // 0x1a3be0: 0x26310054  addiu       $s1, $s1, 0x54
    ctx->pc = 0x1a3be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x1a3be4: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1a3be4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a3be8: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1A3BE8u;
    {
        const bool branch_taken_0x1a3be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BE8u;
        // 0x1a3bec: 0x26100054  addiu       $s0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3be8) {
            ctx->pc = 0x1A3B18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3b18;
        }
    }
    ctx->pc = 0x1A3BF0u;
label_1a3bf0:
    // 0x1a3bf0: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A3BF0u;
    SET_GPR_U32(ctx, 31, 0x1A3BF8u);
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A3BF0u, 0x1A3BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BF8u;
label_1a3bf8:
    // 0x1a3bf8: 0x0  nop
    ctx->pc = 0x1a3bf8u;
    // NOP
    // 0x1a3bfc: 0x0  nop
    ctx->pc = 0x1a3bfcu;
    // NOP
    // 0x1a3c00: 0x0  nop
    ctx->pc = 0x1a3c00u;
    // NOP
    // 0x1a3c04: 0x0  nop
    ctx->pc = 0x1a3c04u;
    // NOP
    // 0x1a3c08: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A3C08u;
    {
        const bool branch_taken_0x1a3c08 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a3c08) {
            ctx->pc = 0x1A3BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3bf0;
        }
    }
    ctx->pc = 0x1A3C10u;
    // 0x1a3c10: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3c14: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1A3C14u;
    SET_GPR_U32(ctx, 31, 0x1A3C1Cu);
    ctx->pc = 0x1A3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C14u;
    // 0x1a3c18: 0x2484f5d0  addiu       $a0, $a0, -0xA30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1A3C14u, 0x1A3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C1Cu;
label_1a3c1c:
    // 0x1a3c1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a3c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3c20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a3c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C2Cu;
        // 0x1a3c30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3C34u;
    // 0x1a3c34: 0x0  nop
    ctx->pc = 0x1a3c34u;
    // NOP
    // 0x1a3c38: 0x0  nop
    ctx->pc = 0x1a3c38u;
    // NOP
    // 0x1a3c3c: 0x0  nop
    ctx->pc = 0x1a3c3cu;
    // NOP
    // 0x1a3c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c50:
    // 0x1a3c50: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1A3C50u;
    SET_GPR_U32(ctx, 31, 0x1A3C58u);
    ctx->pc = 0x1A3C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C50u;
    // 0x1a3c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x1A3C50u, 0x1A3C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C58u;
label_1a3c58:
    // 0x1a3c58: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a3c5c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1a3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1a3c60: 0x8c429478  lw          $v0, -0x6B88($v0)
    ctx->pc = 0x1a3c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
    // 0x1a3c64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a3c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a3c68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a3c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a3c6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a3c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a3c70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3C70u;
    {
        const bool branch_taken_0x1a3c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c70) {
            ctx->pc = 0x1A3C80u;
            goto label_1a3c80;
        }
    }
    ctx->pc = 0x1A3C78u;
    // 0x1a3c78: 0xc0bb32c  jal         func_2ECCB0
    ctx->pc = 0x1A3C78u;
    SET_GPR_U32(ctx, 31, 0x1A3C80u);
    ctx->pc = 0x2ECCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECCB0u, 0x1A3C78u, 0x1A3C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C80u;
label_1a3c80:
    // 0x1a3c80: 0xc087b68  jal         func_21EDA0
    ctx->pc = 0x1A3C80u;
    SET_GPR_U32(ctx, 31, 0x1A3C88u);
    ctx->pc = 0x21EDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EDA0u, 0x1A3C80u, 0x1A3C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C88u;
label_1a3c88:
    // 0x1a3c88: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3c8c: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A3C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A3C94u);
    ctx->pc = 0x1A3C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C8Cu;
    // 0x1a3c90: 0x2484f5f0  addiu       $a0, $a0, -0xA10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x1A3C8Cu, 0x1A3C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C94u;
label_1a3c94:
    // 0x1a3c94: 0x0  nop
    ctx->pc = 0x1a3c94u;
    // NOP
label_1a3c98:
    // 0x1a3c98: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3c9c: 0x2484f610  addiu       $a0, $a0, -0x9F0
    ctx->pc = 0x1a3c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    // 0x1a3ca0: 0x24054402  addiu       $a1, $zero, 0x4402
    ctx->pc = 0x1a3ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17410));
    // 0x1a3ca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ca8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a3ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3cac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a3cacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3cb0: 0xc045286  jal         func_114A18
    ctx->pc = 0x1A3CB0u;
    SET_GPR_U32(ctx, 31, 0x1A3CB8u);
    ctx->pc = 0x1A3CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CB0u;
    // 0x1a3cb4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A18u, 0x1A3CB0u, 0x1A3CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CB8u;
label_1a3cb8:
    // 0x1a3cb8: 0x440fff7  bltz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A3CB8u;
    {
        const bool branch_taken_0x1a3cb8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a3cb8) {
            ctx->pc = 0x1A3C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3c98;
        }
    }
    ctx->pc = 0x1A3CC0u;
    // 0x1a3cc0: 0xc043fb2  jal         func_10FEC8
    ctx->pc = 0x1A3CC0u;
    SET_GPR_U32(ctx, 31, 0x1A3CC8u);
    ctx->pc = 0x10FEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FEC8u, 0x1A3CC0u, 0x1A3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CC8u;
label_1a3cc8:
    // 0x1a3cc8: 0xc047218  jal         func_11C860
    ctx->pc = 0x1A3CC8u;
    SET_GPR_U32(ctx, 31, 0x1A3CD0u);
    ctx->pc = 0x1A3CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CC8u;
    // 0x1a3ccc: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C860u, 0x1A3CC8u, 0x1A3CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CD0u;
label_1a3cd0:
    // 0x1a3cd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a3cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a3cd4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a3cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a3cd8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A3CD8u;
    {
        const bool branch_taken_0x1a3cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cd8) {
            ctx->pc = 0x1A3CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3cc8;
        }
    }
    ctx->pc = 0x1A3CE0u;
    // 0x1a3ce0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a3ce4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A3CE4u;
    {
        const bool branch_taken_0x1a3ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3ce4) {
            ctx->pc = 0x1A3CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3cc8;
        }
    }
    ctx->pc = 0x1A3CECu;
    // 0x1a3cec: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x1A3CECu;
    {
        const bool branch_taken_0x1a3cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cec) {
            ctx->pc = 0x1A3C50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3c50;
        }
    }
    ctx->pc = 0x1A3CF4u;
    // 0x1a3cf4: 0x0  nop
    ctx->pc = 0x1a3cf4u;
    // NOP
    // 0x1a3cf8: 0x0  nop
    ctx->pc = 0x1a3cf8u;
    // NOP
    // 0x1a3cfc: 0x0  nop
    ctx->pc = 0x1a3cfcu;
    // NOP
    // 0x1a3d00: 0x8043324  j           func_10CC90
    ctx->pc = 0x1A3D00u;
    ctx->pc = 0x10CC90u;
    kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime); return;
    ctx->pc = 0x1A3D08u;
    // 0x1a3d08: 0x0  nop
    ctx->pc = 0x1a3d08u;
    // NOP
    // 0x1a3d0c: 0x0  nop
    ctx->pc = 0x1a3d0cu;
    // NOP
    if (ctx->pc == 0x1a3d0cu) { ctx->pc = 0x1a3d10u; }
}
