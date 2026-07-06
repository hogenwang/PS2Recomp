#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001038A8
// Address: 0x1038a8 - 0x1039e0
void sub_001038A8_0x1038a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001038A8_0x1038a8");
#endif

    switch (ctx->pc) {
        case 0x1038ccu: goto label_1038cc;
        case 0x1038f8u: goto label_1038f8;
        case 0x103910u: goto label_103910;
        case 0x103934u: goto label_103934;
        case 0x103960u: goto label_103960;
        case 0x103978u: goto label_103978;
        case 0x10399cu: goto label_10399c;
        case 0x1039c8u: goto label_1039c8;
        default: break;
    }

    ctx->pc = 0x1038a8u;

    // 0x1038a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1038a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1038ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1038acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1038b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1038b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1038b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1038b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1038b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1038bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1038bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1038c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1038c4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1038C4u;
    SET_GPR_U32(ctx, 31, 0x1038CCu);
    ctx->pc = 0x1038C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1038C4u;
            // 0x1038c8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1038CCu; }
        if (ctx->pc != 0x1038CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1038CCu; }
        if (ctx->pc != 0x1038CCu) { return; }
    }
    ctx->pc = 0x1038CCu;
label_1038cc:
    // 0x1038cc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1038ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1038d0: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1038d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1038d4: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1038d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1038d8: 0xfa460000  sqc2        $vf6, 0x0($s2)
    ctx->pc = 0x1038d8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1038dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1038DCu;
    {
        const bool branch_taken_0x1038dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1038DCu;
            // 0x1038e0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038dc) {
            ctx->pc = 0x1038F8u;
            goto label_1038f8;
        }
    }
    ctx->pc = 0x1038E4u;
    // 0x1038e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1038e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1038e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1038e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1038ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1038ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1038f0: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x1038F0u;
    ctx->pc = 0x1038F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1038F0u;
            // 0x1038f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1038F8u;
label_1038f8:
    // 0x1038f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1038f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1038fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1038fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103904: 0x3e00008  jr          $ra
    ctx->pc = 0x103904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103904u;
            // 0x103908: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10390Cu;
    // 0x10390c: 0x0  nop
    ctx->pc = 0x10390cu;
    // NOP
label_103910:
    // 0x103910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103914: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x103914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103918: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10391c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10391cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103924: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x103924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103928: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x103928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10392c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10392Cu;
    SET_GPR_U32(ctx, 31, 0x103934u);
    ctx->pc = 0x103930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10392Cu;
            // 0x103930: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103934u; }
        if (ctx->pc != 0x103934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103934u; }
        if (ctx->pc != 0x103934u) { return; }
    }
    ctx->pc = 0x103934u;
label_103934:
    // 0x103934: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x103934u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103938: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x103938u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10393c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x10393cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x103940: 0xfa460000  sqc2        $vf6, 0x0($s2)
    ctx->pc = 0x103940u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x103944: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103944u;
    {
        const bool branch_taken_0x103944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103944u;
            // 0x103948: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103944) {
            ctx->pc = 0x103960u;
            goto label_103960;
        }
    }
    ctx->pc = 0x10394Cu;
    // 0x10394c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10394cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103950: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103958: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103958u;
    ctx->pc = 0x10395Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103958u;
            // 0x10395c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x103960u;
label_103960:
    // 0x103960: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103964: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10396c: 0x3e00008  jr          $ra
    ctx->pc = 0x10396Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10396Cu;
            // 0x103970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x103974u;
    // 0x103974: 0x0  nop
    ctx->pc = 0x103974u;
    // NOP
label_103978:
    // 0x103978: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10397c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10397cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103980: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103984: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x103984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10398c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10398cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103990: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x103990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x103994: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103994u;
    SET_GPR_U32(ctx, 31, 0x10399Cu);
    ctx->pc = 0x103998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103994u;
            // 0x103998: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10399Cu; }
        if (ctx->pc != 0x10399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10399Cu; }
        if (ctx->pc != 0x10399Cu) { return; }
    }
    ctx->pc = 0x10399Cu;
label_10399c:
    // 0x10399c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x10399cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1039a0: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1039a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1039a4: 0x4be521aa  vmul.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1039a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1039a8: 0xfa460000  sqc2        $vf6, 0x0($s2)
    ctx->pc = 0x1039a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1039ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1039ACu;
    {
        const bool branch_taken_0x1039ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1039B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1039ACu;
            // 0x1039b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039ac) {
            ctx->pc = 0x1039C8u;
            goto label_1039c8;
        }
    }
    ctx->pc = 0x1039B4u;
    // 0x1039b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1039b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1039b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1039b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1039bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1039bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1039c0: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x1039C0u;
    ctx->pc = 0x1039C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1039C0u;
            // 0x1039c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1039C8u;
label_1039c8:
    // 0x1039c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1039c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1039cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1039ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1039d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1039d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1039d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1039D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1039D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1039D4u;
            // 0x1039d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1039DCu;
    // 0x1039dc: 0x0  nop
    ctx->pc = 0x1039dcu;
    // NOP
    ctx->pc = 0x1039e0u;
}
