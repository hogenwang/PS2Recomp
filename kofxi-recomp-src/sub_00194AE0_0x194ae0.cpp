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

// Function: sub_00194AE0
// Address: 0x194ae0 - 0x194c00
void sub_00194AE0_0x194ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194AE0_0x194ae0");
#endif

    switch (ctx->pc) {
        case 0x194b30u: goto label_194b30;
        case 0x194b68u: goto label_194b68;
        case 0x194b88u: goto label_194b88;
        case 0x194ba8u: goto label_194ba8;
        default: break;
    }

    ctx->pc = 0x194ae0u;

    // 0x194ae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194ae4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x194ae8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x194ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x194aec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x194aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x194af0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194af4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x194af4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194b00: 0x8c43d148  lw          $v1, -0x2EB8($v0)
    ctx->pc = 0x194b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
    // 0x194b04: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x194b08: 0x9065008b  lbu         $a1, 0x8B($v1)
    ctx->pc = 0x194b08u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 139)));
    // 0x194b0c: 0x9064008a  lbu         $a0, 0x8A($v1)
    ctx->pc = 0x194b0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 138)));
    // 0x194b10: 0x8c42d0c8  lw          $v0, -0x2F38($v0)
    ctx->pc = 0x194b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955208)));
    // 0x194b14: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x194b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x194b18: 0x9043008b  lbu         $v1, 0x8B($v0)
    ctx->pc = 0x194b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 139)));
    // 0x194b1c: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x194b1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x194b20: 0x9042008a  lbu         $v0, 0x8A($v0)
    ctx->pc = 0x194b20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 138)));
    // 0x194b24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x194b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x194b28: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x194b28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194b2c: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x194b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_194b30:
    // 0x194b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194b34: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x194b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x194b38: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x194b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x194b3c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x194B3Cu;
    {
        const bool branch_taken_0x194b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b3c) {
            ctx->pc = 0x194BC0u;
            goto label_194bc0;
        }
    }
    ctx->pc = 0x194B44u;
    // 0x194b44: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x194b48: 0x8c42d148  lw          $v0, -0x2EB8($v0)
    ctx->pc = 0x194b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955336)));
    // 0x194b4c: 0x94420090  lhu         $v0, 0x90($v0)
    ctx->pc = 0x194b4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x194b50: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x194b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x194b54: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x194B54u;
    {
        const bool branch_taken_0x194b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b54) {
            ctx->pc = 0x194B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194B54u;
            // 0x194b58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194B64u;
            goto label_194b64;
        }
    }
    ctx->pc = 0x194B5Cu;
    // 0x194b5c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x194B5Cu;
    {
        const bool branch_taken_0x194b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B5Cu;
        // 0x194b60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b5c) {
            ctx->pc = 0x194BD8u;
            goto label_194bd8;
        }
    }
    ctx->pc = 0x194B64u;
label_194b64:
    // 0x194b64: 0x0  nop
    ctx->pc = 0x194b64u;
    // NOP
label_194b68:
    // 0x194b68: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x194b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x194b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194b70: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x194b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x194b74: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x194b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x194b78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x194B78u;
    {
        const bool branch_taken_0x194b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b78) {
            ctx->pc = 0x194BA8u;
            goto label_194ba8;
        }
    }
    ctx->pc = 0x194B80u;
    // 0x194b80: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x194B80u;
    SET_GPR_U32(ctx, 31, 0x194B88u);
    ctx->pc = 0x1970D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1970D0u, 0x194B80u, 0x194B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B88u;
label_194b88:
    // 0x194b88: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x194b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194b8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x194b8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x194b90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194b94: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194B94u;
    {
        const bool branch_taken_0x194b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x194b94) {
            ctx->pc = 0x194BA8u;
            goto label_194ba8;
        }
    }
    ctx->pc = 0x194B9Cu;
    // 0x194b9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x194b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ba0: 0xc065300  jal         func_194C00
    ctx->pc = 0x194BA0u;
    SET_GPR_U32(ctx, 31, 0x194BA8u);
    ctx->pc = 0x194BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BA0u;
    // 0x194ba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194C00u, 0x194BA0u, 0x194BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BA8u;
label_194ba8:
    // 0x194ba8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x194ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x194bac: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x194bacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x194bb0: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x194bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x194bb4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x194BB4u;
    {
        const bool branch_taken_0x194bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194bb4) {
            ctx->pc = 0x194B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194b68;
        }
    }
    ctx->pc = 0x194BBCu;
    // 0x194bbc: 0x0  nop
    ctx->pc = 0x194bbcu;
    // NOP
label_194bc0:
    // 0x194bc0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x194bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x194bc4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x194bc4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x194bc8: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x194bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x194bcc: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x194BCCu;
    {
        const bool branch_taken_0x194bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194bcc) {
            ctx->pc = 0x194BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194BCCu;
            // 0x194bd0: 0x3263ffff  andi        $v1, $s3, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x194B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194b30;
        }
    }
    ctx->pc = 0x194BD4u;
    // 0x194bd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194bd8:
    // 0x194bd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x194bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194bdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x194bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194be0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194be4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194bec: 0x3e00008  jr          $ra
    ctx->pc = 0x194BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BECu;
        // 0x194bf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194BF4u;
    // 0x194bf4: 0x0  nop
    ctx->pc = 0x194bf4u;
    // NOP
    // 0x194bf8: 0x0  nop
    ctx->pc = 0x194bf8u;
    // NOP
    // 0x194bfc: 0x0  nop
    ctx->pc = 0x194bfcu;
    // NOP
}
