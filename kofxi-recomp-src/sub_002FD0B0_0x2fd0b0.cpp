#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FD0B0
// Address: 0x2fd0b0 - 0x2fd160
void sub_002FD0B0_0x2fd0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD0B0_0x2fd0b0");
#endif

    switch (ctx->pc) {
        case 0x2fd0d8u: goto label_2fd0d8;
        case 0x2fd0ecu: goto label_2fd0ec;
        case 0x2fd104u: goto label_2fd104;
        case 0x2fd11cu: goto label_2fd11c;
        case 0x2fd134u: goto label_2fd134;
        case 0x2fd14cu: goto label_2fd14c;
        default: break;
    }

    ctx->pc = 0x2fd0b0u;

    // 0x2fd0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fd0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fd0b4: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd0b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fd0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fd0bc: 0x24a5b288  addiu       $a1, $a1, -0x4D78
    ctx->pc = 0x2fd0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947464));
    // 0x2fd0c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fd0c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fd0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd0c8: 0x3c100116  lui         $s0, 0x116
    ctx->pc = 0x2fd0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)278 << 16));
    // 0x2fd0cc: 0x2610f080  addiu       $s0, $s0, -0xF80
    ctx->pc = 0x2fd0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963328));
    // 0x2fd0d0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD0D0u;
    SET_GPR_U32(ctx, 31, 0x2FD0D8u);
    ctx->pc = 0x2FD0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD0D0u;
            // 0x2fd0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD0D8u; }
        if (ctx->pc != 0x2FD0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD0D8u; }
        if (ctx->pc != 0x2FD0D8u) { return; }
    }
    ctx->pc = 0x2FD0D8u;
label_2fd0d8:
    // 0x2fd0d8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x2fd0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x2fd0dc: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2fd0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fd0e0: 0x24a5f240  addiu       $a1, $a1, -0xDC0
    ctx->pc = 0x2fd0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963776));
    // 0x2fd0e4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD0E4u;
    SET_GPR_U32(ctx, 31, 0x2FD0ECu);
    ctx->pc = 0x2FD0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD0E4u;
            // 0x2fd0e8: 0x3406c000  ori         $a2, $zero, 0xC000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD0ECu; }
        if (ctx->pc != 0x2FD0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD0ECu; }
        if (ctx->pc != 0x2FD0ECu) { return; }
    }
    ctx->pc = 0x2FD0ECu;
label_2fd0ec:
    // 0x2fd0ec: 0x3401c001  ori         $at, $zero, 0xC001
    ctx->pc = 0x2fd0ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49153);
    // 0x2fd0f0: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd0f4: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd0f8: 0x24a5b280  addiu       $a1, $a1, -0x4D80
    ctx->pc = 0x2fd0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947456));
    // 0x2fd0fc: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD0FCu;
    SET_GPR_U32(ctx, 31, 0x2FD104u);
    ctx->pc = 0x2FD100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD0FCu;
            // 0x2fd100: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD104u; }
        if (ctx->pc != 0x2FD104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD104u; }
        if (ctx->pc != 0x2FD104u) { return; }
    }
    ctx->pc = 0x2FD104u;
label_2fd104:
    // 0x2fd104: 0x3401c008  ori         $at, $zero, 0xC008
    ctx->pc = 0x2fd104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49160);
    // 0x2fd108: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd10c: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd110: 0x24a5b270  addiu       $a1, $a1, -0x4D90
    ctx->pc = 0x2fd110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947440));
    // 0x2fd114: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD114u;
    SET_GPR_U32(ctx, 31, 0x2FD11Cu);
    ctx->pc = 0x2FD118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD114u;
            // 0x2fd118: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD11Cu; }
        if (ctx->pc != 0x2FD11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD11Cu; }
        if (ctx->pc != 0x2FD11Cu) { return; }
    }
    ctx->pc = 0x2FD11Cu;
label_2fd11c:
    // 0x2fd11c: 0x3401c013  ori         $at, $zero, 0xC013
    ctx->pc = 0x2fd11cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49171);
    // 0x2fd120: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd124: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd128: 0x24a5b268  addiu       $a1, $a1, -0x4D98
    ctx->pc = 0x2fd128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947432));
    // 0x2fd12c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD12Cu;
    SET_GPR_U32(ctx, 31, 0x2FD134u);
    ctx->pc = 0x2FD130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD12Cu;
            // 0x2fd130: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD134u; }
        if (ctx->pc != 0x2FD134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD134u; }
        if (ctx->pc != 0x2FD134u) { return; }
    }
    ctx->pc = 0x2FD134u;
label_2fd134:
    // 0x2fd134: 0x3401c017  ori         $at, $zero, 0xC017
    ctx->pc = 0x2fd134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49175);
    // 0x2fd138: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd13c: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd140: 0x24a5b250  addiu       $a1, $a1, -0x4DB0
    ctx->pc = 0x2fd140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947408));
    // 0x2fd144: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD144u;
    SET_GPR_U32(ctx, 31, 0x2FD14Cu);
    ctx->pc = 0x2FD148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD144u;
            // 0x2fd148: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD14Cu; }
        if (ctx->pc != 0x2FD14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD14Cu; }
        if (ctx->pc != 0x2FD14Cu) { return; }
    }
    ctx->pc = 0x2FD14Cu;
label_2fd14c:
    // 0x2fd14c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fd14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd154: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD154u;
            // 0x2fd158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD15Cu;
    // 0x2fd15c: 0x0  nop
    ctx->pc = 0x2fd15cu;
    // NOP
    ctx->pc = 0x2fd160u;
}
