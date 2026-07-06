#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5820
// Address: 0x2c5820 - 0x2c58a8
void sub_002C5820_0x2c5820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5820_0x2c5820");
#endif

    switch (ctx->pc) {
        case 0x2c5850u: goto label_2c5850;
        case 0x2c5860u: goto label_2c5860;
        case 0x2c5868u: goto label_2c5868;
        case 0x2c5870u: goto label_2c5870;
        case 0x2c5884u: goto label_2c5884;
        case 0x2c5898u: goto label_2c5898;
        default: break;
    }

    ctx->pc = 0x2c5820u;

    // 0x2c5820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c5824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c5828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c582c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C582Cu;
    {
        const bool branch_taken_0x2c582c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C582Cu;
            // 0x2c5830: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c582c) {
            ctx->pc = 0x2C5898u;
            goto label_2c5898;
        }
    }
    ctx->pc = 0x2C5834u;
    // 0x2c5834: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2c5834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2c5838: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2c5838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2c583c: 0x24e7ede0  addiu       $a3, $a3, -0x1220
    ctx->pc = 0x2c583cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962656));
    // 0x2c5840: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c5840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5844: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2c5844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c5848: 0xc0a8b46  jal         func_2A2D18
    ctx->pc = 0x2C5848u;
    SET_GPR_U32(ctx, 31, 0x2C5850u);
    ctx->pc = 0x2C584Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5848u;
            // 0x2c584c: 0x2408006b  addiu       $t0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (runtime->hasFunction(0x2A2D18u)) {
        auto targetFn = runtime->lookupFunction(0x2A2D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5850u; }
        if (ctx->pc != 0x2C5850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2D18_0x2a2d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5850u; }
        if (ctx->pc != 0x2C5850u) { return; }
    }
    ctx->pc = 0x2C5850u;
label_2c5850:
    // 0x2c5850: 0x1c400012  bgtz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C5850u;
    {
        const bool branch_taken_0x2c5850 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C5854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5850u;
            // 0x2c5854: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5850) {
            ctx->pc = 0x2C589Cu;
            goto label_2c589c;
        }
    }
    ctx->pc = 0x2C5858u;
    // 0x2c5858: 0xc0b0c5c  jal         func_2C3170
    ctx->pc = 0x2C5858u;
    SET_GPR_U32(ctx, 31, 0x2C5860u);
    ctx->pc = 0x2C585Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5858u;
            // 0x2c585c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3170u;
    if (runtime->hasFunction(0x2C3170u)) {
        auto targetFn = runtime->lookupFunction(0x2C3170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5860u; }
        if (ctx->pc != 0x2C5860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3170_0x2c3170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5860u; }
        if (ctx->pc != 0x2C5860u) { return; }
    }
    ctx->pc = 0x2C5860u;
label_2c5860:
    // 0x2c5860: 0xc0b0a08  jal         func_2C2820
    ctx->pc = 0x2C5860u;
    SET_GPR_U32(ctx, 31, 0x2C5868u);
    ctx->pc = 0x2C5864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5860u;
            // 0x2c5864: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2820u;
    if (runtime->hasFunction(0x2C2820u)) {
        auto targetFn = runtime->lookupFunction(0x2C2820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5868u; }
        if (ctx->pc != 0x2C5868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2820_0x2c2820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5868u; }
        if (ctx->pc != 0x2C5868u) { return; }
    }
    ctx->pc = 0x2C5868u;
label_2c5868:
    // 0x2c5868: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C5868u;
    SET_GPR_U32(ctx, 31, 0x2C5870u);
    ctx->pc = 0x2C586Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5868u;
            // 0x2c586c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5870u; }
        if (ctx->pc != 0x2C5870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5870u; }
        if (ctx->pc != 0x2C5870u) { return; }
    }
    ctx->pc = 0x2C5870u;
label_2c5870:
    // 0x2c5870: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2c5870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c5874: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5874u;
    {
        const bool branch_taken_0x2c5874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5874) {
            ctx->pc = 0x2C5878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5874u;
            // 0x2c5878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5888u;
            goto label_2c5888;
        }
    }
    ctx->pc = 0x2C587Cu;
    // 0x2c587c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2C587Cu;
    SET_GPR_U32(ctx, 31, 0x2C5884u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5884u; }
        if (ctx->pc != 0x2C5884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5884u; }
        if (ctx->pc != 0x2C5884u) { return; }
    }
    ctx->pc = 0x2C5884u;
label_2c5884:
    // 0x2c5884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5888:
    // 0x2c5888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c5888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c588c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c588cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5890: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2C5890u;
    ctx->pc = 0x2C5894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5890u;
            // 0x2c5894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C5898u;
label_2c5898:
    // 0x2c5898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c5898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c589c:
    // 0x2c589c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c589cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c58a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C58A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C58A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C58A0u;
            // 0x2c58a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C58A8u;
    ctx->pc = 0x2c58a8u;
}
