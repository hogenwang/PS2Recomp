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

// Function: sub_001B59F8
// Address: 0x1b59f8 - 0x1b5c70
void sub_001B59F8_0x1b59f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B59F8_0x1b59f8");
#endif

    switch (ctx->pc) {
        case 0x1b59f8u: goto label_1b59f8;
        case 0x1b59fcu: goto label_1b59fc;
        case 0x1b5a00u: goto label_1b5a00;
        case 0x1b5a04u: goto label_1b5a04;
        case 0x1b5a08u: goto label_1b5a08;
        case 0x1b5a0cu: goto label_1b5a0c;
        case 0x1b5a10u: goto label_1b5a10;
        case 0x1b5a14u: goto label_1b5a14;
        case 0x1b5a18u: goto label_1b5a18;
        case 0x1b5a1cu: goto label_1b5a1c;
        case 0x1b5a20u: goto label_1b5a20;
        case 0x1b5a24u: goto label_1b5a24;
        case 0x1b5a28u: goto label_1b5a28;
        case 0x1b5a2cu: goto label_1b5a2c;
        case 0x1b5a30u: goto label_1b5a30;
        case 0x1b5a34u: goto label_1b5a34;
        case 0x1b5a38u: goto label_1b5a38;
        case 0x1b5a3cu: goto label_1b5a3c;
        case 0x1b5a40u: goto label_1b5a40;
        case 0x1b5a44u: goto label_1b5a44;
        case 0x1b5a48u: goto label_1b5a48;
        case 0x1b5a4cu: goto label_1b5a4c;
        case 0x1b5a50u: goto label_1b5a50;
        case 0x1b5a54u: goto label_1b5a54;
        case 0x1b5a58u: goto label_1b5a58;
        case 0x1b5a5cu: goto label_1b5a5c;
        case 0x1b5a60u: goto label_1b5a60;
        case 0x1b5a64u: goto label_1b5a64;
        case 0x1b5a68u: goto label_1b5a68;
        case 0x1b5a6cu: goto label_1b5a6c;
        case 0x1b5a70u: goto label_1b5a70;
        case 0x1b5a74u: goto label_1b5a74;
        case 0x1b5a78u: goto label_1b5a78;
        case 0x1b5a7cu: goto label_1b5a7c;
        case 0x1b5a80u: goto label_1b5a80;
        case 0x1b5a84u: goto label_1b5a84;
        case 0x1b5a88u: goto label_1b5a88;
        case 0x1b5a8cu: goto label_1b5a8c;
        case 0x1b5a90u: goto label_1b5a90;
        case 0x1b5a94u: goto label_1b5a94;
        case 0x1b5a98u: goto label_1b5a98;
        case 0x1b5a9cu: goto label_1b5a9c;
        case 0x1b5aa0u: goto label_1b5aa0;
        case 0x1b5aa4u: goto label_1b5aa4;
        case 0x1b5aa8u: goto label_1b5aa8;
        case 0x1b5aacu: goto label_1b5aac;
        case 0x1b5ab0u: goto label_1b5ab0;
        case 0x1b5ab4u: goto label_1b5ab4;
        case 0x1b5ab8u: goto label_1b5ab8;
        case 0x1b5abcu: goto label_1b5abc;
        case 0x1b5ac0u: goto label_1b5ac0;
        case 0x1b5ac4u: goto label_1b5ac4;
        case 0x1b5ac8u: goto label_1b5ac8;
        case 0x1b5accu: goto label_1b5acc;
        case 0x1b5ad0u: goto label_1b5ad0;
        case 0x1b5ad4u: goto label_1b5ad4;
        case 0x1b5ad8u: goto label_1b5ad8;
        case 0x1b5adcu: goto label_1b5adc;
        case 0x1b5ae0u: goto label_1b5ae0;
        case 0x1b5ae4u: goto label_1b5ae4;
        case 0x1b5ae8u: goto label_1b5ae8;
        case 0x1b5aecu: goto label_1b5aec;
        case 0x1b5af0u: goto label_1b5af0;
        case 0x1b5af4u: goto label_1b5af4;
        case 0x1b5af8u: goto label_1b5af8;
        case 0x1b5afcu: goto label_1b5afc;
        case 0x1b5b00u: goto label_1b5b00;
        case 0x1b5b04u: goto label_1b5b04;
        case 0x1b5b08u: goto label_1b5b08;
        case 0x1b5b0cu: goto label_1b5b0c;
        case 0x1b5b10u: goto label_1b5b10;
        case 0x1b5b14u: goto label_1b5b14;
        case 0x1b5b18u: goto label_1b5b18;
        case 0x1b5b1cu: goto label_1b5b1c;
        case 0x1b5b20u: goto label_1b5b20;
        case 0x1b5b24u: goto label_1b5b24;
        case 0x1b5b28u: goto label_1b5b28;
        case 0x1b5b2cu: goto label_1b5b2c;
        case 0x1b5b30u: goto label_1b5b30;
        case 0x1b5b34u: goto label_1b5b34;
        case 0x1b5b38u: goto label_1b5b38;
        case 0x1b5b3cu: goto label_1b5b3c;
        case 0x1b5b40u: goto label_1b5b40;
        case 0x1b5b44u: goto label_1b5b44;
        case 0x1b5b48u: goto label_1b5b48;
        case 0x1b5b4cu: goto label_1b5b4c;
        case 0x1b5b50u: goto label_1b5b50;
        case 0x1b5b54u: goto label_1b5b54;
        case 0x1b5b58u: goto label_1b5b58;
        case 0x1b5b5cu: goto label_1b5b5c;
        case 0x1b5b60u: goto label_1b5b60;
        case 0x1b5b64u: goto label_1b5b64;
        case 0x1b5b68u: goto label_1b5b68;
        case 0x1b5b6cu: goto label_1b5b6c;
        case 0x1b5b70u: goto label_1b5b70;
        case 0x1b5b74u: goto label_1b5b74;
        case 0x1b5b78u: goto label_1b5b78;
        case 0x1b5b7cu: goto label_1b5b7c;
        case 0x1b5b80u: goto label_1b5b80;
        case 0x1b5b84u: goto label_1b5b84;
        case 0x1b5b88u: goto label_1b5b88;
        case 0x1b5b8cu: goto label_1b5b8c;
        case 0x1b5b90u: goto label_1b5b90;
        case 0x1b5b94u: goto label_1b5b94;
        case 0x1b5b98u: goto label_1b5b98;
        case 0x1b5b9cu: goto label_1b5b9c;
        case 0x1b5ba0u: goto label_1b5ba0;
        case 0x1b5ba4u: goto label_1b5ba4;
        case 0x1b5ba8u: goto label_1b5ba8;
        case 0x1b5bacu: goto label_1b5bac;
        case 0x1b5bb0u: goto label_1b5bb0;
        case 0x1b5bb4u: goto label_1b5bb4;
        case 0x1b5bb8u: goto label_1b5bb8;
        case 0x1b5bbcu: goto label_1b5bbc;
        case 0x1b5bc0u: goto label_1b5bc0;
        case 0x1b5bc4u: goto label_1b5bc4;
        case 0x1b5bc8u: goto label_1b5bc8;
        case 0x1b5bccu: goto label_1b5bcc;
        case 0x1b5bd0u: goto label_1b5bd0;
        case 0x1b5bd4u: goto label_1b5bd4;
        case 0x1b5bd8u: goto label_1b5bd8;
        case 0x1b5bdcu: goto label_1b5bdc;
        case 0x1b5be0u: goto label_1b5be0;
        case 0x1b5be4u: goto label_1b5be4;
        case 0x1b5be8u: goto label_1b5be8;
        case 0x1b5becu: goto label_1b5bec;
        case 0x1b5bf0u: goto label_1b5bf0;
        case 0x1b5bf4u: goto label_1b5bf4;
        case 0x1b5bf8u: goto label_1b5bf8;
        case 0x1b5bfcu: goto label_1b5bfc;
        case 0x1b5c00u: goto label_1b5c00;
        case 0x1b5c04u: goto label_1b5c04;
        case 0x1b5c08u: goto label_1b5c08;
        case 0x1b5c0cu: goto label_1b5c0c;
        case 0x1b5c10u: goto label_1b5c10;
        case 0x1b5c14u: goto label_1b5c14;
        case 0x1b5c18u: goto label_1b5c18;
        case 0x1b5c1cu: goto label_1b5c1c;
        case 0x1b5c20u: goto label_1b5c20;
        case 0x1b5c24u: goto label_1b5c24;
        case 0x1b5c28u: goto label_1b5c28;
        case 0x1b5c2cu: goto label_1b5c2c;
        case 0x1b5c30u: goto label_1b5c30;
        case 0x1b5c34u: goto label_1b5c34;
        case 0x1b5c38u: goto label_1b5c38;
        case 0x1b5c3cu: goto label_1b5c3c;
        case 0x1b5c40u: goto label_1b5c40;
        case 0x1b5c44u: goto label_1b5c44;
        case 0x1b5c48u: goto label_1b5c48;
        case 0x1b5c4cu: goto label_1b5c4c;
        case 0x1b5c50u: goto label_1b5c50;
        case 0x1b5c54u: goto label_1b5c54;
        case 0x1b5c58u: goto label_1b5c58;
        case 0x1b5c5cu: goto label_1b5c5c;
        case 0x1b5c60u: goto label_1b5c60;
        case 0x1b5c64u: goto label_1b5c64;
        case 0x1b5c68u: goto label_1b5c68;
        case 0x1b5c6cu: goto label_1b5c6c;
        default: break;
    }

    ctx->pc = 0x1b59f8u;

label_1b59f8:
    // 0x1b59f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b59f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b59fc:
    // 0x1b59fc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b59fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1b5a00:
    // 0x1b5a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a04:
    // 0x1b5a04: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b5a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1b5a08:
    // 0x1b5a08: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b5a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b5a0c:
    // 0x1b5a0c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1b5a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1b5a10:
    // 0x1b5a10: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1b5a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1b5a14:
    // 0x1b5a14: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b5a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1b5a18:
    // 0x1b5a18: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1b5a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1b5a1c:
    // 0x1b5a1c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1b5a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1b5a20:
    // 0x1b5a20: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1b5a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1b5a24:
    // 0x1b5a24: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1b5a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1b5a28:
    // 0x1b5a28: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x1b5a28u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b5a2c:
    // 0x1b5a2c: 0x8e150008  lw          $s5, 0x8($s0)
    ctx->pc = 0x1b5a2cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b5a30:
    // 0x1b5a30: 0xc06ae82  jal         func_1ABA08
label_1b5a34:
    if (ctx->pc == 0x1B5A34u) {
        ctx->pc = 0x1B5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A30u;
        // 0x1b5a34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A38u;
        goto label_1b5a38;
    }
    ctx->pc = 0x1B5A30u;
    SET_GPR_U32(ctx, 31, 0x1B5A38u);
    ctx->pc = 0x1B5A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A30u;
    // 0x1b5a34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABA08u, 0x1B5A30u, 0x1B5A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A38u;
label_1b5a38:
    // 0x1b5a38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a3c:
    // 0x1b5a3c: 0xc06af82  jal         func_1ABE08
label_1b5a40:
    if (ctx->pc == 0x1B5A40u) {
        ctx->pc = 0x1B5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A3Cu;
        // 0x1b5a40: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A44u;
        goto label_1b5a44;
    }
    ctx->pc = 0x1B5A3Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A44u);
    ctx->pc = 0x1B5A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A3Cu;
    // 0x1b5a40: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE08u, 0x1B5A3Cu, 0x1B5A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A44u;
label_1b5a44:
    // 0x1b5a44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a48:
    // 0x1b5a48: 0xc06af84  jal         func_1ABE10
label_1b5a4c:
    if (ctx->pc == 0x1B5A4Cu) {
        ctx->pc = 0x1B5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A48u;
        // 0x1b5a4c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A50u;
        goto label_1b5a50;
    }
    ctx->pc = 0x1B5A48u;
    SET_GPR_U32(ctx, 31, 0x1B5A50u);
    ctx->pc = 0x1B5A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A48u;
    // 0x1b5a4c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE10u, 0x1B5A48u, 0x1B5A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A50u;
label_1b5a50:
    // 0x1b5a50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a54:
    // 0x1b5a54: 0xc06ae4c  jal         func_1AB930
label_1b5a58:
    if (ctx->pc == 0x1B5A58u) {
        ctx->pc = 0x1B5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A54u;
        // 0x1b5a58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A5Cu;
        goto label_1b5a5c;
    }
    ctx->pc = 0x1B5A54u;
    SET_GPR_U32(ctx, 31, 0x1B5A5Cu);
    ctx->pc = 0x1B5A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A54u;
    // 0x1b5a58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB930u, 0x1B5A54u, 0x1B5A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A5Cu;
label_1b5a5c:
    // 0x1b5a5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a60:
    // 0x1b5a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5a64:
    // 0x1b5a64: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
label_1b5a68:
    if (ctx->pc == 0x1B5A68u) {
        ctx->pc = 0x1B5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A64u;
        // 0x1b5a68: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A6Cu;
        goto label_1b5a6c;
    }
    ctx->pc = 0x1B5A64u;
    {
        const bool branch_taken_0x1b5a64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5a64) {
            ctx->pc = 0x1B5A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5A64u;
            // 0x1b5a68: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A80u;
            goto label_1b5a80;
        }
    }
    ctx->pc = 0x1B5A6Cu;
label_1b5a6c:
    // 0x1b5a6c: 0xc06d94e  jal         func_1B6538
label_1b5a70:
    if (ctx->pc == 0x1B5A70u) {
        ctx->pc = 0x1B5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A6Cu;
        // 0x1b5a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A74u;
        goto label_1b5a74;
    }
    ctx->pc = 0x1B5A6Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A74u);
    ctx->pc = 0x1B5A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A6Cu;
    // 0x1b5a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6538u, 0x1B5A6Cu, 0x1B5A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A74u;
label_1b5a74:
    // 0x1b5a74: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_1b5a78:
    if (ctx->pc == 0x1B5A78u) {
        ctx->pc = 0x1B5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A74u;
        // 0x1b5a78: 0x27b70010  addiu       $s7, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A7Cu;
        goto label_1b5a7c;
    }
    ctx->pc = 0x1B5A74u;
    {
        const bool branch_taken_0x1b5a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A74u;
        // 0x1b5a78: 0x27b70010  addiu       $s7, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a74) {
            ctx->pc = 0x1B5A90u;
            goto label_1b5a90;
        }
    }
    ctx->pc = 0x1B5A7Cu;
label_1b5a7c:
    // 0x1b5a7c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1b5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1b5a80:
    // 0x1b5a80: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1b5a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1b5a84:
    // 0x1b5a84: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x1b5a84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b5a88:
    // 0x1b5a88: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x1b5a88u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_1b5a8c:
    // 0x1b5a8c: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x1b5a8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b5a90:
    // 0x1b5a90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b5a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a94:
    // 0x1b5a94: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1b5a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a98:
    // 0x1b5a98: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1b5a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1b5a9c:
    // 0x1b5a9c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b5a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b5aa0:
    // 0x1b5aa0: 0xc07337e  jal         func_1CCDF8
label_1b5aa4:
    if (ctx->pc == 0x1B5AA4u) {
        ctx->pc = 0x1B5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AA0u;
        // 0x1b5aa4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5AA8u;
        goto label_1b5aa8;
    }
    ctx->pc = 0x1B5AA0u;
    SET_GPR_U32(ctx, 31, 0x1B5AA8u);
    ctx->pc = 0x1B5AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5AA0u;
    // 0x1b5aa4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1B5AA0u, 0x1B5AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AA8u;
label_1b5aa8:
    // 0x1b5aa8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1b5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1b5aac:
    // 0x1b5aac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b5aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ab0:
    // 0x1b5ab0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b5ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ab4:
    // 0x1b5ab4: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x1b5ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1b5ab8:
    // 0x1b5ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5abc:
    // 0x1b5abc: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x1b5abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1b5ac0:
    // 0x1b5ac0: 0xe0f809  jalr        $a3
label_1b5ac4:
    if (ctx->pc == 0x1B5AC4u) {
        ctx->pc = 0x1B5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AC0u;
        // 0x1b5ac4: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5AC8u;
        goto label_1b5ac8;
    }
    ctx->pc = 0x1B5AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1B5AC8u);
        ctx->pc = 0x1B5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AC0u;
        // 0x1b5ac4: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5AC0u, 0x1B5AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5AC8u;
label_1b5ac8:
    // 0x1b5ac8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1b5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1b5acc:
    // 0x1b5acc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b5accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ad0:
    // 0x1b5ad0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5ad4:
    // 0x1b5ad4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b5ad8:
    // 0x1b5ad8: 0x40f809  jalr        $v0
label_1b5adc:
    if (ctx->pc == 0x1B5ADCu) {
        ctx->pc = 0x1B5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AD8u;
        // 0x1b5adc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5AE0u;
        goto label_1b5ae0;
    }
    ctx->pc = 0x1B5AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5AE0u);
        ctx->pc = 0x1B5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AD8u;
        // 0x1b5adc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5AD8u, 0x1B5AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5AE0u;
label_1b5ae0:
    // 0x1b5ae0: 0x10000019  b           . + 4 + (0x19 << 2)
label_1b5ae4:
    if (ctx->pc == 0x1B5AE4u) {
        ctx->pc = 0x1B5AE8u;
        goto label_1b5ae8;
    }
    ctx->pc = 0x1B5AE0u;
    {
        const bool branch_taken_0x1b5ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ae0) {
            ctx->pc = 0x1B5B48u;
            goto label_1b5b48;
        }
    }
    ctx->pc = 0x1B5AE8u;
label_1b5ae8:
    // 0x1b5ae8: 0xc07337e  jal         func_1CCDF8
label_1b5aec:
    if (ctx->pc == 0x1B5AECu) {
        ctx->pc = 0x1B5AF0u;
        goto label_1b5af0;
    }
    ctx->pc = 0x1B5AE8u;
    SET_GPR_U32(ctx, 31, 0x1B5AF0u);
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1B5AE8u, 0x1B5AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AF0u;
label_1b5af0:
    // 0x1b5af0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1b5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1b5af4:
    // 0x1b5af4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b5af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b5af8:
    // 0x1b5af8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b5afc:
    if (ctx->pc == 0x1B5AFCu) {
        ctx->pc = 0x1B5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AF8u;
        // 0x1b5afc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B00u;
        goto label_1b5b00;
    }
    ctx->pc = 0x1B5AF8u;
    {
        const bool branch_taken_0x1b5af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AF8u;
        // 0x1b5afc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5af8) {
            ctx->pc = 0x1B5B10u;
            goto label_1b5b10;
        }
    }
    ctx->pc = 0x1B5B00u;
label_1b5b00:
    // 0x1b5b00: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1b5b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1b5b04:
    // 0x1b5b04: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b5b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5b08:
    // 0x1b5b08: 0x40f809  jalr        $v0
label_1b5b0c:
    if (ctx->pc == 0x1B5B0Cu) {
        ctx->pc = 0x1B5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B08u;
        // 0x1b5b0c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B10u;
        goto label_1b5b10;
    }
    ctx->pc = 0x1B5B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5B10u);
        ctx->pc = 0x1B5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B08u;
        // 0x1b5b0c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5B08u, 0x1B5B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5B10u;
label_1b5b10:
    // 0x1b5b10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b5b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b5b14:
    // 0x1b5b14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b5b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b18:
    // 0x1b5b18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5b1c:
    // 0x1b5b1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b5b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5b20:
    // 0x1b5b20: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1b5b24:
    // 0x1b5b24: 0x40f809  jalr        $v0
label_1b5b28:
    if (ctx->pc == 0x1B5B28u) {
        ctx->pc = 0x1B5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B24u;
        // 0x1b5b28: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B2Cu;
        goto label_1b5b2c;
    }
    ctx->pc = 0x1B5B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5B2Cu);
        ctx->pc = 0x1B5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B24u;
        // 0x1b5b28: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5B24u, 0x1B5B2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5B2Cu;
label_1b5b2c:
    // 0x1b5b2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b5b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b5b30:
    // 0x1b5b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b34:
    // 0x1b5b34: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1b5b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b38:
    // 0x1b5b38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5b3c:
    // 0x1b5b3c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b5b40:
    // 0x1b5b40: 0x40f809  jalr        $v0
label_1b5b44:
    if (ctx->pc == 0x1B5B44u) {
        ctx->pc = 0x1B5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B40u;
        // 0x1b5b44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B48u;
        goto label_1b5b48;
    }
    ctx->pc = 0x1B5B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5B48u);
        ctx->pc = 0x1B5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B40u;
        // 0x1b5b44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5B40u, 0x1B5B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5B48u;
label_1b5b48:
    // 0x1b5b48: 0xc06ae50  jal         func_1AB940
label_1b5b4c:
    if (ctx->pc == 0x1B5B4Cu) {
        ctx->pc = 0x1B5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B48u;
        // 0x1b5b4c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B50u;
        goto label_1b5b50;
    }
    ctx->pc = 0x1B5B48u;
    SET_GPR_U32(ctx, 31, 0x1B5B50u);
    ctx->pc = 0x1B5B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B48u;
    // 0x1b5b4c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB940u, 0x1B5B48u, 0x1B5B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B50u;
label_1b5b50:
    // 0x1b5b50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b5b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b54:
    // 0x1b5b54: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b5b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b5b58:
    // 0x1b5b58: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x1b5b58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_1b5b5c:
    // 0x1b5b5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b5b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b60:
    // 0x1b5b60: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_1b5b64:
    if (ctx->pc == 0x1B5B64u) {
        ctx->pc = 0x1B5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B60u;
        // 0x1b5b64: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B68u;
        goto label_1b5b68;
    }
    ctx->pc = 0x1B5B60u;
    {
        const bool branch_taken_0x1b5b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B60u;
        // 0x1b5b64: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b60) {
            ctx->pc = 0x1B5AE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5ae8;
        }
    }
    ctx->pc = 0x1B5B68u;
label_1b5b68:
    // 0x1b5b68: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1b5b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1b5b6c:
    // 0x1b5b6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b70:
    // 0x1b5b70: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1b5b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1b5b74:
    // 0x1b5b74: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x1b5b74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1b5b78:
    // 0x1b5b78: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1b5b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1b5b7c:
    // 0x1b5b7c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x1b5b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1b5b80:
    // 0x1b5b80: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x1b5b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_1b5b84:
    // 0x1b5b84: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1b5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b5b88:
    // 0x1b5b88: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x1b5b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_1b5b8c:
    // 0x1b5b8c: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x1b5b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1b5b90:
    // 0x1b5b90: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1b5b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_1b5b94:
    // 0x1b5b94: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1b5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1b5b98:
    // 0x1b5b98: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x1b5b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_1b5b9c:
    // 0x1b5b9c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1b5b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_1b5ba0:
    // 0x1b5ba0: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x1b5ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
label_1b5ba4:
    // 0x1b5ba4: 0xc06af72  jal         func_1ABDC8
label_1b5ba8:
    if (ctx->pc == 0x1B5BA8u) {
        ctx->pc = 0x1B5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BA4u;
        // 0x1b5ba8: 0xae060040  sw          $a2, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BACu;
        goto label_1b5bac;
    }
    ctx->pc = 0x1B5BA4u;
    SET_GPR_U32(ctx, 31, 0x1B5BACu);
    ctx->pc = 0x1B5BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5BA4u;
    // 0x1b5ba8: 0xae060040  sw          $a2, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABDC8u, 0x1B5BA4u, 0x1B5BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BACu;
label_1b5bac:
    // 0x1b5bac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b5bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5bb0:
    // 0x1b5bb0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b5bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5bb4:
    // 0x1b5bb4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b5bb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5bb8:
    // 0x1b5bb8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1b5bb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5bbc:
    // 0x1b5bbc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b5bbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b5bc0:
    // 0x1b5bc0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1b5bc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1b5bc4:
    // 0x1b5bc4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1b5bc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b5bc8:
    // 0x1b5bc8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1b5bc8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1b5bcc:
    // 0x1b5bcc: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1b5bccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b5bd0:
    // 0x1b5bd0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1b5bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5bd4:
    // 0x1b5bd4: 0x3e00008  jr          $ra
label_1b5bd8:
    if (ctx->pc == 0x1B5BD8u) {
        ctx->pc = 0x1B5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BD4u;
        // 0x1b5bd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BDCu;
        goto label_1b5bdc;
    }
    ctx->pc = 0x1B5BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BD4u;
        // 0x1b5bd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5BDCu;
label_1b5bdc:
    // 0x1b5bdc: 0x0  nop
    ctx->pc = 0x1b5bdcu;
    // NOP
label_1b5be0:
    // 0x1b5be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b5be4:
    // 0x1b5be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b5be8:
    // 0x1b5be8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b5be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b5bec:
    // 0x1b5bec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b5becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5bf0:
    // 0x1b5bf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b5bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1b5bf4:
    // 0x1b5bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b5bf8:
    // 0x1b5bf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b5bfc:
    // 0x1b5bfc: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1b5bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b5c00:
    // 0x1b5c00: 0xc06ae82  jal         func_1ABA08
label_1b5c04:
    if (ctx->pc == 0x1B5C04u) {
        ctx->pc = 0x1B5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C00u;
        // 0x1b5c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5C08u;
        goto label_1b5c08;
    }
    ctx->pc = 0x1B5C00u;
    SET_GPR_U32(ctx, 31, 0x1B5C08u);
    ctx->pc = 0x1B5C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C00u;
    // 0x1b5c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABA08u, 0x1B5C00u, 0x1B5C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C08u;
label_1b5c08:
    // 0x1b5c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5c0c:
    // 0x1b5c0c: 0xc06af82  jal         func_1ABE08
label_1b5c10:
    if (ctx->pc == 0x1B5C10u) {
        ctx->pc = 0x1B5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C0Cu;
        // 0x1b5c10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5C14u;
        goto label_1b5c14;
    }
    ctx->pc = 0x1B5C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B5C14u);
    ctx->pc = 0x1B5C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C0Cu;
    // 0x1b5c10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE08u, 0x1B5C0Cu, 0x1B5C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C14u;
label_1b5c14:
    // 0x1b5c14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5c18:
    // 0x1b5c18: 0xc06af84  jal         func_1ABE10
label_1b5c1c:
    if (ctx->pc == 0x1B5C1Cu) {
        ctx->pc = 0x1B5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C18u;
        // 0x1b5c1c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5C20u;
        goto label_1b5c20;
    }
    ctx->pc = 0x1B5C18u;
    SET_GPR_U32(ctx, 31, 0x1B5C20u);
    ctx->pc = 0x1B5C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C18u;
    // 0x1b5c1c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE10u, 0x1B5C18u, 0x1B5C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C20u;
label_1b5c20:
    // 0x1b5c20: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x1b5c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1b5c24:
    // 0x1b5c24: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x1b5c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1b5c28:
    // 0x1b5c28: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x1b5c28u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1b5c2c:
    // 0x1b5c2c: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x1b5c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1b5c30:
    // 0x1b5c30: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x1b5c30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b5c34:
    // 0x1b5c34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b5c38:
    // 0x1b5c38: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x1b5c38u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1b5c3c:
    // 0x1b5c3c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1b5c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1b5c40:
    // 0x1b5c40: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1b5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1b5c44:
    // 0x1b5c44: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1b5c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_1b5c48:
    // 0x1b5c48: 0xae440034  sw          $a0, 0x34($s2)
    ctx->pc = 0x1b5c48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
label_1b5c4c:
    // 0x1b5c4c: 0xae46002c  sw          $a2, 0x2C($s2)
    ctx->pc = 0x1b5c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 6));
label_1b5c50:
    // 0x1b5c50: 0xae450030  sw          $a1, 0x30($s2)
    ctx->pc = 0x1b5c50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
label_1b5c54:
    // 0x1b5c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5c58:
    // 0x1b5c58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5c5c:
    // 0x1b5c5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b5c5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b5c60:
    // 0x1b5c60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b5c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5c64:
    // 0x1b5c64: 0x3e00008  jr          $ra
label_1b5c68:
    if (ctx->pc == 0x1B5C68u) {
        ctx->pc = 0x1B5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C64u;
        // 0x1b5c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5C6Cu;
        goto label_1b5c6c;
    }
    ctx->pc = 0x1B5C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C64u;
        // 0x1b5c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5C6Cu;
label_1b5c6c:
    // 0x1b5c6c: 0x0  nop
    ctx->pc = 0x1b5c6cu;
    // NOP
    if (ctx->pc == 0x1b5c6cu) { ctx->pc = 0x1b5c70u; }
}
