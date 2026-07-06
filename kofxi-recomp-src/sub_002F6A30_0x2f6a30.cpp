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

// Function: sub_002F6A30
// Address: 0x2f6a30 - 0x2f6b90
void sub_002F6A30_0x2f6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6A30_0x2f6a30");
#endif

    switch (ctx->pc) {
        case 0x2f6a70u: goto label_2f6a70;
        case 0x2f6aa0u: goto label_2f6aa0;
        case 0x2f6ab8u: goto label_2f6ab8;
        case 0x2f6b28u: goto label_2f6b28;
        case 0x2f6b50u: goto label_2f6b50;
        default: break;
    }

    ctx->pc = 0x2f6a30u;

    // 0x2f6a30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f6a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2f6a34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f6a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f6a38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a3c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f6a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f6a40: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f6a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f6a44: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2f6a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f6a48: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2f6a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2f6a4c: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0x2f6a4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f6a50: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2f6a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2f6a54: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2f6a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2f6a58: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f6a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f6a5c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f6a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f6a60: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f6a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f6a64: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f6a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f6a68: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F6A68u;
    SET_GPR_U32(ctx, 31, 0x2F6A70u);
    ctx->pc = 0x2F6A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6A68u;
    // 0x2f6a6c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F6A68u, 0x2F6A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A70u;
label_2f6a70:
    // 0x2f6a70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f6a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a74: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6A74u;
    {
        const bool branch_taken_0x2f6a74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A74u;
        // 0x2f6a78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a74) {
            ctx->pc = 0x2F6A88u;
            goto label_2f6a88;
        }
    }
    ctx->pc = 0x2F6A7Cu;
    // 0x2f6a7c: 0x2402fc16  addiu       $v0, $zero, -0x3EA
    ctx->pc = 0x2f6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
    // 0x2f6a80: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2F6A80u;
    {
        const bool branch_taken_0x2f6a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A80u;
        // 0x2f6a84: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a80) {
            ctx->pc = 0x2F6B48u;
            goto label_2f6b48;
        }
    }
    ctx->pc = 0x2F6A88u;
label_2f6a88:
    // 0x2f6a88: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2f6a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a8c: 0x2417fc15  addiu       $s7, $zero, -0x3EB
    ctx->pc = 0x2f6a8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966293));
    // 0x2f6a90: 0x2416fc0c  addiu       $s6, $zero, -0x3F4
    ctx->pc = 0x2f6a90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966284));
    // 0x2f6a94: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x2f6a94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6a98: 0x2415fc16  addiu       $s5, $zero, -0x3EA
    ctx->pc = 0x2f6a98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
    // 0x2f6a9c: 0x0  nop
    ctx->pc = 0x2f6a9cu;
    // NOP
label_2f6aa0:
    // 0x2f6aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6aa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f6aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6aa8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f6aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6aac: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f6aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6ab0: 0xc0bdf1e  jal         func_2F7C78
    ctx->pc = 0x2F6AB0u;
    SET_GPR_U32(ctx, 31, 0x2F6AB8u);
    ctx->pc = 0x2F6AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6AB0u;
    // 0x2f6ab4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7C78u, 0x2F6AB0u, 0x2F6AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6AB8u;
label_2f6ab8:
    // 0x2f6ab8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f6ab8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6abc: 0x5c600008  bgtzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6ABCu;
    {
        const bool branch_taken_0x2f6abc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2f6abc) {
            ctx->pc = 0x2F6AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6ABCu;
            // 0x2f6ac0: 0x82220000  lb          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6AE0u;
            goto label_2f6ae0;
        }
    }
    ctx->pc = 0x2F6AC4u;
    // 0x2f6ac4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2f6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2f6ac8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F6AC8u;
    {
        const bool branch_taken_0x2f6ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6ac8) {
            ctx->pc = 0x2F6B48u;
            goto label_2f6b48;
        }
    }
    ctx->pc = 0x2F6AD0u;
    // 0x2f6ad0: 0x463001d  bgezl       $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F6AD0u;
    {
        const bool branch_taken_0x2f6ad0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2f6ad0) {
            ctx->pc = 0x2F6AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6AD0u;
            // 0x2f6ad4: 0xae160020  sw          $s6, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6B48u;
            goto label_2f6b48;
        }
    }
    ctx->pc = 0x2F6AD8u;
    // 0x2f6ad8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F6AD8u;
    {
        const bool branch_taken_0x2f6ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AD8u;
        // 0x2f6adc: 0xae170020  sw          $s7, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ad8) {
            ctx->pc = 0x2F6B48u;
            goto label_2f6b48;
        }
    }
    ctx->pc = 0x2F6AE0u;
label_2f6ae0:
    // 0x2f6ae0: 0x545e000a  bnel        $v0, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x2F6AE0u;
    {
        const bool branch_taken_0x2f6ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x2f6ae0) {
            ctx->pc = 0x2F6AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6AE0u;
            // 0x2f6ae4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6B0Cu;
            goto label_2f6b0c;
        }
    }
    ctx->pc = 0x2F6AE8u;
    // 0x2f6ae8: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F6AE8u;
    {
        const bool branch_taken_0x2f6ae8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2F6AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AE8u;
        // 0x2f6aec: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ae8) {
            ctx->pc = 0x2F6B38u;
            goto label_2f6b38;
        }
    }
    ctx->pc = 0x2F6AF0u;
    // 0x2f6af0: 0x8222ffff  lb          $v0, -0x1($s1)
    ctx->pc = 0x2f6af0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
    // 0x2f6af4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2f6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f6af8: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F6AF8u;
    {
        const bool branch_taken_0x2f6af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6af8) {
            ctx->pc = 0x2F6AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6AF8u;
            // 0x2f6afc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6B3Cu;
            goto label_2f6b3c;
        }
    }
    ctx->pc = 0x2F6B00u;
    // 0x2f6b00: 0xa220ffff  sb          $zero, -0x1($s1)
    ctx->pc = 0x2f6b00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6b04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2F6B04u;
    {
        const bool branch_taken_0x2f6b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B04u;
        // 0x2f6b08: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b04) {
            ctx->pc = 0x2F6B38u;
            goto label_2f6b38;
        }
    }
    ctx->pc = 0x2F6B0Cu;
label_2f6b0c:
    // 0x2f6b0c: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x2f6b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2f6b10: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2F6B10u;
    {
        const bool branch_taken_0x2f6b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B10u;
        // 0x2f6b14: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b10) {
            ctx->pc = 0x2F6AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6aa0;
        }
    }
    ctx->pc = 0x2F6B18u;
    // 0x2f6b18: 0x14a040  sll         $s4, $s4, 1
    ctx->pc = 0x2f6b18u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x2f6b1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f6b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b20: 0xc0be46c  jal         func_2F91B0
    ctx->pc = 0x2F6B20u;
    SET_GPR_U32(ctx, 31, 0x2F6B28u);
    ctx->pc = 0x2F6B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B20u;
    // 0x2f6b24: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F91B0u, 0x2F6B20u, 0x2F6B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B28u;
label_2f6b28:
    // 0x2f6b28: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2F6B28u;
    {
        const bool branch_taken_0x2f6b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6b28) {
            ctx->pc = 0x2F6B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6B28u;
            // 0x2f6b2c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6aa0;
        }
    }
    ctx->pc = 0x2F6B30u;
    // 0x2f6b30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6B30u;
    {
        const bool branch_taken_0x2f6b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B30u;
        // 0x2f6b34: 0xae150020  sw          $s5, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b30) {
            ctx->pc = 0x2F6B48u;
            goto label_2f6b48;
        }
    }
    ctx->pc = 0x2F6B38u;
label_2f6b38:
    // 0x2f6b38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2f6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f6b3c:
    // 0x2f6b3c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2f6b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2f6b40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6B40u;
    {
        const bool branch_taken_0x2f6b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B40u;
        // 0x2f6b44: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b40) {
            ctx->pc = 0x2F6B5Cu;
            goto label_2f6b5c;
        }
    }
    ctx->pc = 0x2F6B48u;
label_2f6b48:
    // 0x2f6b48: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F6B48u;
    SET_GPR_U32(ctx, 31, 0x2F6B50u);
    ctx->pc = 0x2F6B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B48u;
    // 0x2f6b4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F6B48u, 0x2F6B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B50u;
label_2f6b50:
    // 0x2f6b50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f6b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6b54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b58: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2f6b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2f6b5c:
    // 0x2f6b5c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2f6b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f6b60: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2f6b60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f6b64: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2f6b64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f6b68: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f6b68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f6b6c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f6b6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f6b70: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f6b70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f6b74: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f6b74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6b78: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f6b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6b7c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f6b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6b80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f6b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6b84: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B84u;
        // 0x2f6b88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6B8Cu;
    // 0x2f6b8c: 0x0  nop
    ctx->pc = 0x2f6b8cu;
    // NOP
    if (ctx->pc == 0x2f6b8cu) { ctx->pc = 0x2f6b90u; }
}
