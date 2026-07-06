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

// Function: sub_001D9A70
// Address: 0x1d9a70 - 0x1d9c10
void sub_001D9A70_0x1d9a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9A70_0x1d9a70");
#endif

    switch (ctx->pc) {
        case 0x1d9a70u: goto label_1d9a70;
        case 0x1d9a74u: goto label_1d9a74;
        case 0x1d9a78u: goto label_1d9a78;
        case 0x1d9a7cu: goto label_1d9a7c;
        case 0x1d9a80u: goto label_1d9a80;
        case 0x1d9a84u: goto label_1d9a84;
        case 0x1d9a88u: goto label_1d9a88;
        case 0x1d9a8cu: goto label_1d9a8c;
        case 0x1d9a90u: goto label_1d9a90;
        case 0x1d9a94u: goto label_1d9a94;
        case 0x1d9a98u: goto label_1d9a98;
        case 0x1d9a9cu: goto label_1d9a9c;
        case 0x1d9aa0u: goto label_1d9aa0;
        case 0x1d9aa4u: goto label_1d9aa4;
        case 0x1d9aa8u: goto label_1d9aa8;
        case 0x1d9aacu: goto label_1d9aac;
        case 0x1d9ab0u: goto label_1d9ab0;
        case 0x1d9ab4u: goto label_1d9ab4;
        case 0x1d9ab8u: goto label_1d9ab8;
        case 0x1d9abcu: goto label_1d9abc;
        case 0x1d9ac0u: goto label_1d9ac0;
        case 0x1d9ac4u: goto label_1d9ac4;
        case 0x1d9ac8u: goto label_1d9ac8;
        case 0x1d9accu: goto label_1d9acc;
        case 0x1d9ad0u: goto label_1d9ad0;
        case 0x1d9ad4u: goto label_1d9ad4;
        case 0x1d9ad8u: goto label_1d9ad8;
        case 0x1d9adcu: goto label_1d9adc;
        case 0x1d9ae0u: goto label_1d9ae0;
        case 0x1d9ae4u: goto label_1d9ae4;
        case 0x1d9ae8u: goto label_1d9ae8;
        case 0x1d9aecu: goto label_1d9aec;
        case 0x1d9af0u: goto label_1d9af0;
        case 0x1d9af4u: goto label_1d9af4;
        case 0x1d9af8u: goto label_1d9af8;
        case 0x1d9afcu: goto label_1d9afc;
        case 0x1d9b00u: goto label_1d9b00;
        case 0x1d9b04u: goto label_1d9b04;
        case 0x1d9b08u: goto label_1d9b08;
        case 0x1d9b0cu: goto label_1d9b0c;
        case 0x1d9b10u: goto label_1d9b10;
        case 0x1d9b14u: goto label_1d9b14;
        case 0x1d9b18u: goto label_1d9b18;
        case 0x1d9b1cu: goto label_1d9b1c;
        case 0x1d9b20u: goto label_1d9b20;
        case 0x1d9b24u: goto label_1d9b24;
        case 0x1d9b28u: goto label_1d9b28;
        case 0x1d9b2cu: goto label_1d9b2c;
        case 0x1d9b30u: goto label_1d9b30;
        case 0x1d9b34u: goto label_1d9b34;
        case 0x1d9b38u: goto label_1d9b38;
        case 0x1d9b3cu: goto label_1d9b3c;
        case 0x1d9b40u: goto label_1d9b40;
        case 0x1d9b44u: goto label_1d9b44;
        case 0x1d9b48u: goto label_1d9b48;
        case 0x1d9b4cu: goto label_1d9b4c;
        case 0x1d9b50u: goto label_1d9b50;
        case 0x1d9b54u: goto label_1d9b54;
        case 0x1d9b58u: goto label_1d9b58;
        case 0x1d9b5cu: goto label_1d9b5c;
        case 0x1d9b60u: goto label_1d9b60;
        case 0x1d9b64u: goto label_1d9b64;
        case 0x1d9b68u: goto label_1d9b68;
        case 0x1d9b6cu: goto label_1d9b6c;
        case 0x1d9b70u: goto label_1d9b70;
        case 0x1d9b74u: goto label_1d9b74;
        case 0x1d9b78u: goto label_1d9b78;
        case 0x1d9b7cu: goto label_1d9b7c;
        case 0x1d9b80u: goto label_1d9b80;
        case 0x1d9b84u: goto label_1d9b84;
        case 0x1d9b88u: goto label_1d9b88;
        case 0x1d9b8cu: goto label_1d9b8c;
        case 0x1d9b90u: goto label_1d9b90;
        case 0x1d9b94u: goto label_1d9b94;
        case 0x1d9b98u: goto label_1d9b98;
        case 0x1d9b9cu: goto label_1d9b9c;
        case 0x1d9ba0u: goto label_1d9ba0;
        case 0x1d9ba4u: goto label_1d9ba4;
        case 0x1d9ba8u: goto label_1d9ba8;
        case 0x1d9bacu: goto label_1d9bac;
        case 0x1d9bb0u: goto label_1d9bb0;
        case 0x1d9bb4u: goto label_1d9bb4;
        case 0x1d9bb8u: goto label_1d9bb8;
        case 0x1d9bbcu: goto label_1d9bbc;
        case 0x1d9bc0u: goto label_1d9bc0;
        case 0x1d9bc4u: goto label_1d9bc4;
        case 0x1d9bc8u: goto label_1d9bc8;
        case 0x1d9bccu: goto label_1d9bcc;
        case 0x1d9bd0u: goto label_1d9bd0;
        case 0x1d9bd4u: goto label_1d9bd4;
        case 0x1d9bd8u: goto label_1d9bd8;
        case 0x1d9bdcu: goto label_1d9bdc;
        case 0x1d9be0u: goto label_1d9be0;
        case 0x1d9be4u: goto label_1d9be4;
        case 0x1d9be8u: goto label_1d9be8;
        case 0x1d9becu: goto label_1d9bec;
        case 0x1d9bf0u: goto label_1d9bf0;
        case 0x1d9bf4u: goto label_1d9bf4;
        case 0x1d9bf8u: goto label_1d9bf8;
        case 0x1d9bfcu: goto label_1d9bfc;
        case 0x1d9c00u: goto label_1d9c00;
        case 0x1d9c04u: goto label_1d9c04;
        case 0x1d9c08u: goto label_1d9c08;
        case 0x1d9c0cu: goto label_1d9c0c;
        default: break;
    }

    ctx->pc = 0x1d9a70u;

label_1d9a70:
    // 0x1d9a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d9a74:
    // 0x1d9a74: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d9a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a78:
    // 0x1d9a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d9a7c:
    // 0x1d9a7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d9a80:
    if (ctx->pc == 0x1D9A80u) {
        ctx->pc = 0x1D9A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A7Cu;
        // 0x1d9a80: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A84u;
        goto label_1d9a84;
    }
    ctx->pc = 0x1D9A7Cu;
    {
        const bool branch_taken_0x1d9a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A7Cu;
        // 0x1d9a80: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a7c) {
            ctx->pc = 0x1D9A98u;
            goto label_1d9a98;
        }
    }
    ctx->pc = 0x1D9A84u;
label_1d9a84:
    // 0x1d9a84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d9a88:
    // 0x1d9a88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1d9a8c:
    if (ctx->pc == 0x1D9A8Cu) {
        ctx->pc = 0x1D9A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A88u;
        // 0x1d9a8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A90u;
        goto label_1d9a90;
    }
    ctx->pc = 0x1D9A88u;
    {
        const bool branch_taken_0x1d9a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a88) {
            ctx->pc = 0x1D9A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9A88u;
            // 0x1d9a8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9A9Cu;
            goto label_1d9a9c;
        }
    }
    ctx->pc = 0x1D9A90u;
label_1d9a90:
    // 0x1d9a90: 0x40f809  jalr        $v0
label_1d9a94:
    if (ctx->pc == 0x1D9A94u) {
        ctx->pc = 0x1D9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A90u;
        // 0x1d9a94: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A98u;
        goto label_1d9a98;
    }
    ctx->pc = 0x1D9A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9A98u);
        ctx->pc = 0x1D9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A90u;
        // 0x1d9a94: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9A90u, 0x1D9A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9A98u;
label_1d9a98:
    // 0x1d9a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9a9c:
    // 0x1d9a9c: 0x3e00008  jr          $ra
label_1d9aa0:
    if (ctx->pc == 0x1D9AA0u) {
        ctx->pc = 0x1D9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A9Cu;
        // 0x1d9aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AA4u;
        goto label_1d9aa4;
    }
    ctx->pc = 0x1D9A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A9Cu;
        // 0x1d9aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9AA4u;
label_1d9aa4:
    // 0x1d9aa4: 0x0  nop
    ctx->pc = 0x1d9aa4u;
    // NOP
label_1d9aa8:
    // 0x1d9aa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d9aac:
    // 0x1d9aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d9ab0:
    // 0x1d9ab0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1d9ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ab4:
    // 0x1d9ab4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d9ab8:
    // 0x1d9ab8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d9abc:
    // 0x1d9abc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d9ac0:
    // 0x1d9ac0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d9ac4:
    // 0x1d9ac4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d9ac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ac8:
    // 0x1d9ac8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d9ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1d9acc:
    // 0x1d9acc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d9accu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ad0:
    // 0x1d9ad0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d9ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1d9ad4:
    // 0x1d9ad4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1d9ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d9ad8:
    // 0x1d9ad8: 0xc072a66  jal         func_1CA998
label_1d9adc:
    if (ctx->pc == 0x1D9ADCu) {
        ctx->pc = 0x1D9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AD8u;
        // 0x1d9adc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AE0u;
        goto label_1d9ae0;
    }
    ctx->pc = 0x1D9AD8u;
    SET_GPR_U32(ctx, 31, 0x1D9AE0u);
    ctx->pc = 0x1D9ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9AD8u;
    // 0x1d9adc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA998u, 0x1D9AD8u, 0x1D9AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AE0u;
label_1d9ae0:
    // 0x1d9ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ae4:
    // 0x1d9ae4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d9ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ae8:
    // 0x1d9ae8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d9ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d9aec:
    // 0x1d9aec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d9aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9af0:
    // 0x1d9af0: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_1d9af4:
    if (ctx->pc == 0x1D9AF4u) {
        ctx->pc = 0x1D9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AF0u;
        // 0x1d9af4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AF8u;
        goto label_1d9af8;
    }
    ctx->pc = 0x1D9AF0u;
    {
        const bool branch_taken_0x1d9af0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AF0u;
        // 0x1d9af4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9af0) {
            ctx->pc = 0x1D9B38u;
            goto label_1d9b38;
        }
    }
    ctx->pc = 0x1D9AF8u;
label_1d9af8:
    // 0x1d9af8: 0xc076704  jal         func_1D9C10
label_1d9afc:
    if (ctx->pc == 0x1D9AFCu) {
        ctx->pc = 0x1D9B00u;
        goto label_1d9b00;
    }
    ctx->pc = 0x1D9AF8u;
    SET_GPR_U32(ctx, 31, 0x1D9B00u);
    ctx->pc = 0x1D9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C10u, 0x1D9AF8u, 0x1D9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B00u;
label_1d9b00:
    // 0x1d9b00: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d9b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d9b04:
    // 0x1d9b04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b08:
    // 0x1d9b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d9b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b0c:
    // 0x1d9b0c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1d9b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1d9b10:
    // 0x1d9b10: 0x40f809  jalr        $v0
label_1d9b14:
    if (ctx->pc == 0x1D9B14u) {
        ctx->pc = 0x1D9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B10u;
        // 0x1d9b14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B18u;
        goto label_1d9b18;
    }
    ctx->pc = 0x1D9B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9B18u);
        ctx->pc = 0x1D9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B10u;
        // 0x1d9b14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9B10u, 0x1D9B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9B18u;
label_1d9b18:
    // 0x1d9b18: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1d9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d9b1c:
    // 0x1d9b1c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1d9b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d9b20:
    // 0x1d9b20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d9b24:
    // 0x1d9b24: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1d9b24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1d9b28:
    // 0x1d9b28: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1d9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1d9b2c:
    // 0x1d9b2c: 0x40f809  jalr        $v0
label_1d9b30:
    if (ctx->pc == 0x1D9B30u) {
        ctx->pc = 0x1D9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B2Cu;
        // 0x1d9b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B34u;
        goto label_1d9b34;
    }
    ctx->pc = 0x1D9B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9B34u);
        ctx->pc = 0x1D9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B2Cu;
        // 0x1d9b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9B2Cu, 0x1D9B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9B34u;
label_1d9b34:
    // 0x1d9b34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d9b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b38:
    // 0x1d9b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9b3c:
    // 0x1d9b3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d9b40:
    // 0x1d9b40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d9b44:
    // 0x1d9b44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d9b48:
    // 0x1d9b48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d9b48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d9b4c:
    // 0x1d9b4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d9b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d9b50:
    // 0x1d9b50: 0x3e00008  jr          $ra
label_1d9b54:
    if (ctx->pc == 0x1D9B54u) {
        ctx->pc = 0x1D9B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B50u;
        // 0x1d9b54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B58u;
        goto label_1d9b58;
    }
    ctx->pc = 0x1D9B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B50u;
        // 0x1d9b54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9B58u;
label_1d9b58:
    // 0x1d9b58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d9b5c:
    // 0x1d9b5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d9b60:
    // 0x1d9b60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d9b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b64:
    // 0x1d9b64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d9b68:
    // 0x1d9b68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d9b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b6c:
    // 0x1d9b6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d9b70:
    // 0x1d9b70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d9b74:
    // 0x1d9b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d9b78:
    // 0x1d9b78: 0xc0770ee  jal         func_1DC3B8
label_1d9b7c:
    if (ctx->pc == 0x1D9B7Cu) {
        ctx->pc = 0x1D9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B78u;
        // 0x1d9b7c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B80u;
        goto label_1d9b80;
    }
    ctx->pc = 0x1D9B78u;
    SET_GPR_U32(ctx, 31, 0x1D9B80u);
    ctx->pc = 0x1D9B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B78u;
    // 0x1d9b7c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC3B8u, 0x1D9B78u, 0x1D9B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B80u;
label_1d9b80:
    // 0x1d9b80: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d9b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_1d9b84:
    // 0x1d9b84: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x1d9b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_1d9b88:
    // 0x1d9b88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b8c:
    // 0x1d9b8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d9b90:
    if (ctx->pc == 0x1D9B90u) {
        ctx->pc = 0x1D9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B8Cu;
        // 0x1d9b90: 0x34a5020a  ori         $a1, $a1, 0x20A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B94u;
        goto label_1d9b94;
    }
    ctx->pc = 0x1D9B8Cu;
    {
        const bool branch_taken_0x1d9b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B8Cu;
        // 0x1d9b90: 0x34a5020a  ori         $a1, $a1, 0x20A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b8c) {
            ctx->pc = 0x1D9BB0u;
            goto label_1d9bb0;
        }
    }
    ctx->pc = 0x1D9B94u;
label_1d9b94:
    // 0x1d9b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9b98:
    // 0x1d9b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d9b9c:
    // 0x1d9b9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d9ba0:
    // 0x1d9ba0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d9ba4:
    // 0x1d9ba4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d9ba8:
    // 0x1d9ba8: 0x8076688  j           func_1D9A20
label_1d9bac:
    if (ctx->pc == 0x1D9BACu) {
        ctx->pc = 0x1D9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BA8u;
        // 0x1d9bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BB0u;
        goto label_1d9bb0;
    }
    ctx->pc = 0x1D9BA8u;
    ctx->pc = 0x1D9BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BA8u;
    // 0x1d9bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9BB0u;
label_1d9bb0:
    // 0x1d9bb0: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1d9bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d9bb4:
    // 0x1d9bb4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1d9bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d9bb8:
    // 0x1d9bb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9bbc:
    // 0x1d9bbc: 0xc076326  jal         func_1D8C98
label_1d9bc0:
    if (ctx->pc == 0x1D9BC0u) {
        ctx->pc = 0x1D9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BBCu;
        // 0x1d9bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BC4u;
        goto label_1d9bc4;
    }
    ctx->pc = 0x1D9BBCu;
    SET_GPR_U32(ctx, 31, 0x1D9BC4u);
    ctx->pc = 0x1D9BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BBCu;
    // 0x1d9bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1D9BBCu, 0x1D9BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BC4u;
label_1d9bc4:
    // 0x1d9bc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d9bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d9bc8:
    // 0x1d9bc8: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d9bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_1d9bcc:
    // 0x1d9bcc: 0x508023  subu        $s0, $v0, $s0
    ctx->pc = 0x1d9bccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d9bd0:
    // 0x1d9bd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d9bd4:
    if (ctx->pc == 0x1D9BD4u) {
        ctx->pc = 0x1D9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BD0u;
        // 0x1d9bd4: 0x34a50305  ori         $a1, $a1, 0x305 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)773);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BD8u;
        goto label_1d9bd8;
    }
    ctx->pc = 0x1D9BD0u;
    {
        const bool branch_taken_0x1d9bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BD0u;
        // 0x1d9bd4: 0x34a50305  ori         $a1, $a1, 0x305 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bd0) {
            ctx->pc = 0x1D9BE0u;
            goto label_1d9be0;
        }
    }
    ctx->pc = 0x1D9BD8u;
label_1d9bd8:
    // 0x1d9bd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d9bdc:
    if (ctx->pc == 0x1D9BDCu) {
        ctx->pc = 0x1D9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BD8u;
        // 0x1d9bdc: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BE0u;
        goto label_1d9be0;
    }
    ctx->pc = 0x1D9BD8u;
    {
        const bool branch_taken_0x1d9bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BD8u;
        // 0x1d9bdc: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bd8) {
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D9BE0u;
label_1d9be0:
    // 0x1d9be0: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1d9be0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_1d9be4:
    // 0x1d9be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9be8:
    // 0x1d9be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9bec:
    // 0x1d9bec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d9bf0:
    // 0x1d9bf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9bf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d9bf4:
    // 0x1d9bf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d9bf8:
    // 0x1d9bf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d9bfc:
    // 0x1d9bfc: 0x8076688  j           func_1D9A20
label_1d9c00:
    if (ctx->pc == 0x1D9C00u) {
        ctx->pc = 0x1D9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BFCu;
        // 0x1d9c00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C04u;
        goto label_1d9c04;
    }
    ctx->pc = 0x1D9BFCu;
    ctx->pc = 0x1D9C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BFCu;
    // 0x1d9c00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9C04u;
label_1d9c04:
    // 0x1d9c04: 0x0  nop
    ctx->pc = 0x1d9c04u;
    // NOP
label_1d9c08:
    // 0x1d9c08: 0x3e00008  jr          $ra
label_1d9c0c:
    if (ctx->pc == 0x1D9C0Cu) {
        ctx->pc = 0x1D9C10u;
        goto label_fallthrough_0x1d9c08;
    }
    ctx->pc = 0x1D9C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d9c08:
    ctx->pc = 0x1D9C10u;
}
