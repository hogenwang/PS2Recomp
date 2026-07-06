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

// Function: sub_002C2B10
// Address: 0x2c2b10 - 0x2c2c2c
void sub_002C2B10_0x2c2b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2B10_0x2c2b10");
#endif

    switch (ctx->pc) {
        case 0x2c2b68u: goto label_2c2b68;
        case 0x2c2bb0u: goto label_2c2bb0;
        case 0x2c2bf4u: goto label_2c2bf4;
        default: break;
    }

    ctx->pc = 0x2c2b10u;

    // 0x2c2b10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c2b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2c2b14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c2b18: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2c2b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2c2b1c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x2c2b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2c2b20: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c2b20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b24: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2c2b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2c2b28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c2b28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b2c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2c2b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2c2b30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c2b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b34: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2c2b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2c2b38: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2c2b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2c2b3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c2b40: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2c2b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2c2b44: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c2b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c2b48: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x2c2b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x2c2b4c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2B4Cu;
    {
        const bool branch_taken_0x2c2b4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B4Cu;
        // 0x2c2b50: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b4c) {
            ctx->pc = 0x2C2B60u;
            goto label_2c2b60;
        }
    }
    ctx->pc = 0x2C2B54u;
    // 0x2c2b54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c2b58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2B58u;
    {
        const bool branch_taken_0x2c2b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B58u;
        // 0x2c2b5c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b58) {
            ctx->pc = 0x2C2B80u;
            goto label_2c2b80;
        }
    }
    ctx->pc = 0x2C2B60u;
label_2c2b60:
    // 0x2c2b60: 0xc0b0c2a  jal         func_2C30A8
    ctx->pc = 0x2C2B60u;
    SET_GPR_U32(ctx, 31, 0x2C2B68u);
    ctx->pc = 0x2C30A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30A8u, 0x2C2B60u, 0x2C2B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B68u;
label_2c2b68:
    // 0x2c2b68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c2b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b6c: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2B6Cu;
    {
        const bool branch_taken_0x2c2b6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b6c) {
            ctx->pc = 0x2C2B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2B6Cu;
            // 0x2c2b70: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2B80u;
            goto label_2c2b80;
        }
    }
    ctx->pc = 0x2C2B74u;
    // 0x2c2b74: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2c2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2c2b78: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x2C2B78u;
    {
        const bool branch_taken_0x2c2b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B78u;
        // 0x2c2b7c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b78) {
            ctx->pc = 0x2C3038u;
            return;
        }
    }
    ctx->pc = 0x2C2B80u;
label_2c2b80:
    // 0x2c2b80: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x2c2b80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2b84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2B84u;
    {
        const bool branch_taken_0x2c2b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B84u;
        // 0x2c2b88: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b84) {
            ctx->pc = 0x2C2B9Cu;
            goto label_2c2b9c;
        }
    }
    ctx->pc = 0x2C2B8Cu;
    // 0x2c2b8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c2b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c2b90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c2b90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2c2b94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2B94u;
    {
        const bool branch_taken_0x2c2b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B94u;
        // 0x2c2b98: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b94) {
            ctx->pc = 0x2C2BA0u;
            goto label_2c2ba0;
        }
    }
    ctx->pc = 0x2C2B9Cu;
label_2c2b9c:
    // 0x2c2b9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2ba0:
    // 0x2c2ba0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c2ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c2ba4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c2ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ba8: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x2C2BA8u;
    SET_GPR_U32(ctx, 31, 0x2C2BB0u);
    ctx->pc = 0x2C2BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2BA8u;
    // 0x2c2bac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2819F0u, 0x2C2BA8u, 0x2C2BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BB0u;
label_2c2bb0:
    // 0x2c2bb0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2BB0u;
    {
        const bool branch_taken_0x2c2bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2bb0) {
            ctx->pc = 0x2C2BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2BB0u;
            // 0x2c2bb4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2BC4u;
            goto label_2c2bc4;
        }
    }
    ctx->pc = 0x2C2BB8u;
    // 0x2c2bb8: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x2c2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2c2bbc: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x2C2BBCu;
    {
        const bool branch_taken_0x2c2bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BBCu;
        // 0x2c2bc0: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bbc) {
            ctx->pc = 0x2C3038u;
            return;
        }
    }
    ctx->pc = 0x2C2BC4u;
label_2c2bc4:
    // 0x2c2bc4: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x2c2bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2c2bc8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2c2bc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c2bcc: 0x5443002a  bnel        $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C2BCCu;
    {
        const bool branch_taken_0x2c2bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c2bcc) {
            ctx->pc = 0x2C2BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2BCCu;
            // 0x2c2bd0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2C78u;
            return;
        }
    }
    ctx->pc = 0x2C2BD4u;
    // 0x2c2bd4: 0xdfa80018  ld          $t0, 0x18($sp)
    ctx->pc = 0x2c2bd4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2bd8: 0x11000021  beqz        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C2BD8u;
    {
        const bool branch_taken_0x2c2bd8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BD8u;
        // 0x2c2bdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bd8) {
            ctx->pc = 0x2C2C60u;
            return;
        }
    }
    ctx->pc = 0x2C2BE0u;
    // 0x2c2be0: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x2c2be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x2c2be4: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2c2be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2c2be8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2c2be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c2bec: 0xc0a0554  jal         func_281550
    ctx->pc = 0x2C2BECu;
    SET_GPR_U32(ctx, 31, 0x2C2BF4u);
    ctx->pc = 0x2C2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2BECu;
    // 0x2c2bf0: 0x27a70044  addiu       $a3, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281550u, 0x2C2BECu, 0x2C2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BF4u;
label_2c2bf4:
    // 0x2c2bf4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2c2bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2c2bf8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2BF8u;
    {
        const bool branch_taken_0x2c2bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BF8u;
        // 0x2c2bfc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bf8) {
            ctx->pc = 0x2C2C24u;
            goto label_2c2c24;
        }
    }
    ctx->pc = 0x2C2C00u;
    // 0x2c2c00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2c04: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c2c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2c08: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c2c08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2c0c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2c10: 0xdfa60038  ld          $a2, 0x38($sp)
    ctx->pc = 0x2c2c10u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c2c14: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c2c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c2c18: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x2c2c18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c2c1c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2C1Cu;
    {
        const bool branch_taken_0x2c2c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C1Cu;
        // 0x2c2c20: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c1c) {
            ctx->pc = 0x2C2C2Cu;
            return;
        }
    }
    ctx->pc = 0x2C2C24u;
label_2c2c24:
    // 0x2c2c24: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x2C2C24u;
    {
        const bool branch_taken_0x2c2c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C24u;
        // 0x2c2c28: 0x24030042  addiu       $v1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c24) {
            ctx->pc = 0x2C2FB0u;
            return;
        }
    }
    ctx->pc = 0x2C2C2Cu;
}
