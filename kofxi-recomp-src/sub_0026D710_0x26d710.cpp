#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026D710
// Address: 0x26d710 - 0x26d8a0
void sub_0026D710_0x26d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D710_0x26d710");
#endif

    switch (ctx->pc) {
        case 0x26d774u: goto label_26d774;
        case 0x26d784u: goto label_26d784;
        case 0x26d7a4u: goto label_26d7a4;
        case 0x26d7b4u: goto label_26d7b4;
        case 0x26d7d0u: goto label_26d7d0;
        case 0x26d7ecu: goto label_26d7ec;
        case 0x26d7fcu: goto label_26d7fc;
        case 0x26d814u: goto label_26d814;
        case 0x26d824u: goto label_26d824;
        case 0x26d840u: goto label_26d840;
        case 0x26d858u: goto label_26d858;
        case 0x26d868u: goto label_26d868;
        case 0x26d878u: goto label_26d878;
        default: break;
    }

    ctx->pc = 0x26d710u;

    // 0x26d710: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26d710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26d714: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26d714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d718: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26d718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x26d71c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26d71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26d720: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26d720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26d724: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26d724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d728: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26d728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26d72c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26d72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d730: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x26d730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x26d734: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26d734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26d738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26d738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26d73c: 0x82420001  lb          $v0, 0x1($s2)
    ctx->pc = 0x26d73cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x26d740: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x26d740u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26d744: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26D744u;
    {
        const bool branch_taken_0x26d744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26D748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D744u;
            // 0x26d748: 0x2a082  srl         $s4, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d744) {
            ctx->pc = 0x26D760u;
            goto label_26d760;
        }
    }
    ctx->pc = 0x26D74Cu;
    // 0x26d74c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26d750: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26D750u;
    {
        const bool branch_taken_0x26d750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D750u;
            // 0x26d754: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d750) {
            ctx->pc = 0x26D7BCu;
            goto label_26d7bc;
        }
    }
    ctx->pc = 0x26D758u;
    // 0x26d758: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x26D758u;
    {
        const bool branch_taken_0x26d758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D758u;
            // 0x26d75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d758) {
            ctx->pc = 0x26D880u;
            goto label_26d880;
        }
    }
    ctx->pc = 0x26D760u;
label_26d760:
    // 0x26d760: 0x263003f4  addiu       $s0, $s1, 0x3F4
    ctx->pc = 0x26d760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1012));
    // 0x26d764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26d764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d76c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26D76Cu;
    SET_GPR_U32(ctx, 31, 0x26D774u);
    ctx->pc = 0x26D770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D76Cu;
            // 0x26d770: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D774u; }
        if (ctx->pc != 0x26D774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D774u; }
        if (ctx->pc != 0x26D774u) { return; }
    }
    ctx->pc = 0x26D774u;
label_26d774:
    // 0x26d774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d778: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x26d778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x26d77c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26D77Cu;
    SET_GPR_U32(ctx, 31, 0x26D784u);
    ctx->pc = 0x26D780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D77Cu;
            // 0x26d780: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D784u; }
        if (ctx->pc != 0x26D784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D784u; }
        if (ctx->pc != 0x26D784u) { return; }
    }
    ctx->pc = 0x26D784u;
label_26d784:
    // 0x26d784: 0x8a2303f7  lwl         $v1, 0x3F7($s1)
    ctx->pc = 0x26d784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1015); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x26d788: 0x9a2303f4  lwr         $v1, 0x3F4($s1)
    ctx->pc = 0x26d788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1012); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x26d78c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26d78cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x26d790: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x26d790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x26d794: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x26d794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x26d798: 0x26109438  addiu       $s0, $s0, -0x6BC8
    ctx->pc = 0x26d798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939704));
    // 0x26d79c: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D79Cu;
    SET_GPR_U32(ctx, 31, 0x26D7A4u);
    ctx->pc = 0x26D7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D79Cu;
            // 0x26d7a0: 0x642024  and         $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7A4u; }
        if (ctx->pc != 0x26D7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7A4u; }
        if (ctx->pc != 0x26D7A4u) { return; }
    }
    ctx->pc = 0x26D7A4u;
label_26d7a4:
    // 0x26d7a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7ac: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D7ACu;
    SET_GPR_U32(ctx, 31, 0x26D7B4u);
    ctx->pc = 0x26D7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7ACu;
            // 0x26d7b0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7B4u; }
        if (ctx->pc != 0x26D7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7B4u; }
        if (ctx->pc != 0x26D7B4u) { return; }
    }
    ctx->pc = 0x26D7B4u;
label_26d7b4:
    // 0x26d7b4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x26D7B4u;
    {
        const bool branch_taken_0x26d7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7B4u;
            // 0x26d7b8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7b4) {
            ctx->pc = 0x26D87Cu;
            goto label_26d87c;
        }
    }
    ctx->pc = 0x26D7BCu;
label_26d7bc:
    // 0x26d7bc: 0x263003f8  addiu       $s0, $s1, 0x3F8
    ctx->pc = 0x26d7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1016));
    // 0x26d7c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26d7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7c8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26D7C8u;
    SET_GPR_U32(ctx, 31, 0x26D7D0u);
    ctx->pc = 0x26D7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7C8u;
            // 0x26d7cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7D0u; }
        if (ctx->pc != 0x26D7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7D0u; }
        if (ctx->pc != 0x26D7D0u) { return; }
    }
    ctx->pc = 0x26D7D0u;
label_26d7d0:
    // 0x26d7d0: 0x263303fc  addiu       $s3, $s1, 0x3FC
    ctx->pc = 0x26d7d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1020));
    // 0x26d7d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26d7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7dc: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x26d7dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x26d7e0: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x26d7e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x26d7e4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26D7E4u;
    SET_GPR_U32(ctx, 31, 0x26D7ECu);
    ctx->pc = 0x26D7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7E4u;
            // 0x26d7e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7ECu; }
        if (ctx->pc != 0x26D7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7ECu; }
        if (ctx->pc != 0x26D7ECu) { return; }
    }
    ctx->pc = 0x26D7ECu;
label_26d7ec:
    // 0x26d7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7f0: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x26d7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x26d7f4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26D7F4u;
    SET_GPR_U32(ctx, 31, 0x26D7FCu);
    ctx->pc = 0x26D7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7F4u;
            // 0x26d7f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7FCu; }
        if (ctx->pc != 0x26D7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7FCu; }
        if (ctx->pc != 0x26D7FCu) { return; }
    }
    ctx->pc = 0x26D7FCu;
label_26d7fc:
    // 0x26d7fc: 0x8a2403fb  lwl         $a0, 0x3FB($s1)
    ctx->pc = 0x26d7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1019); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d800: 0x9a2403f8  lwr         $a0, 0x3F8($s1)
    ctx->pc = 0x26d800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1016); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d804: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26d804u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x26d808: 0x26109450  addiu       $s0, $s0, -0x6BB0
    ctx->pc = 0x26d808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939728));
    // 0x26d80c: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D80Cu;
    SET_GPR_U32(ctx, 31, 0x26D814u);
    ctx->pc = 0x26D810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D80Cu;
            // 0x26d810: 0x952024  and         $a0, $a0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D814u; }
        if (ctx->pc != 0x26D814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D814u; }
        if (ctx->pc != 0x26D814u) { return; }
    }
    ctx->pc = 0x26D814u;
label_26d814:
    // 0x26d814: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d818: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d81c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D81Cu;
    SET_GPR_U32(ctx, 31, 0x26D824u);
    ctx->pc = 0x26D820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D81Cu;
            // 0x26d820: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D824u; }
        if (ctx->pc != 0x26D824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D824u; }
        if (ctx->pc != 0x26D824u) { return; }
    }
    ctx->pc = 0x26D824u;
label_26d824:
    // 0x26d824: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x26d824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26d828: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x26D828u;
    {
        const bool branch_taken_0x26d828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d828) {
            ctx->pc = 0x26D82Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26D828u;
            // 0x26d82c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26D86Cu;
            goto label_26d86c;
        }
    }
    ctx->pc = 0x26D830u;
    // 0x26d830: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d834: 0x26450006  addiu       $a1, $s2, 0x6
    ctx->pc = 0x26d834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x26d838: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26D838u;
    SET_GPR_U32(ctx, 31, 0x26D840u);
    ctx->pc = 0x26D83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D838u;
            // 0x26d83c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D840u; }
        if (ctx->pc != 0x26D840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D840u; }
        if (ctx->pc != 0x26D840u) { return; }
    }
    ctx->pc = 0x26D840u;
label_26d840:
    // 0x26d840: 0x8a2403ff  lwl         $a0, 0x3FF($s1)
    ctx->pc = 0x26d840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1023); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d844: 0x9a2403fc  lwr         $a0, 0x3FC($s1)
    ctx->pc = 0x26d844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1020); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d848: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26d848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x26d84c: 0x26109478  addiu       $s0, $s0, -0x6B88
    ctx->pc = 0x26d84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939768));
    // 0x26d850: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D850u;
    SET_GPR_U32(ctx, 31, 0x26D858u);
    ctx->pc = 0x26D854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D850u;
            // 0x26d854: 0x952024  and         $a0, $a0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D858u; }
        if (ctx->pc != 0x26D858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D858u; }
        if (ctx->pc != 0x26D858u) { return; }
    }
    ctx->pc = 0x26D858u;
label_26d858:
    // 0x26d858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d85c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d860: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D860u;
    SET_GPR_U32(ctx, 31, 0x26D868u);
    ctx->pc = 0x26D864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D860u;
            // 0x26d864: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D868u; }
        if (ctx->pc != 0x26D868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D868u; }
        if (ctx->pc != 0x26D868u) { return; }
    }
    ctx->pc = 0x26D868u;
label_26d868:
    // 0x26d868: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26d86c:
    // 0x26d86c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d870: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D870u;
    SET_GPR_U32(ctx, 31, 0x26D878u);
    ctx->pc = 0x26D874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D870u;
            // 0x26d874: 0x24a58fa8  addiu       $a1, $a1, -0x7058 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D878u; }
        if (ctx->pc != 0x26D878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D878u; }
        if (ctx->pc != 0x26D878u) { return; }
    }
    ctx->pc = 0x26D878u;
label_26d878:
    // 0x26d878: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26d878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26d87c:
    // 0x26d87c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26d87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d880:
    // 0x26d880: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x26d880u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26d884: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26d884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26d888: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26d888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d88c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26d88cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d890: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26d890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26d894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d898: 0x3e00008  jr          $ra
    ctx->pc = 0x26D898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D898u;
            // 0x26d89c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D8A0u;
    ctx->pc = 0x26d8a0u;
}
