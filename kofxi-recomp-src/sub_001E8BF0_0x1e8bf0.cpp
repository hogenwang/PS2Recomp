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

// Function: sub_001E8BF0
// Address: 0x1e8bf0 - 0x1e8d90
void sub_001E8BF0_0x1e8bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8BF0_0x1e8bf0");
#endif

    switch (ctx->pc) {
        case 0x1e8c30u: goto label_1e8c30;
        case 0x1e8c3cu: goto label_1e8c3c;
        case 0x1e8c58u: goto label_1e8c58;
        case 0x1e8c9cu: goto label_1e8c9c;
        case 0x1e8cb4u: goto label_1e8cb4;
        case 0x1e8cd0u: goto label_1e8cd0;
        case 0x1e8cecu: goto label_1e8cec;
        case 0x1e8d08u: goto label_1e8d08;
        case 0x1e8d10u: goto label_1e8d10;
        case 0x1e8d2cu: goto label_1e8d2c;
        default: break;
    }

    ctx->pc = 0x1e8bf0u;

    // 0x1e8bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e8bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e8bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e8bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e8bf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e8bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e8bfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e8bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e8c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e8c04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e8c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e8c08: 0x26351078  addiu       $s5, $s1, 0x1078
    ctx->pc = 0x1e8c08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4216));
    // 0x1e8c0c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1e8c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1e8c10: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e8c10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e8c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e8c18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e8c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e8c1c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1e8c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1e8c20: 0x8e34205c  lw          $s4, 0x205C($s1)
    ctx->pc = 0x1e8c20u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8284)));
    // 0x1e8c24: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x1e8c24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e8c28: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1E8C28u;
    SET_GPR_U32(ctx, 31, 0x1E8C30u);
    ctx->pc = 0x1E8C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C28u;
    // 0x1e8c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1E8C28u, 0x1E8C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C30u;
label_1e8c30:
    // 0x1e8c30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e8c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c34: 0xc06eb08  jal         func_1BAC20
    ctx->pc = 0x1E8C34u;
    SET_GPR_U32(ctx, 31, 0x1E8C3Cu);
    ctx->pc = 0x1E8C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C34u;
    // 0x1e8c38: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAC20u, 0x1E8C34u, 0x1E8C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C3Cu;
label_1e8c3c:
    // 0x1e8c3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c40: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8C40u;
    {
        const bool branch_taken_0x1e8c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C40u;
        // 0x1e8c44: 0x3c0201c0  lui         $v0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c40) {
            ctx->pc = 0x1E8C4Cu;
            goto label_1e8c4c;
        }
    }
    ctx->pc = 0x1E8C48u;
    // 0x1e8c48: 0xac503cac  sw          $s0, 0x3CAC($v0)
    ctx->pc = 0x1e8c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15532), GPR_U32(ctx, 16));
label_1e8c4c:
    // 0x1e8c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c50: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E8C50u;
    SET_GPR_U32(ctx, 31, 0x1E8C58u);
    ctx->pc = 0x1E8C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C50u;
    // 0x1e8c54: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1E8C50u, 0x1E8C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C58u;
label_1e8c58:
    // 0x1e8c58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8c5c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1e8c5cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1e8c60: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E8C60u;
    {
        const bool branch_taken_0x1e8c60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E8C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C60u;
        // 0x1e8c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c60) {
            ctx->pc = 0x1E8C90u;
            goto label_1e8c90;
        }
    }
    ctx->pc = 0x1E8C68u;
    // 0x1e8c68: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8C68u;
    {
        const bool branch_taken_0x1e8c68 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1E8C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C68u;
        // 0x1e8c6c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c68) {
            ctx->pc = 0x1E8C80u;
            goto label_1e8c80;
        }
    }
    ctx->pc = 0x1E8C70u;
    // 0x1e8c70: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E8C70u;
    {
        const bool branch_taken_0x1e8c70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e8c70) {
            ctx->pc = 0x1E8CA8u;
            goto label_1e8ca8;
        }
    }
    ctx->pc = 0x1E8C78u;
    // 0x1e8c78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E8C78u;
    {
        const bool branch_taken_0x1e8c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8c78) {
            ctx->pc = 0x1E8CC0u;
            goto label_1e8cc0;
        }
    }
    ctx->pc = 0x1E8C80u;
label_1e8c80:
    // 0x1e8c80: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E8C80u;
    {
        const bool branch_taken_0x1e8c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C80u;
        // 0x1e8c84: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c80) {
            ctx->pc = 0x1E8CD4u;
            goto label_1e8cd4;
        }
    }
    ctx->pc = 0x1E8C88u;
    // 0x1e8c88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E8C88u;
    {
        const bool branch_taken_0x1e8c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8c88) {
            ctx->pc = 0x1E8CC0u;
            goto label_1e8cc0;
        }
    }
    ctx->pc = 0x1E8C90u;
label_1e8c90:
    // 0x1e8c90: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e8c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e8c94: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1E8C94u;
    SET_GPR_U32(ctx, 31, 0x1E8C9Cu);
    ctx->pc = 0x1E8C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C94u;
    // 0x1e8c98: 0x34a50c08  ori         $a1, $a1, 0xC08 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3080);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1E8C94u, 0x1E8C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C9Cu;
label_1e8c9c:
    // 0x1e8c9c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E8C9Cu;
    {
        const bool branch_taken_0x1e8c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C9Cu;
        // 0x1e8ca0: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c9c) {
            ctx->pc = 0x1E8CD4u;
            goto label_1e8cd4;
        }
    }
    ctx->pc = 0x1E8CA4u;
    // 0x1e8ca4: 0x0  nop
    ctx->pc = 0x1e8ca4u;
    // NOP
label_1e8ca8:
    // 0x1e8ca8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e8ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e8cac: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1E8CACu;
    SET_GPR_U32(ctx, 31, 0x1E8CB4u);
    ctx->pc = 0x1E8CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8CACu;
    // 0x1e8cb0: 0x34a50c09  ori         $a1, $a1, 0xC09 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3081);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1E8CACu, 0x1E8CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8CB4u;
label_1e8cb4:
    // 0x1e8cb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8CB4u;
    {
        const bool branch_taken_0x1e8cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8CB4u;
        // 0x1e8cb8: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8cb4) {
            ctx->pc = 0x1E8CD4u;
            goto label_1e8cd4;
        }
    }
    ctx->pc = 0x1E8CBCu;
    // 0x1e8cbc: 0x0  nop
    ctx->pc = 0x1e8cbcu;
    // NOP
label_1e8cc0:
    // 0x1e8cc0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e8cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e8cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8cc8: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1E8CC8u;
    SET_GPR_U32(ctx, 31, 0x1E8CD0u);
    ctx->pc = 0x1E8CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8CC8u;
    // 0x1e8ccc: 0x34a50c07  ori         $a1, $a1, 0xC07 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3079);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1E8CC8u, 0x1E8CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8CD0u;
label_1e8cd0:
    // 0x1e8cd0: 0x2662fffc  addiu       $v0, $s3, -0x4
    ctx->pc = 0x1e8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_1e8cd4:
    // 0x1e8cd4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1e8cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e8cd8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8CD8u;
    {
        const bool branch_taken_0x1e8cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8cd8) {
            ctx->pc = 0x1E8CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8CD8u;
            // 0x1e8cdc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8CF0u;
            goto label_1e8cf0;
        }
    }
    ctx->pc = 0x1E8CE0u;
    // 0x1e8ce0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e8ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ce4: 0xc07f6fe  jal         func_1FDBF8
    ctx->pc = 0x1E8CE4u;
    SET_GPR_U32(ctx, 31, 0x1E8CECu);
    ctx->pc = 0x1E8CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8CE4u;
    // 0x1e8ce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDBF8u, 0x1E8CE4u, 0x1E8CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8CECu;
label_1e8cec:
    // 0x1e8cec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e8cf0:
    // 0x1e8cf0: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8CF0u;
    {
        const bool branch_taken_0x1e8cf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8CF0u;
        // 0x1e8cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8cf0) {
            ctx->pc = 0x1E8D00u;
            goto label_1e8d00;
        }
    }
    ctx->pc = 0x1E8CF8u;
    // 0x1e8cf8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8CF8u;
    {
        const bool branch_taken_0x1e8cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8cf8) {
            ctx->pc = 0x1E8D08u;
            goto label_1e8d08;
        }
    }
    ctx->pc = 0x1E8D00u;
label_1e8d00:
    // 0x1e8d00: 0xc07a3b4  jal         func_1E8ED0
    ctx->pc = 0x1E8D00u;
    SET_GPR_U32(ctx, 31, 0x1E8D08u);
    ctx->pc = 0x1E8D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D00u;
    // 0x1e8d04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8ED0u, 0x1E8D00u, 0x1E8D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D08u;
label_1e8d08:
    // 0x1e8d08: 0xc07a3a8  jal         func_1E8EA0
    ctx->pc = 0x1E8D08u;
    SET_GPR_U32(ctx, 31, 0x1E8D10u);
    ctx->pc = 0x1E8D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D08u;
    // 0x1e8d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EA0u, 0x1E8D08u, 0x1E8D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D10u;
label_1e8d10:
    // 0x1e8d10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e8d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8d14: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E8D14u;
    {
        const bool branch_taken_0x1e8d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E8D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D14u;
        // 0x1e8d18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d14) {
            ctx->pc = 0x1E8D68u;
            goto label_1e8d68;
        }
    }
    ctx->pc = 0x1E8D1Cu;
    // 0x1e8d1c: 0x56c00013  bnel        $s6, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E8D1Cu;
    {
        const bool branch_taken_0x1e8d1c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d1c) {
            ctx->pc = 0x1E8D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8D1Cu;
            // 0x1e8d20: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8D6Cu;
            goto label_1e8d6c;
        }
    }
    ctx->pc = 0x1E8D24u;
    // 0x1e8d24: 0xc06ecdc  jal         func_1BB370
    ctx->pc = 0x1E8D24u;
    SET_GPR_U32(ctx, 31, 0x1E8D2Cu);
    ctx->pc = 0x1E8D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D24u;
    // 0x1e8d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB370u, 0x1E8D24u, 0x1E8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D2Cu;
label_1e8d2c:
    // 0x1e8d2c: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x1e8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1e8d30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E8D30u;
    {
        const bool branch_taken_0x1e8d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D30u;
        // 0x1e8d34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d30) {
            ctx->pc = 0x1E8D68u;
            goto label_1e8d68;
        }
    }
    ctx->pc = 0x1E8D38u;
    // 0x1e8d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e8d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8d40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8d44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e8d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8d48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e8d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8d4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e8d4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8d50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e8d50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e8d54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1e8d54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8d58: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e8d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e8d5c: 0x807a3b4  j           func_1E8ED0
    ctx->pc = 0x1E8D5Cu;
    ctx->pc = 0x1E8D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D5Cu;
    // 0x1e8d60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8ED0u;
    sub_001E8ED0_0x1e8ed0(rdram, ctx, runtime); return;
    ctx->pc = 0x1E8D64u;
    // 0x1e8d64: 0x0  nop
    ctx->pc = 0x1e8d64u;
    // NOP
label_1e8d68:
    // 0x1e8d68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e8d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e8d6c:
    // 0x1e8d6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e8d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8d70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e8d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8d74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e8d74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8d78: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e8d78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e8d7c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1e8d7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8d80: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e8d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e8d84: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D84u;
        // 0x1e8d88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8D8Cu;
    // 0x1e8d8c: 0x0  nop
    ctx->pc = 0x1e8d8cu;
    // NOP
}
