#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1B08
// Address: 0x1b1b08 - 0x1b1be8
void sub_001B1B08_0x1b1b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1B08_0x1b1b08");
#endif

    switch (ctx->pc) {
        case 0x1b1b1cu: goto label_1b1b1c;
        case 0x1b1b40u: goto label_1b1b40;
        case 0x1b1b4cu: goto label_1b1b4c;
        case 0x1b1b58u: goto label_1b1b58;
        case 0x1b1b64u: goto label_1b1b64;
        case 0x1b1b70u: goto label_1b1b70;
        case 0x1b1b7cu: goto label_1b1b7c;
        case 0x1b1b88u: goto label_1b1b88;
        case 0x1b1b94u: goto label_1b1b94;
        case 0x1b1ba0u: goto label_1b1ba0;
        case 0x1b1bacu: goto label_1b1bac;
        case 0x1b1bc0u: goto label_1b1bc0;
        case 0x1b1bd0u: goto label_1b1bd0;
        case 0x1b1bd8u: goto label_1b1bd8;
        default: break;
    }

    ctx->pc = 0x1b1b08u;

    // 0x1b1b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1b0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1b10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1b14: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1B1B14u;
    SET_GPR_U32(ctx, 31, 0x1B1B1Cu);
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B1Cu; }
        if (ctx->pc != 0x1B1B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B1Cu; }
        if (ctx->pc != 0x1B1B1Cu) { return; }
    }
    ctx->pc = 0x1B1B1Cu;
label_1b1b1c:
    // 0x1b1b1c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1b20: 0x24502330  addiu       $s0, $v0, 0x2330
    ctx->pc = 0x1b1b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9008));
    // 0x1b1b24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1b28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1B28u;
    {
        const bool branch_taken_0x1b1b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B28u;
            // 0x1b1b2c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b28) {
            ctx->pc = 0x1B1B40u;
            goto label_1b1b40;
        }
    }
    ctx->pc = 0x1B1B30u;
    // 0x1b1b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1b34: 0x806b494  j           func_1AD250
    ctx->pc = 0x1B1B34u;
    ctx->pc = 0x1B1B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B34u;
            // 0x1b1b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B1B3Cu;
    // 0x1b1b3c: 0x0  nop
    ctx->pc = 0x1b1b3cu;
    // NOP
label_1b1b40:
    // 0x1b1b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1b44: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1B1B44u;
    SET_GPR_U32(ctx, 31, 0x1B1B4Cu);
    ctx->pc = 0x1B1B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B44u;
            // 0x1b1b48: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B4Cu; }
        if (ctx->pc != 0x1B1B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD250_0x1ad250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B4Cu; }
        if (ctx->pc != 0x1B1B4Cu) { return; }
    }
    ctx->pc = 0x1B1B4Cu;
label_1b1b4c:
    // 0x1b1b4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1b50: 0xc0703a4  jal         func_1C0E90
    ctx->pc = 0x1B1B50u;
    SET_GPR_U32(ctx, 31, 0x1B1B58u);
    ctx->pc = 0x1B1B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B50u;
            // 0x1b1b54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0E90u;
    if (runtime->hasFunction(0x1C0E90u)) {
        auto targetFn = runtime->lookupFunction(0x1C0E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B58u; }
        if (ctx->pc != 0x1B1B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0E90_0x1c0e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B58u; }
        if (ctx->pc != 0x1B1B58u) { return; }
    }
    ctx->pc = 0x1B1B58u;
label_1b1b58:
    // 0x1b1b58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b1b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1b5c: 0xc06ddfe  jal         func_1B77F8
    ctx->pc = 0x1B1B5Cu;
    SET_GPR_U32(ctx, 31, 0x1B1B64u);
    ctx->pc = 0x1B1B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B5Cu;
            // 0x1b1b60: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B77F8u;
    if (runtime->hasFunction(0x1B77F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B77F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B64u; }
        if (ctx->pc != 0x1B1B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B77F8_0x1b77f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B64u; }
        if (ctx->pc != 0x1B1B64u) { return; }
    }
    ctx->pc = 0x1B1B64u;
label_1b1b64:
    // 0x1b1b64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1b68: 0xc06ddd4  jal         func_1B7750
    ctx->pc = 0x1B1B68u;
    SET_GPR_U32(ctx, 31, 0x1B1B70u);
    ctx->pc = 0x1B1B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B68u;
            // 0x1b1b6c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7750u;
    if (runtime->hasFunction(0x1B7750u)) {
        auto targetFn = runtime->lookupFunction(0x1B7750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B70u; }
        if (ctx->pc != 0x1B1B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7750_0x1b7750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B70u; }
        if (ctx->pc != 0x1B1B70u) { return; }
    }
    ctx->pc = 0x1B1B70u;
label_1b1b70:
    // 0x1b1b70: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1b74: 0xc06c37a  jal         func_1B0DE8
    ctx->pc = 0x1B1B74u;
    SET_GPR_U32(ctx, 31, 0x1B1B7Cu);
    ctx->pc = 0x1B1B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B74u;
            // 0x1b1b78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DE8u;
    if (runtime->hasFunction(0x1B0DE8u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B7Cu; }
        if (ctx->pc != 0x1B1B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0DE8_0x1b0de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B7Cu; }
        if (ctx->pc != 0x1B1B7Cu) { return; }
    }
    ctx->pc = 0x1B1B7Cu;
label_1b1b7c:
    // 0x1b1b7c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b1b80: 0xc06ddd4  jal         func_1B7750
    ctx->pc = 0x1B1B80u;
    SET_GPR_U32(ctx, 31, 0x1B1B88u);
    ctx->pc = 0x1B1B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B80u;
            // 0x1b1b84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7750u;
    if (runtime->hasFunction(0x1B7750u)) {
        auto targetFn = runtime->lookupFunction(0x1B7750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B88u; }
        if (ctx->pc != 0x1B1B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7750_0x1b7750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B88u; }
        if (ctx->pc != 0x1B1B88u) { return; }
    }
    ctx->pc = 0x1B1B88u;
label_1b1b88:
    // 0x1b1b88: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b1b8c: 0xc06ddfe  jal         func_1B77F8
    ctx->pc = 0x1B1B8Cu;
    SET_GPR_U32(ctx, 31, 0x1B1B94u);
    ctx->pc = 0x1B1B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B8Cu;
            // 0x1b1b90: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B77F8u;
    if (runtime->hasFunction(0x1B77F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B77F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B94u; }
        if (ctx->pc != 0x1B1B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B77F8_0x1b77f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B94u; }
        if (ctx->pc != 0x1B1B94u) { return; }
    }
    ctx->pc = 0x1B1B94u;
label_1b1b94:
    // 0x1b1b94: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b1b98: 0xc0703a4  jal         func_1C0E90
    ctx->pc = 0x1B1B98u;
    SET_GPR_U32(ctx, 31, 0x1B1BA0u);
    ctx->pc = 0x1B1B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B98u;
            // 0x1b1b9c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0E90u;
    if (runtime->hasFunction(0x1C0E90u)) {
        auto targetFn = runtime->lookupFunction(0x1C0E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BA0u; }
        if (ctx->pc != 0x1B1BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0E90_0x1c0e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BA0u; }
        if (ctx->pc != 0x1B1BA0u) { return; }
    }
    ctx->pc = 0x1B1BA0u;
label_1b1ba0:
    // 0x1b1ba0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1b1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b1ba4: 0xc06de0e  jal         func_1B7838
    ctx->pc = 0x1B1BA4u;
    SET_GPR_U32(ctx, 31, 0x1B1BACu);
    ctx->pc = 0x1B1BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BA4u;
            // 0x1b1ba8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7838u;
    if (runtime->hasFunction(0x1B7838u)) {
        auto targetFn = runtime->lookupFunction(0x1B7838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BACu; }
        if (ctx->pc != 0x1B1BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7838_0x1b7838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BACu; }
        if (ctx->pc != 0x1B1BACu) { return; }
    }
    ctx->pc = 0x1B1BACu;
label_1b1bac:
    // 0x1b1bac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b1bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b1bb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BB8u;
            // 0x1b1bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1BC0u;
label_1b1bc0:
    // 0x1b1bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1bc8: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B1BC8u;
    SET_GPR_U32(ctx, 31, 0x1B1BD0u);
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BD0u; }
        if (ctx->pc != 0x1B1BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BD0u; }
        if (ctx->pc != 0x1B1BD0u) { return; }
    }
    ctx->pc = 0x1B1BD0u;
label_1b1bd0:
    // 0x1b1bd0: 0xc06c6fa  jal         func_1B1BE8
    ctx->pc = 0x1B1BD0u;
    SET_GPR_U32(ctx, 31, 0x1B1BD8u);
    ctx->pc = 0x1B1BE8u;
    if (runtime->hasFunction(0x1B1BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BD8u; }
        if (ctx->pc != 0x1B1BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1BE8_0x1b1be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BD8u; }
        if (ctx->pc != 0x1B1BD8u) { return; }
    }
    ctx->pc = 0x1B1BD8u;
label_1b1bd8:
    // 0x1b1bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1bdc: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B1BDCu;
    ctx->pc = 0x1B1BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BDCu;
            // 0x1b1be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B1BE4u;
    // 0x1b1be4: 0x0  nop
    ctx->pc = 0x1b1be4u;
    // NOP
    ctx->pc = 0x1b1be8u;
}
