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

// Function: sub_001D1A48
// Address: 0x1d1a48 - 0x1d1bc0
void sub_001D1A48_0x1d1a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1A48_0x1d1a48");
#endif

    switch (ctx->pc) {
        case 0x1d1a48u: goto label_1d1a48;
        case 0x1d1a4cu: goto label_1d1a4c;
        case 0x1d1a50u: goto label_1d1a50;
        case 0x1d1a54u: goto label_1d1a54;
        case 0x1d1a58u: goto label_1d1a58;
        case 0x1d1a5cu: goto label_1d1a5c;
        case 0x1d1a60u: goto label_1d1a60;
        case 0x1d1a64u: goto label_1d1a64;
        case 0x1d1a68u: goto label_1d1a68;
        case 0x1d1a6cu: goto label_1d1a6c;
        case 0x1d1a70u: goto label_1d1a70;
        case 0x1d1a74u: goto label_1d1a74;
        case 0x1d1a78u: goto label_1d1a78;
        case 0x1d1a7cu: goto label_1d1a7c;
        case 0x1d1a80u: goto label_1d1a80;
        case 0x1d1a84u: goto label_1d1a84;
        case 0x1d1a88u: goto label_1d1a88;
        case 0x1d1a8cu: goto label_1d1a8c;
        case 0x1d1a90u: goto label_1d1a90;
        case 0x1d1a94u: goto label_1d1a94;
        case 0x1d1a98u: goto label_1d1a98;
        case 0x1d1a9cu: goto label_1d1a9c;
        case 0x1d1aa0u: goto label_1d1aa0;
        case 0x1d1aa4u: goto label_1d1aa4;
        case 0x1d1aa8u: goto label_1d1aa8;
        case 0x1d1aacu: goto label_1d1aac;
        case 0x1d1ab0u: goto label_1d1ab0;
        case 0x1d1ab4u: goto label_1d1ab4;
        case 0x1d1ab8u: goto label_1d1ab8;
        case 0x1d1abcu: goto label_1d1abc;
        case 0x1d1ac0u: goto label_1d1ac0;
        case 0x1d1ac4u: goto label_1d1ac4;
        case 0x1d1ac8u: goto label_1d1ac8;
        case 0x1d1accu: goto label_1d1acc;
        case 0x1d1ad0u: goto label_1d1ad0;
        case 0x1d1ad4u: goto label_1d1ad4;
        case 0x1d1ad8u: goto label_1d1ad8;
        case 0x1d1adcu: goto label_1d1adc;
        case 0x1d1ae0u: goto label_1d1ae0;
        case 0x1d1ae4u: goto label_1d1ae4;
        case 0x1d1ae8u: goto label_1d1ae8;
        case 0x1d1aecu: goto label_1d1aec;
        case 0x1d1af0u: goto label_1d1af0;
        case 0x1d1af4u: goto label_1d1af4;
        case 0x1d1af8u: goto label_1d1af8;
        case 0x1d1afcu: goto label_1d1afc;
        case 0x1d1b00u: goto label_1d1b00;
        case 0x1d1b04u: goto label_1d1b04;
        case 0x1d1b08u: goto label_1d1b08;
        case 0x1d1b0cu: goto label_1d1b0c;
        case 0x1d1b10u: goto label_1d1b10;
        case 0x1d1b14u: goto label_1d1b14;
        case 0x1d1b18u: goto label_1d1b18;
        case 0x1d1b1cu: goto label_1d1b1c;
        case 0x1d1b20u: goto label_1d1b20;
        case 0x1d1b24u: goto label_1d1b24;
        case 0x1d1b28u: goto label_1d1b28;
        case 0x1d1b2cu: goto label_1d1b2c;
        case 0x1d1b30u: goto label_1d1b30;
        case 0x1d1b34u: goto label_1d1b34;
        case 0x1d1b38u: goto label_1d1b38;
        case 0x1d1b3cu: goto label_1d1b3c;
        case 0x1d1b40u: goto label_1d1b40;
        case 0x1d1b44u: goto label_1d1b44;
        case 0x1d1b48u: goto label_1d1b48;
        case 0x1d1b4cu: goto label_1d1b4c;
        case 0x1d1b50u: goto label_1d1b50;
        case 0x1d1b54u: goto label_1d1b54;
        case 0x1d1b58u: goto label_1d1b58;
        case 0x1d1b5cu: goto label_1d1b5c;
        case 0x1d1b60u: goto label_1d1b60;
        case 0x1d1b64u: goto label_1d1b64;
        case 0x1d1b68u: goto label_1d1b68;
        case 0x1d1b6cu: goto label_1d1b6c;
        case 0x1d1b70u: goto label_1d1b70;
        case 0x1d1b74u: goto label_1d1b74;
        case 0x1d1b78u: goto label_1d1b78;
        case 0x1d1b7cu: goto label_1d1b7c;
        case 0x1d1b80u: goto label_1d1b80;
        case 0x1d1b84u: goto label_1d1b84;
        case 0x1d1b88u: goto label_1d1b88;
        case 0x1d1b8cu: goto label_1d1b8c;
        case 0x1d1b90u: goto label_1d1b90;
        case 0x1d1b94u: goto label_1d1b94;
        case 0x1d1b98u: goto label_1d1b98;
        case 0x1d1b9cu: goto label_1d1b9c;
        case 0x1d1ba0u: goto label_1d1ba0;
        case 0x1d1ba4u: goto label_1d1ba4;
        case 0x1d1ba8u: goto label_1d1ba8;
        case 0x1d1bacu: goto label_1d1bac;
        case 0x1d1bb0u: goto label_1d1bb0;
        case 0x1d1bb4u: goto label_1d1bb4;
        case 0x1d1bb8u: goto label_1d1bb8;
        case 0x1d1bbcu: goto label_1d1bbc;
        default: break;
    }

    ctx->pc = 0x1d1a48u;

label_1d1a48:
    // 0x1d1a48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d1a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d1a4c:
    // 0x1d1a4c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1d1a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1d1a50:
    // 0x1d1a50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d1a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1a54:
    // 0x1d1a54: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1d1a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1d1a58:
    // 0x1d1a58: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1d1a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1d1a5c:
    // 0x1d1a5c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1d1a5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d1a60:
    // 0x1d1a60: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1d1a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1d1a64:
    // 0x1d1a64: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1d1a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1d1a68:
    // 0x1d1a68: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1d1a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1d1a6c:
    // 0x1d1a6c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1d1a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1d1a70:
    // 0x1d1a70: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1d1a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1d1a74:
    // 0x1d1a74: 0x8e5305a0  lw          $s3, 0x5A0($s2)
    ctx->pc = 0x1d1a74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1440)));
label_1d1a78:
    // 0x1d1a78: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1d1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_1d1a7c:
    // 0x1d1a7c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1d1a80:
    // 0x1d1a80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d1a84:
    // 0x1d1a84: 0x24540130  addiu       $s4, $v0, 0x130
    ctx->pc = 0x1d1a84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_1d1a88:
    // 0x1d1a88: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x1d1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_1d1a8c:
    // 0x1d1a8c: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x1d1a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d1a90:
    // 0x1d1a90: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_1d1a94:
    if (ctx->pc == 0x1D1A94u) {
        ctx->pc = 0x1D1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A90u;
        // 0x1d1a94: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1A98u;
        goto label_1d1a98;
    }
    ctx->pc = 0x1D1A90u;
    {
        const bool branch_taken_0x1d1a90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A90u;
        // 0x1d1a94: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a90) {
            ctx->pc = 0x1D1B50u;
            goto label_1d1b50;
        }
    }
    ctx->pc = 0x1D1A98u;
label_1d1a98:
    // 0x1d1a98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1a9c:
    // 0x1d1a9c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1d1a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d1aa0:
    // 0x1d1aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1aa4:
    // 0x1d1aa4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1d1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1d1aa8:
    // 0x1d1aa8: 0x40f809  jalr        $v0
label_1d1aac:
    if (ctx->pc == 0x1D1AACu) {
        ctx->pc = 0x1D1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AA8u;
        // 0x1d1aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1AB0u;
        goto label_1d1ab0;
    }
    ctx->pc = 0x1D1AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1AB0u);
        ctx->pc = 0x1D1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AA8u;
        // 0x1d1aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1AA8u, 0x1D1AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1AB0u;
label_1d1ab0:
    // 0x1d1ab0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1d1ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ab4:
    // 0x1d1ab4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1d1ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1ab8:
    // 0x1d1ab8: 0xc049c48  jal         func_127120
label_1d1abc:
    if (ctx->pc == 0x1D1ABCu) {
        ctx->pc = 0x1D1ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AB8u;
        // 0x1d1abc: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1AC0u;
        goto label_1d1ac0;
    }
    ctx->pc = 0x1D1AB8u;
    SET_GPR_U32(ctx, 31, 0x1D1AC0u);
    ctx->pc = 0x1D1ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AB8u;
    // 0x1d1abc: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1D1AB8u, 0x1D1AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AC0u;
label_1d1ac0:
    // 0x1d1ac0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d1ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1ac4:
    // 0x1d1ac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ac8:
    // 0x1d1ac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d1ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1acc:
    // 0x1d1acc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d1accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1d1ad0:
    // 0x1d1ad0: 0x40f809  jalr        $v0
label_1d1ad4:
    if (ctx->pc == 0x1D1AD4u) {
        ctx->pc = 0x1D1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AD0u;
        // 0x1d1ad4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1AD8u;
        goto label_1d1ad8;
    }
    ctx->pc = 0x1D1AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1AD8u);
        ctx->pc = 0x1D1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AD0u;
        // 0x1d1ad4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1AD0u, 0x1D1AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1AD8u;
label_1d1ad8:
    // 0x1d1ad8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1d1ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1d1adc:
    // 0x1d1adc: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x1d1adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1d1ae0:
    // 0x1d1ae0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1d1ae4:
    if (ctx->pc == 0x1D1AE4u) {
        ctx->pc = 0x1D1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AE0u;
        // 0x1d1ae4: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1AE8u;
        goto label_1d1ae8;
    }
    ctx->pc = 0x1D1AE0u;
    {
        const bool branch_taken_0x1d1ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AE0u;
        // 0x1d1ae4: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ae0) {
            ctx->pc = 0x1D1B38u;
            goto label_1d1b38;
        }
    }
    ctx->pc = 0x1D1AE8u;
label_1d1ae8:
    // 0x1d1ae8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d1ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1aec:
    // 0x1d1aec: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1d1aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d1af0:
    // 0x1d1af0: 0x2a43023  subu        $a2, $s5, $a0
    ctx->pc = 0x1d1af0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1d1af4:
    // 0x1d1af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1af8:
    // 0x1d1af8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1d1af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1d1afc:
    // 0x1d1afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b00:
    // 0x1d1b00: 0x40f809  jalr        $v0
label_1d1b04:
    if (ctx->pc == 0x1D1B04u) {
        ctx->pc = 0x1D1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B00u;
        // 0x1d1b04: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B08u;
        goto label_1d1b08;
    }
    ctx->pc = 0x1D1B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1B08u);
        ctx->pc = 0x1D1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B00u;
        // 0x1d1b04: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B00u, 0x1D1B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1B08u;
label_1d1b08:
    // 0x1d1b08: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1d1b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1d1b0c:
    // 0x1d1b0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1b10:
    // 0x1d1b10: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1d1b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1d1b14:
    // 0x1d1b14: 0xc049c48  jal         func_127120
label_1d1b18:
    if (ctx->pc == 0x1D1B18u) {
        ctx->pc = 0x1D1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B14u;
        // 0x1d1b18: 0x2c52821  addu        $a1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B1Cu;
        goto label_1d1b1c;
    }
    ctx->pc = 0x1D1B14u;
    SET_GPR_U32(ctx, 31, 0x1D1B1Cu);
    ctx->pc = 0x1D1B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B14u;
    // 0x1d1b18: 0x2c52821  addu        $a1, $s6, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1D1B14u, 0x1D1B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B1Cu;
label_1d1b1c:
    // 0x1d1b1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1b20:
    // 0x1d1b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b24:
    // 0x1d1b24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d1b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b28:
    // 0x1d1b28: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1d1b2c:
    // 0x1d1b2c: 0x40f809  jalr        $v0
label_1d1b30:
    if (ctx->pc == 0x1D1B30u) {
        ctx->pc = 0x1D1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B2Cu;
        // 0x1d1b30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B34u;
        goto label_1d1b34;
    }
    ctx->pc = 0x1D1B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1B34u);
        ctx->pc = 0x1D1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B2Cu;
        // 0x1d1b30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B2Cu, 0x1D1B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1B34u;
label_1d1b34:
    // 0x1d1b34: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x1d1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_1d1b38:
    // 0x1d1b38: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1d1b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d1b3c:
    // 0x1d1b3c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1d1b40:
    if (ctx->pc == 0x1D1B40u) {
        ctx->pc = 0x1D1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B3Cu;
        // 0x1d1b40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B44u;
        goto label_1d1b44;
    }
    ctx->pc = 0x1D1B3Cu;
    {
        const bool branch_taken_0x1d1b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b3c) {
            ctx->pc = 0x1D1B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1B3Cu;
            // 0x1d1b40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1B54u;
            goto label_1d1b54;
        }
    }
    ctx->pc = 0x1D1B44u;
label_1d1b44:
    // 0x1d1b44: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1d1b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1d1b48:
    // 0x1d1b48: 0x60f809  jalr        $v1
label_1d1b4c:
    if (ctx->pc == 0x1D1B4Cu) {
        ctx->pc = 0x1D1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B48u;
        // 0x1d1b4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B50u;
        goto label_1d1b50;
    }
    ctx->pc = 0x1D1B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D1B50u);
        ctx->pc = 0x1D1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B48u;
        // 0x1d1b4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B48u, 0x1D1B50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1B50u;
label_1d1b50:
    // 0x1d1b50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d1b54:
    // 0x1d1b54: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
label_1d1b58:
    if (ctx->pc == 0x1D1B58u) {
        ctx->pc = 0x1D1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B54u;
        // 0x1d1b58: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B5Cu;
        goto label_1d1b5c;
    }
    ctx->pc = 0x1D1B54u;
    {
        const bool branch_taken_0x1d1b54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B54u;
        // 0x1d1b58: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b54) {
            ctx->pc = 0x1D1B98u;
            goto label_1d1b98;
        }
    }
    ctx->pc = 0x1D1B5Cu;
label_1d1b5c:
    // 0x1d1b5c: 0x8e420168  lw          $v0, 0x168($s2)
    ctx->pc = 0x1d1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 360)));
label_1d1b60:
    // 0x1d1b60: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1d1b64:
    if (ctx->pc == 0x1D1B64u) {
        ctx->pc = 0x1D1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B60u;
        // 0x1d1b64: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B68u;
        goto label_1d1b68;
    }
    ctx->pc = 0x1D1B60u;
    {
        const bool branch_taken_0x1d1b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B60u;
        // 0x1d1b64: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b60) {
            ctx->pc = 0x1D1B9Cu;
            goto label_1d1b9c;
        }
    }
    ctx->pc = 0x1D1B68u;
label_1d1b68:
    // 0x1d1b68: 0x8e420544  lw          $v0, 0x544($s2)
    ctx->pc = 0x1d1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1348)));
label_1d1b6c:
    // 0x1d1b6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d1b70:
    if (ctx->pc == 0x1D1B70u) {
        ctx->pc = 0x1D1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B6Cu;
        // 0x1d1b70: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B74u;
        goto label_1d1b74;
    }
    ctx->pc = 0x1D1B6Cu;
    {
        const bool branch_taken_0x1d1b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B6Cu;
        // 0x1d1b70: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b6c) {
            ctx->pc = 0x1D1B84u;
            goto label_1d1b84;
        }
    }
    ctx->pc = 0x1D1B74u;
label_1d1b74:
    // 0x1d1b74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b78:
    // 0x1d1b78: 0x24a5c0d8  addiu       $a1, $a1, -0x3F28
    ctx->pc = 0x1d1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951128));
label_1d1b7c:
    // 0x1d1b7c: 0xc0746f0  jal         func_1D1BC0
label_1d1b80:
    if (ctx->pc == 0x1D1B80u) {
        ctx->pc = 0x1D1B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B7Cu;
        // 0x1d1b80: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B84u;
        goto label_1d1b84;
    }
    ctx->pc = 0x1D1B7Cu;
    SET_GPR_U32(ctx, 31, 0x1D1B84u);
    ctx->pc = 0x1D1B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B7Cu;
    // 0x1d1b80: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1BC0u, 0x1D1B7Cu, 0x1D1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B84u;
label_1d1b84:
    // 0x1d1b84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b88:
    // 0x1d1b88: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1d1b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b8c:
    // 0x1d1b8c: 0xc0746f0  jal         func_1D1BC0
label_1d1b90:
    if (ctx->pc == 0x1D1B90u) {
        ctx->pc = 0x1D1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B8Cu;
        // 0x1d1b90: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B94u;
        goto label_1d1b94;
    }
    ctx->pc = 0x1D1B8Cu;
    SET_GPR_U32(ctx, 31, 0x1D1B94u);
    ctx->pc = 0x1D1B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B8Cu;
    // 0x1d1b90: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1BC0u, 0x1D1B8Cu, 0x1D1B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B94u;
label_1d1b94:
    // 0x1d1b94: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1d1b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1b98:
    // 0x1d1b98: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1d1b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d1b9c:
    // 0x1d1b9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1d1b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1ba0:
    // 0x1d1ba0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1d1ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d1ba4:
    // 0x1d1ba4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1d1ba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1ba8:
    // 0x1d1ba8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1d1ba8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1d1bac:
    // 0x1d1bac: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1d1bacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d1bb0:
    // 0x1d1bb0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1d1bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1bb4:
    // 0x1d1bb4: 0x3e00008  jr          $ra
label_1d1bb8:
    if (ctx->pc == 0x1D1BB8u) {
        ctx->pc = 0x1D1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BB4u;
        // 0x1d1bb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BBCu;
        goto label_1d1bbc;
    }
    ctx->pc = 0x1D1BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BB4u;
        // 0x1d1bb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1BBCu;
label_1d1bbc:
    // 0x1d1bbc: 0x0  nop
    ctx->pc = 0x1d1bbcu;
    // NOP
}
