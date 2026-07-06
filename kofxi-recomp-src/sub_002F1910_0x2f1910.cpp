#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1910
// Address: 0x2f1910 - 0x2f1968
void sub_002F1910_0x2f1910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1910_0x2f1910");
#endif

    switch (ctx->pc) {
        case 0x2f1930u: goto label_2f1930;
        case 0x2f1940u: goto label_2f1940;
        case 0x2f1950u: goto label_2f1950;
        default: break;
    }

    ctx->pc = 0x2f1910u;

    // 0x2f1910: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f1910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f1914: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2f1914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2f1918: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f1918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f191c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2f191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2f1920: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2f1920u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2f1924: 0x2610eca8  addiu       $s0, $s0, -0x1358
    ctx->pc = 0x2f1924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962344));
    // 0x2f1928: 0xc0bc63a  jal         func_2F18E8
    ctx->pc = 0x2F1928u;
    SET_GPR_U32(ctx, 31, 0x2F1930u);
    ctx->pc = 0x2F192Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1928u;
            // 0x2f192c: 0x960500b0  lhu         $a1, 0xB0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F18E8u;
    if (runtime->hasFunction(0x2F18E8u)) {
        auto targetFn = runtime->lookupFunction(0x2F18E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1930u; }
        if (ctx->pc != 0x2F1930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F18E8_0x2f18e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1930u; }
        if (ctx->pc != 0x2F1930u) { return; }
    }
    ctx->pc = 0x2F1930u;
label_2f1930:
    // 0x2f1930: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2f1930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f1934: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f1934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1938: 0xc089056  jal         func_224158
    ctx->pc = 0x2F1938u;
    SET_GPR_U32(ctx, 31, 0x2F1940u);
    ctx->pc = 0x2F193Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1938u;
            // 0x2f193c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224158u;
    if (runtime->hasFunction(0x224158u)) {
        auto targetFn = runtime->lookupFunction(0x224158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1940u; }
        if (ctx->pc != 0x2F1940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224158_0x224158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1940u; }
        if (ctx->pc != 0x2F1940u) { return; }
    }
    ctx->pc = 0x2F1940u;
label_2f1940:
    // 0x2f1940: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1940u;
    {
        const bool branch_taken_0x2f1940 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F1944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1940u;
            // 0x2f1944: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1940) {
            ctx->pc = 0x2F1950u;
            goto label_2f1950;
        }
    }
    ctx->pc = 0x2F1948u;
    // 0x2f1948: 0xc0bb75c  jal         func_2EDD70
    ctx->pc = 0x2F1948u;
    SET_GPR_U32(ctx, 31, 0x2F1950u);
    ctx->pc = 0x2EDD70u;
    if (runtime->hasFunction(0x2EDD70u)) {
        auto targetFn = runtime->lookupFunction(0x2EDD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1950u; }
        if (ctx->pc != 0x2F1950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EDD70_0x2edd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1950u; }
        if (ctx->pc != 0x2F1950u) { return; }
    }
    ctx->pc = 0x2F1950u;
label_2f1950:
    // 0x2f1950: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f1950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1954: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2f1954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f1958: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2f1958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f195c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F195Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F195Cu;
            // 0x2f1960: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1964u;
    // 0x2f1964: 0x0  nop
    ctx->pc = 0x2f1964u;
    // NOP
    ctx->pc = 0x2f1968u;
}
