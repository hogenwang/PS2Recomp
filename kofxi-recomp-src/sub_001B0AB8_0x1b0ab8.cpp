#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0AB8
// Address: 0x1b0ab8 - 0x1b0b30
void sub_001B0AB8_0x1b0ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0AB8_0x1b0ab8");
#endif

    switch (ctx->pc) {
        case 0x1b0ad4u: goto label_1b0ad4;
        case 0x1b0ae8u: goto label_1b0ae8;
        case 0x1b0af8u: goto label_1b0af8;
        case 0x1b0b0cu: goto label_1b0b0c;
        case 0x1b0b14u: goto label_1b0b14;
        case 0x1b0b1cu: goto label_1b0b1c;
        default: break;
    }

    ctx->pc = 0x1b0ab8u;

    // 0x1b0ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0abc: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x1b0abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1b0ac0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0AC0u;
    {
        const bool branch_taken_0x1b0ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0AC0u;
            // 0x1b0ac4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ac0) {
            ctx->pc = 0x1B0AE8u;
            goto label_1b0ae8;
        }
    }
    ctx->pc = 0x1B0AC8u;
    // 0x1b0ac8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b0ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b0acc: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B0ACCu;
    SET_GPR_U32(ctx, 31, 0x1B0AD4u);
    ctx->pc = 0x1B0AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0ACCu;
            // 0x1b0ad0: 0x24847810  addiu       $a0, $a0, 0x7810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0AD4u; }
        if (ctx->pc != 0x1B0AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0AD4u; }
        if (ctx->pc != 0x1B0AD4u) { return; }
    }
    ctx->pc = 0x1B0AD4u;
label_1b0ad4:
    // 0x1b0ad4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1b0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1b0ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0ADCu;
            // 0x1b0ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0AE4u;
    // 0x1b0ae4: 0x0  nop
    ctx->pc = 0x1b0ae4u;
    // NOP
label_1b0ae8:
    // 0x1b0ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0aec: 0x806c230  j           func_1B08C0
    ctx->pc = 0x1B0AECu;
    ctx->pc = 0x1B0AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0AECu;
            // 0x1b0af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B08C0u;
    if (runtime->hasFunction(0x1B08C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B08C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B08C0_0x1b08c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0AF4u;
    // 0x1b0af4: 0x0  nop
    ctx->pc = 0x1b0af4u;
    // NOP
label_1b0af8:
    // 0x1b0af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0b00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b0b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b0b04: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B0B04u;
    SET_GPR_U32(ctx, 31, 0x1B0B0Cu);
    ctx->pc = 0x1B0B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B04u;
            // 0x1b0b08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B0Cu; }
        if (ctx->pc != 0x1B0B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B0Cu; }
        if (ctx->pc != 0x1B0B0Cu) { return; }
    }
    ctx->pc = 0x1B0B0Cu;
label_1b0b0c:
    // 0x1b0b0c: 0xc06c2cc  jal         func_1B0B30
    ctx->pc = 0x1B0B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B0B14u);
    ctx->pc = 0x1B0B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B0Cu;
            // 0x1b0b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B30u;
    if (runtime->hasFunction(0x1B0B30u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B14u; }
        if (ctx->pc != 0x1B0B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0B30_0x1b0b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B14u; }
        if (ctx->pc != 0x1B0B14u) { return; }
    }
    ctx->pc = 0x1B0B14u;
label_1b0b14:
    // 0x1b0b14: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B0B14u;
    SET_GPR_U32(ctx, 31, 0x1B0B1Cu);
    ctx->pc = 0x1B0B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B14u;
            // 0x1b0b18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B1Cu; }
        if (ctx->pc != 0x1B0B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B1Cu; }
        if (ctx->pc != 0x1B0B1Cu) { return; }
    }
    ctx->pc = 0x1B0B1Cu;
label_1b0b1c:
    // 0x1b0b1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b0b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0b20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0b28: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B28u;
            // 0x1b0b2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0B30u;
    ctx->pc = 0x1b0b30u;
}
