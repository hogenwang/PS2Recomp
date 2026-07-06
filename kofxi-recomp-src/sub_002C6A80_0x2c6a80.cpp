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

// Function: sub_002C6A80
// Address: 0x2c6a80 - 0x2c6c50
void sub_002C6A80_0x2c6a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6A80_0x2c6a80");
#endif

    switch (ctx->pc) {
        case 0x2c6a80u: goto label_2c6a80;
        case 0x2c6a84u: goto label_2c6a84;
        case 0x2c6a88u: goto label_2c6a88;
        case 0x2c6a8cu: goto label_2c6a8c;
        case 0x2c6a90u: goto label_2c6a90;
        case 0x2c6a94u: goto label_2c6a94;
        case 0x2c6a98u: goto label_2c6a98;
        case 0x2c6a9cu: goto label_2c6a9c;
        case 0x2c6aa0u: goto label_2c6aa0;
        case 0x2c6aa4u: goto label_2c6aa4;
        case 0x2c6aa8u: goto label_2c6aa8;
        case 0x2c6aacu: goto label_2c6aac;
        case 0x2c6ab0u: goto label_2c6ab0;
        case 0x2c6ab4u: goto label_2c6ab4;
        case 0x2c6ab8u: goto label_2c6ab8;
        case 0x2c6abcu: goto label_2c6abc;
        case 0x2c6ac0u: goto label_2c6ac0;
        case 0x2c6ac4u: goto label_2c6ac4;
        case 0x2c6ac8u: goto label_2c6ac8;
        case 0x2c6accu: goto label_2c6acc;
        case 0x2c6ad0u: goto label_2c6ad0;
        case 0x2c6ad4u: goto label_2c6ad4;
        case 0x2c6ad8u: goto label_2c6ad8;
        case 0x2c6adcu: goto label_2c6adc;
        case 0x2c6ae0u: goto label_2c6ae0;
        case 0x2c6ae4u: goto label_2c6ae4;
        case 0x2c6ae8u: goto label_2c6ae8;
        case 0x2c6aecu: goto label_2c6aec;
        case 0x2c6af0u: goto label_2c6af0;
        case 0x2c6af4u: goto label_2c6af4;
        case 0x2c6af8u: goto label_2c6af8;
        case 0x2c6afcu: goto label_2c6afc;
        case 0x2c6b00u: goto label_2c6b00;
        case 0x2c6b04u: goto label_2c6b04;
        case 0x2c6b08u: goto label_2c6b08;
        case 0x2c6b0cu: goto label_2c6b0c;
        case 0x2c6b10u: goto label_2c6b10;
        case 0x2c6b14u: goto label_2c6b14;
        case 0x2c6b18u: goto label_2c6b18;
        case 0x2c6b1cu: goto label_2c6b1c;
        case 0x2c6b20u: goto label_2c6b20;
        case 0x2c6b24u: goto label_2c6b24;
        case 0x2c6b28u: goto label_2c6b28;
        case 0x2c6b2cu: goto label_2c6b2c;
        case 0x2c6b30u: goto label_2c6b30;
        case 0x2c6b34u: goto label_2c6b34;
        case 0x2c6b38u: goto label_2c6b38;
        case 0x2c6b3cu: goto label_2c6b3c;
        case 0x2c6b40u: goto label_2c6b40;
        case 0x2c6b44u: goto label_2c6b44;
        case 0x2c6b48u: goto label_2c6b48;
        case 0x2c6b4cu: goto label_2c6b4c;
        case 0x2c6b50u: goto label_2c6b50;
        case 0x2c6b54u: goto label_2c6b54;
        case 0x2c6b58u: goto label_2c6b58;
        case 0x2c6b5cu: goto label_2c6b5c;
        case 0x2c6b60u: goto label_2c6b60;
        case 0x2c6b64u: goto label_2c6b64;
        case 0x2c6b68u: goto label_2c6b68;
        case 0x2c6b6cu: goto label_2c6b6c;
        case 0x2c6b70u: goto label_2c6b70;
        case 0x2c6b74u: goto label_2c6b74;
        case 0x2c6b78u: goto label_2c6b78;
        case 0x2c6b7cu: goto label_2c6b7c;
        case 0x2c6b80u: goto label_2c6b80;
        case 0x2c6b84u: goto label_2c6b84;
        case 0x2c6b88u: goto label_2c6b88;
        case 0x2c6b8cu: goto label_2c6b8c;
        case 0x2c6b90u: goto label_2c6b90;
        case 0x2c6b94u: goto label_2c6b94;
        case 0x2c6b98u: goto label_2c6b98;
        case 0x2c6b9cu: goto label_2c6b9c;
        case 0x2c6ba0u: goto label_2c6ba0;
        case 0x2c6ba4u: goto label_2c6ba4;
        case 0x2c6ba8u: goto label_2c6ba8;
        case 0x2c6bacu: goto label_2c6bac;
        case 0x2c6bb0u: goto label_2c6bb0;
        case 0x2c6bb4u: goto label_2c6bb4;
        case 0x2c6bb8u: goto label_2c6bb8;
        case 0x2c6bbcu: goto label_2c6bbc;
        case 0x2c6bc0u: goto label_2c6bc0;
        case 0x2c6bc4u: goto label_2c6bc4;
        case 0x2c6bc8u: goto label_2c6bc8;
        case 0x2c6bccu: goto label_2c6bcc;
        case 0x2c6bd0u: goto label_2c6bd0;
        case 0x2c6bd4u: goto label_2c6bd4;
        case 0x2c6bd8u: goto label_2c6bd8;
        case 0x2c6bdcu: goto label_2c6bdc;
        case 0x2c6be0u: goto label_2c6be0;
        case 0x2c6be4u: goto label_2c6be4;
        case 0x2c6be8u: goto label_2c6be8;
        case 0x2c6becu: goto label_2c6bec;
        case 0x2c6bf0u: goto label_2c6bf0;
        case 0x2c6bf4u: goto label_2c6bf4;
        case 0x2c6bf8u: goto label_2c6bf8;
        case 0x2c6bfcu: goto label_2c6bfc;
        case 0x2c6c00u: goto label_2c6c00;
        case 0x2c6c04u: goto label_2c6c04;
        case 0x2c6c08u: goto label_2c6c08;
        case 0x2c6c0cu: goto label_2c6c0c;
        case 0x2c6c10u: goto label_2c6c10;
        case 0x2c6c14u: goto label_2c6c14;
        case 0x2c6c18u: goto label_2c6c18;
        case 0x2c6c1cu: goto label_2c6c1c;
        case 0x2c6c20u: goto label_2c6c20;
        case 0x2c6c24u: goto label_2c6c24;
        case 0x2c6c28u: goto label_2c6c28;
        case 0x2c6c2cu: goto label_2c6c2c;
        case 0x2c6c30u: goto label_2c6c30;
        case 0x2c6c34u: goto label_2c6c34;
        case 0x2c6c38u: goto label_2c6c38;
        case 0x2c6c3cu: goto label_2c6c3c;
        case 0x2c6c40u: goto label_2c6c40;
        case 0x2c6c44u: goto label_2c6c44;
        case 0x2c6c48u: goto label_2c6c48;
        case 0x2c6c4cu: goto label_2c6c4c;
        default: break;
    }

    ctx->pc = 0x2c6a80u;

label_2c6a80:
    // 0x2c6a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c6a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c6a84:
    // 0x2c6a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6a88:
    // 0x2c6a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c6a8c:
    // 0x2c6a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6a90:
    // 0x2c6a90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c6a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c6a94:
    // 0x2c6a94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c6a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c6a98:
    // 0x2c6a98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c6a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c6a9c:
    // 0x2c6a9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2c6a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2c6aa0:
    // 0x2c6aa0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2c6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2c6aa4:
    // 0x2c6aa4: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_2c6aa8:
    if (ctx->pc == 0x2C6AA8u) {
        ctx->pc = 0x2C6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AA4u;
        // 0x2c6aa8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6AACu;
        goto label_2c6aac;
    }
    ctx->pc = 0x2C6AA4u;
    {
        const bool branch_taken_0x2c6aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AA4u;
        // 0x2c6aa8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6aa4) {
            ctx->pc = 0x2C6AE8u;
            goto label_2c6ae8;
        }
    }
    ctx->pc = 0x2C6AACu;
label_2c6aac:
    // 0x2c6aac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2c6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c6ab0:
    // 0x2c6ab0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2c6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2c6ab4:
    // 0x2c6ab4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2c6ab8:
    // 0x2c6ab8: 0x40f809  jalr        $v0
label_2c6abc:
    if (ctx->pc == 0x2C6ABCu) {
        ctx->pc = 0x2C6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AB8u;
        // 0x2c6abc: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6AC0u;
        goto label_2c6ac0;
    }
    ctx->pc = 0x2C6AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6AC0u);
        ctx->pc = 0x2C6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AB8u;
        // 0x2c6abc: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6AB8u, 0x2C6AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6AC0u;
label_2c6ac0:
    // 0x2c6ac0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6ac0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ac4:
    // 0x2c6ac4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2c6ac8:
    if (ctx->pc == 0x2C6AC8u) {
        ctx->pc = 0x2C6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AC4u;
        // 0x2c6ac8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6ACCu;
        goto label_2c6acc;
    }
    ctx->pc = 0x2C6AC4u;
    {
        const bool branch_taken_0x2c6ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AC4u;
        // 0x2c6ac8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ac4) {
            ctx->pc = 0x2C6AE8u;
            goto label_2c6ae8;
        }
    }
    ctx->pc = 0x2C6ACCu;
label_2c6acc:
    // 0x2c6acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6ad0:
    // 0x2c6ad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c6ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c6ad4:
    // 0x2c6ad4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c6ad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6ad8:
    // 0x2c6ad8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2c6ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c6adc:
    // 0x2c6adc: 0x80b21d8  j           func_2C8760
label_2c6ae0:
    if (ctx->pc == 0x2C6AE0u) {
        ctx->pc = 0x2C6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6ADCu;
        // 0x2c6ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6AE4u;
        goto label_2c6ae4;
    }
    ctx->pc = 0x2C6ADCu;
    ctx->pc = 0x2C6AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6ADCu;
    // 0x2c6ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    sub_002C8760_0x2c8760(rdram, ctx, runtime); return;
    ctx->pc = 0x2C6AE4u;
label_2c6ae4:
    // 0x2c6ae4: 0x0  nop
    ctx->pc = 0x2c6ae4u;
    // NOP
label_2c6ae8:
    // 0x2c6ae8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2c6ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c6aec:
    // 0x2c6aec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c6aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6af0:
    // 0x2c6af0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2c6af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2c6af4:
    // 0x2c6af4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c6af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c6af8:
    // 0x2c6af8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c6af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2c6afc:
    // 0x2c6afc: 0x40f809  jalr        $v0
label_2c6b00:
    if (ctx->pc == 0x2C6B00u) {
        ctx->pc = 0x2C6B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AFCu;
        // 0x2c6b00: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6B04u;
        goto label_2c6b04;
    }
    ctx->pc = 0x2C6AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6B04u);
        ctx->pc = 0x2C6B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AFCu;
        // 0x2c6b00: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6AFCu, 0x2C6B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6B04u;
label_2c6b04:
    // 0x2c6b04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6b08:
    // 0x2c6b08: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2c6b0c:
    if (ctx->pc == 0x2C6B0Cu) {
        ctx->pc = 0x2C6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B08u;
        // 0x2c6b0c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6B10u;
        goto label_2c6b10;
    }
    ctx->pc = 0x2C6B08u;
    {
        const bool branch_taken_0x2c6b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B08u;
        // 0x2c6b0c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b08) {
            ctx->pc = 0x2C6B28u;
            goto label_2c6b28;
        }
    }
    ctx->pc = 0x2C6B10u;
label_2c6b10:
    // 0x2c6b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6b14:
    // 0x2c6b14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c6b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c6b18:
    // 0x2c6b18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c6b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6b1c:
    // 0x2c6b1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2c6b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c6b20:
    // 0x2c6b20: 0x80b21d8  j           func_2C8760
label_2c6b24:
    if (ctx->pc == 0x2C6B24u) {
        ctx->pc = 0x2C6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B20u;
        // 0x2c6b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6B28u;
        goto label_2c6b28;
    }
    ctx->pc = 0x2C6B20u;
    ctx->pc = 0x2C6B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6B20u;
    // 0x2c6b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    sub_002C8760_0x2c8760(rdram, ctx, runtime); return;
    ctx->pc = 0x2C6B28u;
label_2c6b28:
    // 0x2c6b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6b2c:
    // 0x2c6b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c6b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c6b30:
    // 0x2c6b30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c6b30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6b34:
    // 0x2c6b34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2c6b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c6b38:
    // 0x2c6b38: 0x3e00008  jr          $ra
label_2c6b3c:
    if (ctx->pc == 0x2C6B3Cu) {
        ctx->pc = 0x2C6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B38u;
        // 0x2c6b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6B40u;
        goto label_2c6b40;
    }
    ctx->pc = 0x2C6B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B38u;
        // 0x2c6b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6B40u;
label_2c6b40:
    // 0x2c6b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c6b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c6b44:
    // 0x2c6b44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c6b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c6b48:
    // 0x2c6b48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6b4c:
    // 0x2c6b4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c6b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c6b50:
    // 0x2c6b50: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c6b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c6b54:
    // 0x2c6b54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c6b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c6b58:
    // 0x2c6b58: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x2c6b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2c6b5c:
    // 0x2c6b5c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c6b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2c6b60:
    // 0x2c6b60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c6b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c6b64:
    // 0x2c6b64: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c6b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2c6b68:
    // 0x2c6b68: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2c6b68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c6b6c:
    // 0x2c6b6c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2c6b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2c6b70:
    // 0x2c6b70: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2c6b70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c6b74:
    // 0x2c6b74: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2c6b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2c6b78:
    // 0x2c6b78: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2c6b78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c6b7c:
    // 0x2c6b7c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2c6b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2c6b80:
    // 0x2c6b80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c6b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c6b84:
    // 0x2c6b84: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2c6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c6b88:
    // 0x2c6b88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c6b8c:
    // 0x2c6b8c: 0x40f809  jalr        $v0
label_2c6b90:
    if (ctx->pc == 0x2C6B90u) {
        ctx->pc = 0x2C6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B8Cu;
        // 0x2c6b90: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6B94u;
        goto label_2c6b94;
    }
    ctx->pc = 0x2C6B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6B94u);
        ctx->pc = 0x2C6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B8Cu;
        // 0x2c6b90: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6B8Cu, 0x2C6B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6B94u;
label_2c6b94:
    // 0x2c6b94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6b94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6b98:
    // 0x2c6b98: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_2c6b9c:
    if (ctx->pc == 0x2C6B9Cu) {
        ctx->pc = 0x2C6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B98u;
        // 0x2c6b9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6BA0u;
        goto label_2c6ba0;
    }
    ctx->pc = 0x2C6B98u;
    {
        const bool branch_taken_0x2c6b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B98u;
        // 0x2c6b9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b98) {
            ctx->pc = 0x2C6BD8u;
            goto label_2c6bd8;
        }
    }
    ctx->pc = 0x2C6BA0u;
label_2c6ba0:
    // 0x2c6ba0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c6ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6ba4:
    // 0x2c6ba4: 0xc0b5f44  jal         func_2D7D10
label_2c6ba8:
    if (ctx->pc == 0x2C6BA8u) {
        ctx->pc = 0x2C6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BA4u;
        // 0x2c6ba8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6BACu;
        goto label_2c6bac;
    }
    ctx->pc = 0x2C6BA4u;
    SET_GPR_U32(ctx, 31, 0x2C6BACu);
    ctx->pc = 0x2C6BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6BA4u;
    // 0x2c6ba8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D10u, 0x2C6BA4u, 0x2C6BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6BACu;
label_2c6bac:
    // 0x2c6bac: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2c6bb0:
    if (ctx->pc == 0x2C6BB0u) {
        ctx->pc = 0x2C6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BACu;
        // 0x2c6bb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6BB4u;
        goto label_2c6bb4;
    }
    ctx->pc = 0x2C6BACu;
    {
        const bool branch_taken_0x2c6bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6bac) {
            ctx->pc = 0x2C6BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6BACu;
            // 0x2c6bb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6C28u;
            goto label_2c6c28;
        }
    }
    ctx->pc = 0x2C6BB4u;
label_2c6bb4:
    // 0x2c6bb4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c6bb8:
    // 0x2c6bb8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2c6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2c6bbc:
    // 0x2c6bbc: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_2c6bc0:
    if (ctx->pc == 0x2C6BC0u) {
        ctx->pc = 0x2C6BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BBCu;
        // 0x2c6bc0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6BC4u;
        goto label_2c6bc4;
    }
    ctx->pc = 0x2C6BBCu;
    {
        const bool branch_taken_0x2c6bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6bbc) {
            ctx->pc = 0x2C6BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6BBCu;
            // 0x2c6bc0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6BF0u;
            goto label_2c6bf0;
        }
    }
    ctx->pc = 0x2C6BC4u;
label_2c6bc4:
    // 0x2c6bc4: 0x60f809  jalr        $v1
label_2c6bc8:
    if (ctx->pc == 0x2C6BC8u) {
        ctx->pc = 0x2C6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BC4u;
        // 0x2c6bc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6BCCu;
        goto label_2c6bcc;
    }
    ctx->pc = 0x2C6BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C6BCCu);
        ctx->pc = 0x2C6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BC4u;
        // 0x2c6bc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6BC4u, 0x2C6BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6BCCu;
label_2c6bcc:
    // 0x2c6bcc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6bd0:
    // 0x2c6bd0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2c6bd4:
    if (ctx->pc == 0x2C6BD4u) {
        ctx->pc = 0x2C6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BD0u;
        // 0x2c6bd4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6BD8u;
        goto label_2c6bd8;
    }
    ctx->pc = 0x2C6BD0u;
    {
        const bool branch_taken_0x2c6bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BD0u;
        // 0x2c6bd4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bd0) {
            ctx->pc = 0x2C6BE8u;
            goto label_2c6be8;
        }
    }
    ctx->pc = 0x2C6BD8u;
label_2c6bd8:
    // 0x2c6bd8: 0xc0b21d8  jal         func_2C8760
label_2c6bdc:
    if (ctx->pc == 0x2C6BDCu) {
        ctx->pc = 0x2C6BE0u;
        goto label_2c6be0;
    }
    ctx->pc = 0x2C6BD8u;
    SET_GPR_U32(ctx, 31, 0x2C6BE0u);
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x2C6BD8u, 0x2C6BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6BE0u;
label_2c6be0:
    // 0x2c6be0: 0x10000011  b           . + 4 + (0x11 << 2)
label_2c6be4:
    if (ctx->pc == 0x2C6BE4u) {
        ctx->pc = 0x2C6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BE0u;
        // 0x2c6be4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6BE8u;
        goto label_2c6be8;
    }
    ctx->pc = 0x2C6BE0u;
    {
        const bool branch_taken_0x2c6be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BE0u;
        // 0x2c6be4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6be0) {
            ctx->pc = 0x2C6C28u;
            goto label_2c6c28;
        }
    }
    ctx->pc = 0x2C6BE8u;
label_2c6be8:
    // 0x2c6be8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c6bec:
    // 0x2c6bec: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2c6becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2c6bf0:
    // 0x2c6bf0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c6bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c6bf4:
    // 0x2c6bf4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2c6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c6bf8:
    // 0x2c6bf8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c6bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c6bfc:
    // 0x2c6bfc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2c6bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c6c00:
    // 0x2c6c00: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2c6c00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6c04:
    // 0x2c6c04: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2c6c04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c6c08:
    // 0x2c6c08: 0x40f809  jalr        $v0
label_2c6c0c:
    if (ctx->pc == 0x2C6C0Cu) {
        ctx->pc = 0x2C6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C08u;
        // 0x2c6c0c: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6C10u;
        goto label_2c6c10;
    }
    ctx->pc = 0x2C6C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6C10u);
        ctx->pc = 0x2C6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C08u;
        // 0x2c6c0c: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6C08u, 0x2C6C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6C10u;
label_2c6c10:
    // 0x2c6c10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6c10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6c14:
    // 0x2c6c14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2c6c18:
    if (ctx->pc == 0x2C6C18u) {
        ctx->pc = 0x2C6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C14u;
        // 0x2c6c18: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6C1Cu;
        goto label_2c6c1c;
    }
    ctx->pc = 0x2C6C14u;
    {
        const bool branch_taken_0x2c6c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C14u;
        // 0x2c6c18: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c14) {
            ctx->pc = 0x2C6C24u;
            goto label_2c6c24;
        }
    }
    ctx->pc = 0x2C6C1Cu;
label_2c6c1c:
    // 0x2c6c1c: 0xc0b21d8  jal         func_2C8760
label_2c6c20:
    if (ctx->pc == 0x2C6C20u) {
        ctx->pc = 0x2C6C24u;
        goto label_2c6c24;
    }
    ctx->pc = 0x2C6C1Cu;
    SET_GPR_U32(ctx, 31, 0x2C6C24u);
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x2C6C1Cu, 0x2C6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C24u;
label_2c6c24:
    // 0x2c6c24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c6c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6c28:
    // 0x2c6c28: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c6c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c6c2c:
    // 0x2c6c2c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c6c2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6c30:
    // 0x2c6c30: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c6c30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c6c34:
    // 0x2c6c34: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c6c34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c6c38:
    // 0x2c6c38: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2c6c38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c6c3c:
    // 0x2c6c3c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2c6c3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c6c40:
    // 0x2c6c40: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2c6c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2c6c44:
    // 0x2c6c44: 0x3e00008  jr          $ra
label_2c6c48:
    if (ctx->pc == 0x2C6C48u) {
        ctx->pc = 0x2C6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C44u;
        // 0x2c6c48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6C4Cu;
        goto label_2c6c4c;
    }
    ctx->pc = 0x2C6C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C44u;
        // 0x2c6c48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6C4Cu;
label_2c6c4c:
    // 0x2c6c4c: 0x0  nop
    ctx->pc = 0x2c6c4cu;
    // NOP
    if (ctx->pc == 0x2c6c4cu) { ctx->pc = 0x2c6c50u; }
}
