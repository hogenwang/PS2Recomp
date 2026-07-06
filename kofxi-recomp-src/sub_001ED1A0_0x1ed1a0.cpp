#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED1A0
// Address: 0x1ed1a0 - 0x1ed238
void sub_001ED1A0_0x1ed1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED1A0_0x1ed1a0");
#endif

    switch (ctx->pc) {
        case 0x1ed1d0u: goto label_1ed1d0;
        case 0x1ed1e8u: goto label_1ed1e8;
        case 0x1ed200u: goto label_1ed200;
        case 0x1ed218u: goto label_1ed218;
        default: break;
    }

    ctx->pc = 0x1ed1a0u;

    // 0x1ed1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ed1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ed1a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ed1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ed1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ed1b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ed1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ed1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ed1b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ed1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1bc: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1ED1BCu;
    {
        const bool branch_taken_0x1ed1bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1BCu;
            // 0x1ed1c0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1bc) {
            ctx->pc = 0x1ED21Cu;
            goto label_1ed21c;
        }
    }
    ctx->pc = 0x1ED1C4u;
    // 0x1ed1c4: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed1c8: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED1C8u;
    SET_GPR_U32(ctx, 31, 0x1ED1D0u);
    ctx->pc = 0x1ED1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1C8u;
            // 0x1ed1cc: 0x24c6fc28  addiu       $a2, $a2, -0x3D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED408u;
    if (runtime->hasFunction(0x1ED408u)) {
        auto targetFn = runtime->lookupFunction(0x1ED408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1D0u; }
        if (ctx->pc != 0x1ED1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED408_0x1ed408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1D0u; }
        if (ctx->pc != 0x1ED1D0u) { return; }
    }
    ctx->pc = 0x1ED1D0u;
label_1ed1d0:
    // 0x1ed1d0: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed1d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ed1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1ed1d8: 0x24c6fc98  addiu       $a2, $a2, -0x368
    ctx->pc = 0x1ed1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966424));
    // 0x1ed1dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1e0: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED1E0u;
    SET_GPR_U32(ctx, 31, 0x1ED1E8u);
    ctx->pc = 0x1ED1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1E0u;
            // 0x1ed1e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED408u;
    if (runtime->hasFunction(0x1ED408u)) {
        auto targetFn = runtime->lookupFunction(0x1ED408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1E8u; }
        if (ctx->pc != 0x1ED1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED408_0x1ed408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1E8u; }
        if (ctx->pc != 0x1ED1E8u) { return; }
    }
    ctx->pc = 0x1ED1E8u;
label_1ed1e8:
    // 0x1ed1e8: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed1ec: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1ed1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1ed1f0: 0x24c6fd18  addiu       $a2, $a2, -0x2E8
    ctx->pc = 0x1ed1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966552));
    // 0x1ed1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1f8: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED1F8u;
    SET_GPR_U32(ctx, 31, 0x1ED200u);
    ctx->pc = 0x1ED1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1F8u;
            // 0x1ed1fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED408u;
    if (runtime->hasFunction(0x1ED408u)) {
        auto targetFn = runtime->lookupFunction(0x1ED408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED200u; }
        if (ctx->pc != 0x1ED200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED408_0x1ed408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED200u; }
        if (ctx->pc != 0x1ED200u) { return; }
    }
    ctx->pc = 0x1ED200u;
label_1ed200:
    // 0x1ed200: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ed200u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ed204: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1ed204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1ed208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed20c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed210: 0xc07b502  jal         func_1ED408
    ctx->pc = 0x1ED210u;
    SET_GPR_U32(ctx, 31, 0x1ED218u);
    ctx->pc = 0x1ED214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED210u;
            // 0x1ed214: 0x24c6fd88  addiu       $a2, $a2, -0x278 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED408u;
    if (runtime->hasFunction(0x1ED408u)) {
        auto targetFn = runtime->lookupFunction(0x1ED408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED218u; }
        if (ctx->pc != 0x1ED218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED408_0x1ed408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED218u; }
        if (ctx->pc != 0x1ED218u) { return; }
    }
    ctx->pc = 0x1ED218u;
label_1ed218:
    // 0x1ed218: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1ed218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1ed21c:
    // 0x1ed21c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ed220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ed224: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ed224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed228: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ed228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ed22c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED22Cu;
            // 0x1ed230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED234u;
    // 0x1ed234: 0x0  nop
    ctx->pc = 0x1ed234u;
    // NOP
    ctx->pc = 0x1ed238u;
}
