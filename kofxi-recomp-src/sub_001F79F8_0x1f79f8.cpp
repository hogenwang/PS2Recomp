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

// Function: sub_001F79F8
// Address: 0x1f79f8 - 0x1f7b40
void sub_001F79F8_0x1f79f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F79F8_0x1f79f8");
#endif

    switch (ctx->pc) {
        case 0x1f7a30u: goto label_1f7a30;
        case 0x1f7a78u: goto label_1f7a78;
        case 0x1f7ae8u: goto label_1f7ae8;
        case 0x1f7afcu: goto label_1f7afc;
        case 0x1f7b10u: goto label_1f7b10;
        default: break;
    }

    ctx->pc = 0x1f79f8u;

    // 0x1f79f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f79f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f79fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f79fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a04: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f7a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f7a08: 0x8e020a24  lw          $v0, 0xA24($s0)
    ctx->pc = 0x1f7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2596)));
    // 0x1f7a0c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7A0Cu;
    {
        const bool branch_taken_0x1f7a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7a0c) {
            ctx->pc = 0x1F7A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7A0Cu;
            // 0x1f7a10: 0x8e020a20  lw          $v0, 0xA20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7A34u;
            goto label_1f7a34;
        }
    }
    ctx->pc = 0x1F7A14u;
    // 0x1f7a14: 0x8e030a48  lw          $v1, 0xA48($s0)
    ctx->pc = 0x1f7a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2632)));
    // 0x1f7a18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7a1c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7A1Cu;
    {
        const bool branch_taken_0x1f7a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7a1c) {
            ctx->pc = 0x1F7A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7A1Cu;
            // 0x1f7a20: 0x8e020a20  lw          $v0, 0xA20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7A34u;
            goto label_1f7a34;
        }
    }
    ctx->pc = 0x1F7A24u;
    // 0x1f7a24: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f7a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f7a28: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1F7A28u;
    SET_GPR_U32(ctx, 31, 0x1F7A30u);
    ctx->pc = 0x1F7A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7A28u;
    // 0x1f7a2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE40u, 0x1F7A28u, 0x1F7A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A30u;
label_1f7a30:
    // 0x1f7a30: 0x8e020a20  lw          $v0, 0xA20($s0)
    ctx->pc = 0x1f7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2592)));
label_1f7a34:
    // 0x1f7a34: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F7A34u;
    {
        const bool branch_taken_0x1f7a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7a34) {
            ctx->pc = 0x1F7A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7A34u;
            // 0x1f7a38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7A68u;
            goto label_1f7a68;
        }
    }
    ctx->pc = 0x1F7A3Cu;
    // 0x1f7a3c: 0x8e030a48  lw          $v1, 0xA48($s0)
    ctx->pc = 0x1f7a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2632)));
    // 0x1f7a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7a44: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7A44u;
    {
        const bool branch_taken_0x1f7a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7a44) {
            ctx->pc = 0x1F7A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7A44u;
            // 0x1f7a48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7A68u;
            goto label_1f7a68;
        }
    }
    ctx->pc = 0x1F7A4Cu;
    // 0x1f7a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7a54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f7a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7a58: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f7a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f7a5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f7a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7a60: 0x807eb90  j           func_1FAE40
    ctx->pc = 0x1F7A60u;
    ctx->pc = 0x1F7A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7A60u;
    // 0x1f7a64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    sub_001FAE40_0x1fae40(rdram, ctx, runtime); return;
    ctx->pc = 0x1F7A68u;
label_1f7a68:
    // 0x1f7a68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f7a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A6Cu;
        // 0x1f7a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7A74u;
    // 0x1f7a74: 0x0  nop
    ctx->pc = 0x1f7a74u;
    // NOP
label_1f7a78:
    // 0x1f7a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7a7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f7a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7a80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7a84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f7a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f7a88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f7a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f7a90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f7a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7a94: 0x8e220a24  lw          $v0, 0xA24($s1)
    ctx->pc = 0x1f7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2596)));
    // 0x1f7a98: 0x8e230a20  lw          $v1, 0xA20($s1)
    ctx->pc = 0x1f7a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2592)));
    // 0x1f7a9c: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x1f7a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x1f7aa0: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1f7aa0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f7aa4: 0x671826  xor         $v1, $v1, $a3
    ctx->pc = 0x1f7aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
    // 0x1f7aa8: 0x34c20002  ori         $v0, $a2, 0x2
    ctx->pc = 0x1f7aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x1f7aac: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1f7aacu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1f7ab0: 0x10c5001a  beq         $a2, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F7AB0u;
    {
        const bool branch_taken_0x1f7ab0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AB0u;
        // 0x1f7ab4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ab0) {
            ctx->pc = 0x1F7B1Cu;
            goto label_1f7b1c;
        }
    }
    ctx->pc = 0x1F7AB8u;
    // 0x1f7ab8: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x1f7ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f7abc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7ABCu;
    {
        const bool branch_taken_0x1f7abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7abc) {
            ctx->pc = 0x1F7AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7ABCu;
            // 0x1f7ac0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7AD8u;
            goto label_1f7ad8;
        }
    }
    ctx->pc = 0x1F7AC4u;
    // 0x1f7ac4: 0x10c70015  beq         $a2, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F7AC4u;
    {
        const bool branch_taken_0x1f7ac4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x1F7AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AC4u;
        // 0x1f7ac8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ac4) {
            ctx->pc = 0x1F7B1Cu;
            goto label_1f7b1c;
        }
    }
    ctx->pc = 0x1F7ACCu;
    // 0x1f7acc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F7ACCu;
    {
        const bool branch_taken_0x1f7acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7ACCu;
        // 0x1f7ad0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7acc) {
            ctx->pc = 0x1F7B1Cu;
            goto label_1f7b1c;
        }
    }
    ctx->pc = 0x1F7AD4u;
    // 0x1f7ad4: 0x0  nop
    ctx->pc = 0x1f7ad4u;
    // NOP
label_1f7ad8:
    // 0x1f7ad8: 0x14c20010  bne         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F7AD8u;
    {
        const bool branch_taken_0x1f7ad8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AD8u;
        // 0x1f7adc: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ad8) {
            ctx->pc = 0x1F7B1Cu;
            goto label_1f7b1c;
        }
    }
    ctx->pc = 0x1F7AE0u;
    // 0x1f7ae0: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F7AE0u;
    SET_GPR_U32(ctx, 31, 0x1F7AE8u);
    ctx->pc = 0x1F7AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7AE0u;
    // 0x1f7ae4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F7AE0u, 0x1F7AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7AE8u;
label_1f7ae8:
    // 0x1f7ae8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f7ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7aec: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F7AECu;
    {
        const bool branch_taken_0x1f7aec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AECu;
        // 0x1f7af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7aec) {
            ctx->pc = 0x1F7B20u;
            goto label_1f7b20;
        }
    }
    ctx->pc = 0x1F7AF4u;
    // 0x1f7af4: 0xc080dd0  jal         func_203740
    ctx->pc = 0x1F7AF4u;
    SET_GPR_U32(ctx, 31, 0x1F7AFCu);
    ctx->pc = 0x203740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203740u, 0x1F7AF4u, 0x1F7AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7AFCu;
label_1f7afc:
    // 0x1f7afc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7AFCu;
    {
        const bool branch_taken_0x1f7afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7afc) {
            ctx->pc = 0x1F7B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7AFCu;
            // 0x1f7b00: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B1Cu;
            goto label_1f7b1c;
        }
    }
    ctx->pc = 0x1F7B04u;
    // 0x1f7b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b08: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F7B08u;
    SET_GPR_U32(ctx, 31, 0x1F7B10u);
    ctx->pc = 0x1F7B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B08u;
    // 0x1f7b0c: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F7B08u, 0x1F7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B10u;
label_1f7b10:
    // 0x1f7b10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7B10u;
    {
        const bool branch_taken_0x1f7b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B10u;
        // 0x1f7b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b10) {
            ctx->pc = 0x1F7B20u;
            goto label_1f7b20;
        }
    }
    ctx->pc = 0x1F7B18u;
    // 0x1f7b18: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1f7b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f7b1c:
    // 0x1f7b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f7b20:
    // 0x1f7b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f7b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7b24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f7b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7b2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7b30: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1f7b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1f7b34: 0x807eb90  j           func_1FAE40
    ctx->pc = 0x1F7B34u;
    ctx->pc = 0x1F7B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B34u;
    // 0x1f7b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    sub_001FAE40_0x1fae40(rdram, ctx, runtime); return;
    ctx->pc = 0x1F7B3Cu;
    // 0x1f7b3c: 0x0  nop
    ctx->pc = 0x1f7b3cu;
    // NOP
}
