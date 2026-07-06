#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E0F0
// Address: 0x13e0f0 - 0x13e170
void sub_0013E0F0_0x13e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E0F0_0x13e0f0");
#endif

    switch (ctx->pc) {
        case 0x13e108u: goto label_13e108;
        case 0x13e11cu: goto label_13e11c;
        default: break;
    }

    ctx->pc = 0x13e0f0u;

    // 0x13e0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e0f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13e0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13e0f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e0fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e100: 0xc04f9d4  jal         func_13E750
    ctx->pc = 0x13E100u;
    SET_GPR_U32(ctx, 31, 0x13E108u);
    ctx->pc = 0x13E104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E100u;
            // 0x13e104: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E750u;
    if (runtime->hasFunction(0x13E750u)) {
        auto targetFn = runtime->lookupFunction(0x13E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E108u; }
        if (ctx->pc != 0x13E108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E750_0x13e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E108u; }
        if (ctx->pc != 0x13E108u) { return; }
    }
    ctx->pc = 0x13E108u;
label_13e108:
    // 0x13e108: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13E108u;
    {
        const bool branch_taken_0x13e108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e108) {
            ctx->pc = 0x13E10Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E108u;
            // 0x13e10c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E158u;
            goto label_13e158;
        }
    }
    ctx->pc = 0x13E110u;
    // 0x13e110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e114: 0xc04f544  jal         func_13D510
    ctx->pc = 0x13E114u;
    SET_GPR_U32(ctx, 31, 0x13E11Cu);
    ctx->pc = 0x13E118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E114u;
            // 0x13e118: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D510u;
    if (runtime->hasFunction(0x13D510u)) {
        auto targetFn = runtime->lookupFunction(0x13D510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E11Cu; }
        if (ctx->pc != 0x13E11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D510_0x13d510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E11Cu; }
        if (ctx->pc != 0x13E11Cu) { return; }
    }
    ctx->pc = 0x13E11Cu;
label_13e11c:
    // 0x13e11c: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x13e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x13e120: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x13e120u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x13e124: 0x34656667  ori         $a1, $v1, 0x6667
    ctx->pc = 0x13e124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x13e128: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x13e128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13e12c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e130: 0x0  nop
    ctx->pc = 0x13e130u;
    // NOP
    // 0x13e134: 0x1010  mfhi        $v0
    ctx->pc = 0x13e134u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13e138: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x13e138u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x13e13c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x13e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13e140: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E140u;
    {
        const bool branch_taken_0x13e140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e140) {
            ctx->pc = 0x13E144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E140u;
            // 0x13e144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E158u;
            goto label_13e158;
        }
    }
    ctx->pc = 0x13E148u;
    // 0x13e148: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13e14c: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E14Cu;
    {
        const bool branch_taken_0x13e14c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x13e14c) {
            ctx->pc = 0x13E150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E14Cu;
            // 0x13e150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E158u;
            goto label_13e158;
        }
    }
    ctx->pc = 0x13E154u;
    // 0x13e154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e158:
    // 0x13e158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e15c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e160: 0x3e00008  jr          $ra
    ctx->pc = 0x13E160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E160u;
            // 0x13e164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E168u;
    // 0x13e168: 0x0  nop
    ctx->pc = 0x13e168u;
    // NOP
    // 0x13e16c: 0x0  nop
    ctx->pc = 0x13e16cu;
    // NOP
    ctx->pc = 0x13e170u;
}
