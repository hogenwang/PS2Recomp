#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FAA30
// Address: 0x2faa30 - 0x2faa98
void sub_002FAA30_0x2faa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAA30_0x2faa30");
#endif

    switch (ctx->pc) {
        case 0x2faa50u: goto label_2faa50;
        case 0x2faa68u: goto label_2faa68;
        case 0x2faa74u: goto label_2faa74;
        default: break;
    }

    ctx->pc = 0x2faa30u;

    // 0x2faa30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2faa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2faa34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2faa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2faa38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2faa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2faa3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2faa3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2faa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2faa44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2faa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2faa48: 0xc0ac0b8  jal         func_2B02E0
    ctx->pc = 0x2FAA48u;
    SET_GPR_U32(ctx, 31, 0x2FAA50u);
    ctx->pc = 0x2FAA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA48u;
            // 0x2faa4c: 0x8e440170  lw          $a0, 0x170($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B02E0u;
    if (runtime->hasFunction(0x2B02E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B02E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA50u; }
        if (ctx->pc != 0x2FAA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B02E0_0x2b02e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA50u; }
        if (ctx->pc != 0x2FAA50u) { return; }
    }
    ctx->pc = 0x2FAA50u;
label_2faa50:
    // 0x2faa50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2faa50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa54: 0x621000a  bgez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2FAA54u;
    {
        const bool branch_taken_0x2faa54 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2FAA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA54u;
            // 0x2faa58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa54) {
            ctx->pc = 0x2FAA80u;
            goto label_2faa80;
        }
    }
    ctx->pc = 0x2FAA5Cu;
    // 0x2faa5c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2faa5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2faa60: 0xc0a56c0  jal         func_295B00
    ctx->pc = 0x2FAA60u;
    SET_GPR_U32(ctx, 31, 0x2FAA68u);
    ctx->pc = 0x2FAA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA60u;
            // 0x2faa64: 0x261029d0  addiu       $s0, $s0, 0x29D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295B00u;
    if (runtime->hasFunction(0x295B00u)) {
        auto targetFn = runtime->lookupFunction(0x295B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA68u; }
        if (ctx->pc != 0x2FAA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295B00_0x295b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA68u; }
        if (ctx->pc != 0x2FAA68u) { return; }
    }
    ctx->pc = 0x2FAA68u;
label_2faa68:
    // 0x2faa68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2faa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa6c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FAA6Cu;
    SET_GPR_U32(ctx, 31, 0x2FAA74u);
    ctx->pc = 0x2FAA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA6Cu;
            // 0x2faa70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA74u; }
        if (ctx->pc != 0x2FAA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA74u; }
        if (ctx->pc != 0x2FAA74u) { return; }
    }
    ctx->pc = 0x2FAA74u;
label_2faa74:
    // 0x2faa74: 0x2402f82e  addiu       $v0, $zero, -0x7D2
    ctx->pc = 0x2faa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965294));
    // 0x2faa78: 0xae420168  sw          $v0, 0x168($s2)
    ctx->pc = 0x2faa78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 360), GPR_U32(ctx, 2));
    // 0x2faa7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2faa7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2faa80:
    // 0x2faa80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2faa80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2faa84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2faa84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2faa88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2faa88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2faa8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2faa8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2faa90: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA90u;
            // 0x2faa94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FAA98u;
    ctx->pc = 0x2faa98u;
}
