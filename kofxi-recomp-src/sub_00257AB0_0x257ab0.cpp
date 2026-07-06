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

// Function: sub_00257AB0
// Address: 0x257ab0 - 0x257ea8
void sub_00257AB0_0x257ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257AB0_0x257ab0");
#endif

    switch (ctx->pc) {
        case 0x257b34u: goto label_257b34;
        case 0x257b4cu: goto label_257b4c;
        case 0x257b54u: goto label_257b54;
        case 0x257b84u: goto label_257b84;
        case 0x257b90u: goto label_257b90;
        case 0x257b9cu: goto label_257b9c;
        case 0x257bacu: goto label_257bac;
        case 0x257bc8u: goto label_257bc8;
        case 0x257bd4u: goto label_257bd4;
        case 0x257be4u: goto label_257be4;
        case 0x257becu: goto label_257bec;
        case 0x257bf8u: goto label_257bf8;
        case 0x257c40u: goto label_257c40;
        case 0x257c80u: goto label_257c80;
        case 0x257cecu: goto label_257cec;
        case 0x257d00u: goto label_257d00;
        case 0x257d30u: goto label_257d30;
        case 0x257d94u: goto label_257d94;
        case 0x257db4u: goto label_257db4;
        case 0x257dc4u: goto label_257dc4;
        case 0x257dd0u: goto label_257dd0;
        case 0x257df0u: goto label_257df0;
        case 0x257e10u: goto label_257e10;
        case 0x257e70u: goto label_257e70;
        default: break;
    }

    ctx->pc = 0x257ab0u;

    // 0x257ab0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x257ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x257ab4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257ab8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x257ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x257abc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x257abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x257ac0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x257ac0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ac4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x257ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x257ac8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x257ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257acc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x257accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x257ad0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x257ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x257ad4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x257ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x257ad8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x257ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x257adc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x257adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x257ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257ae4: 0x9243003d  lbu         $v1, 0x3D($s2)
    ctx->pc = 0x257ae4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
    // 0x257ae8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x257AE8u;
    {
        const bool branch_taken_0x257ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x257AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AE8u;
        // 0x257aec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ae8) {
            ctx->pc = 0x257B3Cu;
            goto label_257b3c;
        }
    }
    ctx->pc = 0x257AF0u;
    // 0x257af0: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x257af0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x257af4: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x257af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x257af8: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x257af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x257afc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x257afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x257b00: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x257b00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x257b04: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x257b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x257b08: 0x9643008a  lhu         $v1, 0x8A($s2)
    ctx->pc = 0x257b08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
    // 0x257b0c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x257b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x257b10: 0x26570010  addiu       $s7, $s2, 0x10
    ctx->pc = 0x257b10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x257b14: 0xa2a80a  movz        $s5, $a1, $v0
    ctx->pc = 0x257b14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
    // 0x257b18: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x257b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x257b1c: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x257b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x257b20: 0x43a80b  movn        $s5, $v0, $v1
    ctx->pc = 0x257b20u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x257b24: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x257B24u;
    {
        const bool branch_taken_0x257b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B24u;
        // 0x257b28: 0x26b40028  addiu       $s4, $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b24) {
            ctx->pc = 0x257B7Cu;
            goto label_257b7c;
        }
    }
    ctx->pc = 0x257B2Cu;
    // 0x257b2c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x257B2Cu;
    SET_GPR_U32(ctx, 31, 0x257B34u);
    ctx->pc = 0x257B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B2Cu;
    // 0x257b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x257B2Cu, 0x257B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B34u;
label_257b34:
    // 0x257b34: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x257B34u;
    {
        const bool branch_taken_0x257b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257b34) {
            ctx->pc = 0x257B7Cu;
            goto label_257b7c;
        }
    }
    ctx->pc = 0x257B3Cu;
label_257b3c:
    // 0x257b3c: 0x122000ce  beqz        $s1, . + 4 + (0xCE << 2)
    ctx->pc = 0x257B3Cu;
    {
        const bool branch_taken_0x257b3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B3Cu;
        // 0x257b40: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b3c) {
            ctx->pc = 0x257E78u;
            goto label_257e78;
        }
    }
    ctx->pc = 0x257B44u;
    // 0x257b44: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x257B44u;
    SET_GPR_U32(ctx, 31, 0x257B4Cu);
    ctx->pc = 0x257B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B44u;
    // 0x257b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x257B44u, 0x257B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B4Cu;
label_257b4c:
    // 0x257b4c: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x257B4Cu;
    {
        const bool branch_taken_0x257b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B4Cu;
        // 0x257b50: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b4c) {
            ctx->pc = 0x257E78u;
            goto label_257e78;
        }
    }
    ctx->pc = 0x257B54u;
label_257b54:
    // 0x257b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257b58: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x257b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x257b5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x257b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257b60: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x257b60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x257b64: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x257b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x257b68: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x257b68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x257b6c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x257b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x257b70: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x257b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x257b74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x257B74u;
    {
        const bool branch_taken_0x257b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B74u;
        // 0x257b78: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b74) {
            ctx->pc = 0x257BB0u;
            goto label_257bb0;
        }
    }
    ctx->pc = 0x257B7Cu;
label_257b7c:
    // 0x257b7c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x257B7Cu;
    SET_GPR_U32(ctx, 31, 0x257B84u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x257B7Cu, 0x257B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B84u;
label_257b84:
    // 0x257b84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b88: 0xc098552  jal         func_261548
    ctx->pc = 0x257B88u;
    SET_GPR_U32(ctx, 31, 0x257B90u);
    ctx->pc = 0x257B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B88u;
    // 0x257b8c: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x257B88u, 0x257B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B90u;
label_257b90:
    // 0x257b90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x257b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b94: 0xc08c698  jal         func_231A60
    ctx->pc = 0x257B94u;
    SET_GPR_U32(ctx, 31, 0x257B9Cu);
    ctx->pc = 0x257B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B94u;
    // 0x257b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x257B94u, 0x257B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B9Cu;
label_257b9c:
    // 0x257b9c: 0x1620ffed  bnez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x257B9Cu;
    {
        const bool branch_taken_0x257b9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x257BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B9Cu;
        // 0x257ba0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b9c) {
            ctx->pc = 0x257B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257b54;
        }
    }
    ctx->pc = 0x257BA4u;
    // 0x257ba4: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x257BA4u;
    SET_GPR_U32(ctx, 31, 0x257BACu);
    ctx->pc = 0x257BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257BA4u;
    // 0x257ba8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x257BA4u, 0x257BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BACu;
label_257bac:
    // 0x257bac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x257bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_257bb0:
    // 0x257bb0: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x257BB0u;
    {
        const bool branch_taken_0x257bb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BB0u;
        // 0x257bb4: 0x2e8200e1  sltiu       $v0, $s4, 0xE1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bb0) {
            ctx->pc = 0x257C4Cu;
            goto label_257c4c;
        }
    }
    ctx->pc = 0x257BB8u;
    // 0x257bb8: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x257BB8u;
    {
        const bool branch_taken_0x257bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257bb8) {
            ctx->pc = 0x257C44u;
            goto label_257c44;
        }
    }
    ctx->pc = 0x257BC0u;
    // 0x257bc0: 0xc08c682  jal         func_231A08
    ctx->pc = 0x257BC0u;
    SET_GPR_U32(ctx, 31, 0x257BC8u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x257BC0u, 0x257BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BC8u;
label_257bc8:
    // 0x257bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257bcc: 0xc098552  jal         func_261548
    ctx->pc = 0x257BCCu;
    SET_GPR_U32(ctx, 31, 0x257BD4u);
    ctx->pc = 0x257BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257BCCu;
    // 0x257bd0: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x257BCCu, 0x257BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BD4u;
label_257bd4:
    // 0x257bd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x257BD4u;
    {
        const bool branch_taken_0x257bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BD4u;
        // 0x257bd8: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bd4) {
            ctx->pc = 0x257BF0u;
            goto label_257bf0;
        }
    }
    ctx->pc = 0x257BDCu;
    // 0x257bdc: 0xc08a8ec  jal         func_22A3B0
    ctx->pc = 0x257BDCu;
    SET_GPR_U32(ctx, 31, 0x257BE4u);
    ctx->pc = 0x257BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257BDCu;
    // 0x257be0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3B0u, 0x257BDCu, 0x257BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BE4u;
label_257be4:
    // 0x257be4: 0xc098552  jal         func_261548
    ctx->pc = 0x257BE4u;
    SET_GPR_U32(ctx, 31, 0x257BECu);
    ctx->pc = 0x257BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257BE4u;
    // 0x257be8: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x257BE4u, 0x257BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BECu;
label_257bec:
    // 0x257bec: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x257becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_257bf0:
    // 0x257bf0: 0xc08c698  jal         func_231A60
    ctx->pc = 0x257BF0u;
    SET_GPR_U32(ctx, 31, 0x257BF8u);
    ctx->pc = 0x257BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257BF0u;
    // 0x257bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x257BF0u, 0x257BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BF8u;
label_257bf8:
    // 0x257bf8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x257bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x257bfc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x257BFCu;
    {
        const bool branch_taken_0x257bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BFCu;
        // 0x257c00: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bfc) {
            ctx->pc = 0x257C28u;
            goto label_257c28;
        }
    }
    ctx->pc = 0x257C04u;
    // 0x257c04: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x257c04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x257c08: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x257c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x257c0c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x257c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x257c10: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x257c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x257c14: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x257c14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x257c18: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x257c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x257c1c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x257c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x257c20: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x257c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
    // 0x257c24: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x257c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_257c28:
    // 0x257c28: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x257c28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x257c2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257c30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257C30u;
    {
        const bool branch_taken_0x257c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257c30) {
            ctx->pc = 0x257C44u;
            goto label_257c44;
        }
    }
    ctx->pc = 0x257C38u;
    // 0x257c38: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x257C38u;
    SET_GPR_U32(ctx, 31, 0x257C40u);
    ctx->pc = 0x257C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257C38u;
    // 0x257c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x257C38u, 0x257C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257C40u;
label_257c40:
    // 0x257c40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x257c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257c44:
    // 0x257c44: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x257C44u;
    {
        const bool branch_taken_0x257c44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x257C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C44u;
        // 0x257c48: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c44) {
            ctx->pc = 0x257C54u;
            goto label_257c54;
        }
    }
    ctx->pc = 0x257C4Cu;
label_257c4c:
    // 0x257c4c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x257C4Cu;
    {
        const bool branch_taken_0x257c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C4Cu;
        // 0x257c50: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c4c) {
            ctx->pc = 0x257E78u;
            goto label_257e78;
        }
    }
    ctx->pc = 0x257C54u;
label_257c54:
    // 0x257c54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x257c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x257c58: 0x8c64f9e8  lw          $a0, -0x618($v1)
    ctx->pc = 0x257c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965736)));
    // 0x257c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x257c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c60: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x257c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
    // 0x257c64: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x257c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x257c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x257c6c: 0xae34000c  sw          $s4, 0xC($s1)
    ctx->pc = 0x257c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    // 0x257c70: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x257c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x257c74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x257c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c78: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x257C78u;
    SET_GPR_U32(ctx, 31, 0x257C80u);
    ctx->pc = 0x257C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257C78u;
    // 0x257c7c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x257C78u, 0x257C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257C80u;
label_257c80:
    // 0x257c80: 0x9243003d  lbu         $v1, 0x3D($s2)
    ctx->pc = 0x257c80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
    // 0x257c84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257c88: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x257C88u;
    {
        const bool branch_taken_0x257c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x257C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C88u;
        // 0x257c8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c88) {
            ctx->pc = 0x257CE0u;
            goto label_257ce0;
        }
    }
    ctx->pc = 0x257C90u;
    // 0x257c90: 0x8e360008  lw          $s6, 0x8($s1)
    ctx->pc = 0x257c90u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x257c94: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x257c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x257c98: 0x8a420043  lwl         $v0, 0x43($s2)
    ctx->pc = 0x257c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 67); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x257c9c: 0x9a420040  lwr         $v0, 0x40($s2)
    ctx->pc = 0x257c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 64); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x257ca0: 0xaac20013  swl         $v0, 0x13($s6)
    ctx->pc = 0x257ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257ca4: 0xbac20010  swr         $v0, 0x10($s6)
    ctx->pc = 0x257ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257ca8: 0x26d00014  addiu       $s0, $s6, 0x14
    ctx->pc = 0x257ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x257cac: 0x8a42005f  lwl         $v0, 0x5F($s2)
    ctx->pc = 0x257cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 95); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x257cb0: 0x9a42005c  lwr         $v0, 0x5C($s2)
    ctx->pc = 0x257cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 92); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x257cb4: 0xaac2000f  swl         $v0, 0xF($s6)
    ctx->pc = 0x257cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257cb8: 0xbac2000c  swr         $v0, 0xC($s6)
    ctx->pc = 0x257cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257cbc: 0xa2c30009  sb          $v1, 0x9($s6)
    ctx->pc = 0x257cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x257cc0: 0x9642003e  lhu         $v0, 0x3E($s2)
    ctx->pc = 0x257cc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x257cc4: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x257cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x257cc8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x257cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x257ccc: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x257cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x257cd0: 0x9642005a  lhu         $v0, 0x5A($s2)
    ctx->pc = 0x257cd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 90)));
    // 0x257cd4: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x257cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x257cd8: 0xa2c20014  sb          $v0, 0x14($s6)
    ctx->pc = 0x257cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x257cdc: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x257cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_257ce0:
    // 0x257ce0: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x257ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x257ce4: 0xc08a254  jal         func_228950
    ctx->pc = 0x257CE4u;
    SET_GPR_U32(ctx, 31, 0x257CECu);
    ctx->pc = 0x257CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257CE4u;
    // 0x257ce8: 0x26130018  addiu       $s3, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x257CE4u, 0x257CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257CECu;
label_257cec:
    // 0x257cec: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x257cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257cf0: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x257cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257cf4: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x257cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x257cf8: 0xc08a254  jal         func_228950
    ctx->pc = 0x257CF8u;
    SET_GPR_U32(ctx, 31, 0x257D00u);
    ctx->pc = 0x257CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257CF8u;
    // 0x257cfc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x257CF8u, 0x257D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D00u;
label_257d00:
    // 0x257d00: 0xaa02000b  swl         $v0, 0xB($s0)
    ctx->pc = 0x257d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257d04: 0xba020008  swr         $v0, 0x8($s0)
    ctx->pc = 0x257d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x257d08: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x257d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x257d0c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x257d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x257d10: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x257d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x257d14: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x257d14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x257d18: 0xa204000d  sb          $a0, 0xD($s0)
    ctx->pc = 0x257d18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x257d1c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x257d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x257d20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x257d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x257d24: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x257d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x257d28: 0xc08a262  jal         func_228988
    ctx->pc = 0x257D28u;
    SET_GPR_U32(ctx, 31, 0x257D30u);
    ctx->pc = 0x257D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D28u;
    // 0x257d2c: 0x96440028  lhu         $a0, 0x28($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x257D28u, 0x257D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D30u;
label_257d30:
    // 0x257d30: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x257d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x257d34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x257d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x257d38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x257d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257d3c: 0xa203000f  sb          $v1, 0xF($s0)
    ctx->pc = 0x257d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x257d40: 0xa2050014  sb          $a1, 0x14($s0)
    ctx->pc = 0x257d40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 5));
    // 0x257d44: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x257d44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x257d48: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x257d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x257d4c: 0xa2040015  sb          $a0, 0x15($s0)
    ctx->pc = 0x257d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 4));
    // 0x257d50: 0xa202000e  sb          $v0, 0xE($s0)
    ctx->pc = 0x257d50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x257d54: 0x96420092  lhu         $v0, 0x92($s2)
    ctx->pc = 0x257d54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x257d58: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x257d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x257d5c: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x257d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x257d60: 0x92430092  lbu         $v1, 0x92($s2)
    ctx->pc = 0x257d60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x257d64: 0xa2030017  sb          $v1, 0x17($s0)
    ctx->pc = 0x257d64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 3));
    // 0x257d68: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x257d68u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x257d6c: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x257d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x257d70: 0x10460009  beq         $v0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x257D70u;
    {
        const bool branch_taken_0x257d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x257D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D70u;
        // 0x257d74: 0x3c020103  lui         $v0, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d70) {
            ctx->pc = 0x257D98u;
            goto label_257d98;
        }
    }
    ctx->pc = 0x257D78u;
    // 0x257d78: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x257d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x257d7c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x257d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x257d80: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x257d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x257d84: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x257d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x257d88: 0x2613001c  addiu       $s3, $s0, 0x1C
    ctx->pc = 0x257d88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x257d8c: 0xc08a254  jal         func_228950
    ctx->pc = 0x257D8Cu;
    SET_GPR_U32(ctx, 31, 0x257D94u);
    ctx->pc = 0x257D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D8Cu;
    // 0x257d90: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x257D8Cu, 0x257D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D94u;
label_257d94:
    // 0x257d94: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x257d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_257d98:
    // 0x257d98: 0x9642008a  lhu         $v0, 0x8A($s2)
    ctx->pc = 0x257d98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
    // 0x257d9c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x257d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x257da0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x257DA0u;
    {
        const bool branch_taken_0x257da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257da0) {
            ctx->pc = 0x257DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257DA0u;
            // 0x257da4: 0x9253003d  lbu         $s3, 0x3D($s2) (Delay Slot)
            SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257DD8u;
            goto label_257dd8;
        }
    }
    ctx->pc = 0x257DA8u;
    // 0x257da8: 0x3c040101  lui         $a0, 0x101
    ctx->pc = 0x257da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)257 << 16));
    // 0x257dac: 0xc08a254  jal         func_228950
    ctx->pc = 0x257DACu;
    SET_GPR_U32(ctx, 31, 0x257DB4u);
    ctx->pc = 0x257DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DACu;
    // 0x257db0: 0x3484080a  ori         $a0, $a0, 0x80A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2058);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x257DACu, 0x257DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DB4u;
label_257db4:
    // 0x257db4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x257db4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x257db8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x257db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x257dbc: 0xc08a254  jal         func_228950
    ctx->pc = 0x257DBCu;
    SET_GPR_U32(ctx, 31, 0x257DC4u);
    ctx->pc = 0x257DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DBCu;
    // 0x257dc0: 0x8c441528  lw          $a0, 0x1528($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x257DBCu, 0x257DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DC4u;
label_257dc4:
    // 0x257dc4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x257dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x257dc8: 0xc08a254  jal         func_228950
    ctx->pc = 0x257DC8u;
    SET_GPR_U32(ctx, 31, 0x257DD0u);
    ctx->pc = 0x257DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DC8u;
    // 0x257dcc: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x257DC8u, 0x257DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DD0u;
label_257dd0:
    // 0x257dd0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x257dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x257dd4: 0x9253003d  lbu         $s3, 0x3D($s2)
    ctx->pc = 0x257dd4u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
label_257dd8:
    // 0x257dd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257ddc: 0x16620026  bne         $s3, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x257DDCu;
    {
        const bool branch_taken_0x257ddc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x257DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257DDCu;
        // 0x257de0: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ddc) {
            ctx->pc = 0x257E78u;
            goto label_257e78;
        }
    }
    ctx->pc = 0x257DE4u;
    // 0x257de4: 0x2684ffec  addiu       $a0, $s4, -0x14
    ctx->pc = 0x257de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
    // 0x257de8: 0xc08a262  jal         func_228988
    ctx->pc = 0x257DE8u;
    SET_GPR_U32(ctx, 31, 0x257DF0u);
    ctx->pc = 0x257DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DE8u;
    // 0x257dec: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x257DE8u, 0x257DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DF0u;
label_257df0:
    // 0x257df0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x257df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x257df4: 0xa2c20002  sb          $v0, 0x2($s6)
    ctx->pc = 0x257df4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x257df8: 0xa2c30003  sb          $v1, 0x3($s6)
    ctx->pc = 0x257df8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x257dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e00: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x257e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x257e04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x257e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e08: 0xc092d7e  jal         func_24B5F8
    ctx->pc = 0x257E08u;
    SET_GPR_U32(ctx, 31, 0x257E10u);
    ctx->pc = 0x257E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E08u;
    // 0x257e0c: 0xa2000011  sb          $zero, 0x11($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5F8u, 0x257E08u, 0x257E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E10u;
label_257e10:
    // 0x257e10: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x257e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x257e14: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x257e14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x257e18: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x257e18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x257e1c: 0x9244003d  lbu         $a0, 0x3D($s2)
    ctx->pc = 0x257e1cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
    // 0x257e20: 0x14930015  bne         $a0, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x257E20u;
    {
        const bool branch_taken_0x257e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x257E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E20u;
        // 0x257e24: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e20) {
            ctx->pc = 0x257E78u;
            goto label_257e78;
        }
    }
    ctx->pc = 0x257E28u;
    // 0x257e28: 0x141a02  srl         $v1, $s4, 8
    ctx->pc = 0x257e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
    // 0x257e2c: 0xa2d40002  sb          $s4, 0x2($s6)
    ctx->pc = 0x257e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x257e30: 0xa2c30003  sb          $v1, 0x3($s6)
    ctx->pc = 0x257e30u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x257e34: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x257e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x257e38: 0x90431010  lbu         $v1, 0x1010($v0)
    ctx->pc = 0x257e38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4112)));
    // 0x257e3c: 0xa2c30008  sb          $v1, 0x8($s6)
    ctx->pc = 0x257e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x257e40: 0x9242003d  lbu         $v0, 0x3D($s2)
    ctx->pc = 0x257e40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
    // 0x257e44: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x257E44u;
    {
        const bool branch_taken_0x257e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x257E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E44u;
        // 0x257e48: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e44) {
            ctx->pc = 0x257E78u;
            goto label_257e78;
        }
    }
    ctx->pc = 0x257E4Cu;
    // 0x257e4c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x257e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x257e50: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x257e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x257e54: 0x8c431020  lw          $v1, 0x1020($v0)
    ctx->pc = 0x257e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4128)));
    // 0x257e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e5c: 0x8e45008c  lw          $a1, 0x8C($s2)
    ctx->pc = 0x257e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x257e60: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x257e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e64: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x257e64u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x257e68: 0xc0942d4  jal         func_250B50
    ctx->pc = 0x257E68u;
    SET_GPR_U32(ctx, 31, 0x257E70u);
    ctx->pc = 0x257E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E68u;
    // 0x257e6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B50u, 0x257E68u, 0x257E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E70u;
label_257e70:
    // 0x257e70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257E70u;
    {
        const bool branch_taken_0x257e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E70u;
        // 0x257e74: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e70) {
            ctx->pc = 0x257E7Cu;
            goto label_257e7c;
        }
    }
    ctx->pc = 0x257E78u;
label_257e78:
    // 0x257e78: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x257e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_257e7c:
    // 0x257e7c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x257e7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257e80: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x257e80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x257e84: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x257e84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x257e88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x257e88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257e8c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x257e8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x257e90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257e94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x257e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x257e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x257E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E9Cu;
        // 0x257ea0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257EA4u;
    // 0x257ea4: 0x0  nop
    ctx->pc = 0x257ea4u;
    // NOP
}
