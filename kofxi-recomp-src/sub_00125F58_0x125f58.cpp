#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125F58
// Address: 0x125f58 - 0x126008
void sub_00125F58_0x125f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125F58_0x125f58");
#endif

    switch (ctx->pc) {
        case 0x125fa0u: goto label_125fa0;
        case 0x125fe0u: goto label_125fe0;
        default: break;
    }

    ctx->pc = 0x125f58u;

    // 0x125f58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x125f5c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x125f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x125f60: 0x27af0010  addiu       $t7, $sp, 0x10
    ctx->pc = 0x125f60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x125f64: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x125f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x125f68: 0xc58818  mult        $s1, $a2, $a1
    ctx->pc = 0x125f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x125f6c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x125f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x125f70: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x125f70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125f74: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x125f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x125f78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x125f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x125f7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x125f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f80: 0xafaf0004  sw          $t7, 0x4($sp)
    ctx->pc = 0x125f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 15));
    // 0x125f84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x125f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f88: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x125f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x125f8c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x125f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f90: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x125f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x125f94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f98: 0xc0496c0  jal         func_125B00
    ctx->pc = 0x125F98u;
    SET_GPR_U32(ctx, 31, 0x125FA0u);
    ctx->pc = 0x125F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125F98u;
            // 0x125f9c: 0xafb10008  sw          $s1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B00u;
    if (runtime->hasFunction(0x125B00u)) {
        auto targetFn = runtime->lookupFunction(0x125B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FA0u; }
        if (ctx->pc != 0x125FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B00_0x125b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FA0u; }
        if (ctx->pc != 0x125FA0u) { return; }
    }
    ctx->pc = 0x125FA0u;
label_125fa0:
    // 0x125fa0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x125FA0u;
    {
        const bool branch_taken_0x125fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125FA0u;
            // 0x125fa4: 0x200782d  daddu       $t7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fa0) {
            ctx->pc = 0x125FC0u;
            goto label_125fc0;
        }
    }
    ctx->pc = 0x125FA8u;
    // 0x125fa8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x125FA8u;
    {
        const bool branch_taken_0x125fa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x125fa8) {
            ctx->pc = 0x125FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125FA8u;
            // 0x125fac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x125FB0u;
            goto label_125fb0;
        }
    }
    ctx->pc = 0x125FB0u;
label_125fb0:
    // 0x125fb0: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x125fb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125fb4: 0x22f7823  subu        $t7, $s1, $t7
    ctx->pc = 0x125fb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x125fb8: 0x1f2001b  divu        $zero, $t7, $s2
    ctx->pc = 0x125fb8u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x125fbc: 0x7812  mflo        $t7
    ctx->pc = 0x125fbcu;
    SET_GPR_U64(ctx, 15, ctx->lo);
label_125fc0:
    // 0x125fc0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x125fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125fc4: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x125fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fc8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x125fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125fcc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x125fccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125fd0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x125fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x125fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x125FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125FD4u;
            // 0x125fd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125FDCu;
    // 0x125fdc: 0x0  nop
    ctx->pc = 0x125fdcu;
    // NOP
label_125fe0:
    // 0x125fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125fe4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x125fe4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125fec: 0x3c0e0036  lui         $t6, 0x36
    ctx->pc = 0x125fecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
    // 0x125ff0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x125ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ff4: 0x8dc4bde8  lw          $a0, -0x4218($t6)
    ctx->pc = 0x125ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294950376)));
    // 0x125ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125ffc: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x125ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126000: 0x804980c  j           func_126030
    ctx->pc = 0x126000u;
    ctx->pc = 0x126004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126000u;
            // 0x126004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126030u;
    if (runtime->hasFunction(0x126030u)) {
        auto targetFn = runtime->lookupFunction(0x126030u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00126030_0x126030(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x126008u;
    ctx->pc = 0x126008u;
}
