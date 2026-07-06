#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002958A8
// Address: 0x2958a8 - 0x295920
void sub_002958A8_0x2958a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002958A8_0x2958a8");
#endif

    switch (ctx->pc) {
        case 0x2958c0u: goto label_2958c0;
        case 0x2958e0u: goto label_2958e0;
        case 0x2958f4u: goto label_2958f4;
        default: break;
    }

    ctx->pc = 0x2958a8u;

    // 0x2958a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2958a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2958ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2958acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2958b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2958b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2958b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2958b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2958b8: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x2958B8u;
    SET_GPR_U32(ctx, 31, 0x2958C0u);
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958C0u; }
        if (ctx->pc != 0x2958C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958C0u; }
        if (ctx->pc != 0x2958C0u) { return; }
    }
    ctx->pc = 0x2958C0u;
label_2958c0:
    // 0x2958c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2958c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2958c4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2958c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2958c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2958c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2958cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2958ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2958d0: 0x2451b478  addiu       $s1, $v0, -0x4B88
    ctx->pc = 0x2958d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947960));
    // 0x2958d4: 0x2407013e  addiu       $a3, $zero, 0x13E
    ctx->pc = 0x2958d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x2958d8: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2958D8u;
    SET_GPR_U32(ctx, 31, 0x2958E0u);
    ctx->pc = 0x2958DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2958D8u;
            // 0x2958dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958E0u; }
        if (ctx->pc != 0x2958E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958E0u; }
        if (ctx->pc != 0x2958E0u) { return; }
    }
    ctx->pc = 0x2958E0u;
label_2958e0:
    // 0x2958e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2958e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2958e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2958E4u;
    {
        const bool branch_taken_0x2958e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2958E4u;
            // 0x2958e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958e4) {
            ctx->pc = 0x2958FCu;
            goto label_2958fc;
        }
    }
    ctx->pc = 0x2958ECu;
    // 0x2958ec: 0xc0a61ba  jal         func_2986E8
    ctx->pc = 0x2958ECu;
    SET_GPR_U32(ctx, 31, 0x2958F4u);
    ctx->pc = 0x2986E8u;
    if (runtime->hasFunction(0x2986E8u)) {
        auto targetFn = runtime->lookupFunction(0x2986E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958F4u; }
        if (ctx->pc != 0x2958F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002986E8_0x2986e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958F4u; }
        if (ctx->pc != 0x2958F4u) { return; }
    }
    ctx->pc = 0x2958F4u;
label_2958f4:
    // 0x2958f4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2958f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2958f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2958f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2958fc:
    // 0x2958fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2958fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295900: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x295900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295904: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x295904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29590c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295910: 0x2407014d  addiu       $a3, $zero, 0x14D
    ctx->pc = 0x295910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 333));
    // 0x295914: 0x80a8b3a  j           func_2A2CE8
    ctx->pc = 0x295914u;
    ctx->pc = 0x295918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295914u;
            // 0x295918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29591Cu;
    // 0x29591c: 0x0  nop
    ctx->pc = 0x29591cu;
    // NOP
    ctx->pc = 0x295920u;
}
