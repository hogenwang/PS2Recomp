#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8C70
// Address: 0x1b8c70 - 0x1b8e48
void sub_001B8C70_0x1b8c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8C70_0x1b8c70");
#endif

    switch (ctx->pc) {
        case 0x1b8c70u: goto label_1b8c70;
        case 0x1b8c74u: goto label_1b8c74;
        case 0x1b8c78u: goto label_1b8c78;
        case 0x1b8c7cu: goto label_1b8c7c;
        case 0x1b8c80u: goto label_1b8c80;
        case 0x1b8c84u: goto label_1b8c84;
        case 0x1b8c88u: goto label_1b8c88;
        case 0x1b8c8cu: goto label_1b8c8c;
        case 0x1b8c90u: goto label_1b8c90;
        case 0x1b8c94u: goto label_1b8c94;
        case 0x1b8c98u: goto label_1b8c98;
        case 0x1b8c9cu: goto label_1b8c9c;
        case 0x1b8ca0u: goto label_1b8ca0;
        case 0x1b8ca4u: goto label_1b8ca4;
        case 0x1b8ca8u: goto label_1b8ca8;
        case 0x1b8cacu: goto label_1b8cac;
        case 0x1b8cb0u: goto label_1b8cb0;
        case 0x1b8cb4u: goto label_1b8cb4;
        case 0x1b8cb8u: goto label_1b8cb8;
        case 0x1b8cbcu: goto label_1b8cbc;
        case 0x1b8cc0u: goto label_1b8cc0;
        case 0x1b8cc4u: goto label_1b8cc4;
        case 0x1b8cc8u: goto label_1b8cc8;
        case 0x1b8cccu: goto label_1b8ccc;
        case 0x1b8cd0u: goto label_1b8cd0;
        case 0x1b8cd4u: goto label_1b8cd4;
        case 0x1b8cd8u: goto label_1b8cd8;
        case 0x1b8cdcu: goto label_1b8cdc;
        case 0x1b8ce0u: goto label_1b8ce0;
        case 0x1b8ce4u: goto label_1b8ce4;
        case 0x1b8ce8u: goto label_1b8ce8;
        case 0x1b8cecu: goto label_1b8cec;
        case 0x1b8cf0u: goto label_1b8cf0;
        case 0x1b8cf4u: goto label_1b8cf4;
        case 0x1b8cf8u: goto label_1b8cf8;
        case 0x1b8cfcu: goto label_1b8cfc;
        case 0x1b8d00u: goto label_1b8d00;
        case 0x1b8d04u: goto label_1b8d04;
        case 0x1b8d08u: goto label_1b8d08;
        case 0x1b8d0cu: goto label_1b8d0c;
        case 0x1b8d10u: goto label_1b8d10;
        case 0x1b8d14u: goto label_1b8d14;
        case 0x1b8d18u: goto label_1b8d18;
        case 0x1b8d1cu: goto label_1b8d1c;
        case 0x1b8d20u: goto label_1b8d20;
        case 0x1b8d24u: goto label_1b8d24;
        case 0x1b8d28u: goto label_1b8d28;
        case 0x1b8d2cu: goto label_1b8d2c;
        case 0x1b8d30u: goto label_1b8d30;
        case 0x1b8d34u: goto label_1b8d34;
        case 0x1b8d38u: goto label_1b8d38;
        case 0x1b8d3cu: goto label_1b8d3c;
        case 0x1b8d40u: goto label_1b8d40;
        case 0x1b8d44u: goto label_1b8d44;
        case 0x1b8d48u: goto label_1b8d48;
        case 0x1b8d4cu: goto label_1b8d4c;
        case 0x1b8d50u: goto label_1b8d50;
        case 0x1b8d54u: goto label_1b8d54;
        case 0x1b8d58u: goto label_1b8d58;
        case 0x1b8d5cu: goto label_1b8d5c;
        case 0x1b8d60u: goto label_1b8d60;
        case 0x1b8d64u: goto label_1b8d64;
        case 0x1b8d68u: goto label_1b8d68;
        case 0x1b8d6cu: goto label_1b8d6c;
        case 0x1b8d70u: goto label_1b8d70;
        case 0x1b8d74u: goto label_1b8d74;
        case 0x1b8d78u: goto label_1b8d78;
        case 0x1b8d7cu: goto label_1b8d7c;
        case 0x1b8d80u: goto label_1b8d80;
        case 0x1b8d84u: goto label_1b8d84;
        case 0x1b8d88u: goto label_1b8d88;
        case 0x1b8d8cu: goto label_1b8d8c;
        case 0x1b8d90u: goto label_1b8d90;
        case 0x1b8d94u: goto label_1b8d94;
        case 0x1b8d98u: goto label_1b8d98;
        case 0x1b8d9cu: goto label_1b8d9c;
        case 0x1b8da0u: goto label_1b8da0;
        case 0x1b8da4u: goto label_1b8da4;
        case 0x1b8da8u: goto label_1b8da8;
        case 0x1b8dacu: goto label_1b8dac;
        case 0x1b8db0u: goto label_1b8db0;
        case 0x1b8db4u: goto label_1b8db4;
        case 0x1b8db8u: goto label_1b8db8;
        case 0x1b8dbcu: goto label_1b8dbc;
        case 0x1b8dc0u: goto label_1b8dc0;
        case 0x1b8dc4u: goto label_1b8dc4;
        case 0x1b8dc8u: goto label_1b8dc8;
        case 0x1b8dccu: goto label_1b8dcc;
        case 0x1b8dd0u: goto label_1b8dd0;
        case 0x1b8dd4u: goto label_1b8dd4;
        case 0x1b8dd8u: goto label_1b8dd8;
        case 0x1b8ddcu: goto label_1b8ddc;
        case 0x1b8de0u: goto label_1b8de0;
        case 0x1b8de4u: goto label_1b8de4;
        case 0x1b8de8u: goto label_1b8de8;
        case 0x1b8decu: goto label_1b8dec;
        case 0x1b8df0u: goto label_1b8df0;
        case 0x1b8df4u: goto label_1b8df4;
        case 0x1b8df8u: goto label_1b8df8;
        case 0x1b8dfcu: goto label_1b8dfc;
        case 0x1b8e00u: goto label_1b8e00;
        case 0x1b8e04u: goto label_1b8e04;
        case 0x1b8e08u: goto label_1b8e08;
        case 0x1b8e0cu: goto label_1b8e0c;
        case 0x1b8e10u: goto label_1b8e10;
        case 0x1b8e14u: goto label_1b8e14;
        case 0x1b8e18u: goto label_1b8e18;
        case 0x1b8e1cu: goto label_1b8e1c;
        case 0x1b8e20u: goto label_1b8e20;
        case 0x1b8e24u: goto label_1b8e24;
        case 0x1b8e28u: goto label_1b8e28;
        case 0x1b8e2cu: goto label_1b8e2c;
        case 0x1b8e30u: goto label_1b8e30;
        case 0x1b8e34u: goto label_1b8e34;
        case 0x1b8e38u: goto label_1b8e38;
        case 0x1b8e3cu: goto label_1b8e3c;
        case 0x1b8e40u: goto label_1b8e40;
        case 0x1b8e44u: goto label_1b8e44;
        default: break;
    }

    ctx->pc = 0x1b8c70u;

label_1b8c70:
    // 0x1b8c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b8c74:
    // 0x1b8c74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b8c78:
    // 0x1b8c78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b8c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8c7c:
    // 0x1b8c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b8c80:
    // 0x1b8c80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b8c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b8c84:
    // 0x1b8c84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b8c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1b8c88:
    // 0x1b8c88: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_1b8c8c:
    if (ctx->pc == 0x1B8C8Cu) {
        ctx->pc = 0x1B8C8Cu;
            // 0x1b8c8c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x1B8C90u;
        goto label_1b8c90;
    }
    ctx->pc = 0x1B8C88u;
    {
        const bool branch_taken_0x1b8c88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C88u;
            // 0x1b8c8c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c88) {
            ctx->pc = 0x1B8CB8u;
            goto label_1b8cb8;
        }
    }
    ctx->pc = 0x1B8C90u;
label_1b8c90:
    // 0x1b8c90: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b8c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1b8c94:
    // 0x1b8c94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8c98:
    // 0x1b8c98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b8c9c:
    // 0x1b8c9c: 0x24848080  addiu       $a0, $a0, -0x7F80
    ctx->pc = 0x1b8c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934656));
label_1b8ca0:
    // 0x1b8ca0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b8ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8ca4:
    // 0x1b8ca4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b8ca4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b8ca8:
    // 0x1b8ca8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8cac:
    // 0x1b8cac: 0x806ba0a  j           func_1AE828
label_1b8cb0:
    if (ctx->pc == 0x1B8CB0u) {
        ctx->pc = 0x1B8CB0u;
            // 0x1b8cb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B8CB4u;
        goto label_1b8cb4;
    }
    ctx->pc = 0x1B8CACu;
    ctx->pc = 0x1B8CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CACu;
            // 0x1b8cb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B8CB4u;
label_1b8cb4:
    // 0x1b8cb4: 0x0  nop
    ctx->pc = 0x1b8cb4u;
    // NOP
label_1b8cb8:
    // 0x1b8cb8: 0xc06e2f2  jal         func_1B8BC8
label_1b8cbc:
    if (ctx->pc == 0x1B8CBCu) {
        ctx->pc = 0x1B8CC0u;
        goto label_1b8cc0;
    }
    ctx->pc = 0x1B8CB8u;
    SET_GPR_U32(ctx, 31, 0x1B8CC0u);
    ctx->pc = 0x1B8BC8u;
    if (runtime->hasFunction(0x1B8BC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B8BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CC0u; }
        if (ctx->pc != 0x1B8CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8BC8_0x1b8bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CC0u; }
        if (ctx->pc != 0x1B8CC0u) { return; }
    }
    ctx->pc = 0x1B8CC0u;
label_1b8cc0:
    // 0x1b8cc0: 0xc06e2fc  jal         func_1B8BF0
label_1b8cc4:
    if (ctx->pc == 0x1B8CC4u) {
        ctx->pc = 0x1B8CC4u;
            // 0x1b8cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CC8u;
        goto label_1b8cc8;
    }
    ctx->pc = 0x1B8CC0u;
    SET_GPR_U32(ctx, 31, 0x1B8CC8u);
    ctx->pc = 0x1B8CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CC0u;
            // 0x1b8cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8BF0u;
    if (runtime->hasFunction(0x1B8BF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CC8u; }
        if (ctx->pc != 0x1B8CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8BF0_0x1b8bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CC8u; }
        if (ctx->pc != 0x1B8CC8u) { return; }
    }
    ctx->pc = 0x1B8CC8u;
label_1b8cc8:
    // 0x1b8cc8: 0xc06e306  jal         func_1B8C18
label_1b8ccc:
    if (ctx->pc == 0x1B8CCCu) {
        ctx->pc = 0x1B8CCCu;
            // 0x1b8ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CD0u;
        goto label_1b8cd0;
    }
    ctx->pc = 0x1B8CC8u;
    SET_GPR_U32(ctx, 31, 0x1B8CD0u);
    ctx->pc = 0x1B8CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CC8u;
            // 0x1b8ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C18u;
    if (runtime->hasFunction(0x1B8C18u)) {
        auto targetFn = runtime->lookupFunction(0x1B8C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CD0u; }
        if (ctx->pc != 0x1B8CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8C18_0x1b8c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CD0u; }
        if (ctx->pc != 0x1B8CD0u) { return; }
    }
    ctx->pc = 0x1B8CD0u;
label_1b8cd0:
    // 0x1b8cd0: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1b8cd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1b8cd4:
    // 0x1b8cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8cd8:
    // 0x1b8cd8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_1b8cdc:
    if (ctx->pc == 0x1B8CDCu) {
        ctx->pc = 0x1B8CDCu;
            // 0x1b8cdc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x1B8CE0u;
        goto label_1b8ce0;
    }
    ctx->pc = 0x1B8CD8u;
    {
        const bool branch_taken_0x1b8cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8cd8) {
            ctx->pc = 0x1B8CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CD8u;
            // 0x1b8cdc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8CECu;
            goto label_1b8cec;
        }
    }
    ctx->pc = 0x1B8CE0u;
label_1b8ce0:
    // 0x1b8ce0: 0xc06e4ac  jal         func_1B92B0
label_1b8ce4:
    if (ctx->pc == 0x1B8CE4u) {
        ctx->pc = 0x1B8CE4u;
            // 0x1b8ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CE8u;
        goto label_1b8ce8;
    }
    ctx->pc = 0x1B8CE0u;
    SET_GPR_U32(ctx, 31, 0x1B8CE8u);
    ctx->pc = 0x1B8CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CE0u;
            // 0x1b8ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B92B0u;
    if (runtime->hasFunction(0x1B92B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B92B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CE8u; }
        if (ctx->pc != 0x1B8CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B92B0_0x1b92b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CE8u; }
        if (ctx->pc != 0x1B8CE8u) { return; }
    }
    ctx->pc = 0x1B8CE8u;
label_1b8ce8:
    // 0x1b8ce8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1b8ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1b8cec:
    // 0x1b8cec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1b8cf0:
    if (ctx->pc == 0x1B8CF0u) {
        ctx->pc = 0x1B8CF0u;
            // 0x1b8cf0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1B8CF4u;
        goto label_1b8cf4;
    }
    ctx->pc = 0x1B8CECu;
    {
        const bool branch_taken_0x1b8cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8cec) {
            ctx->pc = 0x1B8CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CECu;
            // 0x1b8cf0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8D00u;
            goto label_1b8d00;
        }
    }
    ctx->pc = 0x1B8CF4u;
label_1b8cf4:
    // 0x1b8cf4: 0xc06d2cc  jal         func_1B4B30
label_1b8cf8:
    if (ctx->pc == 0x1B8CF8u) {
        ctx->pc = 0x1B8CF8u;
            // 0x1b8cf8: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x1B8CFCu;
        goto label_1b8cfc;
    }
    ctx->pc = 0x1B8CF4u;
    SET_GPR_U32(ctx, 31, 0x1B8CFCu);
    ctx->pc = 0x1B8CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CF4u;
            // 0x1b8cf8: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B30u;
    if (runtime->hasFunction(0x1B4B30u)) {
        auto targetFn = runtime->lookupFunction(0x1B4B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CFCu; }
        if (ctx->pc != 0x1B8CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4B30_0x1b4b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CFCu; }
        if (ctx->pc != 0x1B8CFCu) { return; }
    }
    ctx->pc = 0x1B8CFCu;
label_1b8cfc:
    // 0x1b8cfc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1b8cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b8d00:
    // 0x1b8d00: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1b8d04:
    if (ctx->pc == 0x1B8D04u) {
        ctx->pc = 0x1B8D04u;
            // 0x1b8d04: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x1B8D08u;
        goto label_1b8d08;
    }
    ctx->pc = 0x1B8D00u;
    {
        const bool branch_taken_0x1b8d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d00) {
            ctx->pc = 0x1B8D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D00u;
            // 0x1b8d04: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8D14u;
            goto label_1b8d14;
        }
    }
    ctx->pc = 0x1B8D08u;
label_1b8d08:
    // 0x1b8d08: 0xc06d42e  jal         func_1B50B8
label_1b8d0c:
    if (ctx->pc == 0x1B8D0Cu) {
        ctx->pc = 0x1B8D0Cu;
            // 0x1b8d0c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1B8D10u;
        goto label_1b8d10;
    }
    ctx->pc = 0x1B8D08u;
    SET_GPR_U32(ctx, 31, 0x1B8D10u);
    ctx->pc = 0x1B8D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D08u;
            // 0x1b8d0c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B50B8u;
    if (runtime->hasFunction(0x1B50B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B50B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D10u; }
        if (ctx->pc != 0x1B8D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B50B8_0x1b50b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D10u; }
        if (ctx->pc != 0x1B8D10u) { return; }
    }
    ctx->pc = 0x1B8D10u;
label_1b8d10:
    // 0x1b8d10: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1b8d10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1b8d14:
    // 0x1b8d14: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1b8d18:
    if (ctx->pc == 0x1B8D18u) {
        ctx->pc = 0x1B8D18u;
            // 0x1b8d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D1Cu;
        goto label_1b8d1c;
    }
    ctx->pc = 0x1B8D14u;
    {
        const bool branch_taken_0x1b8d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D14u;
            // 0x1b8d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d14) {
            ctx->pc = 0x1B8D34u;
            goto label_1b8d34;
        }
    }
    ctx->pc = 0x1B8D1Cu;
label_1b8d1c:
    // 0x1b8d1c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1b8d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1b8d20:
    // 0x1b8d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d24:
    // 0x1b8d24: 0xc06dbec  jal         func_1B6FB0
label_1b8d28:
    if (ctx->pc == 0x1B8D28u) {
        ctx->pc = 0x1B8D28u;
            // 0x1b8d28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D2Cu;
        goto label_1b8d2c;
    }
    ctx->pc = 0x1B8D24u;
    SET_GPR_U32(ctx, 31, 0x1B8D2Cu);
    ctx->pc = 0x1B8D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D24u;
            // 0x1b8d28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB0u;
    if (runtime->hasFunction(0x1B6FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B6FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D2Cu; }
        if (ctx->pc != 0x1B8D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6FB0_0x1b6fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D2Cu; }
        if (ctx->pc != 0x1B8D2Cu) { return; }
    }
    ctx->pc = 0x1B8D2Cu;
label_1b8d2c:
    // 0x1b8d2c: 0xc06da54  jal         func_1B6950
label_1b8d30:
    if (ctx->pc == 0x1B8D30u) {
        ctx->pc = 0x1B8D30u;
            // 0x1b8d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D34u;
        goto label_1b8d34;
    }
    ctx->pc = 0x1B8D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B8D34u);
    ctx->pc = 0x1B8D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D2Cu;
            // 0x1b8d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6950u;
    if (runtime->hasFunction(0x1B6950u)) {
        auto targetFn = runtime->lookupFunction(0x1B6950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D34u; }
        if (ctx->pc != 0x1B8D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6950_0x1b6950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D34u; }
        if (ctx->pc != 0x1B8D34u) { return; }
    }
    ctx->pc = 0x1B8D34u;
label_1b8d34:
    // 0x1b8d34: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x1b8d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1b8d38:
    // 0x1b8d38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1b8d3c:
    if (ctx->pc == 0x1B8D3Cu) {
        ctx->pc = 0x1B8D40u;
        goto label_1b8d40;
    }
    ctx->pc = 0x1B8D38u;
    {
        const bool branch_taken_0x1b8d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d38) {
            ctx->pc = 0x1B8D48u;
            goto label_1b8d48;
        }
    }
    ctx->pc = 0x1B8D40u;
label_1b8d40:
    // 0x1b8d40: 0xc07179a  jal         func_1C5E68
label_1b8d44:
    if (ctx->pc == 0x1B8D44u) {
        ctx->pc = 0x1B8D44u;
            // 0x1b8d44: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x1B8D48u;
        goto label_1b8d48;
    }
    ctx->pc = 0x1B8D40u;
    SET_GPR_U32(ctx, 31, 0x1B8D48u);
    ctx->pc = 0x1B8D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D40u;
            // 0x1b8d44: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5E68u;
    if (runtime->hasFunction(0x1C5E68u)) {
        auto targetFn = runtime->lookupFunction(0x1C5E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D48u; }
        if (ctx->pc != 0x1B8D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5E68_0x1c5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D48u; }
        if (ctx->pc != 0x1B8D48u) { return; }
    }
    ctx->pc = 0x1B8D48u;
label_1b8d48:
    // 0x1b8d48: 0xc06b48e  jal         func_1AD238
label_1b8d4c:
    if (ctx->pc == 0x1B8D4Cu) {
        ctx->pc = 0x1B8D50u;
        goto label_1b8d50;
    }
    ctx->pc = 0x1B8D48u;
    SET_GPR_U32(ctx, 31, 0x1B8D50u);
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D50u; }
        if (ctx->pc != 0x1B8D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D50u; }
        if (ctx->pc != 0x1B8D50u) { return; }
    }
    ctx->pc = 0x1B8D50u;
label_1b8d50:
    // 0x1b8d50: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1b8d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b8d54:
    // 0x1b8d54: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1b8d58:
    if (ctx->pc == 0x1B8D58u) {
        ctx->pc = 0x1B8D58u;
            // 0x1b8d58: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x1B8D5Cu;
        goto label_1b8d5c;
    }
    ctx->pc = 0x1B8D54u;
    {
        const bool branch_taken_0x1b8d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d54) {
            ctx->pc = 0x1B8D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D54u;
            // 0x1b8d58: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8D74u;
            goto label_1b8d74;
        }
    }
    ctx->pc = 0x1B8D5Cu;
label_1b8d5c:
    // 0x1b8d5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b8d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8d60:
    // 0x1b8d60: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1b8d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1b8d64:
    // 0x1b8d64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b8d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1b8d68:
    // 0x1b8d68: 0x40f809  jalr        $v0
label_1b8d6c:
    if (ctx->pc == 0x1B8D6Cu) {
        ctx->pc = 0x1B8D70u;
        goto label_1b8d70;
    }
    ctx->pc = 0x1B8D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8D70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B8D70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D70u; }
            if (ctx->pc != 0x1B8D70u) { return; }
        }
        }
    }
    ctx->pc = 0x1B8D70u;
label_1b8d70:
    // 0x1b8d70: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x1b8d70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1b8d74:
    // 0x1b8d74: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
label_1b8d78:
    if (ctx->pc == 0x1B8D78u) {
        ctx->pc = 0x1B8D78u;
            // 0x1b8d78: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D7Cu;
        goto label_1b8d7c;
    }
    ctx->pc = 0x1B8D74u;
    {
        const bool branch_taken_0x1b8d74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B8D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D74u;
            // 0x1b8d78: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d74) {
            ctx->pc = 0x1B8E00u;
            goto label_1b8e00;
        }
    }
    ctx->pc = 0x1B8D7Cu;
label_1b8d7c:
    // 0x1b8d7c: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x1b8d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1b8d80:
    // 0x1b8d80: 0x26300078  addiu       $s0, $s1, 0x78
    ctx->pc = 0x1b8d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_1b8d84:
    // 0x1b8d84: 0x0  nop
    ctx->pc = 0x1b8d84u;
    // NOP
label_1b8d88:
    // 0x1b8d88: 0x8e03ffa0  lw          $v1, -0x60($s0)
    ctx->pc = 0x1b8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967200)));
label_1b8d8c:
    // 0x1b8d8c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1b8d90:
    if (ctx->pc == 0x1B8D90u) {
        ctx->pc = 0x1B8D90u;
            // 0x1b8d90: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D94u;
        goto label_1b8d94;
    }
    ctx->pc = 0x1B8D8Cu;
    {
        const bool branch_taken_0x1b8d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D8Cu;
            // 0x1b8d90: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d8c) {
            ctx->pc = 0x1B8DA8u;
            goto label_1b8da8;
        }
    }
    ctx->pc = 0x1B8D94u;
label_1b8d94:
    // 0x1b8d94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b8d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b8d98:
    // 0x1b8d98: 0xae00ffa0  sw          $zero, -0x60($s0)
    ctx->pc = 0x1b8d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967200), GPR_U32(ctx, 0));
label_1b8d9c:
    // 0x1b8d9c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1b8da0:
    // 0x1b8da0: 0x40f809  jalr        $v0
label_1b8da4:
    if (ctx->pc == 0x1B8DA4u) {
        ctx->pc = 0x1B8DA8u;
        goto label_1b8da8;
    }
    ctx->pc = 0x1B8DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8DA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B8DA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DA8u; }
            if (ctx->pc != 0x1B8DA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B8DA8u;
label_1b8da8:
    // 0x1b8da8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b8da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8dac:
    // 0x1b8dac: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1b8db0:
    if (ctx->pc == 0x1B8DB0u) {
        ctx->pc = 0x1B8DB0u;
            // 0x1b8db0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1B8DB4u;
        goto label_1b8db4;
    }
    ctx->pc = 0x1B8DACu;
    {
        const bool branch_taken_0x1b8dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8dac) {
            ctx->pc = 0x1B8DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DACu;
            // 0x1b8db0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8DCCu;
            goto label_1b8dcc;
        }
    }
    ctx->pc = 0x1B8DB4u;
label_1b8db4:
    // 0x1b8db4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8db8:
    // 0x1b8db8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b8db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1b8dbc:
    // 0x1b8dbc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b8dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1b8dc0:
    // 0x1b8dc0: 0x40f809  jalr        $v0
label_1b8dc4:
    if (ctx->pc == 0x1B8DC4u) {
        ctx->pc = 0x1B8DC8u;
        goto label_1b8dc8;
    }
    ctx->pc = 0x1B8DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8DC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B8DC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DC8u; }
            if (ctx->pc != 0x1B8DC8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B8DC8u;
label_1b8dc8:
    // 0x1b8dc8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1b8dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b8dcc:
    // 0x1b8dcc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1b8dd0:
    if (ctx->pc == 0x1B8DD0u) {
        ctx->pc = 0x1B8DD0u;
            // 0x1b8dd0: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x1B8DD4u;
        goto label_1b8dd4;
    }
    ctx->pc = 0x1B8DCCu;
    {
        const bool branch_taken_0x1b8dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8dcc) {
            ctx->pc = 0x1B8DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DCCu;
            // 0x1b8dd0: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8DECu;
            goto label_1b8dec;
        }
    }
    ctx->pc = 0x1B8DD4u;
label_1b8dd4:
    // 0x1b8dd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8dd8:
    // 0x1b8dd8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1b8dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1b8ddc:
    // 0x1b8ddc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1b8de0:
    // 0x1b8de0: 0x40f809  jalr        $v0
label_1b8de4:
    if (ctx->pc == 0x1B8DE4u) {
        ctx->pc = 0x1B8DE8u;
        goto label_1b8de8;
    }
    ctx->pc = 0x1B8DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8DE8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B8DE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DE8u; }
            if (ctx->pc != 0x1B8DE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B8DE8u;
label_1b8de8:
    // 0x1b8de8: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x1b8de8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1b8dec:
    // 0x1b8dec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b8decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b8df0:
    // 0x1b8df0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1b8df0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1b8df4:
    // 0x1b8df4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1b8df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b8df8:
    // 0x1b8df8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1b8dfc:
    if (ctx->pc == 0x1B8DFCu) {
        ctx->pc = 0x1B8DFCu;
            // 0x1b8dfc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x1B8E00u;
        goto label_1b8e00;
    }
    ctx->pc = 0x1B8DF8u;
    {
        const bool branch_taken_0x1b8df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DF8u;
            // 0x1b8dfc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8df8) {
            ctx->pc = 0x1B8D88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b8d88;
        }
    }
    ctx->pc = 0x1B8E00u;
label_1b8e00:
    // 0x1b8e00: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x1b8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1b8e04:
    // 0x1b8e04: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1b8e08:
    if (ctx->pc == 0x1B8E08u) {
        ctx->pc = 0x1B8E08u;
            // 0x1b8e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E0Cu;
        goto label_1b8e0c;
    }
    ctx->pc = 0x1B8E04u;
    {
        const bool branch_taken_0x1b8e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8e04) {
            ctx->pc = 0x1B8E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E04u;
            // 0x1b8e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8E18u;
            goto label_1b8e18;
        }
    }
    ctx->pc = 0x1B8E0Cu;
label_1b8e0c:
    // 0x1b8e0c: 0xc06a49a  jal         func_1A9268
label_1b8e10:
    if (ctx->pc == 0x1B8E10u) {
        ctx->pc = 0x1B8E10u;
            // 0x1b8e10: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x1B8E14u;
        goto label_1b8e14;
    }
    ctx->pc = 0x1B8E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E14u);
    ctx->pc = 0x1B8E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E0Cu;
            // 0x1b8e10: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9268u;
    if (runtime->hasFunction(0x1A9268u)) {
        auto targetFn = runtime->lookupFunction(0x1A9268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E14u; }
        if (ctx->pc != 0x1B8E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9268_0x1a9268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E14u; }
        if (ctx->pc != 0x1B8E14u) { return; }
    }
    ctx->pc = 0x1B8E14u;
label_1b8e14:
    // 0x1b8e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e18:
    // 0x1b8e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e1c:
    // 0x1b8e1c: 0xc049cb6  jal         func_1272D8
label_1b8e20:
    if (ctx->pc == 0x1B8E20u) {
        ctx->pc = 0x1B8E20u;
            // 0x1b8e20: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x1B8E24u;
        goto label_1b8e24;
    }
    ctx->pc = 0x1B8E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E24u);
    ctx->pc = 0x1B8E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E1Cu;
            // 0x1b8e20: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E24u; }
        if (ctx->pc != 0x1B8E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E24u; }
        if (ctx->pc != 0x1B8E24u) { return; }
    }
    ctx->pc = 0x1B8E24u;
label_1b8e24:
    // 0x1b8e24: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1b8e24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b8e28:
    // 0x1b8e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8e2c:
    // 0x1b8e2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b8e30:
    // 0x1b8e30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b8e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8e34:
    // 0x1b8e34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b8e34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b8e38:
    // 0x1b8e38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8e3c:
    // 0x1b8e3c: 0x806b494  j           func_1AD250
label_1b8e40:
    if (ctx->pc == 0x1B8E40u) {
        ctx->pc = 0x1B8E40u;
            // 0x1b8e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B8E44u;
        goto label_1b8e44;
    }
    ctx->pc = 0x1B8E3Cu;
    ctx->pc = 0x1B8E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E3Cu;
            // 0x1b8e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B8E44u;
label_1b8e44:
    // 0x1b8e44: 0x0  nop
    ctx->pc = 0x1b8e44u;
    // NOP
    ctx->pc = 0x1b8e48u;
}
