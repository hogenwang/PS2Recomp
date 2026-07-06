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

// Function: sub_002F49E0
// Address: 0x2f49e0 - 0x2f4bb0
void sub_002F49E0_0x2f49e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F49E0_0x2f49e0");
#endif

    switch (ctx->pc) {
        case 0x2f49e0u: goto label_2f49e0;
        case 0x2f49e4u: goto label_2f49e4;
        case 0x2f49e8u: goto label_2f49e8;
        case 0x2f49ecu: goto label_2f49ec;
        case 0x2f49f0u: goto label_2f49f0;
        case 0x2f49f4u: goto label_2f49f4;
        case 0x2f49f8u: goto label_2f49f8;
        case 0x2f49fcu: goto label_2f49fc;
        case 0x2f4a00u: goto label_2f4a00;
        case 0x2f4a04u: goto label_2f4a04;
        case 0x2f4a08u: goto label_2f4a08;
        case 0x2f4a0cu: goto label_2f4a0c;
        case 0x2f4a10u: goto label_2f4a10;
        case 0x2f4a14u: goto label_2f4a14;
        case 0x2f4a18u: goto label_2f4a18;
        case 0x2f4a1cu: goto label_2f4a1c;
        case 0x2f4a20u: goto label_2f4a20;
        case 0x2f4a24u: goto label_2f4a24;
        case 0x2f4a28u: goto label_2f4a28;
        case 0x2f4a2cu: goto label_2f4a2c;
        case 0x2f4a30u: goto label_2f4a30;
        case 0x2f4a34u: goto label_2f4a34;
        case 0x2f4a38u: goto label_2f4a38;
        case 0x2f4a3cu: goto label_2f4a3c;
        case 0x2f4a40u: goto label_2f4a40;
        case 0x2f4a44u: goto label_2f4a44;
        case 0x2f4a48u: goto label_2f4a48;
        case 0x2f4a4cu: goto label_2f4a4c;
        case 0x2f4a50u: goto label_2f4a50;
        case 0x2f4a54u: goto label_2f4a54;
        case 0x2f4a58u: goto label_2f4a58;
        case 0x2f4a5cu: goto label_2f4a5c;
        case 0x2f4a60u: goto label_2f4a60;
        case 0x2f4a64u: goto label_2f4a64;
        case 0x2f4a68u: goto label_2f4a68;
        case 0x2f4a6cu: goto label_2f4a6c;
        case 0x2f4a70u: goto label_2f4a70;
        case 0x2f4a74u: goto label_2f4a74;
        case 0x2f4a78u: goto label_2f4a78;
        case 0x2f4a7cu: goto label_2f4a7c;
        case 0x2f4a80u: goto label_2f4a80;
        case 0x2f4a84u: goto label_2f4a84;
        case 0x2f4a88u: goto label_2f4a88;
        case 0x2f4a8cu: goto label_2f4a8c;
        case 0x2f4a90u: goto label_2f4a90;
        case 0x2f4a94u: goto label_2f4a94;
        case 0x2f4a98u: goto label_2f4a98;
        case 0x2f4a9cu: goto label_2f4a9c;
        case 0x2f4aa0u: goto label_2f4aa0;
        case 0x2f4aa4u: goto label_2f4aa4;
        case 0x2f4aa8u: goto label_2f4aa8;
        case 0x2f4aacu: goto label_2f4aac;
        case 0x2f4ab0u: goto label_2f4ab0;
        case 0x2f4ab4u: goto label_2f4ab4;
        case 0x2f4ab8u: goto label_2f4ab8;
        case 0x2f4abcu: goto label_2f4abc;
        case 0x2f4ac0u: goto label_2f4ac0;
        case 0x2f4ac4u: goto label_2f4ac4;
        case 0x2f4ac8u: goto label_2f4ac8;
        case 0x2f4accu: goto label_2f4acc;
        case 0x2f4ad0u: goto label_2f4ad0;
        case 0x2f4ad4u: goto label_2f4ad4;
        case 0x2f4ad8u: goto label_2f4ad8;
        case 0x2f4adcu: goto label_2f4adc;
        case 0x2f4ae0u: goto label_2f4ae0;
        case 0x2f4ae4u: goto label_2f4ae4;
        case 0x2f4ae8u: goto label_2f4ae8;
        case 0x2f4aecu: goto label_2f4aec;
        case 0x2f4af0u: goto label_2f4af0;
        case 0x2f4af4u: goto label_2f4af4;
        case 0x2f4af8u: goto label_2f4af8;
        case 0x2f4afcu: goto label_2f4afc;
        case 0x2f4b00u: goto label_2f4b00;
        case 0x2f4b04u: goto label_2f4b04;
        case 0x2f4b08u: goto label_2f4b08;
        case 0x2f4b0cu: goto label_2f4b0c;
        case 0x2f4b10u: goto label_2f4b10;
        case 0x2f4b14u: goto label_2f4b14;
        case 0x2f4b18u: goto label_2f4b18;
        case 0x2f4b1cu: goto label_2f4b1c;
        case 0x2f4b20u: goto label_2f4b20;
        case 0x2f4b24u: goto label_2f4b24;
        case 0x2f4b28u: goto label_2f4b28;
        case 0x2f4b2cu: goto label_2f4b2c;
        case 0x2f4b30u: goto label_2f4b30;
        case 0x2f4b34u: goto label_2f4b34;
        case 0x2f4b38u: goto label_2f4b38;
        case 0x2f4b3cu: goto label_2f4b3c;
        case 0x2f4b40u: goto label_2f4b40;
        case 0x2f4b44u: goto label_2f4b44;
        case 0x2f4b48u: goto label_2f4b48;
        case 0x2f4b4cu: goto label_2f4b4c;
        case 0x2f4b50u: goto label_2f4b50;
        case 0x2f4b54u: goto label_2f4b54;
        case 0x2f4b58u: goto label_2f4b58;
        case 0x2f4b5cu: goto label_2f4b5c;
        case 0x2f4b60u: goto label_2f4b60;
        case 0x2f4b64u: goto label_2f4b64;
        case 0x2f4b68u: goto label_2f4b68;
        case 0x2f4b6cu: goto label_2f4b6c;
        case 0x2f4b70u: goto label_2f4b70;
        case 0x2f4b74u: goto label_2f4b74;
        case 0x2f4b78u: goto label_2f4b78;
        case 0x2f4b7cu: goto label_2f4b7c;
        case 0x2f4b80u: goto label_2f4b80;
        case 0x2f4b84u: goto label_2f4b84;
        case 0x2f4b88u: goto label_2f4b88;
        case 0x2f4b8cu: goto label_2f4b8c;
        case 0x2f4b90u: goto label_2f4b90;
        case 0x2f4b94u: goto label_2f4b94;
        case 0x2f4b98u: goto label_2f4b98;
        case 0x2f4b9cu: goto label_2f4b9c;
        case 0x2f4ba0u: goto label_2f4ba0;
        case 0x2f4ba4u: goto label_2f4ba4;
        case 0x2f4ba8u: goto label_2f4ba8;
        case 0x2f4bacu: goto label_2f4bac;
        default: break;
    }

    ctx->pc = 0x2f49e0u;

label_2f49e0:
    // 0x2f49e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f49e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2f49e4:
    // 0x2f49e4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2f49e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_2f49e8:
    // 0x2f49e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f49e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2f49ec:
    // 0x2f49ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f49ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f49f0:
    // 0x2f49f0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2f49f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_2f49f4:
    // 0x2f49f4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_2f49f8:
    if (ctx->pc == 0x2F49F8u) {
        ctx->pc = 0x2F49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49F4u;
        // 0x2f49f8: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49FCu;
        goto label_2f49fc;
    }
    ctx->pc = 0x2F49F4u;
    {
        const bool branch_taken_0x2f49f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49F4u;
        // 0x2f49f8: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49f4) {
            ctx->pc = 0x2F4A0Cu;
            goto label_2f4a0c;
        }
    }
    ctx->pc = 0x2F49FCu;
label_2f49fc:
    // 0x2f49fc: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x2f49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_2f4a00:
    // 0x2f4a00: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2f4a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f4a04:
    // 0x2f4a04: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_2f4a08:
    if (ctx->pc == 0x2F4A08u) {
        ctx->pc = 0x2F4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A04u;
        // 0x2f4a08: 0x8e220160  lw          $v0, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A0Cu;
        goto label_2f4a0c;
    }
    ctx->pc = 0x2F4A04u;
    {
        const bool branch_taken_0x2f4a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f4a04) {
            ctx->pc = 0x2F4A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4A04u;
            // 0x2f4a08: 0x8e220160  lw          $v0, 0x160($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4A18u;
            goto label_2f4a18;
        }
    }
    ctx->pc = 0x2F4A0Cu;
label_2f4a0c:
    // 0x2f4a0c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f4a10:
    if (ctx->pc == 0x2F4A10u) {
        ctx->pc = 0x2F4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A0Cu;
        // 0x2f4a10: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A14u;
        goto label_2f4a14;
    }
    ctx->pc = 0x2F4A0Cu;
    {
        const bool branch_taken_0x2f4a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A0Cu;
        // 0x2f4a10: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a0c) {
            ctx->pc = 0x2F4A48u;
            goto label_2f4a48;
        }
    }
    ctx->pc = 0x2F4A14u;
label_2f4a14:
    // 0x2f4a14: 0x0  nop
    ctx->pc = 0x2f4a14u;
    // NOP
label_2f4a18:
    // 0x2f4a18: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2f4a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2f4a1c:
    // 0x2f4a1c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2f4a20:
    if (ctx->pc == 0x2F4A20u) {
        ctx->pc = 0x2F4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A1Cu;
        // 0x2f4a20: 0x2402fc10  addiu       $v0, $zero, -0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A24u;
        goto label_2f4a24;
    }
    ctx->pc = 0x2F4A1Cu;
    {
        const bool branch_taken_0x2f4a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A1Cu;
        // 0x2f4a20: 0x2402fc10  addiu       $v0, $zero, -0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a1c) {
            ctx->pc = 0x2F4A48u;
            goto label_2f4a48;
        }
    }
    ctx->pc = 0x2F4A24u;
label_2f4a24:
    // 0x2f4a24: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2f4a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_2f4a28:
    // 0x2f4a28: 0xc0be994  jal         func_2FA650
label_2f4a2c:
    if (ctx->pc == 0x2F4A2Cu) {
        ctx->pc = 0x2F4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A28u;
        // 0x2f4a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A30u;
        goto label_2f4a30;
    }
    ctx->pc = 0x2F4A28u;
    SET_GPR_U32(ctx, 31, 0x2F4A30u);
    ctx->pc = 0x2F4A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A28u;
    // 0x2f4a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA650u, 0x2F4A28u, 0x2F4A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A30u;
label_2f4a30:
    // 0x2f4a30: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2f4a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2f4a34:
    // 0x2f4a34: 0x5090000f  beql        $a0, $s0, . + 4 + (0xF << 2)
label_2f4a38:
    if (ctx->pc == 0x2F4A38u) {
        ctx->pc = 0x2F4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A34u;
        // 0x2f4a38: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A3Cu;
        goto label_2f4a3c;
    }
    ctx->pc = 0x2F4A34u;
    {
        const bool branch_taken_0x2f4a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x2f4a34) {
            ctx->pc = 0x2F4A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4A34u;
            // 0x2f4a38: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4A74u;
            goto label_2f4a74;
        }
    }
    ctx->pc = 0x2F4A3Cu;
label_2f4a3c:
    // 0x2f4a3c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2f4a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2f4a40:
    // 0x2f4a40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f4a44:
    if (ctx->pc == 0x2F4A44u) {
        ctx->pc = 0x2F4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A40u;
        // 0x2f4a44: 0x2402fc0b  addiu       $v0, $zero, -0x3F5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966283));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A48u;
        goto label_2f4a48;
    }
    ctx->pc = 0x2F4A40u;
    {
        const bool branch_taken_0x2f4a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A40u;
        // 0x2f4a44: 0x2402fc0b  addiu       $v0, $zero, -0x3F5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a40) {
            ctx->pc = 0x2F4A54u;
            goto label_2f4a54;
        }
    }
    ctx->pc = 0x2F4A48u;
label_2f4a48:
    // 0x2f4a48: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2f4a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2f4a4c:
    // 0x2f4a4c: 0x10000051  b           . + 4 + (0x51 << 2)
label_2f4a50:
    if (ctx->pc == 0x2F4A50u) {
        ctx->pc = 0x2F4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A4Cu;
        // 0x2f4a50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A54u;
        goto label_2f4a54;
    }
    ctx->pc = 0x2F4A4Cu;
    {
        const bool branch_taken_0x2f4a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A4Cu;
        // 0x2f4a50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a4c) {
            ctx->pc = 0x2F4B94u;
            goto label_2f4b94;
        }
    }
    ctx->pc = 0x2F4A54u;
label_2f4a54:
    // 0x2f4a54: 0xc0432ac  jal         func_10CAB0
label_2f4a58:
    if (ctx->pc == 0x2F4A58u) {
        ctx->pc = 0x2F4A5Cu;
        goto label_2f4a5c;
    }
    ctx->pc = 0x2F4A54u;
    SET_GPR_U32(ctx, 31, 0x2F4A5Cu);
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x2F4A54u, 0x2F4A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A5Cu;
label_2f4a5c:
    // 0x2f4a5c: 0xc04329c  jal         func_10CA70
label_2f4a60:
    if (ctx->pc == 0x2F4A60u) {
        ctx->pc = 0x2F4A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A5Cu;
        // 0x2f4a60: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A64u;
        goto label_2f4a64;
    }
    ctx->pc = 0x2F4A5Cu;
    SET_GPR_U32(ctx, 31, 0x2F4A64u);
    ctx->pc = 0x2F4A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A5Cu;
    // 0x2f4a60: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x2F4A5Cu, 0x2F4A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A64u;
label_2f4a64:
    // 0x2f4a64: 0xc0be45e  jal         func_2F9178
label_2f4a68:
    if (ctx->pc == 0x2F4A68u) {
        ctx->pc = 0x2F4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A64u;
        // 0x2f4a68: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A6Cu;
        goto label_2f4a6c;
    }
    ctx->pc = 0x2F4A64u;
    SET_GPR_U32(ctx, 31, 0x2F4A6Cu);
    ctx->pc = 0x2F4A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A64u;
    // 0x2f4a68: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F4A64u, 0x2F4A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A6Cu;
label_2f4a6c:
    // 0x2f4a6c: 0xae30005c  sw          $s0, 0x5C($s1)
    ctx->pc = 0x2f4a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 16));
label_2f4a70:
    // 0x2f4a70: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2f4a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2f4a74:
    // 0x2f4a74: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_2f4a78:
    if (ctx->pc == 0x2F4A78u) {
        ctx->pc = 0x2F4A7Cu;
        goto label_2f4a7c;
    }
    ctx->pc = 0x2F4A74u;
    {
        const bool branch_taken_0x2f4a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4a74) {
            ctx->pc = 0x2F4B54u;
            goto label_2f4b54;
        }
    }
    ctx->pc = 0x2F4A7Cu;
label_2f4a7c:
    // 0x2f4a7c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2f4a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2f4a80:
    // 0x2f4a80: 0xc0be450  jal         func_2F9140
label_2f4a84:
    if (ctx->pc == 0x2F4A84u) {
        ctx->pc = 0x2F4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A80u;
        // 0x2f4a84: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A88u;
        goto label_2f4a88;
    }
    ctx->pc = 0x2F4A80u;
    SET_GPR_U32(ctx, 31, 0x2F4A88u);
    ctx->pc = 0x2F4A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A80u;
    // 0x2f4a84: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F4A80u, 0x2F4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A88u;
label_2f4a88:
    // 0x2f4a88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f4a8c:
    if (ctx->pc == 0x2F4A8Cu) {
        ctx->pc = 0x2F4A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A88u;
        // 0x2f4a8c: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A90u;
        goto label_2f4a90;
    }
    ctx->pc = 0x2F4A88u;
    {
        const bool branch_taken_0x2f4a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A88u;
        // 0x2f4a8c: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a88) {
            ctx->pc = 0x2F4AA0u;
            goto label_2f4aa0;
        }
    }
    ctx->pc = 0x2F4A90u;
label_2f4a90:
    // 0x2f4a90: 0x2402fc16  addiu       $v0, $zero, -0x3EA
    ctx->pc = 0x2f4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
label_2f4a94:
    // 0x2f4a94: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2f4a98:
    if (ctx->pc == 0x2F4A98u) {
        ctx->pc = 0x2F4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A94u;
        // 0x2f4a98: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A9Cu;
        goto label_2f4a9c;
    }
    ctx->pc = 0x2F4A94u;
    {
        const bool branch_taken_0x2f4a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A94u;
        // 0x2f4a98: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a94) {
            ctx->pc = 0x2F4B44u;
            goto label_2f4b44;
        }
    }
    ctx->pc = 0x2F4A9Cu;
label_2f4a9c:
    // 0x2f4a9c: 0x0  nop
    ctx->pc = 0x2f4a9cu;
    // NOP
label_2f4aa0:
    // 0x2f4aa0: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x2f4aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2f4aa4:
    // 0x2f4aa4: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x2f4aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_2f4aa8:
    // 0x2f4aa8: 0x8e280058  lw          $t0, 0x58($s1)
    ctx->pc = 0x2f4aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2f4aac:
    // 0x2f4aac: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2f4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2f4ab0:
    // 0x2f4ab0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2f4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2f4ab4:
    // 0x2f4ab4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f4ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2f4ab8:
    // 0x2f4ab8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2f4ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_2f4abc:
    // 0x2f4abc: 0x24424868  addiu       $v0, $v0, 0x4868
    ctx->pc = 0x2f4abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18536));
label_2f4ac0:
    // 0x2f4ac0: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x2f4ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_2f4ac4:
    // 0x2f4ac4: 0x24a51e38  addiu       $a1, $a1, 0x1E38
    ctx->pc = 0x2f4ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7736));
label_2f4ac8:
    // 0x2f4ac8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2f4ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2f4acc:
    // 0x2f4acc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f4accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f4ad0:
    // 0x2f4ad0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2f4ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_2f4ad4:
    // 0x2f4ad4: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x2f4ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
label_2f4ad8:
    // 0x2f4ad8: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x2f4ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_2f4adc:
    // 0x2f4adc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2f4adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2f4ae0:
    // 0x2f4ae0: 0xc043298  jal         func_10CA60
label_2f4ae4:
    if (ctx->pc == 0x2F4AE4u) {
        ctx->pc = 0x2F4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AE0u;
        // 0x2f4ae4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4AE8u;
        goto label_2f4ae8;
    }
    ctx->pc = 0x2F4AE0u;
    SET_GPR_U32(ctx, 31, 0x2F4AE8u);
    ctx->pc = 0x2F4AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4AE0u;
    // 0x2f4ae4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA60u, 0x2F4AE0u, 0x2F4AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4AE8u;
label_2f4ae8:
    // 0x2f4ae8: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
label_2f4aec:
    if (ctx->pc == 0x2F4AECu) {
        ctx->pc = 0x2F4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AE8u;
        // 0x2f4aec: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4AF0u;
        goto label_2f4af0;
    }
    ctx->pc = 0x2F4AE8u;
    {
        const bool branch_taken_0x2f4ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AE8u;
        // 0x2f4aec: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ae8) {
            ctx->pc = 0x2F4B00u;
            goto label_2f4b00;
        }
    }
    ctx->pc = 0x2F4AF0u;
label_2f4af0:
    // 0x2f4af0: 0x2402fc17  addiu       $v0, $zero, -0x3E9
    ctx->pc = 0x2f4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
label_2f4af4:
    // 0x2f4af4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2f4af8:
    if (ctx->pc == 0x2F4AF8u) {
        ctx->pc = 0x2F4AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AF4u;
        // 0x2f4af8: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4AFCu;
        goto label_2f4afc;
    }
    ctx->pc = 0x2F4AF4u;
    {
        const bool branch_taken_0x2f4af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AF4u;
        // 0x2f4af8: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4af4) {
            ctx->pc = 0x2F4B3Cu;
            goto label_2f4b3c;
        }
    }
    ctx->pc = 0x2F4AFCu;
label_2f4afc:
    // 0x2f4afc: 0x0  nop
    ctx->pc = 0x2f4afcu;
    // NOP
label_2f4b00:
    // 0x2f4b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f4b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b04:
    // 0x2f4b04: 0xc043768  jal         func_10DDA0
label_2f4b08:
    if (ctx->pc == 0x2F4B08u) {
        ctx->pc = 0x2F4B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B04u;
        // 0x2f4b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B0Cu;
        goto label_2f4b0c;
    }
    ctx->pc = 0x2F4B04u;
    SET_GPR_U32(ctx, 31, 0x2F4B0Cu);
    ctx->pc = 0x2F4B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B04u;
    // 0x2f4b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDA0u, 0x2F4B04u, 0x2F4B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B0Cu;
label_2f4b0c:
    // 0x2f4b0c: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
label_2f4b10:
    if (ctx->pc == 0x2F4B10u) {
        ctx->pc = 0x2F4B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B0Cu;
        // 0x2f4b10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B14u;
        goto label_2f4b14;
    }
    ctx->pc = 0x2F4B0Cu;
    {
        const bool branch_taken_0x2f4b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F4B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B0Cu;
        // 0x2f4b10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b0c) {
            ctx->pc = 0x2F4B20u;
            goto label_2f4b20;
        }
    }
    ctx->pc = 0x2F4B14u;
label_2f4b14:
    // 0x2f4b14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b18:
    // 0x2f4b18: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2f4b1c:
    if (ctx->pc == 0x2F4B1Cu) {
        ctx->pc = 0x2F4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B18u;
        // 0x2f4b1c: 0xae230074  sw          $v1, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B20u;
        goto label_2f4b20;
    }
    ctx->pc = 0x2F4B18u;
    {
        const bool branch_taken_0x2f4b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B18u;
        // 0x2f4b1c: 0xae230074  sw          $v1, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b18) {
            ctx->pc = 0x2F4B94u;
            goto label_2f4b94;
        }
    }
    ctx->pc = 0x2F4B20u;
label_2f4b20:
    // 0x2f4b20: 0x2402fc17  addiu       $v0, $zero, -0x3E9
    ctx->pc = 0x2f4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
label_2f4b24:
    // 0x2f4b24: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2f4b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2f4b28:
    // 0x2f4b28: 0xc0432ac  jal         func_10CAB0
label_2f4b2c:
    if (ctx->pc == 0x2F4B2Cu) {
        ctx->pc = 0x2F4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B28u;
        // 0x2f4b2c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B30u;
        goto label_2f4b30;
    }
    ctx->pc = 0x2F4B28u;
    SET_GPR_U32(ctx, 31, 0x2F4B30u);
    ctx->pc = 0x2F4B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B28u;
    // 0x2f4b2c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x2F4B28u, 0x2F4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B30u;
label_2f4b30:
    // 0x2f4b30: 0xc04329c  jal         func_10CA70
label_2f4b34:
    if (ctx->pc == 0x2F4B34u) {
        ctx->pc = 0x2F4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B30u;
        // 0x2f4b34: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B38u;
        goto label_2f4b38;
    }
    ctx->pc = 0x2F4B30u;
    SET_GPR_U32(ctx, 31, 0x2F4B38u);
    ctx->pc = 0x2F4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B30u;
    // 0x2f4b34: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x2F4B30u, 0x2F4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B38u;
label_2f4b38:
    // 0x2f4b38: 0xae32005c  sw          $s2, 0x5C($s1)
    ctx->pc = 0x2f4b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 18));
label_2f4b3c:
    // 0x2f4b3c: 0xc0be45e  jal         func_2F9178
label_2f4b40:
    if (ctx->pc == 0x2F4B40u) {
        ctx->pc = 0x2F4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B3Cu;
        // 0x2f4b40: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B44u;
        goto label_2f4b44;
    }
    ctx->pc = 0x2F4B3Cu;
    SET_GPR_U32(ctx, 31, 0x2F4B44u);
    ctx->pc = 0x2F4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B3Cu;
    // 0x2f4b40: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F4B3Cu, 0x2F4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B44u;
label_2f4b44:
    // 0x2f4b44: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x2f4b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_2f4b48:
    // 0x2f4b48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f4b4c:
    // 0x2f4b4c: 0x10000011  b           . + 4 + (0x11 << 2)
label_2f4b50:
    if (ctx->pc == 0x2F4B50u) {
        ctx->pc = 0x2F4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B4Cu;
        // 0x2f4b50: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B54u;
        goto label_2f4b54;
    }
    ctx->pc = 0x2F4B4Cu;
    {
        const bool branch_taken_0x2f4b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B4Cu;
        // 0x2f4b50: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b4c) {
            ctx->pc = 0x2F4B94u;
            goto label_2f4b94;
        }
    }
    ctx->pc = 0x2F4B54u;
label_2f4b54:
    // 0x2f4b54: 0xc0bd21a  jal         func_2F4868
label_2f4b58:
    if (ctx->pc == 0x2F4B58u) {
        ctx->pc = 0x2F4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B54u;
        // 0x2f4b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B5Cu;
        goto label_2f4b5c;
    }
    ctx->pc = 0x2F4B54u;
    SET_GPR_U32(ctx, 31, 0x2F4B5Cu);
    ctx->pc = 0x2F4B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B54u;
    // 0x2f4b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4868u, 0x2F4B54u, 0x2F4B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B5Cu;
label_2f4b5c:
    // 0x2f4b5c: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2f4b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2f4b60:
    // 0x2f4b60: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2f4b64:
    if (ctx->pc == 0x2F4B64u) {
        ctx->pc = 0x2F4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B60u;
        // 0x2f4b64: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B68u;
        goto label_2f4b68;
    }
    ctx->pc = 0x2F4B60u;
    {
        const bool branch_taken_0x2f4b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B60u;
        // 0x2f4b64: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b60) {
            ctx->pc = 0x2F4B8Cu;
            goto label_2f4b8c;
        }
    }
    ctx->pc = 0x2F4B68u;
label_2f4b68:
    // 0x2f4b68: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f4b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b6c:
    // 0x2f4b6c: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2f4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2f4b70:
    // 0x2f4b70: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f4b70u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b74:
    // 0x2f4b74: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2f4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2f4b78:
    // 0x2f4b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b7c:
    // 0x2f4b7c: 0x8e26006c  lw          $a2, 0x6C($s1)
    ctx->pc = 0x2f4b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_2f4b80:
    // 0x2f4b80: 0x60f809  jalr        $v1
label_2f4b84:
    if (ctx->pc == 0x2F4B84u) {
        ctx->pc = 0x2F4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B80u;
        // 0x2f4b84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B88u;
        goto label_2f4b88;
    }
    ctx->pc = 0x2F4B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F4B88u);
        ctx->pc = 0x2F4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B80u;
        // 0x2f4b84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4B80u, 0x2F4B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4B88u;
label_2f4b88:
    // 0x2f4b88: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f4b88u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b8c:
    // 0x2f4b8c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2f4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_2f4b90:
    // 0x2f4b90: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f4b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b94:
    // 0x2f4b94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f4b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f4b98:
    // 0x2f4b98: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2f4b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f4b9c:
    // 0x2f4b9c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2f4b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4ba0:
    // 0x2f4ba0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2f4ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f4ba4:
    // 0x2f4ba4: 0x3e00008  jr          $ra
label_2f4ba8:
    if (ctx->pc == 0x2F4BA8u) {
        ctx->pc = 0x2F4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BA4u;
        // 0x2f4ba8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4BACu;
        goto label_2f4bac;
    }
    ctx->pc = 0x2F4BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BA4u;
        // 0x2f4ba8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4BACu;
label_2f4bac:
    // 0x2f4bac: 0x0  nop
    ctx->pc = 0x2f4bacu;
    // NOP
    if (ctx->pc == 0x2f4bacu) { ctx->pc = 0x2f4bb0u; }
}
