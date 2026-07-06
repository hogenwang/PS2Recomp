#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267AF8
// Address: 0x267af8 - 0x267b80
void sub_00267AF8_0x267af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267AF8_0x267af8");
#endif

    switch (ctx->pc) {
        case 0x267b20u: goto label_267b20;
        case 0x267b30u: goto label_267b30;
        case 0x267b48u: goto label_267b48;
        case 0x267b60u: goto label_267b60;
        default: break;
    }

    ctx->pc = 0x267af8u;

    // 0x267af8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x267af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x267afc: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x267afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x267b00: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x267b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x267b04: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x267b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x267b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x267b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x267b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b10: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x267b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x267b14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b18: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x267B18u;
    SET_GPR_U32(ctx, 31, 0x267B20u);
    ctx->pc = 0x267B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267B18u;
            // 0x267b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B20u; }
        if (ctx->pc != 0x267B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B20u; }
        if (ctx->pc != 0x267B20u) { return; }
    }
    ctx->pc = 0x267B20u;
label_267b20:
    // 0x267b20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x267b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b28: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267B28u;
    SET_GPR_U32(ctx, 31, 0x267B30u);
    ctx->pc = 0x267B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267B28u;
            // 0x267b2c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B30u; }
        if (ctx->pc != 0x267B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B30u; }
        if (ctx->pc != 0x267B30u) { return; }
    }
    ctx->pc = 0x267B30u;
label_267b30:
    // 0x267b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b34: 0x3405c0a8  ori         $a1, $zero, 0xC0A8
    ctx->pc = 0x267b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49320);
    // 0x267b38: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267b38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x267b3c: 0x34a56978  ori         $a1, $a1, 0x6978
    ctx->pc = 0x267b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27000);
    // 0x267b40: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267B40u;
    SET_GPR_U32(ctx, 31, 0x267B48u);
    ctx->pc = 0x267B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267B40u;
            // 0x267b44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B48u; }
        if (ctx->pc != 0x267B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B48u; }
        if (ctx->pc != 0x267B48u) { return; }
    }
    ctx->pc = 0x267B48u;
label_267b48:
    // 0x267b48: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267B48u;
    {
        const bool branch_taken_0x267b48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x267B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B48u;
            // 0x267b4c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b48) {
            ctx->pc = 0x267B68u;
            goto label_267b68;
        }
    }
    ctx->pc = 0x267B50u;
    // 0x267b50: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x267b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x267b54: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x267b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x267b58: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x267B58u;
    SET_GPR_U32(ctx, 31, 0x267B60u);
    ctx->pc = 0x267B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267B58u;
            // 0x267b5c: 0x24a57b80  addiu       $a1, $a1, 0x7B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B60u; }
        if (ctx->pc != 0x267B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B60u; }
        if (ctx->pc != 0x267B60u) { return; }
    }
    ctx->pc = 0x267B60u;
label_267b60:
    // 0x267b60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x267B60u;
    {
        const bool branch_taken_0x267b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B60u;
            // 0x267b64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b60) {
            ctx->pc = 0x267B6Cu;
            goto label_267b6c;
        }
    }
    ctx->pc = 0x267B68u;
label_267b68:
    // 0x267b68: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x267b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_267b6c:
    // 0x267b6c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x267b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x267b70: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x267b70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x267b74: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x267b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x267b78: 0x3e00008  jr          $ra
    ctx->pc = 0x267B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B78u;
            // 0x267b7c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267B80u;
    ctx->pc = 0x267b80u;
}
