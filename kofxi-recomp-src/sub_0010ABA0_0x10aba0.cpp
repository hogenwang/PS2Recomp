#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010ABA0
// Address: 0x10aba0 - 0x10ac78
void sub_0010ABA0_0x10aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ABA0_0x10aba0");
#endif

    switch (ctx->pc) {
        case 0x10abfcu: goto label_10abfc;
        case 0x10ac10u: goto label_10ac10;
        case 0x10ac28u: goto label_10ac28;
        case 0x10ac3cu: goto label_10ac3c;
        case 0x10ac50u: goto label_10ac50;
        case 0x10ac64u: goto label_10ac64;
        default: break;
    }

    ctx->pc = 0x10aba0u;

    // 0x10aba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10aba4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x10aba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10aba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10abac: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10ABACu;
    {
        const bool branch_taken_0x10abac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10abac) {
            ctx->pc = 0x10ABB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABACu;
            // 0x10abb0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10ABB4u;
            goto label_10abb4;
        }
    }
    ctx->pc = 0x10ABB4u;
label_10abb4:
    // 0x10abb4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x10abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10abb8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x10abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10abbc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x10abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10abc0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10abc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10abc8: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x10abc8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x10abcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10abccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10abd0: 0x1012  mflo        $v0
    ctx->pc = 0x10abd0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10abd4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x10abd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10abd8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x10abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10abdc: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x10abdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10abe0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10ABE0u;
    {
        const bool branch_taken_0x10abe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10abe0) {
            ctx->pc = 0x10ABE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABE0u;
            // 0x10abe4: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10ABF0u;
            goto label_10abf0;
        }
    }
    ctx->pc = 0x10ABE8u;
    // 0x10abe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10ABE8u;
    {
        const bool branch_taken_0x10abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABE8u;
            // 0x10abec: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abe8) {
            ctx->pc = 0x10AC00u;
            goto label_10ac00;
        }
    }
    ctx->pc = 0x10ABF0u;
label_10abf0:
    // 0x10abf0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x10abf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abf4: 0xc04305a  jal         func_10C168
    ctx->pc = 0x10ABF4u;
    SET_GPR_U32(ctx, 31, 0x10ABFCu);
    ctx->pc = 0x10ABF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABF4u;
            // 0x10abf8: 0x24a5a428  addiu       $a1, $a1, -0x5BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (runtime->hasFunction(0x10C168u)) {
        auto targetFn = runtime->lookupFunction(0x10C168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABFCu; }
        if (ctx->pc != 0x10ABFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C168_0x10c168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABFCu; }
        if (ctx->pc != 0x10ABFCu) { return; }
    }
    ctx->pc = 0x10ABFCu;
label_10abfc:
    // 0x10abfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10abfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ac00:
    // 0x10ac00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ac00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ac04: 0x3e00008  jr          $ra
    ctx->pc = 0x10AC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC04u;
            // 0x10ac08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AC0Cu;
    // 0x10ac0c: 0x0  nop
    ctx->pc = 0x10ac0cu;
    // NOP
label_10ac10:
    // 0x10ac10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10ac14: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x10ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10ac18: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x10ac18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10ac1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ac20: 0x3e00008  jr          $ra
    ctx->pc = 0x10AC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC20u;
            // 0x10ac24: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AC28u;
label_10ac28:
    // 0x10ac28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ac2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ac2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ac30: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x10ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10ac34: 0xc0430bc  jal         func_10C2F0
    ctx->pc = 0x10AC34u;
    SET_GPR_U32(ctx, 31, 0x10AC3Cu);
    ctx->pc = 0x10AC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC34u;
            // 0x10ac38: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C2F0u;
    if (runtime->hasFunction(0x10C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC3Cu; }
        if (ctx->pc != 0x10AC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C2F0_0x10c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC3Cu; }
        if (ctx->pc != 0x10AC3Cu) { return; }
    }
    ctx->pc = 0x10AC3Cu;
label_10ac3c:
    // 0x10ac3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ac3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ac40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ac44: 0x3e00008  jr          $ra
    ctx->pc = 0x10AC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC44u;
            // 0x10ac48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AC4Cu;
    // 0x10ac4c: 0x0  nop
    ctx->pc = 0x10ac4cu;
    // NOP
label_10ac50:
    // 0x10ac50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ac54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ac58: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x10ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10ac5c: 0xc0430f6  jal         func_10C3D8
    ctx->pc = 0x10AC5Cu;
    SET_GPR_U32(ctx, 31, 0x10AC64u);
    ctx->pc = 0x10AC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC5Cu;
            // 0x10ac60: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3D8u;
    if (runtime->hasFunction(0x10C3D8u)) {
        auto targetFn = runtime->lookupFunction(0x10C3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC64u; }
        if (ctx->pc != 0x10AC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3D8_0x10c3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC64u; }
        if (ctx->pc != 0x10AC64u) { return; }
    }
    ctx->pc = 0x10AC64u;
label_10ac64:
    // 0x10ac64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ac64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ac68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ac6c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC6Cu;
            // 0x10ac70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AC74u;
    // 0x10ac74: 0x0  nop
    ctx->pc = 0x10ac74u;
    // NOP
    ctx->pc = 0x10ac78u;
}
