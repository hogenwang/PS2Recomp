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

// Function: sub_002F2A10
// Address: 0x2f2a10 - 0x2f2b98
void sub_002F2A10_0x2f2a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2A10_0x2f2a10");
#endif

    switch (ctx->pc) {
        case 0x2f2a10u: goto label_2f2a10;
        case 0x2f2a14u: goto label_2f2a14;
        case 0x2f2a18u: goto label_2f2a18;
        case 0x2f2a1cu: goto label_2f2a1c;
        case 0x2f2a20u: goto label_2f2a20;
        case 0x2f2a24u: goto label_2f2a24;
        case 0x2f2a28u: goto label_2f2a28;
        case 0x2f2a2cu: goto label_2f2a2c;
        case 0x2f2a30u: goto label_2f2a30;
        case 0x2f2a34u: goto label_2f2a34;
        case 0x2f2a38u: goto label_2f2a38;
        case 0x2f2a3cu: goto label_2f2a3c;
        case 0x2f2a40u: goto label_2f2a40;
        case 0x2f2a44u: goto label_2f2a44;
        case 0x2f2a48u: goto label_2f2a48;
        case 0x2f2a4cu: goto label_2f2a4c;
        case 0x2f2a50u: goto label_2f2a50;
        case 0x2f2a54u: goto label_2f2a54;
        case 0x2f2a58u: goto label_2f2a58;
        case 0x2f2a5cu: goto label_2f2a5c;
        case 0x2f2a60u: goto label_2f2a60;
        case 0x2f2a64u: goto label_2f2a64;
        case 0x2f2a68u: goto label_2f2a68;
        case 0x2f2a6cu: goto label_2f2a6c;
        case 0x2f2a70u: goto label_2f2a70;
        case 0x2f2a74u: goto label_2f2a74;
        case 0x2f2a78u: goto label_2f2a78;
        case 0x2f2a7cu: goto label_2f2a7c;
        case 0x2f2a80u: goto label_2f2a80;
        case 0x2f2a84u: goto label_2f2a84;
        case 0x2f2a88u: goto label_2f2a88;
        case 0x2f2a8cu: goto label_2f2a8c;
        case 0x2f2a90u: goto label_2f2a90;
        case 0x2f2a94u: goto label_2f2a94;
        case 0x2f2a98u: goto label_2f2a98;
        case 0x2f2a9cu: goto label_2f2a9c;
        case 0x2f2aa0u: goto label_2f2aa0;
        case 0x2f2aa4u: goto label_2f2aa4;
        case 0x2f2aa8u: goto label_2f2aa8;
        case 0x2f2aacu: goto label_2f2aac;
        case 0x2f2ab0u: goto label_2f2ab0;
        case 0x2f2ab4u: goto label_2f2ab4;
        case 0x2f2ab8u: goto label_2f2ab8;
        case 0x2f2abcu: goto label_2f2abc;
        case 0x2f2ac0u: goto label_2f2ac0;
        case 0x2f2ac4u: goto label_2f2ac4;
        case 0x2f2ac8u: goto label_2f2ac8;
        case 0x2f2accu: goto label_2f2acc;
        case 0x2f2ad0u: goto label_2f2ad0;
        case 0x2f2ad4u: goto label_2f2ad4;
        case 0x2f2ad8u: goto label_2f2ad8;
        case 0x2f2adcu: goto label_2f2adc;
        case 0x2f2ae0u: goto label_2f2ae0;
        case 0x2f2ae4u: goto label_2f2ae4;
        case 0x2f2ae8u: goto label_2f2ae8;
        case 0x2f2aecu: goto label_2f2aec;
        case 0x2f2af0u: goto label_2f2af0;
        case 0x2f2af4u: goto label_2f2af4;
        case 0x2f2af8u: goto label_2f2af8;
        case 0x2f2afcu: goto label_2f2afc;
        case 0x2f2b00u: goto label_2f2b00;
        case 0x2f2b04u: goto label_2f2b04;
        case 0x2f2b08u: goto label_2f2b08;
        case 0x2f2b0cu: goto label_2f2b0c;
        case 0x2f2b10u: goto label_2f2b10;
        case 0x2f2b14u: goto label_2f2b14;
        case 0x2f2b18u: goto label_2f2b18;
        case 0x2f2b1cu: goto label_2f2b1c;
        case 0x2f2b20u: goto label_2f2b20;
        case 0x2f2b24u: goto label_2f2b24;
        case 0x2f2b28u: goto label_2f2b28;
        case 0x2f2b2cu: goto label_2f2b2c;
        case 0x2f2b30u: goto label_2f2b30;
        case 0x2f2b34u: goto label_2f2b34;
        case 0x2f2b38u: goto label_2f2b38;
        case 0x2f2b3cu: goto label_2f2b3c;
        case 0x2f2b40u: goto label_2f2b40;
        case 0x2f2b44u: goto label_2f2b44;
        case 0x2f2b48u: goto label_2f2b48;
        case 0x2f2b4cu: goto label_2f2b4c;
        case 0x2f2b50u: goto label_2f2b50;
        case 0x2f2b54u: goto label_2f2b54;
        case 0x2f2b58u: goto label_2f2b58;
        case 0x2f2b5cu: goto label_2f2b5c;
        case 0x2f2b60u: goto label_2f2b60;
        case 0x2f2b64u: goto label_2f2b64;
        case 0x2f2b68u: goto label_2f2b68;
        case 0x2f2b6cu: goto label_2f2b6c;
        case 0x2f2b70u: goto label_2f2b70;
        case 0x2f2b74u: goto label_2f2b74;
        case 0x2f2b78u: goto label_2f2b78;
        case 0x2f2b7cu: goto label_2f2b7c;
        case 0x2f2b80u: goto label_2f2b80;
        case 0x2f2b84u: goto label_2f2b84;
        case 0x2f2b88u: goto label_2f2b88;
        case 0x2f2b8cu: goto label_2f2b8c;
        case 0x2f2b90u: goto label_2f2b90;
        case 0x2f2b94u: goto label_2f2b94;
        default: break;
    }

    ctx->pc = 0x2f2a10u;

label_2f2a10:
    // 0x2f2a10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f2a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2f2a14:
    // 0x2f2a14: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f2a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2f2a18:
    // 0x2f2a18: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f2a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2f2a1c:
    // 0x2f2a1c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2f2a1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a20:
    // 0x2f2a20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f2a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f2a24:
    // 0x2f2a24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f2a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2f2a28:
    // 0x2f2a28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a2c:
    // 0x2f2a2c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f2a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2f2a30:
    // 0x2f2a30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f2a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2f2a34:
    // 0x2f2a34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f2a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2f2a38:
    // 0x2f2a38: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2f2a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_2f2a3c:
    // 0x2f2a3c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x2f2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2f2a40:
    // 0x2f2a40: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2f2a44:
    if (ctx->pc == 0x2F2A44u) {
        ctx->pc = 0x2F2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A40u;
        // 0x2f2a44: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A48u;
        goto label_2f2a48;
    }
    ctx->pc = 0x2F2A40u;
    {
        const bool branch_taken_0x2f2a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A40u;
        // 0x2f2a44: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a40) {
            ctx->pc = 0x2F2A7Cu;
            goto label_2f2a7c;
        }
    }
    ctx->pc = 0x2F2A48u;
label_2f2a48:
    // 0x2f2a48: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x2f2a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_2f2a4c:
    // 0x2f2a4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f2a50:
    // 0x2f2a50: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_2f2a54:
    if (ctx->pc == 0x2F2A54u) {
        ctx->pc = 0x2F2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A50u;
        // 0x2f2a54: 0x8e110084  lw          $s1, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A58u;
        goto label_2f2a58;
    }
    ctx->pc = 0x2F2A50u;
    {
        const bool branch_taken_0x2f2a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2a50) {
            ctx->pc = 0x2F2A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2A50u;
            // 0x2f2a54: 0x8e110084  lw          $s1, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2A80u;
            goto label_2f2a80;
        }
    }
    ctx->pc = 0x2F2A58u;
label_2f2a58:
    // 0x2f2a58: 0x380902d  daddu       $s2, $gp, $zero
    ctx->pc = 0x2f2a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a5c:
    // 0x2f2a5c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2f2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2f2a60:
    // 0x2f2a60: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f2a60u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a64:
    // 0x2f2a64: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x2f2a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2f2a68:
    // 0x2f2a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a6c:
    // 0x2f2a6c: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x2f2a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_2f2a70:
    // 0x2f2a70: 0x60f809  jalr        $v1
label_2f2a74:
    if (ctx->pc == 0x2F2A74u) {
        ctx->pc = 0x2F2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A70u;
        // 0x2f2a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A78u;
        goto label_2f2a78;
    }
    ctx->pc = 0x2F2A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2A78u);
        ctx->pc = 0x2F2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A70u;
        // 0x2f2a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2A70u, 0x2F2A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2A78u;
label_2f2a78:
    // 0x2f2a78: 0x240e02d  daddu       $gp, $s2, $zero
    ctx->pc = 0x2f2a78u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a7c:
    // 0x2f2a7c: 0x8e110084  lw          $s1, 0x84($s0)
    ctx->pc = 0x2f2a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2f2a80:
    // 0x2f2a80: 0x1aa0003b  blez        $s5, . + 4 + (0x3B << 2)
label_2f2a84:
    if (ctx->pc == 0x2F2A84u) {
        ctx->pc = 0x2F2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A80u;
        // 0x2f2a84: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A88u;
        goto label_2f2a88;
    }
    ctx->pc = 0x2F2A80u;
    {
        const bool branch_taken_0x2f2a80 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2F2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A80u;
        // 0x2f2a84: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a80) {
            ctx->pc = 0x2F2B70u;
            goto label_2f2b70;
        }
    }
    ctx->pc = 0x2F2A88u;
label_2f2a88:
    // 0x2f2a88: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2f2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2f2a8c:
    // 0x2f2a8c: 0x0  nop
    ctx->pc = 0x2f2a8cu;
    // NOP
label_2f2a90:
    // 0x2f2a90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2a94:
    // 0x2f2a94: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_2f2a98:
    if (ctx->pc == 0x2F2A98u) {
        ctx->pc = 0x2F2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A94u;
        // 0x2f2a98: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A9Cu;
        goto label_2f2a9c;
    }
    ctx->pc = 0x2F2A94u;
    {
        const bool branch_taken_0x2f2a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A94u;
        // 0x2f2a98: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a94) {
            ctx->pc = 0x2F2AC8u;
            goto label_2f2ac8;
        }
    }
    ctx->pc = 0x2F2A9Cu;
label_2f2a9c:
    // 0x2f2a9c: 0xc0bc77e  jal         func_2F1DF8
label_2f2aa0:
    if (ctx->pc == 0x2F2AA0u) {
        ctx->pc = 0x2F2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A9Cu;
        // 0x2f2aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AA4u;
        goto label_2f2aa4;
    }
    ctx->pc = 0x2F2A9Cu;
    SET_GPR_U32(ctx, 31, 0x2F2AA4u);
    ctx->pc = 0x2F2AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A9Cu;
    // 0x2f2aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2F2A9Cu, 0x2F2AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AA4u;
label_2f2aa4:
    // 0x2f2aa4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2f2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2f2aa8:
    // 0x2f2aa8: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x2f2aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f2aac:
    // 0x2f2aac: 0x5ce00007  bgtzl       $a3, . + 4 + (0x7 << 2)
label_2f2ab0:
    if (ctx->pc == 0x2F2AB0u) {
        ctx->pc = 0x2F2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AACu;
        // 0x2f2ab0: 0x8e060084  lw          $a2, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AB4u;
        goto label_2f2ab4;
    }
    ctx->pc = 0x2F2AACu;
    {
        const bool branch_taken_0x2f2aac = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x2f2aac) {
            ctx->pc = 0x2F2AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2AACu;
            // 0x2f2ab0: 0x8e060084  lw          $a2, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2ACCu;
            goto label_2f2acc;
        }
    }
    ctx->pc = 0x2F2AB4u;
label_2f2ab4:
    // 0x2f2ab4: 0x2402fc13  addiu       $v0, $zero, -0x3ED
    ctx->pc = 0x2f2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966291));
label_2f2ab8:
    // 0x2f2ab8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2f2ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2f2abc:
    // 0x2f2abc: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2f2ac0:
    if (ctx->pc == 0x2F2AC0u) {
        ctx->pc = 0x2F2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2ABCu;
        // 0x2f2ac0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AC4u;
        goto label_2f2ac4;
    }
    ctx->pc = 0x2F2ABCu;
    {
        const bool branch_taken_0x2f2abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2ABCu;
        // 0x2f2ac0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2abc) {
            ctx->pc = 0x2F2B74u;
            goto label_2f2b74;
        }
    }
    ctx->pc = 0x2F2AC4u;
label_2f2ac4:
    // 0x2f2ac4: 0x0  nop
    ctx->pc = 0x2f2ac4u;
    // NOP
label_2f2ac8:
    // 0x2f2ac8: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x2f2ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2f2acc:
    // 0x2f2acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2ad0:
    // 0x2f2ad0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f2ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f2ad4:
    // 0x2f2ad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f2ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2ad8:
    // 0x2f2ad8: 0xd3102a  slt         $v0, $a2, $s3
    ctx->pc = 0x2f2ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2f2adc:
    // 0x2f2adc: 0xc0bdf70  jal         func_2F7DC0
label_2f2ae0:
    if (ctx->pc == 0x2F2AE0u) {
        ctx->pc = 0x2F2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2ADCu;
        // 0x2f2ae0: 0x262300a  movz        $a2, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AE4u;
        goto label_2f2ae4;
    }
    ctx->pc = 0x2F2ADCu;
    SET_GPR_U32(ctx, 31, 0x2F2AE4u);
    ctx->pc = 0x2F2AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2ADCu;
    // 0x2f2ae0: 0x262300a  movz        $a2, $s3, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7DC0u, 0x2F2ADCu, 0x2F2AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AE4u;
label_2f2ae4:
    // 0x2f2ae4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f2ae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2ae8:
    // 0x2f2ae8: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
label_2f2aec:
    if (ctx->pc == 0x2F2AECu) {
        ctx->pc = 0x2F2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AE8u;
        // 0x2f2aec: 0x2639823  subu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AF0u;
        goto label_2f2af0;
    }
    ctx->pc = 0x2F2AE8u;
    {
        const bool branch_taken_0x2f2ae8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AE8u;
        // 0x2f2aec: 0x2639823  subu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ae8) {
            ctx->pc = 0x2F2B74u;
            goto label_2f2b74;
        }
    }
    ctx->pc = 0x2F2AF0u;
label_2f2af0:
    // 0x2f2af0: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2f2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2f2af4:
    // 0x2f2af4: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x2f2af4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2f2af8:
    // 0x2f2af8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2f2af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f2afc:
    // 0x2f2afc: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x2f2afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2f2b00:
    // 0x2f2b00: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_2f2b04:
    if (ctx->pc == 0x2F2B04u) {
        ctx->pc = 0x2F2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B00u;
        // 0x2f2b04: 0xae050088  sw          $a1, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B08u;
        goto label_2f2b08;
    }
    ctx->pc = 0x2F2B00u;
    {
        const bool branch_taken_0x2f2b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B00u;
        // 0x2f2b04: 0xae050088  sw          $a1, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b00) {
            ctx->pc = 0x2F2B68u;
            goto label_2f2b68;
        }
    }
    ctx->pc = 0x2F2B08u;
label_2f2b08:
    // 0x2f2b08: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x2f2b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2f2b0c:
    // 0x2f2b0c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x2f2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2f2b10:
    // 0x2f2b10: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2f2b14:
    if (ctx->pc == 0x2F2B14u) {
        ctx->pc = 0x2F2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B10u;
        // 0x2f2b14: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B18u;
        goto label_2f2b18;
    }
    ctx->pc = 0x2F2B10u;
    {
        const bool branch_taken_0x2f2b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B10u;
        // 0x2f2b14: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b10) {
            ctx->pc = 0x2F2B58u;
            goto label_2f2b58;
        }
    }
    ctx->pc = 0x2F2B18u;
label_2f2b18:
    // 0x2f2b18: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x2f2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_2f2b1c:
    // 0x2f2b1c: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_2f2b20:
    if (ctx->pc == 0x2F2B20u) {
        ctx->pc = 0x2F2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B1Cu;
        // 0x2f2b20: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B24u;
        goto label_2f2b24;
    }
    ctx->pc = 0x2F2B1Cu;
    {
        const bool branch_taken_0x2f2b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2b1c) {
            ctx->pc = 0x2F2B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2B1Cu;
            // 0x2f2b20: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2B5Cu;
            goto label_2f2b5c;
        }
    }
    ctx->pc = 0x2F2B24u;
label_2f2b24:
    // 0x2f2b24: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x2f2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2f2b28:
    // 0x2f2b28: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2f2b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f2b2c:
    // 0x2f2b2c: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x2f2b2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_2f2b30:
    // 0x2f2b30: 0x380902d  daddu       $s2, $gp, $zero
    ctx->pc = 0x2f2b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b34:
    // 0x2f2b34: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2f2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2f2b38:
    // 0x2f2b38: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f2b38u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b3c:
    // 0x2f2b3c: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x2f2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2f2b40:
    // 0x2f2b40: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x2f2b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_2f2b44:
    // 0x2f2b44: 0x60f809  jalr        $v1
label_2f2b48:
    if (ctx->pc == 0x2F2B48u) {
        ctx->pc = 0x2F2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B44u;
        // 0x2f2b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B4Cu;
        goto label_2f2b4c;
    }
    ctx->pc = 0x2F2B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2B4Cu);
        ctx->pc = 0x2F2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B44u;
        // 0x2f2b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2B44u, 0x2F2B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2B4Cu;
label_2f2b4c:
    // 0x2f2b4c: 0x240e02d  daddu       $gp, $s2, $zero
    ctx->pc = 0x2f2b4cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b50:
    // 0x2f2b50: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x2f2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2f2b54:
    // 0x2f2b54: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x2f2b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2f2b58:
    // 0x2f2b58: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x2f2b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2f2b5c:
    // 0x2f2b5c: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x2f2b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2f2b60:
    // 0x2f2b60: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_2f2b64:
    if (ctx->pc == 0x2F2B64u) {
        ctx->pc = 0x2F2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B60u;
        // 0x2f2b64: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B68u;
        goto label_2f2b68;
    }
    ctx->pc = 0x2F2B60u;
    {
        const bool branch_taken_0x2f2b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b60) {
            ctx->pc = 0x2F2B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2B60u;
            // 0x2f2b64: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f2b10;
        }
    }
    ctx->pc = 0x2F2B68u;
label_2f2b68:
    // 0x2f2b68: 0x5e60ffc9  bgtzl       $s3, . + 4 + (-0x37 << 2)
label_2f2b6c:
    if (ctx->pc == 0x2F2B6Cu) {
        ctx->pc = 0x2F2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B68u;
        // 0x2f2b6c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B70u;
        goto label_2f2b70;
    }
    ctx->pc = 0x2F2B68u;
    {
        const bool branch_taken_0x2f2b68 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x2f2b68) {
            ctx->pc = 0x2F2B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2B68u;
            // 0x2f2b6c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2A90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f2a90;
        }
    }
    ctx->pc = 0x2F2B70u;
label_2f2b70:
    // 0x2f2b70: 0x2b31023  subu        $v0, $s5, $s3
    ctx->pc = 0x2f2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_2f2b74:
    // 0x2f2b74: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f2b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f2b78:
    // 0x2f2b78: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f2b78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f2b7c:
    // 0x2f2b7c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f2b7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f2b80:
    // 0x2f2b80: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f2b80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f2b84:
    // 0x2f2b84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f2b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f2b88:
    // 0x2f2b88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f2b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2b8c:
    // 0x2f2b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f2b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2b90:
    // 0x2f2b90: 0x3e00008  jr          $ra
label_2f2b94:
    if (ctx->pc == 0x2F2B94u) {
        ctx->pc = 0x2F2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B90u;
        // 0x2f2b94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B98u;
        goto label_fallthrough_0x2f2b90;
    }
    ctx->pc = 0x2F2B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B90u;
        // 0x2f2b94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f2b90:
    ctx->pc = 0x2F2B98u;
}
