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

// Function: sub_001E99F0
// Address: 0x1e99f0 - 0x1e9c18
void sub_001E99F0_0x1e99f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E99F0_0x1e99f0");
#endif

    switch (ctx->pc) {
        case 0x1e99f0u: goto label_1e99f0;
        case 0x1e99f4u: goto label_1e99f4;
        case 0x1e99f8u: goto label_1e99f8;
        case 0x1e99fcu: goto label_1e99fc;
        case 0x1e9a00u: goto label_1e9a00;
        case 0x1e9a04u: goto label_1e9a04;
        case 0x1e9a08u: goto label_1e9a08;
        case 0x1e9a0cu: goto label_1e9a0c;
        case 0x1e9a10u: goto label_1e9a10;
        case 0x1e9a14u: goto label_1e9a14;
        case 0x1e9a18u: goto label_1e9a18;
        case 0x1e9a1cu: goto label_1e9a1c;
        case 0x1e9a20u: goto label_1e9a20;
        case 0x1e9a24u: goto label_1e9a24;
        case 0x1e9a28u: goto label_1e9a28;
        case 0x1e9a2cu: goto label_1e9a2c;
        case 0x1e9a30u: goto label_1e9a30;
        case 0x1e9a34u: goto label_1e9a34;
        case 0x1e9a38u: goto label_1e9a38;
        case 0x1e9a3cu: goto label_1e9a3c;
        case 0x1e9a40u: goto label_1e9a40;
        case 0x1e9a44u: goto label_1e9a44;
        case 0x1e9a48u: goto label_1e9a48;
        case 0x1e9a4cu: goto label_1e9a4c;
        case 0x1e9a50u: goto label_1e9a50;
        case 0x1e9a54u: goto label_1e9a54;
        case 0x1e9a58u: goto label_1e9a58;
        case 0x1e9a5cu: goto label_1e9a5c;
        case 0x1e9a60u: goto label_1e9a60;
        case 0x1e9a64u: goto label_1e9a64;
        case 0x1e9a68u: goto label_1e9a68;
        case 0x1e9a6cu: goto label_1e9a6c;
        case 0x1e9a70u: goto label_1e9a70;
        case 0x1e9a74u: goto label_1e9a74;
        case 0x1e9a78u: goto label_1e9a78;
        case 0x1e9a7cu: goto label_1e9a7c;
        case 0x1e9a80u: goto label_1e9a80;
        case 0x1e9a84u: goto label_1e9a84;
        case 0x1e9a88u: goto label_1e9a88;
        case 0x1e9a8cu: goto label_1e9a8c;
        case 0x1e9a90u: goto label_1e9a90;
        case 0x1e9a94u: goto label_1e9a94;
        case 0x1e9a98u: goto label_1e9a98;
        case 0x1e9a9cu: goto label_1e9a9c;
        case 0x1e9aa0u: goto label_1e9aa0;
        case 0x1e9aa4u: goto label_1e9aa4;
        case 0x1e9aa8u: goto label_1e9aa8;
        case 0x1e9aacu: goto label_1e9aac;
        case 0x1e9ab0u: goto label_1e9ab0;
        case 0x1e9ab4u: goto label_1e9ab4;
        case 0x1e9ab8u: goto label_1e9ab8;
        case 0x1e9abcu: goto label_1e9abc;
        case 0x1e9ac0u: goto label_1e9ac0;
        case 0x1e9ac4u: goto label_1e9ac4;
        case 0x1e9ac8u: goto label_1e9ac8;
        case 0x1e9accu: goto label_1e9acc;
        case 0x1e9ad0u: goto label_1e9ad0;
        case 0x1e9ad4u: goto label_1e9ad4;
        case 0x1e9ad8u: goto label_1e9ad8;
        case 0x1e9adcu: goto label_1e9adc;
        case 0x1e9ae0u: goto label_1e9ae0;
        case 0x1e9ae4u: goto label_1e9ae4;
        case 0x1e9ae8u: goto label_1e9ae8;
        case 0x1e9aecu: goto label_1e9aec;
        case 0x1e9af0u: goto label_1e9af0;
        case 0x1e9af4u: goto label_1e9af4;
        case 0x1e9af8u: goto label_1e9af8;
        case 0x1e9afcu: goto label_1e9afc;
        case 0x1e9b00u: goto label_1e9b00;
        case 0x1e9b04u: goto label_1e9b04;
        case 0x1e9b08u: goto label_1e9b08;
        case 0x1e9b0cu: goto label_1e9b0c;
        case 0x1e9b10u: goto label_1e9b10;
        case 0x1e9b14u: goto label_1e9b14;
        case 0x1e9b18u: goto label_1e9b18;
        case 0x1e9b1cu: goto label_1e9b1c;
        case 0x1e9b20u: goto label_1e9b20;
        case 0x1e9b24u: goto label_1e9b24;
        case 0x1e9b28u: goto label_1e9b28;
        case 0x1e9b2cu: goto label_1e9b2c;
        case 0x1e9b30u: goto label_1e9b30;
        case 0x1e9b34u: goto label_1e9b34;
        case 0x1e9b38u: goto label_1e9b38;
        case 0x1e9b3cu: goto label_1e9b3c;
        case 0x1e9b40u: goto label_1e9b40;
        case 0x1e9b44u: goto label_1e9b44;
        case 0x1e9b48u: goto label_1e9b48;
        case 0x1e9b4cu: goto label_1e9b4c;
        case 0x1e9b50u: goto label_1e9b50;
        case 0x1e9b54u: goto label_1e9b54;
        case 0x1e9b58u: goto label_1e9b58;
        case 0x1e9b5cu: goto label_1e9b5c;
        case 0x1e9b60u: goto label_1e9b60;
        case 0x1e9b64u: goto label_1e9b64;
        case 0x1e9b68u: goto label_1e9b68;
        case 0x1e9b6cu: goto label_1e9b6c;
        case 0x1e9b70u: goto label_1e9b70;
        case 0x1e9b74u: goto label_1e9b74;
        case 0x1e9b78u: goto label_1e9b78;
        case 0x1e9b7cu: goto label_1e9b7c;
        case 0x1e9b80u: goto label_1e9b80;
        case 0x1e9b84u: goto label_1e9b84;
        case 0x1e9b88u: goto label_1e9b88;
        case 0x1e9b8cu: goto label_1e9b8c;
        case 0x1e9b90u: goto label_1e9b90;
        case 0x1e9b94u: goto label_1e9b94;
        case 0x1e9b98u: goto label_1e9b98;
        case 0x1e9b9cu: goto label_1e9b9c;
        case 0x1e9ba0u: goto label_1e9ba0;
        case 0x1e9ba4u: goto label_1e9ba4;
        case 0x1e9ba8u: goto label_1e9ba8;
        case 0x1e9bacu: goto label_1e9bac;
        case 0x1e9bb0u: goto label_1e9bb0;
        case 0x1e9bb4u: goto label_1e9bb4;
        case 0x1e9bb8u: goto label_1e9bb8;
        case 0x1e9bbcu: goto label_1e9bbc;
        case 0x1e9bc0u: goto label_1e9bc0;
        case 0x1e9bc4u: goto label_1e9bc4;
        case 0x1e9bc8u: goto label_1e9bc8;
        case 0x1e9bccu: goto label_1e9bcc;
        case 0x1e9bd0u: goto label_1e9bd0;
        case 0x1e9bd4u: goto label_1e9bd4;
        case 0x1e9bd8u: goto label_1e9bd8;
        case 0x1e9bdcu: goto label_1e9bdc;
        case 0x1e9be0u: goto label_1e9be0;
        case 0x1e9be4u: goto label_1e9be4;
        case 0x1e9be8u: goto label_1e9be8;
        case 0x1e9becu: goto label_1e9bec;
        case 0x1e9bf0u: goto label_1e9bf0;
        case 0x1e9bf4u: goto label_1e9bf4;
        case 0x1e9bf8u: goto label_1e9bf8;
        case 0x1e9bfcu: goto label_1e9bfc;
        case 0x1e9c00u: goto label_1e9c00;
        case 0x1e9c04u: goto label_1e9c04;
        case 0x1e9c08u: goto label_1e9c08;
        case 0x1e9c0cu: goto label_1e9c0c;
        case 0x1e9c10u: goto label_1e9c10;
        case 0x1e9c14u: goto label_1e9c14;
        default: break;
    }

    ctx->pc = 0x1e99f0u;

label_1e99f0:
    // 0x1e99f0: 0x8c833708  lw          $v1, 0x3708($a0)
    ctx->pc = 0x1e99f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14088)));
label_1e99f4:
    // 0x1e99f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e99f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e99f8:
    // 0x1e99f8: 0x8c84205c  lw          $a0, 0x205C($a0)
    ctx->pc = 0x1e99f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8284)));
label_1e99fc:
    // 0x1e99fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1e9a00:
    if (ctx->pc == 0x1E9A00u) {
        ctx->pc = 0x1E9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99FCu;
        // 0x1e9a00: 0x24650d0c  addiu       $a1, $v1, 0xD0C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A04u;
        goto label_1e9a04;
    }
    ctx->pc = 0x1E99FCu;
    {
        const bool branch_taken_0x1e99fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99FCu;
        // 0x1e9a00: 0x24650d0c  addiu       $a1, $v1, 0xD0C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99fc) {
            ctx->pc = 0x1E9A18u;
            goto label_1e9a18;
        }
    }
    ctx->pc = 0x1E9A04u;
label_1e9a04:
    // 0x1e9a04: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1e9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1e9a08:
    // 0x1e9a08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e9a08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a0c:
    // 0x1e9a0c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1e9a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e9a10:
    // 0x1e9a10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a14:
    // 0x1e9a14: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x1e9a14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_1e9a18:
    // 0x1e9a18: 0x3e00008  jr          $ra
label_1e9a1c:
    if (ctx->pc == 0x1E9A1Cu) {
        ctx->pc = 0x1E9A20u;
        goto label_1e9a20;
    }
    ctx->pc = 0x1E9A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9A20u;
label_1e9a20:
    // 0x1e9a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9a24:
    // 0x1e9a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e9a28:
    // 0x1e9a28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a2c:
    // 0x1e9a2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e9a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e9a30:
    // 0x1e9a30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e9a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a34:
    // 0x1e9a34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e9a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e9a38:
    // 0x1e9a38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e9a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1e9a3c:
    // 0x1e9a3c: 0xc07b648  jal         func_1ED920
label_1e9a40:
    if (ctx->pc == 0x1E9A40u) {
        ctx->pc = 0x1E9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A3Cu;
        // 0x1e9a40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A44u;
        goto label_1e9a44;
    }
    ctx->pc = 0x1E9A3Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A44u);
    ctx->pc = 0x1E9A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A3Cu;
    // 0x1e9a40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1E9A3Cu, 0x1E9A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A44u;
label_1e9a44:
    // 0x1e9a44: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1e9a48:
    // 0x1e9a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a4c:
    // 0x1e9a4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e9a50:
    if (ctx->pc == 0x1E9A50u) {
        ctx->pc = 0x1E9A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A4Cu;
        // 0x1e9a50: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A54u;
        goto label_1e9a54;
    }
    ctx->pc = 0x1E9A4Cu;
    {
        const bool branch_taken_0x1e9a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A4Cu;
        // 0x1e9a50: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a4c) {
            ctx->pc = 0x1E9A70u;
            goto label_1e9a70;
        }
    }
    ctx->pc = 0x1E9A54u;
label_1e9a54:
    // 0x1e9a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9a58:
    // 0x1e9a58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a5c:
    // 0x1e9a5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e9a60:
    // 0x1e9a60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e9a60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9a64:
    // 0x1e9a64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e9a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e9a68:
    // 0x1e9a68: 0x807b5c0  j           func_1ED700
label_1e9a6c:
    if (ctx->pc == 0x1E9A6Cu) {
        ctx->pc = 0x1E9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A68u;
        // 0x1e9a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A70u;
        goto label_1e9a70;
    }
    ctx->pc = 0x1E9A68u;
    ctx->pc = 0x1E9A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A68u;
    // 0x1e9a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1E9A70u;
label_1e9a70:
    // 0x1e9a70: 0xc07ec02  jal         func_1FB008
label_1e9a74:
    if (ctx->pc == 0x1E9A74u) {
        ctx->pc = 0x1E9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A70u;
        // 0x1e9a74: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A78u;
        goto label_1e9a78;
    }
    ctx->pc = 0x1E9A70u;
    SET_GPR_U32(ctx, 31, 0x1E9A78u);
    ctx->pc = 0x1E9A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A70u;
    // 0x1e9a74: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1E9A70u, 0x1E9A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A78u;
label_1e9a78:
    // 0x1e9a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a7c:
    // 0x1e9a7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a80:
    // 0x1e9a80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e9a84:
    if (ctx->pc == 0x1E9A84u) {
        ctx->pc = 0x1E9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A80u;
        // 0x1e9a84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A88u;
        goto label_1e9a88;
    }
    ctx->pc = 0x1E9A80u;
    {
        const bool branch_taken_0x1e9a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A80u;
        // 0x1e9a84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a80) {
            ctx->pc = 0x1E9A98u;
            goto label_1e9a98;
        }
    }
    ctx->pc = 0x1E9A88u;
label_1e9a88:
    // 0x1e9a88: 0x8e02216c  lw          $v0, 0x216C($s0)
    ctx->pc = 0x1e9a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8556)));
label_1e9a8c:
    // 0x1e9a8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e9a90:
    // 0x1e9a90: 0x60f809  jalr        $v1
label_1e9a94:
    if (ctx->pc == 0x1E9A94u) {
        ctx->pc = 0x1E9A98u;
        goto label_1e9a98;
    }
    ctx->pc = 0x1E9A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E9A98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9A90u, 0x1E9A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9A98u;
label_1e9a98:
    // 0x1e9a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9a9c:
    // 0x1e9a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e9aa0:
    // 0x1e9aa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e9aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9aa4:
    // 0x1e9aa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e9aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e9aa8:
    // 0x1e9aa8: 0x3e00008  jr          $ra
label_1e9aac:
    if (ctx->pc == 0x1E9AACu) {
        ctx->pc = 0x1E9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AA8u;
        // 0x1e9aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9AB0u;
        goto label_1e9ab0;
    }
    ctx->pc = 0x1E9AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AA8u;
        // 0x1e9aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9AB0u;
label_1e9ab0:
    // 0x1e9ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9ab4:
    // 0x1e9ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e9ab8:
    // 0x1e9ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9abc:
    // 0x1e9abc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e9abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e9ac0:
    // 0x1e9ac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e9ac4:
    // 0x1e9ac4: 0xc07b648  jal         func_1ED920
label_1e9ac8:
    if (ctx->pc == 0x1E9AC8u) {
        ctx->pc = 0x1E9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AC4u;
        // 0x1e9ac8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9ACCu;
        goto label_1e9acc;
    }
    ctx->pc = 0x1E9AC4u;
    SET_GPR_U32(ctx, 31, 0x1E9ACCu);
    ctx->pc = 0x1E9AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AC4u;
    // 0x1e9ac8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1E9AC4u, 0x1E9ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9ACCu;
label_1e9acc:
    // 0x1e9acc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1e9ad0:
    // 0x1e9ad0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e9ad4:
    if (ctx->pc == 0x1E9AD4u) {
        ctx->pc = 0x1E9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AD0u;
        // 0x1e9ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9AD8u;
        goto label_1e9ad8;
    }
    ctx->pc = 0x1E9AD0u;
    {
        const bool branch_taken_0x1e9ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AD0u;
        // 0x1e9ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ad0) {
            ctx->pc = 0x1E9AF0u;
            goto label_1e9af0;
        }
    }
    ctx->pc = 0x1E9AD8u;
label_1e9ad8:
    // 0x1e9ad8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9adc:
    // 0x1e9adc: 0xc07b5c0  jal         func_1ED700
label_1e9ae0:
    if (ctx->pc == 0x1E9AE0u) {
        ctx->pc = 0x1E9AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9ADCu;
        // 0x1e9ae0: 0x34a501a2  ori         $a1, $a1, 0x1A2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)418);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9AE4u;
        goto label_1e9ae4;
    }
    ctx->pc = 0x1E9ADCu;
    SET_GPR_U32(ctx, 31, 0x1E9AE4u);
    ctx->pc = 0x1E9AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9ADCu;
    // 0x1e9ae0: 0x34a501a2  ori         $a1, $a1, 0x1A2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)418);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1E9ADCu, 0x1E9AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AE4u;
label_1e9ae4:
    // 0x1e9ae4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e9ae8:
    if (ctx->pc == 0x1E9AE8u) {
        ctx->pc = 0x1E9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AE4u;
        // 0x1e9ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9AECu;
        goto label_1e9aec;
    }
    ctx->pc = 0x1E9AE4u;
    {
        const bool branch_taken_0x1e9ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AE4u;
        // 0x1e9ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ae4) {
            ctx->pc = 0x1E9B14u;
            goto label_1e9b14;
        }
    }
    ctx->pc = 0x1E9AECu;
label_1e9aec:
    // 0x1e9aec: 0x0  nop
    ctx->pc = 0x1e9aecu;
    // NOP
label_1e9af0:
    // 0x1e9af0: 0xc07ec02  jal         func_1FB008
label_1e9af4:
    if (ctx->pc == 0x1E9AF4u) {
        ctx->pc = 0x1E9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AF0u;
        // 0x1e9af4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9AF8u;
        goto label_1e9af8;
    }
    ctx->pc = 0x1E9AF0u;
    SET_GPR_U32(ctx, 31, 0x1E9AF8u);
    ctx->pc = 0x1E9AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AF0u;
    // 0x1e9af4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1E9AF0u, 0x1E9AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AF8u;
label_1e9af8:
    // 0x1e9af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9afc:
    // 0x1e9afc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e9b00:
    if (ctx->pc == 0x1E9B00u) {
        ctx->pc = 0x1E9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AFCu;
        // 0x1e9b00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9B04u;
        goto label_1e9b04;
    }
    ctx->pc = 0x1E9AFCu;
    {
        const bool branch_taken_0x1e9afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AFCu;
        // 0x1e9b00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9afc) {
            ctx->pc = 0x1E9B14u;
            goto label_1e9b14;
        }
    }
    ctx->pc = 0x1E9B04u;
label_1e9b04:
    // 0x1e9b04: 0x8e03216c  lw          $v1, 0x216C($s0)
    ctx->pc = 0x1e9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8556)));
label_1e9b08:
    // 0x1e9b08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e9b0c:
    // 0x1e9b0c: 0x40f809  jalr        $v0
label_1e9b10:
    if (ctx->pc == 0x1E9B10u) {
        ctx->pc = 0x1E9B14u;
        goto label_1e9b14;
    }
    ctx->pc = 0x1E9B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9B14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9B0Cu, 0x1E9B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9B14u;
label_1e9b14:
    // 0x1e9b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9b18:
    // 0x1e9b18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e9b1c:
    // 0x1e9b1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9b20:
    // 0x1e9b20: 0x3e00008  jr          $ra
label_1e9b24:
    if (ctx->pc == 0x1E9B24u) {
        ctx->pc = 0x1E9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B20u;
        // 0x1e9b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9B28u;
        goto label_1e9b28;
    }
    ctx->pc = 0x1E9B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B20u;
        // 0x1e9b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9B28u;
label_1e9b28:
    // 0x1e9b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9b2c:
    // 0x1e9b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e9b30:
    // 0x1e9b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b34:
    // 0x1e9b34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e9b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e9b38:
    // 0x1e9b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e9b3c:
    // 0x1e9b3c: 0xc07b648  jal         func_1ED920
label_1e9b40:
    if (ctx->pc == 0x1E9B40u) {
        ctx->pc = 0x1E9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B3Cu;
        // 0x1e9b40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9B44u;
        goto label_1e9b44;
    }
    ctx->pc = 0x1E9B3Cu;
    SET_GPR_U32(ctx, 31, 0x1E9B44u);
    ctx->pc = 0x1E9B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B3Cu;
    // 0x1e9b40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1E9B3Cu, 0x1E9B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B44u;
label_1e9b44:
    // 0x1e9b44: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1e9b48:
    // 0x1e9b48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e9b4c:
    if (ctx->pc == 0x1E9B4Cu) {
        ctx->pc = 0x1E9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B48u;
        // 0x1e9b4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9B50u;
        goto label_1e9b50;
    }
    ctx->pc = 0x1E9B48u;
    {
        const bool branch_taken_0x1e9b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B48u;
        // 0x1e9b4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b48) {
            ctx->pc = 0x1E9B68u;
            goto label_1e9b68;
        }
    }
    ctx->pc = 0x1E9B50u;
label_1e9b50:
    // 0x1e9b50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9b54:
    // 0x1e9b54: 0x34a501a3  ori         $a1, $a1, 0x1A3
    ctx->pc = 0x1e9b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
label_1e9b58:
    // 0x1e9b58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e9b5c:
    // 0x1e9b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9b60:
    // 0x1e9b60: 0x807b5c0  j           func_1ED700
label_1e9b64:
    if (ctx->pc == 0x1E9B64u) {
        ctx->pc = 0x1E9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B60u;
        // 0x1e9b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9B68u;
        goto label_1e9b68;
    }
    ctx->pc = 0x1E9B60u;
    ctx->pc = 0x1E9B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B60u;
    // 0x1e9b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1E9B68u;
label_1e9b68:
    // 0x1e9b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b6c:
    // 0x1e9b6c: 0xc07ec02  jal         func_1FB008
label_1e9b70:
    if (ctx->pc == 0x1E9B70u) {
        ctx->pc = 0x1E9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B6Cu;
        // 0x1e9b70: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9B74u;
        goto label_1e9b74;
    }
    ctx->pc = 0x1E9B6Cu;
    SET_GPR_U32(ctx, 31, 0x1E9B74u);
    ctx->pc = 0x1E9B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B6Cu;
    // 0x1e9b70: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1E9B6Cu, 0x1E9B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B74u;
label_1e9b74:
    // 0x1e9b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b78:
    // 0x1e9b78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e9b7c:
    if (ctx->pc == 0x1E9B7Cu) {
        ctx->pc = 0x1E9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B78u;
        // 0x1e9b7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9B80u;
        goto label_1e9b80;
    }
    ctx->pc = 0x1E9B78u;
    {
        const bool branch_taken_0x1e9b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B78u;
        // 0x1e9b7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b78) {
            ctx->pc = 0x1E9B90u;
            goto label_1e9b90;
        }
    }
    ctx->pc = 0x1E9B80u;
label_1e9b80:
    // 0x1e9b80: 0x8e02216c  lw          $v0, 0x216C($s0)
    ctx->pc = 0x1e9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8556)));
label_1e9b84:
    // 0x1e9b84: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1e9b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e9b88:
    // 0x1e9b88: 0x60f809  jalr        $v1
label_1e9b8c:
    if (ctx->pc == 0x1E9B8Cu) {
        ctx->pc = 0x1E9B90u;
        goto label_1e9b90;
    }
    ctx->pc = 0x1E9B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E9B90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9B88u, 0x1E9B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9B90u;
label_1e9b90:
    // 0x1e9b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9b94:
    // 0x1e9b94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e9b98:
    // 0x1e9b98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9b9c:
    // 0x1e9b9c: 0x3e00008  jr          $ra
label_1e9ba0:
    if (ctx->pc == 0x1E9BA0u) {
        ctx->pc = 0x1E9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B9Cu;
        // 0x1e9ba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9BA4u;
        goto label_1e9ba4;
    }
    ctx->pc = 0x1E9B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B9Cu;
        // 0x1e9ba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9BA4u;
label_1e9ba4:
    // 0x1e9ba4: 0x0  nop
    ctx->pc = 0x1e9ba4u;
    // NOP
label_1e9ba8:
    // 0x1e9ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e9bac:
    // 0x1e9bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e9bb0:
    // 0x1e9bb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e9bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e9bb4:
    // 0x1e9bb4: 0xc07b648  jal         func_1ED920
label_1e9bb8:
    if (ctx->pc == 0x1E9BB8u) {
        ctx->pc = 0x1E9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BB4u;
        // 0x1e9bb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9BBCu;
        goto label_1e9bbc;
    }
    ctx->pc = 0x1E9BB4u;
    SET_GPR_U32(ctx, 31, 0x1E9BBCu);
    ctx->pc = 0x1E9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9BB4u;
    // 0x1e9bb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1E9BB4u, 0x1E9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BBCu;
label_1e9bbc:
    // 0x1e9bbc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1e9bc0:
    // 0x1e9bc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9bc4:
    // 0x1e9bc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e9bc8:
    if (ctx->pc == 0x1E9BC8u) {
        ctx->pc = 0x1E9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BC4u;
        // 0x1e9bc8: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9BCCu;
        goto label_1e9bcc;
    }
    ctx->pc = 0x1E9BC4u;
    {
        const bool branch_taken_0x1e9bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BC4u;
        // 0x1e9bc8: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bc4) {
            ctx->pc = 0x1E9BE0u;
            goto label_1e9be0;
        }
    }
    ctx->pc = 0x1E9BCCu;
label_1e9bcc:
    // 0x1e9bcc: 0xc07b5c0  jal         func_1ED700
label_1e9bd0:
    if (ctx->pc == 0x1E9BD0u) {
        ctx->pc = 0x1E9BD4u;
        goto label_1e9bd4;
    }
    ctx->pc = 0x1E9BCCu;
    SET_GPR_U32(ctx, 31, 0x1E9BD4u);
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1E9BCCu, 0x1E9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BD4u;
label_1e9bd4:
    // 0x1e9bd4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e9bd8:
    if (ctx->pc == 0x1E9BD8u) {
        ctx->pc = 0x1E9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BD4u;
        // 0x1e9bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9BDCu;
        goto label_1e9bdc;
    }
    ctx->pc = 0x1E9BD4u;
    {
        const bool branch_taken_0x1e9bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BD4u;
        // 0x1e9bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bd4) {
            ctx->pc = 0x1E9C04u;
            goto label_1e9c04;
        }
    }
    ctx->pc = 0x1E9BDCu;
label_1e9bdc:
    // 0x1e9bdc: 0x0  nop
    ctx->pc = 0x1e9bdcu;
    // NOP
label_1e9be0:
    // 0x1e9be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9be4:
    // 0x1e9be4: 0xc07ec02  jal         func_1FB008
label_1e9be8:
    if (ctx->pc == 0x1E9BE8u) {
        ctx->pc = 0x1E9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BE4u;
        // 0x1e9be8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9BECu;
        goto label_1e9bec;
    }
    ctx->pc = 0x1E9BE4u;
    SET_GPR_U32(ctx, 31, 0x1E9BECu);
    ctx->pc = 0x1E9BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9BE4u;
    // 0x1e9be8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1E9BE4u, 0x1E9BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BECu;
label_1e9bec:
    // 0x1e9bec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e9bf0:
    if (ctx->pc == 0x1E9BF0u) {
        ctx->pc = 0x1E9BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BECu;
        // 0x1e9bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9BF4u;
        goto label_1e9bf4;
    }
    ctx->pc = 0x1E9BECu;
    {
        const bool branch_taken_0x1e9bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BECu;
        // 0x1e9bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bec) {
            ctx->pc = 0x1E9C04u;
            goto label_1e9c04;
        }
    }
    ctx->pc = 0x1E9BF4u;
label_1e9bf4:
    // 0x1e9bf4: 0x8e03216c  lw          $v1, 0x216C($s0)
    ctx->pc = 0x1e9bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8556)));
label_1e9bf8:
    // 0x1e9bf8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1e9bfc:
    // 0x1e9bfc: 0x40f809  jalr        $v0
label_1e9c00:
    if (ctx->pc == 0x1E9C00u) {
        ctx->pc = 0x1E9C04u;
        goto label_1e9c04;
    }
    ctx->pc = 0x1E9BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9C04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9BFCu, 0x1E9C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9C04u;
label_1e9c04:
    // 0x1e9c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9c08:
    // 0x1e9c08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e9c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e9c0c:
    // 0x1e9c0c: 0x3e00008  jr          $ra
label_1e9c10:
    if (ctx->pc == 0x1E9C10u) {
        ctx->pc = 0x1E9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C0Cu;
        // 0x1e9c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C14u;
        goto label_1e9c14;
    }
    ctx->pc = 0x1E9C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C0Cu;
        // 0x1e9c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9C14u;
label_1e9c14:
    // 0x1e9c14: 0x0  nop
    ctx->pc = 0x1e9c14u;
    // NOP
    if (ctx->pc == 0x1e9c14u) { ctx->pc = 0x1e9c18u; }
}
