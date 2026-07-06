#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026EF68
// Address: 0x26ef68 - 0x26efe0
void sub_0026EF68_0x26ef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EF68_0x26ef68");
#endif

    switch (ctx->pc) {
        case 0x26ef88u: goto label_26ef88;
        case 0x26ef9cu: goto label_26ef9c;
        case 0x26efb4u: goto label_26efb4;
        case 0x26efccu: goto label_26efcc;
        default: break;
    }

    ctx->pc = 0x26ef68u;

    // 0x26ef68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26ef68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26ef6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ef6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef70: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x26ef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x26ef74: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x26ef74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26ef78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ef78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26ef7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26ef80: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26EF80u;
    SET_GPR_U32(ctx, 31, 0x26EF88u);
    ctx->pc = 0x26EF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF80u;
            // 0x26ef84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF88u; }
        if (ctx->pc != 0x26EF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF88u; }
        if (ctx->pc != 0x26EF88u) { return; }
    }
    ctx->pc = 0x26EF88u;
label_26ef88:
    // 0x26ef88: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26ef8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26ef8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef90: 0x24a59570  addiu       $a1, $a1, -0x6A90
    ctx->pc = 0x26ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940016));
    // 0x26ef94: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26EF94u;
    SET_GPR_U32(ctx, 31, 0x26EF9Cu);
    ctx->pc = 0x26EF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF94u;
            // 0x26ef98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF9Cu; }
        if (ctx->pc != 0x26EF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF9Cu; }
        if (ctx->pc != 0x26EF9Cu) { return; }
    }
    ctx->pc = 0x26EF9Cu;
label_26ef9c:
    // 0x26ef9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ef9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26efa0: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x26efa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x26efa4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26efa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26efa8: 0x34a56979  ori         $a1, $a1, 0x6979
    ctx->pc = 0x26efa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27001);
    // 0x26efac: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26EFACu;
    SET_GPR_U32(ctx, 31, 0x26EFB4u);
    ctx->pc = 0x26EFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EFACu;
            // 0x26efb0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFB4u; }
        if (ctx->pc != 0x26EFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFB4u; }
        if (ctx->pc != 0x26EFB4u) { return; }
    }
    ctx->pc = 0x26EFB4u;
label_26efb4:
    // 0x26efb4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26EFB4u;
    {
        const bool branch_taken_0x26efb4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26EFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EFB4u;
            // 0x26efb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26efb4) {
            ctx->pc = 0x26EFD0u;
            goto label_26efd0;
        }
    }
    ctx->pc = 0x26EFBCu;
    // 0x26efbc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26efbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26efc0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26efc4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26EFC4u;
    SET_GPR_U32(ctx, 31, 0x26EFCCu);
    ctx->pc = 0x26EFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EFC4u;
            // 0x26efc8: 0x24a59628  addiu       $a1, $a1, -0x69D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFCCu; }
        if (ctx->pc != 0x26EFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFCCu; }
        if (ctx->pc != 0x26EFCCu) { return; }
    }
    ctx->pc = 0x26EFCCu;
label_26efcc:
    // 0x26efcc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26efccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26efd0:
    // 0x26efd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26efd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26efd4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x26efd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26efd8: 0x3e00008  jr          $ra
    ctx->pc = 0x26EFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EFD8u;
            // 0x26efdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EFE0u;
    ctx->pc = 0x26efe0u;
}
