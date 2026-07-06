#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8B70
// Address: 0x1a8b70 - 0x1a8d90
void sub_001A8B70_0x1a8b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8B70_0x1a8b70");
#endif

    switch (ctx->pc) {
        case 0x1a8b70u: goto label_1a8b70;
        case 0x1a8b74u: goto label_1a8b74;
        case 0x1a8b78u: goto label_1a8b78;
        case 0x1a8b7cu: goto label_1a8b7c;
        case 0x1a8b80u: goto label_1a8b80;
        case 0x1a8b84u: goto label_1a8b84;
        case 0x1a8b88u: goto label_1a8b88;
        case 0x1a8b8cu: goto label_1a8b8c;
        case 0x1a8b90u: goto label_1a8b90;
        case 0x1a8b94u: goto label_1a8b94;
        case 0x1a8b98u: goto label_1a8b98;
        case 0x1a8b9cu: goto label_1a8b9c;
        case 0x1a8ba0u: goto label_1a8ba0;
        case 0x1a8ba4u: goto label_1a8ba4;
        case 0x1a8ba8u: goto label_1a8ba8;
        case 0x1a8bacu: goto label_1a8bac;
        case 0x1a8bb0u: goto label_1a8bb0;
        case 0x1a8bb4u: goto label_1a8bb4;
        case 0x1a8bb8u: goto label_1a8bb8;
        case 0x1a8bbcu: goto label_1a8bbc;
        case 0x1a8bc0u: goto label_1a8bc0;
        case 0x1a8bc4u: goto label_1a8bc4;
        case 0x1a8bc8u: goto label_1a8bc8;
        case 0x1a8bccu: goto label_1a8bcc;
        case 0x1a8bd0u: goto label_1a8bd0;
        case 0x1a8bd4u: goto label_1a8bd4;
        case 0x1a8bd8u: goto label_1a8bd8;
        case 0x1a8bdcu: goto label_1a8bdc;
        case 0x1a8be0u: goto label_1a8be0;
        case 0x1a8be4u: goto label_1a8be4;
        case 0x1a8be8u: goto label_1a8be8;
        case 0x1a8becu: goto label_1a8bec;
        case 0x1a8bf0u: goto label_1a8bf0;
        case 0x1a8bf4u: goto label_1a8bf4;
        case 0x1a8bf8u: goto label_1a8bf8;
        case 0x1a8bfcu: goto label_1a8bfc;
        case 0x1a8c00u: goto label_1a8c00;
        case 0x1a8c04u: goto label_1a8c04;
        case 0x1a8c08u: goto label_1a8c08;
        case 0x1a8c0cu: goto label_1a8c0c;
        case 0x1a8c10u: goto label_1a8c10;
        case 0x1a8c14u: goto label_1a8c14;
        case 0x1a8c18u: goto label_1a8c18;
        case 0x1a8c1cu: goto label_1a8c1c;
        case 0x1a8c20u: goto label_1a8c20;
        case 0x1a8c24u: goto label_1a8c24;
        case 0x1a8c28u: goto label_1a8c28;
        case 0x1a8c2cu: goto label_1a8c2c;
        case 0x1a8c30u: goto label_1a8c30;
        case 0x1a8c34u: goto label_1a8c34;
        case 0x1a8c38u: goto label_1a8c38;
        case 0x1a8c3cu: goto label_1a8c3c;
        case 0x1a8c40u: goto label_1a8c40;
        case 0x1a8c44u: goto label_1a8c44;
        case 0x1a8c48u: goto label_1a8c48;
        case 0x1a8c4cu: goto label_1a8c4c;
        case 0x1a8c50u: goto label_1a8c50;
        case 0x1a8c54u: goto label_1a8c54;
        case 0x1a8c58u: goto label_1a8c58;
        case 0x1a8c5cu: goto label_1a8c5c;
        case 0x1a8c60u: goto label_1a8c60;
        case 0x1a8c64u: goto label_1a8c64;
        case 0x1a8c68u: goto label_1a8c68;
        case 0x1a8c6cu: goto label_1a8c6c;
        case 0x1a8c70u: goto label_1a8c70;
        case 0x1a8c74u: goto label_1a8c74;
        case 0x1a8c78u: goto label_1a8c78;
        case 0x1a8c7cu: goto label_1a8c7c;
        case 0x1a8c80u: goto label_1a8c80;
        case 0x1a8c84u: goto label_1a8c84;
        case 0x1a8c88u: goto label_1a8c88;
        case 0x1a8c8cu: goto label_1a8c8c;
        case 0x1a8c90u: goto label_1a8c90;
        case 0x1a8c94u: goto label_1a8c94;
        case 0x1a8c98u: goto label_1a8c98;
        case 0x1a8c9cu: goto label_1a8c9c;
        case 0x1a8ca0u: goto label_1a8ca0;
        case 0x1a8ca4u: goto label_1a8ca4;
        case 0x1a8ca8u: goto label_1a8ca8;
        case 0x1a8cacu: goto label_1a8cac;
        case 0x1a8cb0u: goto label_1a8cb0;
        case 0x1a8cb4u: goto label_1a8cb4;
        case 0x1a8cb8u: goto label_1a8cb8;
        case 0x1a8cbcu: goto label_1a8cbc;
        case 0x1a8cc0u: goto label_1a8cc0;
        case 0x1a8cc4u: goto label_1a8cc4;
        case 0x1a8cc8u: goto label_1a8cc8;
        case 0x1a8cccu: goto label_1a8ccc;
        case 0x1a8cd0u: goto label_1a8cd0;
        case 0x1a8cd4u: goto label_1a8cd4;
        case 0x1a8cd8u: goto label_1a8cd8;
        case 0x1a8cdcu: goto label_1a8cdc;
        case 0x1a8ce0u: goto label_1a8ce0;
        case 0x1a8ce4u: goto label_1a8ce4;
        case 0x1a8ce8u: goto label_1a8ce8;
        case 0x1a8cecu: goto label_1a8cec;
        case 0x1a8cf0u: goto label_1a8cf0;
        case 0x1a8cf4u: goto label_1a8cf4;
        case 0x1a8cf8u: goto label_1a8cf8;
        case 0x1a8cfcu: goto label_1a8cfc;
        case 0x1a8d00u: goto label_1a8d00;
        case 0x1a8d04u: goto label_1a8d04;
        case 0x1a8d08u: goto label_1a8d08;
        case 0x1a8d0cu: goto label_1a8d0c;
        case 0x1a8d10u: goto label_1a8d10;
        case 0x1a8d14u: goto label_1a8d14;
        case 0x1a8d18u: goto label_1a8d18;
        case 0x1a8d1cu: goto label_1a8d1c;
        case 0x1a8d20u: goto label_1a8d20;
        case 0x1a8d24u: goto label_1a8d24;
        case 0x1a8d28u: goto label_1a8d28;
        case 0x1a8d2cu: goto label_1a8d2c;
        case 0x1a8d30u: goto label_1a8d30;
        case 0x1a8d34u: goto label_1a8d34;
        case 0x1a8d38u: goto label_1a8d38;
        case 0x1a8d3cu: goto label_1a8d3c;
        case 0x1a8d40u: goto label_1a8d40;
        case 0x1a8d44u: goto label_1a8d44;
        case 0x1a8d48u: goto label_1a8d48;
        case 0x1a8d4cu: goto label_1a8d4c;
        case 0x1a8d50u: goto label_1a8d50;
        case 0x1a8d54u: goto label_1a8d54;
        case 0x1a8d58u: goto label_1a8d58;
        case 0x1a8d5cu: goto label_1a8d5c;
        case 0x1a8d60u: goto label_1a8d60;
        case 0x1a8d64u: goto label_1a8d64;
        case 0x1a8d68u: goto label_1a8d68;
        case 0x1a8d6cu: goto label_1a8d6c;
        case 0x1a8d70u: goto label_1a8d70;
        case 0x1a8d74u: goto label_1a8d74;
        case 0x1a8d78u: goto label_1a8d78;
        case 0x1a8d7cu: goto label_1a8d7c;
        case 0x1a8d80u: goto label_1a8d80;
        case 0x1a8d84u: goto label_1a8d84;
        case 0x1a8d88u: goto label_1a8d88;
        case 0x1a8d8cu: goto label_1a8d8c;
        default: break;
    }

    ctx->pc = 0x1a8b70u;

label_1a8b70:
    // 0x1a8b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a8b74:
    // 0x1a8b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a8b78:
    // 0x1a8b78: 0xc069fd8  jal         func_1A7F60
label_1a8b7c:
    if (ctx->pc == 0x1A8B7Cu) {
        ctx->pc = 0x1A8B80u;
        goto label_1a8b80;
    }
    ctx->pc = 0x1A8B78u;
    SET_GPR_U32(ctx, 31, 0x1A8B80u);
    ctx->pc = 0x1A7F60u;
    if (runtime->hasFunction(0x1A7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1A7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B80u; }
        if (ctx->pc != 0x1A8B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7F60_0x1a7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B80u; }
        if (ctx->pc != 0x1A8B80u) { return; }
    }
    ctx->pc = 0x1A8B80u;
label_1a8b80:
    // 0x1a8b80: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
label_1a8b84:
    // 0x1a8b84: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a8b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
label_1a8b88:
    // 0x1a8b88: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a8b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
label_1a8b8c:
    // 0x1a8b8c: 0x24a53280  addiu       $a1, $a1, 0x3280
    ctx->pc = 0x1a8b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12928));
label_1a8b90:
    // 0x1a8b90: 0xc06a3de  jal         func_1A8F78
label_1a8b94:
    if (ctx->pc == 0x1A8B94u) {
        ctx->pc = 0x1A8B94u;
            // 0x1a8b94: 0x24060066  addiu       $a2, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->pc = 0x1A8B98u;
        goto label_1a8b98;
    }
    ctx->pc = 0x1A8B90u;
    SET_GPR_U32(ctx, 31, 0x1A8B98u);
    ctx->pc = 0x1A8B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B90u;
            // 0x1a8b94: 0x24060066  addiu       $a2, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (runtime->hasFunction(0x1A8F78u)) {
        auto targetFn = runtime->lookupFunction(0x1A8F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B98u; }
        if (ctx->pc != 0x1A8B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8F78_0x1a8f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B98u; }
        if (ctx->pc != 0x1A8B98u) { return; }
    }
    ctx->pc = 0x1A8B98u;
label_1a8b98:
    // 0x1a8b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8b9c:
    // 0x1a8b9c: 0x3e00008  jr          $ra
label_1a8ba0:
    if (ctx->pc == 0x1A8BA0u) {
        ctx->pc = 0x1A8BA0u;
            // 0x1a8ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A8BA4u;
        goto label_1a8ba4;
    }
    ctx->pc = 0x1A8B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B9Cu;
            // 0x1a8ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8BA4u;
label_1a8ba4:
    // 0x1a8ba4: 0x0  nop
    ctx->pc = 0x1a8ba4u;
    // NOP
label_1a8ba8:
    // 0x1a8ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a8bac:
    // 0x1a8bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a8bb0:
    // 0x1a8bb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a8bb4:
    // 0x1a8bb4: 0xc069fd8  jal         func_1A7F60
label_1a8bb8:
    if (ctx->pc == 0x1A8BB8u) {
        ctx->pc = 0x1A8BB8u;
            // 0x1a8bb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BBCu;
        goto label_1a8bbc;
    }
    ctx->pc = 0x1A8BB4u;
    SET_GPR_U32(ctx, 31, 0x1A8BBCu);
    ctx->pc = 0x1A8BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BB4u;
            // 0x1a8bb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (runtime->hasFunction(0x1A7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1A7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BBCu; }
        if (ctx->pc != 0x1A8BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7F60_0x1a7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BBCu; }
        if (ctx->pc != 0x1A8BBCu) { return; }
    }
    ctx->pc = 0x1A8BBCu;
label_1a8bbc:
    // 0x1a8bbc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a8bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a8bc0:
    // 0x1a8bc0: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a8bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
label_1a8bc4:
    // 0x1a8bc4: 0x8c62e148  lw          $v0, -0x1EB8($v1)
    ctx->pc = 0x1a8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959432)));
label_1a8bc8:
    // 0x1a8bc8: 0x24a53280  addiu       $a1, $a1, 0x3280
    ctx->pc = 0x1a8bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12928));
label_1a8bcc:
    // 0x1a8bcc: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
label_1a8bd0:
    // 0x1a8bd0: 0xacb00008  sw          $s0, 0x8($a1)
    ctx->pc = 0x1a8bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
label_1a8bd4:
    // 0x1a8bd4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a8bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1a8bd8:
    // 0x1a8bd8: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a8bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
label_1a8bdc:
    // 0x1a8bdc: 0xc06a3de  jal         func_1A8F78
label_1a8be0:
    if (ctx->pc == 0x1A8BE0u) {
        ctx->pc = 0x1A8BE0u;
            // 0x1a8be0: 0x24060067  addiu       $a2, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->pc = 0x1A8BE4u;
        goto label_1a8be4;
    }
    ctx->pc = 0x1A8BDCu;
    SET_GPR_U32(ctx, 31, 0x1A8BE4u);
    ctx->pc = 0x1A8BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BDCu;
            // 0x1a8be0: 0x24060067  addiu       $a2, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (runtime->hasFunction(0x1A8F78u)) {
        auto targetFn = runtime->lookupFunction(0x1A8F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BE4u; }
        if (ctx->pc != 0x1A8BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8F78_0x1a8f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BE4u; }
        if (ctx->pc != 0x1A8BE4u) { return; }
    }
    ctx->pc = 0x1A8BE4u;
label_1a8be4:
    // 0x1a8be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8be8:
    // 0x1a8be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8bec:
    // 0x1a8bec: 0x3e00008  jr          $ra
label_1a8bf0:
    if (ctx->pc == 0x1A8BF0u) {
        ctx->pc = 0x1A8BF0u;
            // 0x1a8bf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A8BF4u;
        goto label_1a8bf4;
    }
    ctx->pc = 0x1A8BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BECu;
            // 0x1a8bf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8BF4u;
label_1a8bf4:
    // 0x1a8bf4: 0x0  nop
    ctx->pc = 0x1a8bf4u;
    // NOP
label_1a8bf8:
    // 0x1a8bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a8bfc:
    // 0x1a8bfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a8c00:
    // 0x1a8c00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a8c04:
    // 0x1a8c04: 0xc06a2dc  jal         func_1A8B70
label_1a8c08:
    if (ctx->pc == 0x1A8C08u) {
        ctx->pc = 0x1A8C0Cu;
        goto label_1a8c0c;
    }
    ctx->pc = 0x1A8C04u;
    SET_GPR_U32(ctx, 31, 0x1A8C0Cu);
    ctx->pc = 0x1A8B70u;
    goto label_1a8b70;
    ctx->pc = 0x1A8C0Cu;
label_1a8c0c:
    // 0x1a8c0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c10:
    // 0x1a8c10: 0xc06a402  jal         func_1A9008
label_1a8c14:
    if (ctx->pc == 0x1A8C14u) {
        ctx->pc = 0x1A8C14u;
            // 0x1a8c14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C18u;
        goto label_1a8c18;
    }
    ctx->pc = 0x1A8C10u;
    SET_GPR_U32(ctx, 31, 0x1A8C18u);
    ctx->pc = 0x1A8C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C10u;
            // 0x1a8c14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9008u;
    if (runtime->hasFunction(0x1A9008u)) {
        auto targetFn = runtime->lookupFunction(0x1A9008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C18u; }
        if (ctx->pc != 0x1A8C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9008_0x1a9008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C18u; }
        if (ctx->pc != 0x1A8C18u) { return; }
    }
    ctx->pc = 0x1A8C18u;
label_1a8c18:
    // 0x1a8c18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a8c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c1c:
    // 0x1a8c1c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a8c20:
    // 0x1a8c20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8c24:
    // 0x1a8c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8c28:
    // 0x1a8c28: 0xac60e14c  sw          $zero, -0x1EB4($v1)
    ctx->pc = 0x1a8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959436), GPR_U32(ctx, 0));
label_1a8c2c:
    // 0x1a8c2c: 0x3e00008  jr          $ra
label_1a8c30:
    if (ctx->pc == 0x1A8C30u) {
        ctx->pc = 0x1A8C30u;
            // 0x1a8c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A8C34u;
        goto label_1a8c34;
    }
    ctx->pc = 0x1A8C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C2Cu;
            // 0x1a8c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8C34u;
label_1a8c34:
    // 0x1a8c34: 0x0  nop
    ctx->pc = 0x1a8c34u;
    // NOP
label_1a8c38:
    // 0x1a8c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a8c3c:
    // 0x1a8c3c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1a8c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8c40:
    // 0x1a8c40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a8c44:
    // 0x1a8c44: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1a8c48:
    // 0x1a8c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a8c4c:
    // 0x1a8c4c: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
label_1a8c50:
    if (ctx->pc == 0x1A8C50u) {
        ctx->pc = 0x1A8C50u;
            // 0x1a8c50: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C54u;
        goto label_1a8c54;
    }
    ctx->pc = 0x1A8C4Cu;
    {
        const bool branch_taken_0x1a8c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C4Cu;
            // 0x1a8c50: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c4c) {
            ctx->pc = 0x1A8CB4u;
            goto label_1a8cb4;
        }
    }
    ctx->pc = 0x1A8C54u;
label_1a8c54:
    // 0x1a8c54: 0x2c82000e  sltiu       $v0, $a0, 0xE
    ctx->pc = 0x1a8c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_1a8c58:
    // 0x1a8c58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a8c5c:
    if (ctx->pc == 0x1A8C5Cu) {
        ctx->pc = 0x1A8C5Cu;
            // 0x1a8c5c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x1A8C60u;
        goto label_1a8c60;
    }
    ctx->pc = 0x1A8C58u;
    {
        const bool branch_taken_0x1a8c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C58u;
            // 0x1a8c5c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c58) {
            ctx->pc = 0x1A8C70u;
            goto label_1a8c70;
        }
    }
    ctx->pc = 0x1A8C60u;
label_1a8c60:
    // 0x1a8c60: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
label_1a8c64:
    if (ctx->pc == 0x1A8C64u) {
        ctx->pc = 0x1A8C64u;
            // 0x1a8c64: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1A8C68u;
        goto label_1a8c68;
    }
    ctx->pc = 0x1A8C60u;
    {
        const bool branch_taken_0x1a8c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a8c60) {
            ctx->pc = 0x1A8C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C60u;
            // 0x1a8c64: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A8C84u;
            goto label_1a8c84;
        }
    }
    ctx->pc = 0x1A8C68u;
label_1a8c68:
    // 0x1a8c68: 0x10000027  b           . + 4 + (0x27 << 2)
label_1a8c6c:
    if (ctx->pc == 0x1A8C6Cu) {
        ctx->pc = 0x1A8C6Cu;
            // 0x1a8c6c: 0xae0a0000  sw          $t2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
        ctx->pc = 0x1A8C70u;
        goto label_1a8c70;
    }
    ctx->pc = 0x1A8C68u;
    {
        const bool branch_taken_0x1a8c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C68u;
            // 0x1a8c6c: 0xae0a0000  sw          $t2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c68) {
            ctx->pc = 0x1A8D08u;
            goto label_1a8d08;
        }
    }
    ctx->pc = 0x1A8C70u;
label_1a8c70:
    // 0x1a8c70: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1a8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1a8c74:
    // 0x1a8c74: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
label_1a8c78:
    if (ctx->pc == 0x1A8C78u) {
        ctx->pc = 0x1A8C78u;
            // 0x1a8c78: 0x3c0201bf  lui         $v0, 0x1BF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
        ctx->pc = 0x1A8C7Cu;
        goto label_1a8c7c;
    }
    ctx->pc = 0x1A8C74u;
    {
        const bool branch_taken_0x1a8c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C74u;
            // 0x1a8c78: 0x3c0201bf  lui         $v0, 0x1BF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c74) {
            ctx->pc = 0x1A8CECu;
            goto label_1a8cec;
        }
    }
    ctx->pc = 0x1A8C7Cu;
label_1a8c7c:
    // 0x1a8c7c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1a8c80:
    if (ctx->pc == 0x1A8C80u) {
        ctx->pc = 0x1A8C80u;
            // 0x1a8c80: 0xae0a0000  sw          $t2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
        ctx->pc = 0x1A8C84u;
        goto label_1a8c84;
    }
    ctx->pc = 0x1A8C7Cu;
    {
        const bool branch_taken_0x1a8c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C7Cu;
            // 0x1a8c80: 0xae0a0000  sw          $t2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c7c) {
            ctx->pc = 0x1A8D08u;
            goto label_1a8d08;
        }
    }
    ctx->pc = 0x1A8C84u;
label_1a8c84:
    // 0x1a8c84: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1a8c88:
    // 0x1a8c88: 0x8c425284  lw          $v0, 0x5284($v0)
    ctx->pc = 0x1a8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21124)));
label_1a8c8c:
    // 0x1a8c8c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1a8c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1a8c90:
    // 0x1a8c90: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1a8c94:
    // 0x1a8c94: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1a8c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a8c98:
    // 0x1a8c98: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x1a8c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1a8c9c:
    // 0x1a8c9c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1a8ca0:
    if (ctx->pc == 0x1A8CA0u) {
        ctx->pc = 0x1A8CA0u;
            // 0x1a8ca0: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1A8CA4u;
        goto label_1a8ca4;
    }
    ctx->pc = 0x1A8C9Cu;
    {
        const bool branch_taken_0x1a8c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C9Cu;
            // 0x1a8ca0: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c9c) {
            ctx->pc = 0x1A8D04u;
            goto label_1a8d04;
        }
    }
    ctx->pc = 0x1A8CA4u;
label_1a8ca4:
    // 0x1a8ca4: 0x40f809  jalr        $v0
label_1a8ca8:
    if (ctx->pc == 0x1A8CA8u) {
        ctx->pc = 0x1A8CA8u;
            // 0x1a8ca8: 0x26080004  addiu       $t0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x1A8CACu;
        goto label_1a8cac;
    }
    ctx->pc = 0x1A8CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8CACu);
        ctx->pc = 0x1A8CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CA4u;
            // 0x1a8ca8: 0x26080004  addiu       $t0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A8CACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8CACu; }
            if (ctx->pc != 0x1A8CACu) { return; }
        }
        }
    }
    ctx->pc = 0x1A8CACu;
label_1a8cac:
    // 0x1a8cac: 0x10000015  b           . + 4 + (0x15 << 2)
label_1a8cb0:
    if (ctx->pc == 0x1A8CB0u) {
        ctx->pc = 0x1A8CB0u;
            // 0x1a8cb0: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CB4u;
        goto label_1a8cb4;
    }
    ctx->pc = 0x1A8CACu;
    {
        const bool branch_taken_0x1a8cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CACu;
            // 0x1a8cb0: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8cac) {
            ctx->pc = 0x1A8D04u;
            goto label_1a8d04;
        }
    }
    ctx->pc = 0x1A8CB4u;
label_1a8cb4:
    // 0x1a8cb4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a8cb8:
    // 0x1a8cb8: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1a8cbc:
    // 0x1a8cbc: 0x8c425288  lw          $v0, 0x5288($v0)
    ctx->pc = 0x1a8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21128)));
label_1a8cc0:
    // 0x1a8cc0: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x1a8cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1a8cc4:
    // 0x1a8cc4: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1a8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1a8cc8:
    // 0x1a8cc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a8cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a8ccc:
    // 0x1a8ccc: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x1a8cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1a8cd0:
    // 0x1a8cd0: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1a8cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a8cd4:
    // 0x1a8cd4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a8cd8:
    if (ctx->pc == 0x1A8CD8u) {
        ctx->pc = 0x1A8CD8u;
            // 0x1a8cd8: 0x8e090010  lw          $t1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x1A8CDCu;
        goto label_1a8cdc;
    }
    ctx->pc = 0x1A8CD4u;
    {
        const bool branch_taken_0x1a8cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CD4u;
            // 0x1a8cd8: 0x8e090010  lw          $t1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8cd4) {
            ctx->pc = 0x1A8D04u;
            goto label_1a8d04;
        }
    }
    ctx->pc = 0x1A8CDCu;
label_1a8cdc:
    // 0x1a8cdc: 0x40f809  jalr        $v0
label_1a8ce0:
    if (ctx->pc == 0x1A8CE0u) {
        ctx->pc = 0x1A8CE0u;
            // 0x1a8ce0: 0x26070004  addiu       $a3, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x1A8CE4u;
        goto label_1a8ce4;
    }
    ctx->pc = 0x1A8CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8CE4u);
        ctx->pc = 0x1A8CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CDCu;
            // 0x1a8ce0: 0x26070004  addiu       $a3, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A8CE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8CE4u; }
            if (ctx->pc != 0x1A8CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A8CE4u;
label_1a8ce4:
    // 0x1a8ce4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a8ce8:
    if (ctx->pc == 0x1A8CE8u) {
        ctx->pc = 0x1A8CE8u;
            // 0x1a8ce8: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CECu;
        goto label_1a8cec;
    }
    ctx->pc = 0x1A8CE4u;
    {
        const bool branch_taken_0x1a8ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CE4u;
            // 0x1a8ce8: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ce4) {
            ctx->pc = 0x1A8D04u;
            goto label_1a8d04;
        }
    }
    ctx->pc = 0x1A8CECu;
label_1a8cec:
    // 0x1a8cec: 0x8c42528c  lw          $v0, 0x528C($v0)
    ctx->pc = 0x1a8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21132)));
label_1a8cf0:
    // 0x1a8cf0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a8cf4:
    if (ctx->pc == 0x1A8CF4u) {
        ctx->pc = 0x1A8CF4u;
            // 0x1a8cf4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A8CF8u;
        goto label_1a8cf8;
    }
    ctx->pc = 0x1A8CF0u;
    {
        const bool branch_taken_0x1a8cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CF0u;
            // 0x1a8cf4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8cf0) {
            ctx->pc = 0x1A8D04u;
            goto label_1a8d04;
        }
    }
    ctx->pc = 0x1A8CF8u;
label_1a8cf8:
    // 0x1a8cf8: 0x40f809  jalr        $v0
label_1a8cfc:
    if (ctx->pc == 0x1A8CFCu) {
        ctx->pc = 0x1A8D00u;
        goto label_1a8d00;
    }
    ctx->pc = 0x1A8CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8D00u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A8D00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D00u; }
            if (ctx->pc != 0x1A8D00u) { return; }
        }
        }
    }
    ctx->pc = 0x1A8D00u;
label_1a8d00:
    // 0x1a8d00: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1a8d00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d04:
    // 0x1a8d04: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x1a8d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
label_1a8d08:
    // 0x1a8d08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a8d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d0c:
    // 0x1a8d0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8d10:
    // 0x1a8d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8d14:
    // 0x1a8d14: 0x3e00008  jr          $ra
label_1a8d18:
    if (ctx->pc == 0x1A8D18u) {
        ctx->pc = 0x1A8D18u;
            // 0x1a8d18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A8D1Cu;
        goto label_1a8d1c;
    }
    ctx->pc = 0x1A8D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D14u;
            // 0x1a8d18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8D1Cu;
label_1a8d1c:
    // 0x1a8d1c: 0x0  nop
    ctx->pc = 0x1a8d1cu;
    // NOP
label_1a8d20:
    // 0x1a8d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a8d24:
    // 0x1a8d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a8d28:
    // 0x1a8d28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a8d2c:
    // 0x1a8d2c: 0xc0440ea  jal         func_1103A8
label_1a8d30:
    if (ctx->pc == 0x1A8D30u) {
        ctx->pc = 0x1A8D30u;
            // 0x1a8d30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D34u;
        goto label_1a8d34;
    }
    ctx->pc = 0x1A8D2Cu;
    SET_GPR_U32(ctx, 31, 0x1A8D34u);
    ctx->pc = 0x1A8D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D2Cu;
            // 0x1a8d30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (runtime->hasFunction(0x1103A8u)) {
        auto targetFn = runtime->lookupFunction(0x1103A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D34u; }
        if (ctx->pc != 0x1A8D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001103A8_0x1103a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D34u; }
        if (ctx->pc != 0x1A8D34u) { return; }
    }
    ctx->pc = 0x1A8D34u;
label_1a8d34:
    // 0x1a8d34: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1a8d34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
label_1a8d38:
    // 0x1a8d38: 0xc0432d4  jal         func_10CB50
label_1a8d3c:
    if (ctx->pc == 0x1A8D3Cu) {
        ctx->pc = 0x1A8D3Cu;
            // 0x1a8d3c: 0x261052d8  addiu       $s0, $s0, 0x52D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21208));
        ctx->pc = 0x1A8D40u;
        goto label_1a8d40;
    }
    ctx->pc = 0x1A8D38u;
    SET_GPR_U32(ctx, 31, 0x1A8D40u);
    ctx->pc = 0x1A8D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D38u;
            // 0x1a8d3c: 0x261052d8  addiu       $s0, $s0, 0x52D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D40u; }
        if (ctx->pc != 0x1A8D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D40u; }
        if (ctx->pc != 0x1A8D40u) { return; }
    }
    ctx->pc = 0x1A8D40u;
label_1a8d40:
    // 0x1a8d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d44:
    // 0x1a8d44: 0xc0443dc  jal         func_110F70
label_1a8d48:
    if (ctx->pc == 0x1A8D48u) {
        ctx->pc = 0x1A8D48u;
            // 0x1a8d48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D4Cu;
        goto label_1a8d4c;
    }
    ctx->pc = 0x1A8D44u;
    SET_GPR_U32(ctx, 31, 0x1A8D4Cu);
    ctx->pc = 0x1A8D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D44u;
            // 0x1a8d48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110F70u;
    if (runtime->hasFunction(0x110F70u)) {
        auto targetFn = runtime->lookupFunction(0x110F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D4Cu; }
        if (ctx->pc != 0x1A8D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110F70_0x110f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D4Cu; }
        if (ctx->pc != 0x1A8D4Cu) { return; }
    }
    ctx->pc = 0x1A8D4Cu;
label_1a8d4c:
    // 0x1a8d4c: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
label_1a8d50:
    // 0x1a8d50: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1a8d50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1a8d54:
    // 0x1a8d54: 0x3c0701bf  lui         $a3, 0x1BF
    ctx->pc = 0x1a8d54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)447 << 16));
label_1a8d58:
    // 0x1a8d58: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a8d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1a8d5c:
    // 0x1a8d5c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1a8d5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d60:
    // 0x1a8d60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a8d60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d64:
    // 0x1a8d64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a8d64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d68:
    // 0x1a8d68: 0x24c68c38  addiu       $a2, $a2, -0x73C8
    ctx->pc = 0x1a8d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937656));
label_1a8d6c:
    // 0x1a8d6c: 0x24e74280  addiu       $a3, $a3, 0x4280
    ctx->pc = 0x1a8d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17024));
label_1a8d70:
    // 0x1a8d70: 0x24845290  addiu       $a0, $a0, 0x5290
    ctx->pc = 0x1a8d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21136));
label_1a8d74:
    // 0x1a8d74: 0xc044402  jal         func_111008
label_1a8d78:
    if (ctx->pc == 0x1A8D78u) {
        ctx->pc = 0x1A8D78u;
            // 0x1a8d78: 0x34a51101  ori         $a1, $a1, 0x1101 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4353);
        ctx->pc = 0x1A8D7Cu;
        goto label_1a8d7c;
    }
    ctx->pc = 0x1A8D74u;
    SET_GPR_U32(ctx, 31, 0x1A8D7Cu);
    ctx->pc = 0x1A8D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D74u;
            // 0x1a8d78: 0x34a51101  ori         $a1, $a1, 0x1101 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4353);
        ctx->in_delay_slot = false;
    ctx->pc = 0x111008u;
    if (runtime->hasFunction(0x111008u)) {
        auto targetFn = runtime->lookupFunction(0x111008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D7Cu; }
        if (ctx->pc != 0x1A8D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111008_0x111008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D7Cu; }
        if (ctx->pc != 0x1A8D7Cu) { return; }
    }
    ctx->pc = 0x1A8D7Cu;
label_1a8d7c:
    // 0x1a8d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d80:
    // 0x1a8d80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8d84:
    // 0x1a8d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8d88:
    // 0x1a8d88: 0x8044508  j           func_111420
label_1a8d8c:
    if (ctx->pc == 0x1A8D8Cu) {
        ctx->pc = 0x1A8D8Cu;
            // 0x1a8d8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A8D90u;
        goto label_fallthrough_0x1a8d88;
    }
    ctx->pc = 0x1A8D88u;
    ctx->pc = 0x1A8D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D88u;
            // 0x1a8d8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111420u;
    if (runtime->hasFunction(0x111420u)) {
        auto targetFn = runtime->lookupFunction(0x111420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00111420_0x111420(rdram, ctx, runtime); return;
    }
label_fallthrough_0x1a8d88:
    ctx->pc = 0x1A8D90u;
    ctx->pc = 0x1a8d90u;
}
