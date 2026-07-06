#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6A98
// Address: 0x1e6a98 - 0x1e6bd0
void sub_001E6A98_0x1e6a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6A98_0x1e6a98");
#endif

    switch (ctx->pc) {
        case 0x1e6aacu: goto label_1e6aac;
        case 0x1e6ac0u: goto label_1e6ac0;
        case 0x1e6ad8u: goto label_1e6ad8;
        case 0x1e6af0u: goto label_1e6af0;
        case 0x1e6b00u: goto label_1e6b00;
        case 0x1e6b10u: goto label_1e6b10;
        case 0x1e6b28u: goto label_1e6b28;
        case 0x1e6b38u: goto label_1e6b38;
        case 0x1e6b48u: goto label_1e6b48;
        case 0x1e6b60u: goto label_1e6b60;
        case 0x1e6b70u: goto label_1e6b70;
        case 0x1e6b80u: goto label_1e6b80;
        case 0x1e6b98u: goto label_1e6b98;
        case 0x1e6ba8u: goto label_1e6ba8;
        case 0x1e6bb8u: goto label_1e6bb8;
        default: break;
    }

    ctx->pc = 0x1e6a98u;

    // 0x1e6a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6a9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6aa4: 0xc073a22  jal         func_1CE888
    ctx->pc = 0x1E6AA4u;
    SET_GPR_U32(ctx, 31, 0x1E6AACu);
    ctx->pc = 0x1E6AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AA4u;
            // 0x1e6aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE888u;
    if (runtime->hasFunction(0x1CE888u)) {
        auto targetFn = runtime->lookupFunction(0x1CE888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AACu; }
        if (ctx->pc != 0x1E6AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE888_0x1ce888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AACu; }
        if (ctx->pc != 0x1E6AACu) { return; }
    }
    ctx->pc = 0x1E6AACu;
label_1e6aac:
    // 0x1e6aac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ab8: 0x8073a28  j           func_1CE8A0
    ctx->pc = 0x1E6AB8u;
    ctx->pc = 0x1E6ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AB8u;
            // 0x1e6abc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE8A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E6AC0u;
label_1e6ac0:
    // 0x1e6ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6acc: 0x80788b4  j           func_1E22D0
    ctx->pc = 0x1E6ACCu;
    ctx->pc = 0x1E6AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6ACCu;
            // 0x1e6ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E22D0u;
    if (runtime->hasFunction(0x1E22D0u)) {
        auto targetFn = runtime->lookupFunction(0x1E22D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E22D0_0x1e22d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E6AD4u;
    // 0x1e6ad4: 0x0  nop
    ctx->pc = 0x1e6ad4u;
    // NOP
label_1e6ad8:
    // 0x1e6ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6ae4: 0x80788ba  j           func_1E22E8
    ctx->pc = 0x1E6AE4u;
    ctx->pc = 0x1E6AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AE4u;
            // 0x1e6ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E22E8u;
    if (runtime->hasFunction(0x1E22E8u)) {
        auto targetFn = runtime->lookupFunction(0x1E22E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E22E8_0x1e22e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E6AECu;
    // 0x1e6aec: 0x0  nop
    ctx->pc = 0x1e6aecu;
    // NOP
label_1e6af0:
    // 0x1e6af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6af8: 0xc0736de  jal         func_1CDB78
    ctx->pc = 0x1E6AF8u;
    SET_GPR_U32(ctx, 31, 0x1E6B00u);
    ctx->pc = 0x1CDB78u;
    if (runtime->hasFunction(0x1CDB78u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B00u; }
        if (ctx->pc != 0x1E6B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB78_0x1cdb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B00u; }
        if (ctx->pc != 0x1E6B00u) { return; }
    }
    ctx->pc = 0x1E6B00u;
label_1e6b00:
    // 0x1e6b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B08u;
            // 0x1e6b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6B10u;
label_1e6b10:
    // 0x1e6b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6b1c: 0x80736fc  j           func_1CDBF0
    ctx->pc = 0x1E6B1Cu;
    ctx->pc = 0x1E6B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B1Cu;
            // 0x1e6b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDBF0u;
    if (runtime->hasFunction(0x1CDBF0u)) {
        auto targetFn = runtime->lookupFunction(0x1CDBF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDBF0_0x1cdbf0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E6B24u;
    // 0x1e6b24: 0x0  nop
    ctx->pc = 0x1e6b24u;
    // NOP
label_1e6b28:
    // 0x1e6b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6b30: 0xc0736e4  jal         func_1CDB90
    ctx->pc = 0x1E6B30u;
    SET_GPR_U32(ctx, 31, 0x1E6B38u);
    ctx->pc = 0x1CDB90u;
    if (runtime->hasFunction(0x1CDB90u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B38u; }
        if (ctx->pc != 0x1E6B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB90_0x1cdb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B38u; }
        if (ctx->pc != 0x1E6B38u) { return; }
    }
    ctx->pc = 0x1E6B38u;
label_1e6b38:
    // 0x1e6b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6b3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6b40: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B40u;
            // 0x1e6b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6B48u;
label_1e6b48:
    // 0x1e6b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6b54: 0x8073702  j           func_1CDC08
    ctx->pc = 0x1E6B54u;
    ctx->pc = 0x1E6B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B54u;
            // 0x1e6b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC08u;
    {
        auto targetFn = runtime->lookupFunction(0x1CDC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E6B5Cu;
    // 0x1e6b5c: 0x0  nop
    ctx->pc = 0x1e6b5cu;
    // NOP
label_1e6b60:
    // 0x1e6b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6b68: 0xc0736ea  jal         func_1CDBA8
    ctx->pc = 0x1E6B68u;
    SET_GPR_U32(ctx, 31, 0x1E6B70u);
    ctx->pc = 0x1CDBA8u;
    if (runtime->hasFunction(0x1CDBA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CDBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B70u; }
        if (ctx->pc != 0x1E6B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDBA8_0x1cdba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B70u; }
        if (ctx->pc != 0x1E6B70u) { return; }
    }
    ctx->pc = 0x1E6B70u;
label_1e6b70:
    // 0x1e6b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6b78: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B78u;
            // 0x1e6b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6B80u;
label_1e6b80:
    // 0x1e6b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6b8c: 0x8073708  j           func_1CDC20
    ctx->pc = 0x1E6B8Cu;
    ctx->pc = 0x1E6B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B8Cu;
            // 0x1e6b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC20u;
    if (runtime->hasFunction(0x1CDC20u)) {
        auto targetFn = runtime->lookupFunction(0x1CDC20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDC20_0x1cdc20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E6B94u;
    // 0x1e6b94: 0x0  nop
    ctx->pc = 0x1e6b94u;
    // NOP
label_1e6b98:
    // 0x1e6b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6ba0: 0xc0736f0  jal         func_1CDBC0
    ctx->pc = 0x1E6BA0u;
    SET_GPR_U32(ctx, 31, 0x1E6BA8u);
    ctx->pc = 0x1CDBC0u;
    if (runtime->hasFunction(0x1CDBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1CDBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BA8u; }
        if (ctx->pc != 0x1E6BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDBC0_0x1cdbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BA8u; }
        if (ctx->pc != 0x1E6BA8u) { return; }
    }
    ctx->pc = 0x1E6BA8u;
label_1e6ba8:
    // 0x1e6ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6BB0u;
            // 0x1e6bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6BB8u;
label_1e6bb8:
    // 0x1e6bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6bbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6bc4: 0x807370e  j           func_1CDC38
    ctx->pc = 0x1E6BC4u;
    ctx->pc = 0x1E6BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6BC4u;
            // 0x1e6bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC38u;
    {
        auto targetFn = runtime->lookupFunction(0x1CDC38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E6BCCu;
    // 0x1e6bcc: 0x0  nop
    ctx->pc = 0x1e6bccu;
    // NOP
    ctx->pc = 0x1e6bd0u;
}
