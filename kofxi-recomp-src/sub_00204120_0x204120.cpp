#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00204120
// Address: 0x204120 - 0x2041a0
void sub_00204120_0x204120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204120_0x204120");
#endif

    switch (ctx->pc) {
        case 0x204130u: goto label_204130;
        case 0x204150u: goto label_204150;
        case 0x204168u: goto label_204168;
        default: break;
    }

    ctx->pc = 0x204120u;

    // 0x204120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204128: 0xc081014  jal         func_204050
    ctx->pc = 0x204128u;
    SET_GPR_U32(ctx, 31, 0x204130u);
    ctx->pc = 0x204050u;
    if (runtime->hasFunction(0x204050u)) {
        auto targetFn = runtime->lookupFunction(0x204050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204130u; }
        if (ctx->pc != 0x204130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204050_0x204050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204130u; }
        if (ctx->pc != 0x204130u) { return; }
    }
    ctx->pc = 0x204130u;
label_204130:
    // 0x204130: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204134: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x204134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x204138: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x204138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20413c: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x20413Cu;
    {
        const bool branch_taken_0x20413c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20413c) {
            ctx->pc = 0x204140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20413Cu;
            // 0x204140: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204198u;
            goto label_204198;
        }
    }
    ctx->pc = 0x204144u;
    // 0x204144: 0x24840824  addiu       $a0, $a0, 0x824
    ctx->pc = 0x204144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2084));
    // 0x204148: 0xc057be0  jal         func_15EF80
    ctx->pc = 0x204148u;
    SET_GPR_U32(ctx, 31, 0x204150u);
    ctx->pc = 0x20414Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204148u;
            // 0x20414c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF80u;
    if (runtime->hasFunction(0x15EF80u)) {
        auto targetFn = runtime->lookupFunction(0x15EF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204150u; }
        if (ctx->pc != 0x204150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF80_0x15ef80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204150u; }
        if (ctx->pc != 0x204150u) { return; }
    }
    ctx->pc = 0x204150u;
label_204150:
    // 0x204150: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x204150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x204154: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x204154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x204158: 0x904608b0  lbu         $a2, 0x8B0($v0)
    ctx->pc = 0x204158u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2224)));
    // 0x20415c: 0x24440824  addiu       $a0, $v0, 0x824
    ctx->pc = 0x20415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2084));
    // 0x204160: 0xc058528  jal         func_1614A0
    ctx->pc = 0x204160u;
    SET_GPR_U32(ctx, 31, 0x204168u);
    ctx->pc = 0x204164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204160u;
            // 0x204164: 0x24450a8c  addiu       $a1, $v0, 0xA8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1614A0u;
    if (runtime->hasFunction(0x1614A0u)) {
        auto targetFn = runtime->lookupFunction(0x1614A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204168u; }
        if (ctx->pc != 0x204168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001614A0_0x1614a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204168u; }
        if (ctx->pc != 0x204168u) { return; }
    }
    ctx->pc = 0x204168u;
label_204168:
    // 0x204168: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20416c: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x20416cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x204170: 0x94830a9a  lhu         $v1, 0xA9A($a0)
    ctx->pc = 0x204170u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2714)));
    // 0x204174: 0x3063c000  andi        $v1, $v1, 0xC000
    ctx->pc = 0x204174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49152);
    // 0x204178: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x204178u;
    {
        const bool branch_taken_0x204178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204178) {
            ctx->pc = 0x204194u;
            goto label_204194;
        }
    }
    ctx->pc = 0x204180u;
    // 0x204180: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x204180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x204184: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204184u;
    {
        const bool branch_taken_0x204184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204184) {
            ctx->pc = 0x204194u;
            goto label_204194;
        }
    }
    ctx->pc = 0x20418Cu;
    // 0x20418c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20418cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x204190: 0xac830a94  sw          $v1, 0xA94($a0)
    ctx->pc = 0x204190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2708), GPR_U32(ctx, 3));
label_204194:
    // 0x204194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204198:
    // 0x204198: 0x3e00008  jr          $ra
    ctx->pc = 0x204198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20419Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204198u;
            // 0x20419c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2041A0u;
    ctx->pc = 0x2041a0u;
}
